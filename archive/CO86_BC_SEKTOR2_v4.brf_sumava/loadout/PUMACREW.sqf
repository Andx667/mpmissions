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
player addWeapon "BWA3_G38C_tan";
player addPrimaryWeaponItem "ACE_muzzle_mzls_L";
player addPrimaryWeaponItem "ACE_DBAL_A3_Green";
player addPrimaryWeaponItem "BWA3_optic_EOTech_Mag_Off";
player addPrimaryWeaponItem "BWA3_30Rnd_556x45_G36_AP";
player addWeapon "CUP_hgun_M17_Black";
player addHandgunItem "CUP_acc_MLPLS_Laser";
player addHandgunItem "optic_MRD_black";
player addHandgunItem "CUP_17Rnd_9x19_M17_Black";

comment "Add containers";
player forceAddUniform "CUP_U_B_GER_Flecktarn_3";
player addVest "CUP_V_B_JPC_Fleck_Light";
player addBackpack "BWA3_FieldPack_Fleck";

comment "Add binoculars";
player addWeapon "Binocular";

comment "Add items to containers";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 20 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "kat_chestSeal";};
for "_i" from 1 to 20 do {player addItemToUniform "ACE_suture";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_splint";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
player addItemToUniform "ACE_Flashlight_MX991";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ItemAndroidMisc";
player addItemToUniform "kat_IV_16";
player addItemToUniform "ACE_salineIV_500";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "kat_Painkiller";
player addItemToVest "ACRE_PRC152";
for "_i" from 1 to 2 do {player addItemToVest "CUP_17Rnd_9x19_M17_Black";};
for "_i" from 1 to 6 do {player addItemToVest "BWA3_30Rnd_556x45_G36_AP";};
for "_i" from 1 to 2 do {player addItemToVest "BWA3_DM25";};
player addItemToVest "BWA3_DM32_Green";
player addItemToVest "BWA3_DM51A1";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ToolKit";
player addItemToBackpack "MineDetector";
player addHeadgear "BWA3_CrewmanKSK_Fleck_Headset";
player addGoggles "USP_BALACLAVA_OAK_RGR";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "BWA3_ItemNaviPad";

