#include "component.hpp"

params [
    ["_obj", objNull, [objNull, []]],
    ["_entries", []],
    ["_displayName", "Change loadout"],
    ["_condition", {true}],
    ["_actionPath", ["ACE_MainActions"]],
    ["_ranks", []]
];

// several objects: add the same menu to each of them
if (_obj isEqualType []) exitWith {
    if (_obj isEqualTo []) exitWith {
        ERROR("addLoadoutSwitchMenu needs at least one object.");
    };
    {
        [_x, _entries, _displayName, _condition, _actionPath, _ranks] call FUNC(addLoadoutSwitchMenu);
    } forEach _obj;
};

// no entries: offer every class defined in Loadouts >> Type
if (_entries isEqualTo []) then {
    private _typeCfg = missionConfigFile >> "Loadouts" >> "Type";
    _entries = (configProperties [_typeCfg, "isClass _x", false]) apply {configName _x};
};

if (isNull _obj || {_entries isEqualTo []}) exitWith {
    ERROR("addLoadoutSwitchMenu needs an object and at least one unit classname.");
};

if !(isClass (configfile >> "CfgPatches" >> "ace_interact_menu")) exitWith {
    ERROR("addLoadoutSwitchMenu needs ace_interact_menu addon.");
};

private _icon = "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\uniform_ca.paa";
private _statement = {
    params ["_target", "_player", "_params"];
    _params params ["_type", "_rank"];
    [_player, _type, _rank] call FUNC(doLoadoutForUnit);
};

private _parentId = format [QGVAR(switchMenu_%1), _displayName];
private _parent = [_parentId, _displayName, _icon, {}, _condition] call ace_interact_menu_fnc_createAction;
[_obj, 0, _actionPath, _parent] call ace_interact_menu_fnc_addActionToObject;
private _parentPath = _actionPath + [_parentId];

{
    // entry is either "classname" or ["classname", [ranks]]
    // without explicit ranks, use the Rank classes defined for the class in the loadout config
    _x params ["_type", ["_classRanks", []]];
    if (_classRanks isEqualTo []) then {
        _classRanks = _ranks;
    };
    if (_classRanks isEqualTo []) then {
        private _rankCfg = missionConfigFile >> "Loadouts" >> "Type" >> _type >> "Rank";
        _classRanks = (configProperties [_rankCfg, "isClass _x", true]) apply {configName _x};
    };

    private _typeName = getText (configFile >> "CfgVehicles" >> _type >> "displayName");
    if (_typeName == "") then {_typeName = _type};

    private _typeId = format [QGVAR(switchMenu_%1_%2), _parentId, _type];
    // with ranks the class action is a submenu, otherwise it applies directly
    private _typeAction = if (_classRanks isEqualTo []) then {
        [_typeId, _typeName, _icon, _statement, {true}, {}, [_type, ""]] call ace_interact_menu_fnc_createAction
    } else {
        [_typeId, _typeName, _icon, {}, {true}] call ace_interact_menu_fnc_createAction
    };
    [_obj, 0, _parentPath, _typeAction] call ace_interact_menu_fnc_addActionToObject;

    {
        private _rankAction = [
            format ["%1_%2", _typeId, _x],
            (toUpper (_x select [0, 1])) + (toLower (_x select [1])),
            _icon,
            _statement,
            {true},
            {},
            [_type, _x]
        ] call ace_interact_menu_fnc_createAction;
        [_obj, 0, _parentPath + [_typeId], _rankAction] call ace_interact_menu_fnc_addActionToObject;
    } forEach _classRanks;
} forEach _entries;
