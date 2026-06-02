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
player addWeapon "BWA3_G38K_tan";
player addPrimaryWeaponItem "ACE_muzzle_mzls_L";
player addPrimaryWeaponItem "ACE_DBAL_A3_Green";
player addPrimaryWeaponItem "BWA3_optic_ZO4x30i_RSAS_sand_pip";
player addPrimaryWeaponItem "BWA3_30Rnd_556x45_G36_AP";
player addWeapon "CUP_hgun_M17_Black";
player addHandgunItem "CUP_acc_MLPLS_Laser";
player addHandgunItem "optic_MRD_black";
player addHandgunItem "CUP_17Rnd_9x19_M17_Black";

comment "Add containers";
player forceAddUniform "BWA3_Uniform_Crye_G3_Fleck";
player addVest "CUP_V_B_GER_PVest_Fleck_TL_LT";
player addBackpack "B_RadioBag_01_wdl_F";

comment "Add binoculars";
player addWeapon "BWA3_Vector";

comment "Add items to containers";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 25 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 2 do {player addItemToUniform "kat_chestSeal";};
for "_i" from 1 to 20 do {player addItemToUniform "ACE_suture";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_splint";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
player addItemToUniform "ACE_Flashlight_MX991";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_IR_Strobe_Item";
player addItemToUniform "ItemAndroidMisc";
player addItemToUniform "kat_IV_16";
player addItemToUniform "ACE_salineIV_250";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_Chemlight_IR";
player addItemToUniform "kat_Painkiller";
player addItemToVest "ACRE_PRC152";
for "_i" from 1 to 2 do {player addItemToVest "CUP_21Rnd_9x19_M17_Black";};
for "_i" from 1 to 8 do {player addItemToVest "BWA3_30Rnd_556x45_G36_AP";};
player addItemToVest "BWA3_DM32_Green";
player addItemToVest "BWA3_DM51A1";
player addItemToVest "BWA3_30Rnd_556x45_G36_Tracer";
player addItemToBackpack "ACE_DefusalKit";
player addItemToBackpack "ACE_Clacker";
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_wirecutter";
player addItemToBackpack "MineDetector";
player addItemToBackpack "mts_cutter_folding_saw";
player addItemToBackpack "ttt_flags_logo";
player addItemToBackpack "ACE_Fortify";
player addItemToBackpack "ACRE_PRC117F";
for "_i" from 1 to 2 do {player addItemToBackpack "tsp_breach_popper_mag";};
for "_i" from 1 to 2 do {player addItemToBackpack "DemoCharge_Remote_Mag";};
for "_i" from 1 to 5 do {player addItemToBackpack "BWA3_DM25";};
player addItemToBackpack "BWA3_DM32_Yellow";
player addItemToBackpack "BWA3_DM32_Purple";
player addItemToBackpack "BWA3_DM32_Red";
player addHeadgear "BWA3_OpsCore_FastMT_Peltor";
player addGoggles "USP_CROSSBOW_BLK2";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "BWA3_ItemNaviPad";

