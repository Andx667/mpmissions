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
player addBackpack "CUP_B_TacticalPack_CCE";

comment "Add binoculars";
player addWeapon "Binocular";

comment "Add items to containers";
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "kat_Painkiller";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "CUP_17Rnd_9x19_glock17";
for "_i" from 1 to 8 do {player addItemToVest "CUP_30Rnd_556x45_Emag";};
player addItemToVest "ACE_Clacker";
player addItemToVest "ACE_Defusalkit";
for "_i" from 1 to 4 do {player addItemToBackpack "DemoCharge_Remote_Mag";};
for "_i" from 1 to 3 do {player addItemToBackpack "tsp_breach_block_mag";};
for "_i" from 1 to 3 do {player addItemToBackpack "tsp_breach_package_mag";};
for "_i" from 1 to 6 do {player addItemToBackpack "CUP_6Rnd_12Gauge_Pellets_No00_Buck";};
player addItemToBackpack "ACE_Wirecutter";

player addHeadgear "CUP_H_HIL_HelmetACH_GCovered_Headset_CCE";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
