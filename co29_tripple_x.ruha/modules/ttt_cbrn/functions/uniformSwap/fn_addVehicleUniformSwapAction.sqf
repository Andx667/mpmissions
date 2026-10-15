/*
    Function: ttt_cbrn_fnc_addVehicleUniformSwapAction

    Description:
        Adds an ACE interaction-menu action to a vehicle (either one specific
        object, or every vehicle of a given class) that lets a nearby unit
        change into a different uniform/vest set while keeping their current
        inventory content. Uses ttt_cbrn_fnc_swapUniformVest to perform the actual
        swap.

        This function must run on every machine that should see the action
        (that is normal for ACE interaction registration):
          - For a single placed object, call it from that object's Init field
            (Init fields already run on every client, including JIP).
          - For a whole vehicle class, call it once from init.sqf (which runs
            on every machine at mission start/JIP) - see initServer.sqf /
            init.sqf for where this mission already does similar things.

    Parameters:
        0: _vehicle      <OBJECT|STRING> - vehicle object, OR vehicle classname to add the action to every vehicle of that class
        1: _uniformClass <STRING> - classname of the new uniform ("" = keep the current one)
        2: _vestClass    <STRING> - classname of the new vest ("" = keep the current one)
        3: _actionText   <STRING> - (optional) text shown in the interaction menu, default "ABC-Schutzanzug anziehen"
        4: _condition    <CODE>   - (optional) extra condition, params: [_vehicle, _unit], default {true}
        5: _revertText   <STRING> - (optional) text of the swap-back action, default "Kampfanzug anziehen"

    Only ACE engineers (ace_repair_fnc_isEngineer, i.e. ACE_isEngineer variable or the engineer unit
    trait, incl. ACE's repair-facility boost) can use the actions. Both run a 6 second ACE progress bar before the
    gear is actually changed; moving away from the vehicle or dying cancels it.

    A second action swaps the unit back to the uniform/vest it wore before the
    swap (ttt_cbrn_fnc_revertUniformVest). The two actions are mutually exclusive:
    "swap to" is hidden while swapped, "swap back" only shows after a swap.

    Returns:
        Nothing

    Examples:
        // One specific, already placed vehicle - put this in the vehicle's Init field:
        [this, "U_I_C_Soldier_Bandit_1_F", "V_TacVest_oli"] call ttt_cbrn_fnc_addVehicleUniformSwapAction;

        // Every vehicle of a class - call once from init.sqf:
        ["B_Truck_01_covered_F", "U_I_C_Soldier_Bandit_1_F", "V_TacVest_oli"] call ttt_cbrn_fnc_addVehicleUniformSwapAction;
*/

if !(isClass (configFile >> "CfgPatches" >> "ace_interact_menu")) exitWith {
    diag_log text "[ttt_cbrn_uniformSwap] addVehicleUniformSwapAction needs the ace_interact_menu addon.";
};

params [
    ["_vehicle", objNull, [objNull, ""]],
    ["_uniformClass", "", [""]],
    ["_vestClass", "", [""]],
    ["_actionText", "ABC-Schutzanzug anziehen", [""]],
    ["_condition", {true}, [{}]],
    ["_revertText", "Kampfanzug anziehen", [""]]
];

if (_uniformClass == "" && {_vestClass == ""}) exitWith {
    diag_log text "[ttt_cbrn_uniformSwap] addVehicleUniformSwapAction: needs a uniform or a vest classname.";
};

// Time in seconds between choosing an action and the gear actually changing
private _duration = 6;

// ACE calls these later, outside this scope, so local variables are not
// available inside them - everything needed is passed in via customParams.
private _fullCondition = {
    params ["_target", "_player", "_params"];
    _params params ["_uniformClass", "_vestClass", "_condition"];
    (alive _target) && {alive _player} && {[_player, 1] call ace_repair_fnc_isEngineer} && {isNil {_player getVariable "ttt_cbrn_uniformSwap_original"}} && {[_target, _player] call _condition}
};

private _fullStatement = {
    params ["_target", "_player", "_params"];
    _params params ["_uniformClass", "_vestClass", "_condition", "_actionText", "_duration"];
    [
        _duration,
        [_player, _target, _uniformClass, _vestClass],
        {
            (_this select 0) params ["_player", "_target", "_uniformClass", "_vestClass"];
            [_player, _uniformClass, _vestClass] call ttt_cbrn_fnc_swapUniformVest;
        },
        {},
        _actionText,
        {
            (_this select 0) params ["_player", "_target"];
            alive _player && {alive _target} && {_player distance _target < 6}
        }
    ] call ace_common_fnc_progressBar;
};

// Guaranteed-unique action id, needed so repeated calls never overwrite each other
private _uid = missionNamespace getVariable ["ttt_cbrn_uniformSwap_actionCounter", 0];
missionNamespace setVariable ["ttt_cbrn_uniformSwap_actionCounter", _uid + 1];

// "Swap back" is only offered after a swap (the original outfit is stored on the unit by ttt_cbrn_fnc_swapUniformVest).
private _revertCondition = {
    params ["_target", "_player", "_params"];
    !isNil {_player getVariable "ttt_cbrn_uniformSwap_original"} && {alive _target} && {alive _player} && {[_player, 1] call ace_repair_fnc_isEngineer}
};

private _revertStatement = {
    params ["_target", "_player", "_params"];
    _params params ["_revertText", "_duration"];
    [
        _duration,
        [_player, _target],
        {
            (_this select 0) params ["_player"];
            [_player] call ttt_cbrn_fnc_revertUniformVest;
        },
        {},
        _revertText,
        {
            (_this select 0) params ["_player", "_target"];
            alive _player && {alive _target} && {_player distance _target < 6}
        }
    ] call ace_common_fnc_progressBar;
};

private _action = [
    format ["ttt_cbrn_uniformSwap_%1", _uid],
    _actionText,
    "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\uniform_ca.paa",
    _fullStatement,
    _fullCondition,
    {},
    [_uniformClass, _vestClass, _condition, _actionText, _duration]
] call ace_interact_menu_fnc_createAction;

private _revertAction = [
    format ["ttt_cbrn_uniformSwap_%1_revert", _uid],
    _revertText,
    "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\uniform_ca.paa",
    _revertStatement,
    _revertCondition,
    {},
    [_revertText, _duration]
] call ace_interact_menu_fnc_createAction;

{
    if (_vehicle isEqualType "") then {
        [_vehicle, 0, ["ACE_MainActions"], _x, true] call ace_interact_menu_fnc_addActionToClass;
    } else {
        [_vehicle, 0, ["ACE_MainActions"], _x] call ace_interact_menu_fnc_addActionToObject;
    };
} forEach [_action, _revertAction];
