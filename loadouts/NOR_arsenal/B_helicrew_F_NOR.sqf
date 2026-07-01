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
player addWeapon "CUP_smg_MP7";
player addPrimaryWeaponItem "CUP_20Rnd_46x30_MP7";
player addWeapon "CUP_hgun_Glock17";
player addHandgunItem "CUP_17Rnd_9x19_glock17";

comment "Add containers";
player forceAddUniform "NOR_Combat_Uniform_Gloves";
player addVest "FIR_pilot_vest";

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
for "_i" from 1 to 2 do {player addItemToVest "SmokeShellPurple";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_Chemlight_UltraHiOrange";};
for "_i" from 1 to 2 do {player addItemToVest "CUP_20Rnd_46x30_MP7";};
player addItemToVest "ItemAndroid";

player addHeadgear "H_CrewHelmetHeli_B";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;
