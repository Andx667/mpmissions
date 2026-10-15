/*
    Function: ttt_cbrn_fnc_initDeconShower (postInit)

    Description:
        Decon shower that can be built up from / taken down into a vehicle.
        Shower on/off (particles, sound, water) is ported from diwako_cbrn
        (fn_toggleShower, fn_setUpDeconShower); standing in the running shower
        clears KAT chemical contamination like a decon kit.
        Settings: config.sqf.

        Called by ttt_cbrn_fnc_init. Server: shower state and water timer, client: actions and effects.
*/

// Water timer and on/off state live on the server, so they do not depend on the client that pressed the button
if (isServer) then {
    ["ttt_cbrn_deconShower_requestOn", {
        params ["_shower"];

        if (isNull _shower || {_shower getVariable ["ttt_cbrn_deconShower_on", false]}) exitWith {};

        private _remainingWater = _shower getVariable ["ttt_cbrn_deconShower_water", ttt_cbrn_deconShower_waterTime];
        if (_remainingWater <= 0) exitWith {};

        _shower setVariable ["ttt_cbrn_deconShower_startTime", CBA_missionTime, true];
        _shower setVariable ["ttt_cbrn_deconShower_on", true, true];
        ["ttt_cbrn_deconShower_turnOn", [_shower]] call CBA_fnc_globalEvent;

        // runs dry after the remaining water time unless it is switched off before
        [{!(_this getVariable ["ttt_cbrn_deconShower_on", false])}, {}, _shower, _remainingWater, {
            if (isNull _this) exitWith {};
            _this setVariable ["ttt_cbrn_deconShower_water", 0, true];
            _this setVariable ["ttt_cbrn_deconShower_on", false, true];
            ["ttt_cbrn_deconShower_turnOff", [_this]] call CBA_fnc_globalEvent;
        }] call CBA_fnc_waitUntilAndExecute;
    }] call CBA_fnc_addEventHandler;

    ["ttt_cbrn_deconShower_requestOff", {
        params ["_shower"];

        if (isNull _shower || {!(_shower getVariable ["ttt_cbrn_deconShower_on", false])}) exitWith {};

        private _diff = CBA_missionTime - (_shower getVariable ["ttt_cbrn_deconShower_startTime", CBA_missionTime]);
        private _water = ((_shower getVariable ["ttt_cbrn_deconShower_water", ttt_cbrn_deconShower_waterTime]) - _diff) max 0;
        _shower setVariable ["ttt_cbrn_deconShower_water", _water, true];
        _shower setVariable ["ttt_cbrn_deconShower_on", false, true];
        ["ttt_cbrn_deconShower_turnOff", [_shower]] call CBA_fnc_globalEvent;
    }] call CBA_fnc_addEventHandler;
};

if (!hasInterface) exitWith {};

["ttt_cbrn_deconShower_turnOn", {
    params ["_shower"];
    [_shower, true] call ttt_cbrn_fnc_deconShowerToggle;
}] call CBA_fnc_addEventHandler;

["ttt_cbrn_deconShower_turnOff", {
    params ["_shower"];
    [_shower, false] call ttt_cbrn_fnc_deconShowerToggle;
}] call CBA_fnc_addEventHandler;

// Late joiners missed the turn on event: show the showers that are running already
if (didJIP) then {
    [{CBA_missionTime > 3 && {!isNull ace_player}}, {
        {
            if (_x getVariable ["ttt_cbrn_deconShower_on", false]) then {
                [_x, true] call ttt_cbrn_fnc_deconShowerToggle;
            };
        } forEach allMissionObjects ttt_cbrn_deconShower_class;
    }] call CBA_fnc_waitUntilAndExecute;
};

// Actions go on the classes, as the shower is spawned at runtime
private _build = ["ttt_cbrn_deconShower_build", "Baue Dekon-Dusche auf", "",
    ttt_cbrn_fnc_deconShowerBuildStart, ttt_cbrn_fnc_deconShowerCanBuild
] call ace_interact_menu_fnc_createAction;
{
    [_x, 0, ["ACE_MainActions"], _build] call ace_interact_menu_fnc_addActionToClass;
} forEach ttt_cbrn_deconShower_vehicles;

private _deconstruct = ["ttt_cbrn_deconShower_deconstruct", "Baue Dekon-Dusche ab", "",
    ttt_cbrn_fnc_deconShowerDeconstructStart, ttt_cbrn_fnc_deconShowerCanDeconstruct
] call ace_interact_menu_fnc_createAction;
[ttt_cbrn_deconShower_class, 0, ["ACE_MainActions"], _deconstruct] call ace_interact_menu_fnc_addActionToClass;

private _on = ["ttt_cbrn_deconShower_on", "Dusche anschalten", "", {
    ["ttt_cbrn_deconShower_requestOn", [_target]] call CBA_fnc_serverEvent;
}, {
    !(_target getVariable ["ttt_cbrn_deconShower_on", false])
    && {(_target getVariable ["ttt_cbrn_deconShower_water", ttt_cbrn_deconShower_waterTime]) > 0}
}, {}, [], [0, 0, 0], 5] call ace_interact_menu_fnc_createAction;
[ttt_cbrn_deconShower_class, 0, ["ACE_MainActions"], _on] call ace_interact_menu_fnc_addActionToClass;

private _off = ["ttt_cbrn_deconShower_off", "Dusche ausschalten", "", {
    ["ttt_cbrn_deconShower_requestOff", [_target]] call CBA_fnc_serverEvent;
}, {
    _target getVariable ["ttt_cbrn_deconShower_on", false]
}, {}, [], [0, 0, 0], 5] call ace_interact_menu_fnc_createAction;
[ttt_cbrn_deconShower_class, 0, ["ACE_MainActions"], _off] call ace_interact_menu_fnc_addActionToClass;
