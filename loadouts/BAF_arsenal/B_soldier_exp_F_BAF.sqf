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
player addWeapon "CUP_arifle_L85A2_G";
player addPrimaryWeaponItem "CUP_acc_LLM";
player addPrimaryWeaponItem "CUP_optic_Elcan_reflex_coyote";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag_L85";
player addWeapon "CUP_hgun_Glock17_blk";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "CUP_U_B_BAF_MTP_UBACSLONG";
player addVest "CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer";
player addBackpack "CUP_B_Motherlode_MTP";

comment "Add binoculars";
player addWeapon "Binocular";

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
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_L109A2_HE";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellGreen";
for "_i" from 1 to 2 do {player addItemToVest "CUP_17Rnd_9x19_glock17";};
player addItemToVest "ACRE_PRC152";
for "_i" from 1 to 8 do {player addItemToVest "CUP_30Rnd_556x45_Stanag_L85";};
player addItemToVest "ACE_DefusalKit";
player addItemToVest "ACE_Clacker";
for "_i" from 1 to 6 do {player addItemToBackpack "DemoCharge_Remote_Mag";};
for "_i" from 1 to 2 do {player addItemToBackpack "SatchelCharge_Remote_Mag";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_M14";};

player addHeadgear "CUP_H_BAF_MTP_Mk6_EMPTY_PRR";
player addGoggles "CUP_G_Oakleys_Clr";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
