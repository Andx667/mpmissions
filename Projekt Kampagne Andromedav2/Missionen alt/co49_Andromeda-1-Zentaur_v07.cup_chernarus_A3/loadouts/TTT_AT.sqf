params ["_unit", "_helm", "_tarn", "_farbe"];

_unit setRank "PRIVATE";

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
_unit addPrimaryWeaponItem "bwa3_acc_varioray_irlaser_black";
_unit addPrimaryWeaponItem "optic_Hamr";
_unit addPrimaryWeaponItem "rhs_mag_30Rnd_556x45_M855A1_PMAG";

_unit addWeapon "rhs_weap_maaws";
_unit addSecondaryWeaponItem "rhs_optic_maaws";
_unit addSecondaryWeaponItem "rhs_mag_maaws_HEDP";

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

_unit addBackpack "B_AssaultPack_cbr";

comment "Add binoculars";
_unit addWeapon "Binocular";

comment "Add items to containers";
for "_i" from 1 to 10 do {_unit addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {_unit addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 3 do {_unit addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 2 do {_unit addItemToUniform "ACE_CableTie";};
_unit addItemToUniform "ACE_Flashlight_XL50";
_unit addItemToUniform "ACE_MapTools";
for "_i" from 1 to 8 do {_unit addItemToUniform "V1_ItemPainkiller";};
for "_i" from 1 to 2 do {_unit addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 2 do {_unit addItemToUniform "16Rnd_9x21_Mag";};
_unit addItemToUniform "ACRE_PRC343";
_unit addItemToUniform "acex_intelitems_notepad";
_unit addItemToUniform "ItemMicroDAGR";

for "_i" from 1 to 2 do {_unit addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {_unit addItemToVest "SmokeShell";};
_unit addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {_unit addItemToVest "ACE_M84";};
for "_i" from 1 to 8 do {_unit addItemToVest "rhs_mag_30Rnd_556x45_M855A1_PMAG";};

_unit addItemToBackpack (["TTT_Helmet", _helm, _tarn] joinString "_");

_unit addItemToBackpack "rhs_mag_maaws_HEAT";

_unit addHeadgear (["TTT_Beret", _farbe] joinString "_");
_unit addGoggles selectRandom ["", "", "UK3CB_G_Neck_Shemag_Tan", "PBW_shemagh_beige", "PBW_shemagh_gruen", "rhsusf_shemagh_grn", "rhsusf_shemagh_od", "rhsusf_shemagh_tan"];

comment "Add items";
_unit linkItem "ItemMap";
_unit linkItem "ItemCompass";
_unit linkItem "ItemWatch";

_unit setVariable ["ace_medical_medicClass", 0, true];
_unit setVariable ["ACE_isEOD", false, true];
_unit setVariable ["ACE_isEngineer", 0, true];

[ACE_player, currentWeapon ACE_player, currentMuzzle ACE_player] call ace_safemode_fnc_lockSafety;