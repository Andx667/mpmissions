/*
    Function: MB_fnc_addVehicleUniformSwapAction

    Description:
        Adds an ACE interaction-menu action to a vehicle (either one specific
        object, or every vehicle of a given class) that lets a nearby unit
        change into a different uniform/vest set while keeping their current
        inventory content. Uses MB_fnc_swapUniformVest to perform the actual
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
        1: _uniformClass <STRING> - classname of the new uniform   <<< PLACEHOLDER, CHANGE ME >>>
        2: _vestClass    <STRING> - classname of the new vest      <<< PLACEHOLDER, CHANGE ME >>>
        3: _actionText   <STRING> - (optional) text shown in the interaction menu, default "Kleidung wechseln"
        4: _condition    <CODE>   - (optional) extra condition, params: [_vehicle, _unit], default {true}

    Returns:
        Nothing

    Examples:
        // One specific, already placed vehicle - put this in the vehicle's Init field:
        [this, "U_I_C_Soldier_Bandit_1_F", "V_TacVest_oli"] call MB_fnc_addVehicleUniformSwapAction;

        // Every vehicle of a class - call once from init.sqf:
        ["B_Truck_01_covered_F", "U_I_C_Soldier_Bandit_1_F", "V_TacVest_oli"] call MB_fnc_addVehicleUniformSwapAction;
*/

if !(isClass (configFile >> "CfgPatches" >> "ace_interact_menu")) exitWith {
    diag_log text "[MB_uniformSwap] addVehicleUniformSwapAction needs the ace_interact_menu addon.";
};

params [
    ["_vehicle", objNull, [objNull, ""]],
    ["_uniformClass", "", [""]],
    ["_vestClass", "", [""]],
    ["_actionText", "Kleidung wechseln", [""]],
    ["_condition", {true}, [{}]]
];

if (_uniformClass == "" || {_vestClass == ""}) exitWith {
    diag_log text "[MB_uniformSwap] addVehicleUniformSwapAction: missing uniform/vest classname.";
};

// ACE calls these later, outside this scope, so local variables are not
// available inside them - everything needed is passed in via customParams.
private _fullCondition = {
    params ["_target", "_player", "_params"];
    _params params ["_uniformClass", "_vestClass", "_condition"];
    (alive _target) && {alive _player} && {[_target, _player] call _condition}
};

private _fullStatement = {
    params ["_target", "_player", "_params"];
    _params params ["_uniformClass", "_vestClass"];
    [_player, _uniformClass, _vestClass] call MB_fnc_swapUniformVest;
};

// Guaranteed-unique action id, needed so repeated calls never overwrite each other
private _uid = missionNamespace getVariable ["MB_uniformSwap_actionCounter", 0];
missionNamespace setVariable ["MB_uniformSwap_actionCounter", _uid + 1];

private _action = [
    format ["MB_uniformSwap_%1", _uid],
    _actionText,
    "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\uniform_ca.paa",
    _fullStatement,
    _fullCondition,
    {},
    [_uniformClass, _vestClass, _condition]
] call ace_interact_menu_fnc_createAction;

if (_vehicle isEqualType "") then {
    [_vehicle, 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
} else {
    [_vehicle, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
};
