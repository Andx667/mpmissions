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
player addWeapon "CUP_arifle_L85A2_G";
player addPrimaryWeaponItem "CUP_acc_LLM";
player addPrimaryWeaponItem "CUP_optic_Elcan_reflex_coyote";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag_L85";
player addWeapon "CUP_hgun_Glock17_blk";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "CUP_U_B_BAF_MTP_UBACSLONG";
player addVest "CUP_V_B_BAF_MTP_Osprey_Mk4_Medic";
player addBackpack "CUP_B_Predator_Radio_MTP";

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
for "_i" from 1 to 3 do {player addItemToVest "CUP_30Rnd_556x45_Stanag_L85";};
player addItemToVest "ace_flags_blue";
player addItemToVest "ACE_SpraypaintBlue";
player addItemToVest "ACE_surgicalKit";
player addItemToVest "ACRE_PRC152";
for "_i" from 1 to 3 do {player addItemToVest "kat_Pulseoximeter";};
player addItemToVest "kat_basicDiagnostic";
for "_i" from 1 to 40 do {player addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 40 do {player addItemToBackpack "ACE_quikclot";};
for "_i" from 1 to 40 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 16 do {player addItemToBackpack "ACE_Tourniquet";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_TXA";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_EACA";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_larynx";};
player addItemToBackpack "kat_suction";
for "_i" from 1 to 3 do {player addItemToBackpack "kat_pocketBVM";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_ncdKit";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_chestSeal";};
for "_i" from 1 to 16 do {player addItemToBackpack "kat_IV_16";};
for "_i" from 1 to 6 do {player addItemToBackpack "ACE_bloodIV";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_bloodIV_250";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_bloodIV_500";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 8 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 8 do {player addItemToBackpack "ACE_adenosine";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_epinephrineIV";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_nitroglycerin";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_norepinephrine";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_phenylephrine";};
for "_i" from 1 to 8 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_fentanyl";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_ketamine";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_Penthrox";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_Painkiller";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_naloxone";};
for "_i" from 1 to 40 do {player addItemToBackpack "ACE_Suture";};
player addItemToBackpack "ACRE_PRC117F";

player addHeadgear "CUP_H_BAF_MTP_Mk6_EMPTY_PRR";
player addGoggles "CUP_G_Oakleys_Clr";

player addItemToBackpack "ACE_salineIV_250";
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 3 do {player addItemToBackpack "ACE_epinephrine";};
comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemAndroid";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
