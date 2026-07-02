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
player addWeapon "CUP_arifle_HK416_AGL_Black";
player addPrimaryWeaponItem "ACE_DBAL_A3_Red";
player addPrimaryWeaponItem "CUP_optic_CompM4";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_PMAG_BLACK";
player addPrimaryWeaponItem "CUP_1Rnd_HE_M203";
player addWeapon "CUP_hgun_Glock17";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "NOR_Combat_Uniform";
player addVest "CFP_RAV_operator_OGA";
player addBackpack "NOR_Predator_Backpack";

comment "Add binoculars";
player addWeapon "Binocular";

comment "Add items to containers";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "kat_Painkiller";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "CUP_17Rnd_9x19_glock17";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "ACRE_PRC152";
for "_i" from 1 to 3 do {player addItemToVest "Chemlight_red";};
for "_i" from 1 to 8 do {player addItemToVest "CUP_30Rnd_556x45_PMAG_BLACK";};
for "_i" from 1 to 8 do {player addItemToVest "CUP_1Rnd_HE_M203";};
player addItemToVest "ACE_DefusalKit";
player addItemToVest "ACE_Clacker";
for "_i" from 1 to 12 do {player addItemToBackpack "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 5 do {player addItemToBackpack "CUP_1Rnd_SmokeRed_M203";};
for "_i" from 1 to 5 do {player addItemToBackpack "CUP_1Rnd_Smoke_M203";};
player addItemToBackpack "ACE_EntrenchingTool";
for "_i" from 1 to 8 do {player addItemToBackpack "CUP_6Rnd_12Gauge_Pellets_No00_Buck";};
for "_i" from 1 to 3 do {player addItemToBackpack "tsp_breach_block_mag";};
for "_i" from 1 to 3 do {player addItemToBackpack "tsp_breach_package_mag";};

player addHeadgear "NOR_Opscore";
player addGoggles "CUP_G_ESS_KHK_Scarf_Tan_GPS_Beard_Blonde";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
