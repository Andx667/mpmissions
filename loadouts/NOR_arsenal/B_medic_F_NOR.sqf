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
player addWeapon "CUP_arifle_HK416_CQB_Black";
player addPrimaryWeaponItem "ACE_DBAL_A3_Red";
player addPrimaryWeaponItem "CUP_optic_CompM4";
player addPrimaryWeaponItem "CUP_30Rnd_556x45_PMAG_BLACK";
player addWeapon "CUP_hgun_Glock17";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "NOR_Combat_Uniform";
player addVest "CUP_V_CPC_medicalbelt_coy";
player addBackpack "NOR_Predator_Backpack";

comment "Add binoculars";
player addWeapon "Binocular";

comment "Add items to containers";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "acex_intelitems_notepad";
player addItemToUniform "ACE_Painkillers";
for "_i" from 1 to 15 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 15 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_Tourniquet";};
for "_i" from 1 to 2 do {player addItemToUniform "CUP_17Rnd_9x19_glock17";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_HandGrenade_M67";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "ACRE_PRC152";
for "_i" from 1 to 3 do {player addItemToVest "Chemlight_red";};

player addHeadgear "NOR_Opscore";
player addGoggles "CUP_G_Oakleys_Clr";

player addItemToBackpack "ACE_surgicalKit";
for "_i" from 1 to 30 do {player addItemToBackpack "ACE_elasticBandage";};
for "_i" from 1 to 14 do {player addItemToBackpack "ACE_packingBandage";};
for "_i" from 1 to 7 do {player addItemToBackpack "ACE_tourniquet";};
for "_i" from 1 to 30 do {player addItemToBackpack "ACE_Suture";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_salineIV_250";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_salineIV_500";};
for "_i" from 1 to 3 do {player addItemToBackpack "kat_pocketBVM";};
for "_i" from 1 to 6 do {player addItemToBackpack "kat_ncdKit";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_larynx";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_IV_16";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_chestSeal";};
for "_i" from 1 to 12 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 8 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 8 do {player addItemToBackpack "kat_naloxone";};
for "_i" from 1 to 4 do {player addItemToBackpack "ACE_adenosine";};
for "_i" from 1 to 6 do {player addItemToBackpack "kat_Penthrox";};
for "_i" from 1 to 4 do {player addItemToBackpack "kat_Painkiller";};
comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
