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
player addWeapon "BWA3_G28";
player addPrimaryWeaponItem "BWA3_muzzle_snds_Rotex_IIA";
player addPrimaryWeaponItem "ACE_DBAL_A3_Green";
player addPrimaryWeaponItem "BWA3_optic_PMII_DMR_MicroT1_rear_pip";
player addPrimaryWeaponItem "BWA3_20Rnd_762x51_G28_LR";
player addPrimaryWeaponItem "bipod_02_F_blk";
player addWeapon "CUP_hgun_M17_Black";
player addHandgunItem "CUP_acc_MLPLS_Laser";
player addHandgunItem "optic_MRD_black";
player addHandgunItem "CUP_17Rnd_9x19_M17_Black";

comment "Add containers";
player forceAddUniform "BWA3_Uniform_Crye_G3_Fleck";
player addVest "BWA3_Vest_Marksman_Fleck";
player addBackpack "BWA3_FieldPack_Fleck";

comment "Add binoculars";
player addWeapon "BWA3_Vector";

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
player addItemToUniform "ACE_IR_Strobe_Item";
player addItemToUniform "ItemAndroidMisc";
player addItemToUniform "kat_IV_16";
player addItemToUniform "ACE_salineIV_250";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_Chemlight_IR";
player addItemToUniform "kat_Painkiller";
for "_i" from 1 to 4 do {player addItemToVest "ACE_CableTie";};
player addItemToVest "ACE_RangeCard";
player addItemToVest "ACE_ATragMX";
player addItemToVest "ACE_Kestrel4500";
player addItemToVest "ItemAndroidMisc";
player addItemToVest "ACE_Clacker";
player addItemToVest "ACE_DefusalKit";
player addItemToVest "ACE_DAGR";
player addItemToVest "ACRE_PRC152";
for "_i" from 1 to 2 do {player addItemToVest "CUP_17Rnd_9x19_M17_Black";};
for "_i" from 1 to 2 do {player addItemToVest "BWA3_DM25";};
player addItemToVest "BWA3_DM51A1";
player addItemToVest "BWA3_DM32_Green";
for "_i" from 1 to 5 do {player addItemToVest "BWA3_20Rnd_762x51_G28_LR";};
for "_i" from 1 to 8 do {player addItemToBackpack "BWA3_20Rnd_762x51_G28_LR";};
for "_i" from 1 to 3 do {player addItemToBackpack "BWA3_20Rnd_762x51_G28_SD";};
for "_i" from 1 to 3 do {player addItemToBackpack "BWA3_20Rnd_762x51_G28_Tracer";};
player addHeadgear "BWA3_OpsCore_FastMT_Peltor_Fleck";
player addGoggles "USP_MFRAME_SMC1_BLK2";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";

