player setRank "LIEUTENANT";

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
player addWeapon "CUP_arifle_HK416_CQB_Black";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "CUP_optic_MicroT1_OD";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_Emag";
player addWeapon "CUP_hgun_Glock17_blk";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "CUP_U_B_HIL_ACU_CCE";
player addVest "CUP_V_CPC_medicalbelt_rngr";
player addBackpack "ttt_backpack_radio_coyote";

comment "Add binoculars";
player addWeapon "Binocular";

comment "Add items to containers";
player addItemToUniform "ACRE_PRC148";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_Painkillers";
for "_i" from 1 to 15 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 15 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
player addItemToVest "ACE_SurgicalKit";
for "_i" from 1 to 3 do {player addItemToVest "CUP_30Rnd_556x45_Emag";};
player addItemToVest "ACRE_PRC152";
player addItemToVest "ItemAndroid";
player addItemToBackpack "ACRE_PRC117F";
player addItemToBackpack "ACE_Bodybag";
for "_i" from 1 to 30 do {player addItemToBackpack "ACE_Suture";};
for "_i" from 1 to 16 do {player addItemToBackpack "ACE_Tourniquet";};
for "_i" from 1 to 30 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 12 do {player addItemToBackpack "ACE_Epinephrine";};
for "_i" from 1 to 6 do {player addItemToBackpack "ACE_Painkillers";};
for "_i" from 1 to 6 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 8 do {player addItemToBackpack "ACE_SalineIV";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_SalineIV_250";};

player addHeadgear "CUP_H_HIL_HelmetACH_GCovered_Headset_CCE";

for "_i" from 1 to 14 do {player addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 3 do {player addItemToBackpack "kat_pocketBVM";};
for "_i" from 1 to 6 do {player addItemToBackpack "kat_ncdKit";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_larynx";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_IV_16";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_chestSeal";};
player addItemToBackpack "ACE_morphine";
for "_i" from 1 to 8 do {player addItemToBackpack "kat_naloxone";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_adenosine";};
for "_i" from 1 to 6 do {player addItemToBackpack "kat_Penthrox";};
for "_i" from 1 to 4 do {player addItemToBackpack "kat_Painkiller";};
comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
