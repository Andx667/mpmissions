params ["_unit", "_helm", "_tarn", "_farbe"];

_unit setRank "SERGEANT";

comment "Exported from Arsenal by Andx";

comment "[!] UNIT MUST BE LOCAL [!]";
if (!local _unit) exitWith {};

comment "Remove existing items";
removeAllWeapons _unit;
removeAllItems _unit;
removeAllAssignedItems _unit;
removeUniform _unit;
removeVest _unit;
removeBackpack _unit;
removeHeadgear _unit;
removeGoggles _unit;

comment "Add weapons";
_unit addWeapon "arifle_SPAR_01_blk_F";
_unit addPrimaryWeaponItem "ACE_DBAL_A3_Green";
_unit addPrimaryWeaponItem "optic_Hamr";
_unit addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red";
_unit addWeapon "hgun_P07_blk_F";
_unit addHandgunItem "16Rnd_9x21_Mag";

comment "Add containers";
if (_farbe == "platinum") then {
	_farbe = "green";
};
_unit forceAddUniform (["TTT_Uniform", _farbe, _tarn] joinString "_");

if (_farbe == "silver" || _farbe == "white" || _farbe == "bronze" || _farbe == "platinum") then {
	_unit addVest (["TTT_Vest_Heavy", "green", "US_Desert"] joinString "_");
} else {
	_unit addVest (["TTT_Vest_Heavy", _farbe, "US_Desert"] joinString "_");
};

if (_farbe == "brown" || _farbe == "yellow" || _farbe == "gold" || _farbe == "grey" || _farbe == "green" || _farbe == "silver" || _farbe == "white") then {
	_unit addBackpack (["TTT_backpack_radio", _farbe, "US_Desert"] joinString "_");
} else {
	_unit addBackpack "ttt_backpack_radio_coyote";
};

comment "Add binoculars";
_unit addWeapon "Rangefinder";

comment "Add items to containers";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_quikClot";};
for "_i" from 1 to 2 do {player addItemToUniform "kat_chestSeal";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 2 do {_unit addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 2 do {_unit addItemToUniform "kat_Painkiller";};
_unit addItemToUniform "ACE_Flashlight_XL50";
_unit addItemToUniform "ACE_MapTools";
_unit addItemToUniform "ACRE_PRC152";
for "_i" from 1 to 2 do {_unit addItemToUniform "16Rnd_9x21_Mag";};
_unit addItemToUniform "acex_intelitems_notepad";

_unit addItemToVest "ACRE_PRC152";
for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShellGreen";};
for "_i" from 1 to 2 do {_unit addItemToVest "ACE_M84";};
for "_i" from 1 to 8 do {_unit addItemToVest "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red";};

_unit addItemToBackpack (["TTT_Helmet", _helm, _tarn] joinString "_");
_unit addItemToBackpack "ACRE_PRC117F";
_unit addItemToBackpack "ACE_SpraypaintGreen";
_unit addItemToBackpack "ACE_SpraypaintRed";
_unit addItemToBackpack "ACE_SpraypaintBlack";
_unit addItemToBackpack "ace_flags_blue";
_unit addItemToBackpack "ace_flags_green";
_unit addItemToBackpack "ace_flags_red";

_unit addHeadgear (["TTT_Beret", _farbe] joinString "_");
_unit addGoggles "rhsusf_shemagh_tan";

comment "Add items";
_unit linkItem "ItemMap";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";
_unit linkItem "ItemAndroid";

_unit setVariable ["ace_medical_medicClass", 0, true];
_unit setVariable ["ACE_isEOD", false, true];
_unit setVariable ["ACE_isEngineer", 0, true];

[ACE_player, currentWeapon ACE_player, currentMuzzle ACE_player] call ace_safemode_fnc_lockSafety;
