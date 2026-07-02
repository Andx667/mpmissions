player setRank "CORPORAL";

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
player addWeapon "CUP_arifle_M16A4_Grip";
player addPrimaryWeaponItem "CUP_optic_ACOG2";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_Stanag_Tracer_Red";

comment "Add containers";
player forceAddUniform "CUP_U_B_USMC_MCCUU";
player addVest "CUP_V_B_Eagle_SPC_Corpsman";
player addBackpack "CUP_B_USMC_MOLLE_WDL";

comment "Add binoculars";

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
for "_i" from 1 to 3 do {player addItemToVest "CUP_30Rnd_556x45_Stanag_Tracer_Red";};
player addItemToVest "kat_basicDiagnostic";
for "_i" from 1 to 2 do {player addItemToVest "kat_Pulseoximeter";};
player addItemToVest "ACE_SpraypaintBlue";
player addItemToVest "ace_flags_blue";
player addItemToVest "ACRE_PRC152";
for "_i" from 1 to 45 do {player addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 45 do {player addItemToBackpack "ACE_quikclot";};
for "_i" from 1 to 16 do {player addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 12 do {player addItemToBackpack "kat_chestSeal";};
for "_i" from 1 to 12 do {player addItemToBackpack "kat_larynx";};
for "_i" from 1 to 12 do {player addItemToBackpack "kat_ncdKit";};
player addItemToBackpack "kat_pocketBVM";
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 16 do {player addItemToBackpack "kat_IV_16";};
for "_i" from 1 to 4 do {player addItemToBackpack "kat_IO_FAST";};
for "_i" from 1 to 12 do {player addItemToBackpack "kat_Penthrox";};
for "_i" from 1 to 12 do {player addItemToBackpack "kat_naloxone";};
for "_i" from 1 to 12 do {player addItemToBackpack "kat_nalbuphine";};
for "_i" from 1 to 12 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 12 do {player addItemToBackpack "kat_Painkiller";};
for "_i" from 1 to 8 do {player addItemToBackpack "ACE_morphine";};
player addItemToBackpack "ace_flags_blue";
player addItemToBackpack "ACE_SpraypaintBlue";
for "_i" from 1 to 3 do {player addItemToBackpack "UK3CB_BAF_SmokeShellBlue";};
player addItemToBackpack "ACE_Bodybag";

player addHeadgear "CUP_H_LWHv2_MARPAT_comms";

player addItemToBackpack "ACE_surgicalKit";
for "_i" from 1 to 30 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 30 do {player addItemToBackpack "ACE_Suture";};
for "_i" from 1 to 2 do {player addItemToBackpack "kat_pocketBVM";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_adenosine";};
comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
