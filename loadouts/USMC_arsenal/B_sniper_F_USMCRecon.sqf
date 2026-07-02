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
player addWeapon "CUP_srifle_M40A3";
player addPrimaryWeaponItem "CUP_optic_LeupoldMk4";
player addPrimaryWeaponItem "CUP_bipod_Harris_1A2_L_BLK";
player addPrimaryWeaponItem "CUP_5Rnd_762x51_M24";
player addWeapon "CUP_hgun_M9";
player addHandgunItem "CUP_15Rnd_9x19_M9";

comment "Add containers";
player forceAddUniform "CUP_U_B_USMC_MCCUU";
player addVest "CUP_V_B_Eagle_SPC_DMR";
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
for "_i" from 1 to 5 do {player addItemToVest "CUP_5Rnd_762x51_M24";};
player addItemToVest "ACE_Rangetable";
player addItemToBackpack "ACE_Tripod";

player addHeadgear "CUP_H_FR_BoonieMARPAT";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
