#include "component.hpp"

params [["_obj", objNull], ["_type", ""], ["_displayName", ""], ["_condition", {true}], ["_actionPath", ["ACE_MainActions"]]];

if (isNull _obj || {_type == ""}) exitWith {
    ERROR("addLoadoutSwitchInteraction needs an object and a unit classname.");
};

if !(isClass (configfile >> "CfgPatches" >> "ace_interact_menu")) exitWith {
    ERROR("addLoadoutSwitchInteraction needs ace_interact_menu addon.");
};

if (_displayName == "") then {
    _displayName = getText (configFile >> "CfgVehicles" >> _type >> "displayName");
    if (_displayName == "") then {_displayName = _type};
    _displayName = format ["Take loadout: %1", _displayName];
};

private _action = [
    format [QGVAR(switchLoadout_%1), _type],
    _displayName,
    "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\uniform_ca.paa",
    {
        params ["_target", "_player", "_params"];
        _params params ["_type"];
        [_player, _type] call FUNC(doLoadoutForUnit);
    },
    _condition,
    {},
    [_type]
] call ace_interact_menu_fnc_createAction;
[_obj, 0, _actionPath, _action] call ace_interact_menu_fnc_addActionToObject;
