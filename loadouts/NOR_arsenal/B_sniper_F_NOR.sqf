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
player addWeapon "CUP_srifle_AWM_wdl";
player addPrimaryWeaponItem "CUP_optic_LeupoldMk4_25x50_LRT";
player addPrimaryWeaponItem "CUP_bipod_Harris_1A2_L_BLK";
player addPrimaryWeaponItem "CUP_5Rnd_86x70_L115A1";
player addWeapon "CUP_hgun_Glock17";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "NOR_Combat_Uniform";
player addVest "V_HarnessO_brn";
player addBackpack "B_AssaultPack_cbr";

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
player addItemToVest "ACE_Kestrel4500";
player addItemToVest "ACE_ATragMX";
player addItemToVest "ACE_Rangecard";
for "_i" from 1 to 5 do {player addItemToVest "CUP_5Rnd_86x70_L115A1";};
player addItemToVest "ACE_microDAGR";
player addItemToBackpack "ACE_Tripod";
for "_i" from 1 to 5 do {player addItemToBackpack "CUP_5Rnd_86x70_L115A1";};
player addItemToBackpack "ClaymoreDirectionalMine_Remote_Mag";
player addItemToBackpack "ACE_Clacker";
player addItemToBackpack "ACE_DefusalKit";

player addHeadgear "NOR_Opscore_SF";
player addGoggles "CUP_G_Oakleys_Clr";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
