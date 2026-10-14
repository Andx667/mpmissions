/*
    Function: MB_fnc_deconShowerInit (postInit)

    Description:
        Decon shower that can be built up from / taken down into a vehicle.
        Shower on/off (particles, sound, water) is ported from diwako_cbrn
        (fn_toggleShower, fn_setUpDeconShower); standing in the running shower
        clears KAT chemical contamination like a decon kit.
        Settings: config.sqf.

        Client only, needs CBA and ACE.
*/

if (!hasInterface) exitWith {};

#include "..\config.sqf"

["MB_deconShower_turnOn", {
    params ["_shower"];
    [_shower, true] call MB_fnc_deconShowerToggle;
}] call CBA_fnc_addEventHandler;

["MB_deconShower_turnOff", {
    params ["_shower"];
    [_shower, false] call MB_fnc_deconShowerToggle;
}] call CBA_fnc_addEventHandler;

// Actions go on the classes, as the shower is spawned at runtime
private _build = ["MB_deconShower_build", "Baue Dekon-Dusche auf", "",
    MB_fnc_deconShowerBuildStart, MB_fnc_deconShowerCanBuild
] call ace_interact_menu_fnc_createAction;
{
    [_x, 0, ["ACE_MainActions"], _build] call ace_interact_menu_fnc_addActionToClass;
} forEach MB_deconShower_vehicles;

private _deconstruct = ["MB_deconShower_deconstruct", "Baue Dekon-Dusche ab", "",
    MB_fnc_deconShowerDeconstructStart, MB_fnc_deconShowerCanDeconstruct
] call ace_interact_menu_fnc_createAction;
[MB_deconShower_class, 0, ["ACE_MainActions"], _deconstruct] call ace_interact_menu_fnc_addActionToClass;

private _on = ["MB_deconShower_on", "Dusche anschalten", "", {
    ["MB_deconShower_turnOn", [_target]] call CBA_fnc_globalEvent;
    _target setVariable ["MB_deconShower_startTime", CBA_missionTime, true];
    _target setVariable ["MB_deconShower_on", true, true];
    private _remainingWater = _target getVariable ["MB_deconShower_water", MB_deconShower_waterTime];

    [{!(_this getVariable ["MB_deconShower_on", false])}, {}, _target, _remainingWater, {
        ["MB_deconShower_turnOff", [_this]] call CBA_fnc_globalEvent;
        _this setVariable ["MB_deconShower_water", 0, true];
        _this setVariable ["MB_deconShower_on", false, true];
    }] call CBA_fnc_waitUntilAndExecute;
}, {
    !(_target getVariable ["MB_deconShower_on", false])
    && {(_target getVariable ["MB_deconShower_water", MB_deconShower_waterTime]) > 0}
}, {}, [], [0, 0, 0], 5] call ace_interact_menu_fnc_createAction;
[MB_deconShower_class, 0, ["ACE_MainActions"], _on] call ace_interact_menu_fnc_addActionToClass;

private _off = ["MB_deconShower_off", "Dusche ausschalten", "", {
    ["MB_deconShower_turnOff", [_target]] call CBA_fnc_globalEvent;
    private _diff = CBA_missionTime - (_target getVariable ["MB_deconShower_startTime", CBA_missionTime]);
    private _water = ((_target getVariable ["MB_deconShower_water", MB_deconShower_waterTime]) - _diff) max 0;
    _target setVariable ["MB_deconShower_water", _water, true];
    _target setVariable ["MB_deconShower_on", false, true];
}, {
    _target getVariable ["MB_deconShower_on", false]
}, {}, [], [0, 0, 0], 5] call ace_interact_menu_fnc_createAction;
[MB_deconShower_class, 0, ["ACE_MainActions"], _off] call ace_interact_menu_fnc_addActionToClass;
