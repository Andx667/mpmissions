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
player addWeapon "CUP_arifle_M16A4_Grip";
player addPrimaryWeaponItem "CUP_optic_ACOG2";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag";
player addWeapon "ACE_VMH3";

comment "Add containers";
player forceAddUniform "CUP_U_B_USMC_FROG1_WMARPAT";
player addVest "CUP_V_B_Eagle_SPC_Rifleman";
player addBackpack "CUP_B_USMC_MOLLE";

comment "Add binoculars";

comment "Add items to containers";
player addItemToUniform "ACRE_PRC343";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
for "_i" from 1 to 15 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 15 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "kat_chestSeal";};
player addItemToUniform "kat_guedel";
player addItemToUniform "kat_Painkiller";
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellGreen";
for "_i" from 1 to 8 do {player addItemToVest "CUP_30Rnd_556x45_Stanag";};
player addItemToVest "ACE_DefusalKit";
player addItemToVest "ACE_Clacker";
for "_i" from 1 to 4 do {player addItemToVest "ACE_M84";};
for "_i" from 1 to 3 do {player addItemToBackpack "DemoCharge_Remote_Mag";};
player addItemToBackpack "SatchelCharge_Remote_Mag";
for "_i" from 1 to 3 do {player addItemToBackpack "tsp_breach_block_mag";};
for "_i" from 1 to 3 do {player addItemToBackpack "tsp_breach_package_mag";};
player addItemToBackpack "ACE_wirecutter";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "mts_cutter_folding_saw";
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_M14";};

player addHeadgear "CUP_H_LWHv2_MARPAT";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
