player setRank "SERGEANT";

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
player addWeapon "CUP_hgun_Colt1911";
player addHandgunItem "CUP_7Rnd_45ACP_1911";

comment "Add containers";
player forceAddUniform "CUP_U_B_USMC_FROG1_WMARPAT";
player addVest "CUP_V_B_Eagle_SPC_Crew";

comment "Add binoculars";
player addWeapon "Binocular";

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
for "_i" from 1 to 2 do {player addItemToVest "CUP_7Rnd_45ACP_1911";};
player addItemToVest "ACRE_PRC152";

player addHeadgear "CUP_H_LWHv2_MARPAT";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
