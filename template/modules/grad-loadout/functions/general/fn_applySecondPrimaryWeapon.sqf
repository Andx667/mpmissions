#include "component.hpp"

// runs where _unit is local. KJW's Two Primary Weapons only handles the local player, AI are skipped.
// _weaponInfo is a weaponsItems entry, [] removes the second primary weapon.
params [["_unit", objNull], ["_weaponInfo", []]];

if (isNull _unit || {_unit != player}) exitWith {};

// setUnitLoadout just put the loadout's primary weapon into the hands, so the stored one is the second primary
_unit setVariable ["KJW_TwoPrimaryWeapons_secondPrimaryEquipped", false, true];
_unit setVariable ["KJW_TwoPrimaryWeapons_primaryPrimaryInfo", [], true];

[_weaponInfo] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;
