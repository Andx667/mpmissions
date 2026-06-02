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

comment "Add containers";
player forceAddUniform "BWA3_Uniform_Crye_G3_Fleck";
player addVest "V_DeckCrew_red_F";
player addBackpack "B_RadioBag_01_wdl_F";

comment "Add binoculars";
player addWeapon "Rangefinder";

comment "Add items to containers";
player addItemToUniform "ACE_IR_Strobe_Item";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_CableTie";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 10 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 25 do {player addItemToUniform "ACE_packingBandage";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_quikclot";};
for "_i" from 1 to 2 do {player addItemToUniform "kat_chestSeal";};
for "_i" from 1 to 30 do {player addItemToUniform "ACE_suture";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 4 do {player addItemToUniform "ACE_splint";};
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_MX991";
for "_i" from 1 to 2 do {player addItemToUniform "kat_IV_16";};
for "_i" from 1 to 5 do {player addItemToUniform "kat_Painkiller";};
player addItemToUniform "acex_intelitems_notepad";
player addItemToVest "ACRE_PRC152";
player addItemToVest "ttt_flags_gelb";
player addItemToVest "ttt_common_spraypaintMemes";
player addItemToVest "ItemAndroidMisc";
player addItemToBackpack "ACRE_PRC117F";
player addItemToBackpack "ACE_surgicalKit";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_bodyBag_blue";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_bodyBag_white";};
player addItemToBackpack "ACE_EntrenchingTool";
player addItemToBackpack "ACE_Clacker";
player addItemToBackpack "ACE_Cellphone";
for "_i" from 1 to 6 do {player addItemToBackpack "SmokeShell";};
player addHeadgear "H_Cap_marshal";
player addGoggles "USP_MFRAME_BLK2";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "ItemAndroid";

comment "Set identity";
[player,"WhiteHead_04","male10eng"] call BIS_fnc_setIdentity;
