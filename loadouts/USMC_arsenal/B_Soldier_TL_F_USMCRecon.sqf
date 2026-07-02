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
player addWeapon "CUP_arifle_M16A4_GL";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag_Tracer_Red";

comment "Add containers";
player forceAddUniform "CUP_U_B_USMC_MCCUU";
player addVest "CUP_V_B_Eagle_SPC_TL";
player addBackpack "CUP_B_USMC_MOLLE";

comment "Add binoculars";
player addWeapon "Binocular";

comment "Add items to containers";
player addItemToUniform "ACRE_PRC343";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "kat_chestSeal";};
player addItemToUniform "kat_guedel";
player addItemToUniform "kat_Painkiller";
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellGreen";
for "_i" from 1 to 8 do {player addItemToVest "CUP_30Rnd_556x45_Stanag_Tracer_Red";};
player addItemToVest "ACRE_PRC148";
for "_i" from 1 to 20 do {player addItemToBackpack "CUP_1Rnd_HE_M203";};
for "_i" from 1 to 5 do {player addItemToBackpack "CUP_1Rnd_HEDP_M203";};
for "_i" from 1 to 5 do {player addItemToBackpack "CUP_1Rnd_SmokeRed_M203";};
for "_i" from 1 to 5 do {player addItemToBackpack "CUP_1Rnd_Smoke_M203";};

player addHeadgear "CUP_H_LWHv2_MARPAT_comms";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
