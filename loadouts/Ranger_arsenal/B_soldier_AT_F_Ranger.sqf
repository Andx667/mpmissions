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
player addWeapon "CUP_arifle_mk18_black";
player addPrimaryWeaponItem "CUP_acc_ANPEQ_15_Flashlight_Black_L";
player addPrimaryWeaponItem "CUP_optic_Elcan_SpecterDR_RMR_black";
player addPrimaryWeaponItem "CUP_muzzle_snds_M16";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_PMAG_BLACK_RPL";
player addWeapon "launch_MRAWS_olive_F";
player addSecondaryWeaponItem "MRAWS_HE_F";
player addWeapon "CUP_hgun_M17_Black";
player addHandgunItem "CUP_17Rnd_9x19_M17_Black";

comment "Add containers";
player forceAddUniform "CFP_75th_CRYE_V1b_Full";
player addVest "CUP_V_B_Ciras_MCam";
player addBackpack "CFP_Camelbak_Mule_RngrGrn";

comment "Add binoculars";
player addWeapon "Binocular";

comment "Add items to containers";
player addItemToUniform "ACRE_PRC343";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_Painkillers";
for "_i" from 1 to 15 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 15 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_17Rnd_9x19_M17_Black";};
for "_i" from 1 to 8 do {player addItemToVest "CUP_30Rnd_556x45_PMAG_BLACK_RPL";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_30Rnd_556x45_PMAG_BLACK_RPL";};
for "_i" from 1 to 2 do {player addItemToBackpack "MRAWS_HE_F";};
player addItemToBackpack "MRAWS_HEAT55_F";

player addHeadgear "CUP_H_OpsCore_Covered_MCAM_US_SF";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
