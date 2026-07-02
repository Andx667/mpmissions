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
player addWeapon "CUP_srifle_L129A1_HG";
player addPrimaryWeaponItem "CUP_acc_LLM";
player addPrimaryWeaponItem "CUP_optic_ACOG_TA648_308_RDS_Black";
player addPrimaryWeaponItem "CUP_muzzle_snds_socom762rc";
player addPrimaryWeaponItem "CUP_20Rnd_762x51_L129_M";
player addWeapon "CUP_hgun_Glock17_blk";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "CUP_U_B_BAF_MTP_GHILLIE";
player addVest "CUP_V_B_BAF_MTP_Osprey_Mk4_Scout";
player addBackpack "CUP_B_Bergen_BAF";

comment "Add binoculars";
player addWeapon "ACE_Yardage450";

comment "Add items to containers";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "kat_Painkiller";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 2 do {player addItemToUniform "KAT_ChestSeal";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
player addItemToUniform "CUP_NVG_HMNVS";
for "_i" from 1 to 8 do {player addItemToVest "CUP_20Rnd_762x51_L129_M";};
for "_i" from 1 to 8 do {player addItemToBackpack "CUP_20Rnd_762x51_L129_M";};
player addItemToBackpack "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";

player addHeadgear "CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B";
player addGoggles "CUP_G_Oakleys_Clr";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
