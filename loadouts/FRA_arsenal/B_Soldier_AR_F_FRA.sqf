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
player addWeapon "LMG_03_F";
player addPrimaryWeaponItem "CUP_optic_Elcan_SpecterDR_KF_black";
player addPrimaryWeaponItem "CUP_bipod_Harris_1A2_L_BLK";
player addPrimaryWeaponItem "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";
player addWeapon "CUP_hgun_Glock17_blk";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "CUP_U_B_HIL_ACU_CCE";
player addVest "CFP_FAPC_MG_OGA_OD";
player addBackpack "CUP_B_TacticalPack_CCE";

comment "Add binoculars";
player addWeapon "Binocular";

comment "Add items to containers";
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_Painkillers";
for "_i" from 1 to 15 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 15 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "CUP_17Rnd_9x19_glock17";
for "_i" from 1 to 2 do {player addItemToVest "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";};
for "_i" from 1 to 2 do {player addItemToBackpack "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";};

player addHeadgear "CUP_H_HIL_HelmetACH_GCovered_Headset_CCE";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
