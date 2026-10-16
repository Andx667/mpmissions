#include "component.hpp"

params ["_loadoutHash", "_loadoutTarget"];

if (typeName _loadoutHash != "ARRAY") then {
    throw "loadoutHash is not of type array (and thus, no cba hash) :(("
};

private _unitLoadout = [
  [], [], [], // weapons
  [], [], [], // containers
  "", "", // helm, goggles
  [], // binos (weap4)
  ["", "", "", "", "", "" ] // assignedItems
];

private _resetLoadout = [(missionConfigFile >> "Loadouts"), "resetLoadout", 0] call BIS_fnc_returnConfigEntry;
if (_resetLoadout == 0) then {
    _unitLoadout = getUnitLoadout _loadoutTarget;
};
if (count _unitLoadout == 0) exitWith {};

_unitLoadout = [_loadoutHash, _unitLoadout] call FUNC(HashToUnitLoadout);

if (_loadoutTarget == player) then {
    INFO_1("player loadout: %1", _unitLoadout);
};

_loadoutTarget setVariable [QGVAR(applicationCount), (_loadoutTarget getVariable [QGVAR(applicationCount), 0]) + 1, true];
_loadoutTarget setVariable [QGVAR(lastLoadoutApplicationTime), CBA_missionTime, true];

[_loadoutTarget, [_unitLoadout, true]] remoteExec ["setUnitLoadout", _loadoutTarget, false];

// KJW's Two Primary Weapons: a loadout without any secondPrimaryWeapon* entry only keeps the current one if resetLoadout is off
if ("KJW_TwoPrimaryWeapons" call CBA_fnc_isModLoaded) then {
    private _secondPrimaryKeys = [ // order of a weaponsItems entry
        "secondPrimaryWeapon",
        "secondPrimaryWeaponMuzzle",
        "secondPrimaryWeaponPointer",
        "secondPrimaryWeaponOptics",
        "secondPrimaryWeaponMagazine",
        "secondPrimaryWeaponUnderbarrelMagazine",
        "secondPrimaryWeaponUnderbarrel"
    ];
    if (_resetLoadout != 0 || {_secondPrimaryKeys findIf {[_loadoutHash, _x] call CBA_fnc_hashHasKey} > -1}) then {
        private _weaponInfo = _secondPrimaryKeys apply {
            private _value = [_loadoutHash, _x] call CBA_fnc_hashGet;
            if (isNil "_value" || {!(_value isEqualType "")}) then {""} else {_value}
        };

        if ((_weaponInfo select 0) == "") then {
            _weaponInfo = [];
        } else {
            {
                private _magazine = _weaponInfo select _x;
                _weaponInfo set [_x, if (_magazine == "") then {[]} else {[_magazine, getNumber (configFile >> "CfgMagazines" >> _magazine >> "count")]}];
            } forEach [4, 5];
        };

        [_loadoutTarget, _weaponInfo] remoteExec [QFUNC(applySecondPrimaryWeapon), _loadoutTarget, false];
    };
};

[QGVAR(loadoutApplied), [_loadoutTarget, _unitLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
