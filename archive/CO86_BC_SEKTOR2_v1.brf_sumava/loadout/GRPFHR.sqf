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
player addPrimaryWeaponItem "BWA3_optic_ZO4x30i_MicroT2_sand_pip";
player addPrimaryWeaponItem "BWA3_30Rnd_556x45_G36_AP";
player addWeapon "CUP_hgun_M17_Black";
player addHandgunItem "CUP_acc_MLPLS_Laser";
player addHandgunItem "optic_MRD_black";
player addHandgunItem "CUP_17Rnd_9x19_M17_Black";

comment "Add containers";
player forceAddUniform "BWA3_Uniform_Crye_G3_Fleck";
player addVest "BWA3_Vest_Rifleman_Fleck";
player addBackpack "B_RadioBag_01_wdl_F";

comment "Add binoculars";
player addWeapon "Rangefinder";

comment "Add items to containers";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 25 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 2 do {player addItemToUniform "kat_chestSeal";};
for "_i" from 1 to 20 do {player addItemToUniform "ACE_suture";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_splint";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
player addItemToUniform "ACE_Flashlight_MX991";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "kat_IV_16";
player addItemToUniform "ACE_salineIV_500";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_Chemlight_IR";
player addItemToUniform "kat_Painkiller";
for "_i" from 1 to 2 do {player addItemToVest "ACE_CableTie";};
player addItemToVest "ACRE_PRC152";
player addItemToVest "ItemAndroidMisc";
for "_i" from 1 to 2 do {player addItemToVest "CUP_17Rnd_9x19_M17_Black";};
for "_i" from 1 to 2 do {player addItemToVest "BWA3_DM25";};
player addItemToVest "BWA3_DM32_Green";
player addItemToVest "BWA3_DM51A1";
for "_i" from 1 to 8 do {player addItemToVest "BWA3_30Rnd_556x45_G36_AP";};
for "_i" from 1 to 2 do {player addItemToVest "BWA3_30Rnd_556x45_G36_Tracer";};
player addItemToVest "BWA3_DM32_Red";
player addItemToBackpack "ACE_HuntIR_monitor";
player addItemToBackpack "ACRE_PRC117F";
player addItemToBackpack "ItemcTabMisc";
player addItemToBackpack "ACE_SpraypaintRed";
player addItemToBackpack "mts_whistle_FOX40";
player addItemToBackpack "BWA3_DM32_Green";
for "_i" from 1 to 2 do {player addItemToBackpack "BWA3_DM32_Red";};
player addItemToBackpack "BWA3_DM32_Yellow";
for "_i" from 1 to 4 do {player addItemToBackpack "BWA3_30Rnd_556x45_G36_AP";};
player addItemToBackpack "BWA3_30Rnd_556x45_G36_Tracer";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_HuntIR_M203";};
player addHeadgear "BWA3_OpsCore_FastMT_Peltor_Fleck";
player addGoggles "CUP_G_ESS_RGR";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "BWA3_ItemNaviPad";

comment "Set identity";
[player,"WhiteHead_03","male01eng"] call BIS_fnc_setIdentity;
