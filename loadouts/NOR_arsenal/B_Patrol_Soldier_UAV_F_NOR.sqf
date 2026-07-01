player setRank "PRIVATE";

comment "Exported from Arsenal by Andx";

comment "[!] UNIT MUST BE LOCAL [!]";
if (!local player) exitWith {};

comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add weapons";
player addWeapon "CUP_arifle_HK417_20";
player addPrimaryWeaponItem "ACE_DBAL_A3_Red";
player addPrimaryWeaponItem "CUP_optic_SB_11_4x20_PM";
player addPrimaryWeaponItem "CUP_muzzle_snds_socom762rc";
player addPrimaryWeaponItem "CUP_bipod_Harris_1A2_L_BLK";
player addPrimaryWeaponItem "CUP_20Rnd_762x51_HK417";
player addWeapon "CUP_hgun_Glock17";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "NOR_Combat_Uniform";
player addVest "CFP_RAV_operator_OGA";
player addBackpack "NOR_Predator_Backpack";

comment "Add binoculars";
player addWeapon "ACE_Vector";

comment "Add items to containers";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_Painkillers";
for "_i" from 1 to 15 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 15 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "CUP_17Rnd_9x19_glock17";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "ACRE_PRC152";
for "_i" from 1 to 3 do {player addItemToVest "Chemlight_red";};
for "_i" from 1 to 8 do {player addItemToVest "CUP_20Rnd_762x51_HK417";};
player addItemToVest "ACE_Rangecard";
player addItemToVest "ItemAndroid";
player addItemToVest "ACE_MicroDAGR";
player addItemToBackpack "ITC_Land_B_AR2i_Packed";
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_UAVBattery";};

player addHeadgear "NOR_Opscore";
player addGoggles "CUP_G_Oakleys_Clr";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "B_UavTerminal";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
