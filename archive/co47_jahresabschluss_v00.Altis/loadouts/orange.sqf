
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

comment "Add containers";
player forceAddUniform "ttt_Uniform_Orange_BW_Flecktarn";
player addVest "V_Rangemaster_belt";

comment "Add items to containers";
player addItemToUniform "ACRE_PRC152";
player addItemToUniform "ItemAndroid";

player addHeadGear "ttt_Beret_Orange";

