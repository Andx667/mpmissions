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
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "CUP_optic_MicroT1_OD";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_Emag";
player addWeapon "CUP_hgun_Glock17_blk";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "CUP_U_B_HIL_ACU_CCE";
player addVest "CUP_V_PMC_CIRAS_OD_Patrol";
player addBackpack "ttt_backpack_radio_coyote";

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
for "_i" from 1 to 8 do {player addItemToVest "CUP_30Rnd_556x45_Emag";};
player addItemToBackpack "ACRE_PRC117F";
for "_i" from 1 to 10 do {player addItemToBackpack "SmokeShellPurple";};
player addItemToBackpack "ACE_flags_blue";
player addItemToBackpack "ACE_flags_yellow";
player addItemToBackpack "ItemcTab";

player addHeadgear "CUP_H_HIL_HelmetACH_GCovered_Headset_CCE";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
