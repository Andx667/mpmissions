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
player addWeapon "CUP_arifle_HK416_Black";
player addPrimaryWeaponItem "ACE_DBAL_A3_Red";
player addPrimaryWeaponItem "CUP_optic_Elcan_SpecterDR_KF_RMR";
player addPrimaryWeaponItem "CUP_muzzle_snds_G36_black";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_PMAG_BLACK";
player addWeapon "CUP_hgun_Glock17";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "NOR_Gorka_Grey_Uniform";
player addVest "CFP_LBT6094_operator_OGA";
player addBackpack "CFP_Kitbag_Drab";

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
player addItemToVest "ACE_mircodagr";
for "_i" from 1 to 8 do {player addItemToVest "CUP_30Rnd_556x45_PMAG_BLACK";};
player addItemToVest "ACE_Defusalkit";
player addItemToVest "ACE_Clacker";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "mts_cutter_folding_saw";
player addItemToBackpack "ACE_wirecutter";
for "_i" from 1 to 3 do {player addItemToBackpack "DemoCharge_Remote_Mag";};
player addItemToBackpack "ACE_VMH3";

player addHeadgear "CUP_H_PMC_Beanie_Headphones_Black";
player addGoggles "CUP_G_Oakleys_Clr";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
