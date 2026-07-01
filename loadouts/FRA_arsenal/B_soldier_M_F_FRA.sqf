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
player addWeapon "CUP_arifle_Mk20";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "CUP_optic_SB_11_4x20_PM_od";
player addPrimaryWeaponItem "CUP_bipod_Harris_1A2_L_BLK";
player addPrimaryWeaponItem "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl";
player addWeapon "CUP_hgun_Glock17_blk";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "CUP_U_B_HIL_ACU_CCE";
player addVest "CUP_V_PMC_CIRAS_OD_Patrol";
player addBackpack "CUP_B_TacticalPack_CCE";

comment "Add binoculars";
player addWeapon "ACE_Yardage450";

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
for "_i" from 1 to 7 do {player addItemToVest "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl";};
player addItemToVest "ACE_Rangecard";
for "_i" from 1 to 8 do {player addItemToBackpack "CUP_20Rnd_762x51_B_SCAR_bkl";};

player addHeadgear "CUP_H_HIL_HelmetACH_GCovered_Headset_CCE";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
