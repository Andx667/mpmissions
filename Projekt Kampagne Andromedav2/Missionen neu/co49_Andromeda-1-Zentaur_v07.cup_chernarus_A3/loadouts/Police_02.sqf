
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
player addWeapon "rhs_weap_M590_5RD";
player addPrimaryWeaponItem "rhsusf_5Rnd_Slug";
player addWeapon "rhs_weap_makarov_pm";
player addHandgunItem "rhs_mag_9x18_8_57N181S";

comment "Add containers";
player forceAddUniform "UK3CB_CPD_I_U_Policeman_01";
player addVest "rhs_6sh46";
player addHeadgear "UK3CB_CPD_I_H_Police_Cap";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";