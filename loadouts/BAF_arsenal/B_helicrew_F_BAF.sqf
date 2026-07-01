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
player addWeapon "CUP_hgun_Glock17_blk";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "CUP_U_B_BAF_MTP_UBACSLONG";
player addVest "CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot";

comment "Add binoculars";
player addWeapon "Binocular";

comment "Add items to containers";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_Painkillers";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 2 do {player addItemToUniform "KAT_ChestSeal";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
player addItemToUniform "CUP_NVG_HMNVS";
for "_i" from 1 to 3 do {player addItemToVest "SmokeShellPurple";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShellYellow";};
player addItemToVest "ACE_HandFlare_Green";
player addItemToVest "ACE_microdagr";

player addHeadgear "H_CrewHelmetHeli_I_E";
player addGoggles "CUP_G_Oakleys_Clr";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
