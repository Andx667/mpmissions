#include "..\script_component.hpp"
/*
 * Author: [W] Peer
 * Call to add Scroll Wheel Menu Entries to apply every Loadoutclass fitting one of two Conditions:
 * 1. The Config is defined for a class thats of the same side as the player ( filter for TVT Missions and to sort out AI Loadouts)
 * 2. The Config has a isplayerloadout configvalue set to true. This is to include Classes, that cant be sorted into a given side.
 *
 * A custom Name for the Loadoutclass can be defined using the roledescription configvalue.
 * Example for Config Values:
 *
 * roledescription = "Commander";
 * isplayerloadout = true;
 *
 * Arguments:
 *  NONE
 *
 * Return Value:
 *  NONE
 *
 * Public: No
 */

private _isDev = ((getNumber (missionConfigFile >> "WTEMPLATE_SYSTEM_ISDEV")) == 1);
if (!(hasInterface) || (((["system_ltm", 0] call BIS_fnc_getParamValue) == 0) && isMultiplayer) || (!(isMultiplayer) && !_isDev)) exitWith {};

private _condition = {
    private _sidestring = switch (side ace_player) do {
        case west: { "B_" };
        case east: { "O_" };
        case independent: { "I_" };
        case civilian: { "C_" };
        default { "" };
    };

    ((_sidestring in (configName _X)) ||
    (getNumber (missionConfigFile >> "CfgLoadouts">> (configName _X) >> "isplayerloadout") == 1))
};

{
    private _class = configName _X;
    private _classdescription = getText (missionConfigFile >> "CfgLoadouts">> _class >> "roledescription");
    if (_classdescription == "") then {
        _classdescription = _class;
    };

    private _title = format ["Apply Loadout: %1", str _classdescription];
    private _expression = format ["[ace_player, %1] call Poppy_fnc_applyLoadout;", str _class];
    ace_player addAction [_title,_expression];
} forEach ((toString _condition) configClasses (missionConfigFile >> "CfgLoadouts"));