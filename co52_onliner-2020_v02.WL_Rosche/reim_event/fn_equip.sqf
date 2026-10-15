/*
	author = Reimchen
	description = n.a.
*/

/*
	TODO ACRE (replaces TFAR):
	- All TFAR classes are gone: TFAR_anprc152, TFAR_rf7800str, TFAR_microdagr. linkItem with them just does nothing.
	- ACRE radios are normal inventory items, not the radio slot: use addItem instead of linkItem.
	  SR for everyone: "ACRE_888s" (same as our other missions), leader additionally "ACRE_PRC152".
	- TFAR_microdagr sat in the watch slot. Replace it with player linkItem "ItemWatch";
	  if a microDAGR is wanted, player addItem "ACE_microDAGR";
	- removeAllAssignedItems does not touch ACRE radios (they are in the inventory), so nothing to do there.

	TODO KAM (on top of ACE Medical):
	- Low tech kits, amounts don't need to match the template (template/CfgLoadouts.hpp), just cover the basics.
	- Everyone: tourniquets plus a painkiller and a chest seal (template base: 2 kat_Painkiller, 2 kat_chestSeal).
	- Medic: KAM needs IV access (kat_IV_16) before blood/saline can be given, plus airway and breathing items.
	- Watch vest space (V_HarnessO_brn is small). addItemToVest/addItemToBackpack fail silently when full,
	  so put the extra KAM stuff into the backpack.
*/

params ["_index"];

switch (_index) do {
	case 1:{
		removeVest player;
		removeAllAssignedItems player;
		
        player addVest "V_HarnessO_brn";
		player linkItem "ItemWatch";
		player linkItem "ItemCompass";
		player linkItem "ItemMap";
		player linkItem "ItemAndroid";
		player linkItem "TFAR_anprc152";
		//TODO ACRE: replace line above with
		//	player addItem "ACRE_888s";
		//	player addItem "ACRE_PRC152";

		for "_i" from 1 to 10 do {player addItem "ACE_fieldDressing";};
		//TODO KAM: add
		//	for "_i" from 1 to 2 do {player addItem "ACE_tourniquet";};
		//	for "_i" from 1 to 2 do {player addItem "kat_Painkiller";};
		//	player addItem "kat_chestSeal";
		[player,"CUP_smg_Mac10",10,2] call BIS_fnc_addWeapon;
	};
	case 2:{
		removeVest player;
		removeBackpack player;
		removeAllAssignedItems player;
		
		player addVest "V_HarnessO_brn";
		player addBackpack "CUP_B_SLA_Medicbag";
		player linkItem "TFAR_microdagr";
		player linkItem "ItemCompass";
		player linkItem "ItemMap";
		player linkItem "ItemAndroid";
		player linkItem "TFAR_rf7800str";
		//TODO ACRE: replace TFAR_microdagr with player linkItem "ItemWatch"; and TFAR_rf7800str with
		//	player addItem "ACRE_888s";

		for "_i" from 1 to 20 do {player addItemToVest "ACE_adenosine";};
		for "_i" from 1 to 20 do {player addItemToVest "ACE_packingBandage";};
		for "_i" from 1 to 15 do {player addItemToVest "ACE_quikclot";};
		for "_i" from 1 to 5 do {player addItemToVest "ACE_surgicalKit";};
		
		for "_i" from 1 to 50 do {player addItemToBackpack "ACE_elasticBandage";};
		for "_i" from 1 to 20 do {player addItemToBackpack "ACE_epinephrine";};
		for "_i" from 1 to 15 do {player addItemToBackpack "ACE_morphine";};
		for "_i" from 1 to 40 do {player addItemToBackpack "ACE_bloodIV_250";};
		//TODO KAM: add (low tech medic, roughly half the template medic amounts)
		//	player addItemToVest "kat_basicDiagnostic";
		//	for "_i" from 1 to 6 do {player addItemToBackpack "ACE_tourniquet";};
		//	for "_i" from 1 to 8 do {player addItemToBackpack "kat_IV_16";};			//IV access, needed for the blood IVs above
		//	for "_i" from 1 to 4 do {player addItemToBackpack "kat_larynx";};			//airway
		//	player addItemToBackpack "kat_pocketBVM";									//breathing
		//	for "_i" from 1 to 4 do {player addItemToBackpack "kat_chestSeal";};
		//	for "_i" from 1 to 4 do {player addItemToBackpack "kat_Painkiller";};
		//	for "_i" from 1 to 4 do {player addItemToBackpack "kat_naloxone";};		//counters morphine overdose
		//	for "_i" from 1 to 10 do {player addItemToBackpack "ACE_suture";};
		//TODO KAM: 5 surgical kits are more than needed (reusable), 1 is enough. If backpack space runs out,
		//	lower the 50 elastic bandages / 40 blood IVs first.
	};
	case 3:{
		removeVest player;
		removeAllAssignedItems player;
		
        player addVest "V_HarnessO_brn";
		player linkItem "TFAR_microdagr";
		player linkItem "ItemCompass";
		player linkItem "ItemMap";
		player linkItem "ItemAndroid";
		player linkItem "TFAR_rf7800str";
		//TODO ACRE: replace TFAR_microdagr with player linkItem "ItemWatch"; and TFAR_rf7800str with
		//	player addItem "ACRE_888s";

		for "_i" from 1 to 10 do {player addItem "ACE_fieldDressing";};
		//TODO KAM: add
		//	for "_i" from 1 to 2 do {player addItem "ACE_tourniquet";};
		//	for "_i" from 1 to 2 do {player addItem "kat_Painkiller";};
		//	player addItem "kat_chestSeal";
		[player,"CUP_arifle_G3A3_modern_ris",10,1] call BIS_fnc_addWeapon;
		player addPrimaryWeaponItem "cup_bipod_g3sg1";
	};
	case 4:{
		removeBackpack player;
		removeVest player;
		removeAllAssignedItems player;
		
        player addBackpack "B_FieldPack_khk";
		player addVest "V_HarnessOGL_brn";
		player linkItem "TFAR_microdagr";
		player linkItem "ItemCompass";
		player linkItem "ItemMap";
		player linkItem "ItemAndroid";
		player linkItem "TFAR_rf7800str";
		//TODO ACRE: replace TFAR_microdagr with player linkItem "ItemWatch"; and TFAR_rf7800str with
		//	player addItem "ACRE_888s";

		for "_i" from 1 to 10 do {player addItem "ACE_fieldDressing";};
		//TODO KAM: add
		//	for "_i" from 1 to 2 do {player addItem "ACE_tourniquet";};
		//	for "_i" from 1 to 2 do {player addItem "kat_Painkiller";};
		//	player addItem "kat_chestSeal";
		for "_i" from 1 to 10 do {player addItem "SmokeShell";};
		for "_i" from 1 to 10 do {player addItem "ACE_HandFlare_White";};
		for "_i" from 1 to 20 do {player addItem "MiniGrenade";};
		for "_i" from 1 to 20 do {player addItem "1Rnd_HE_Grenade_shell";};
		for "_i" from 1 to 10 do {player addItem "ACE_40mm_Flare_white";};
		player addWeapon "CUP_glaunch_M79";
		[player,"ACE_Flashlight_Maglite_ML300L",0] call BIS_fnc_addWeapon;
	};
	case 5:{
		removeVest player;
		removeAllAssignedItems player;
		
        player addVest "V_HarnessO_brn";
		player linkItem "TFAR_microdagr";
		player linkItem "ItemCompass";
		player linkItem "ItemMap";
		player linkItem "ItemAndroid";
		player linkItem "TFAR_rf7800str";
		//TODO ACRE: replace TFAR_microdagr with player linkItem "ItemWatch"; and TFAR_rf7800str with
		//	player addItem "ACRE_888s";

		for "_i" from 1 to 10 do {player addItem "ACE_fieldDressing";};
		//TODO KAM: add
		//	for "_i" from 1 to 2 do {player addItem "ACE_tourniquet";};
		//	for "_i" from 1 to 2 do {player addItem "kat_Painkiller";};
		//	player addItem "kat_chestSeal";
		player addItem "ACE_EntrenchingTool";
		[player,"CUP_sgun_M1014_solidstock",10,1] call BIS_fnc_addWeapon;
	};
	case 6:{
		removeVest player;
		removeAllAssignedItems player;
		
        player addVest "V_HarnessO_brn";
		player linkItem "TFAR_microdagr";
		player linkItem "ItemCompass";
		player linkItem "ItemMap";
		player linkItem "ItemAndroid";
		player linkItem "TFAR_rf7800str";
		//TODO ACRE: replace TFAR_microdagr with player linkItem "ItemWatch"; and TFAR_rf7800str with
		//	player addItem "ACRE_888s";

		for "_i" from 1 to 10 do {player addItem "ACE_fieldDressing";};
		//TODO KAM: add
		//	for "_i" from 1 to 2 do {player addItem "ACE_tourniquet";};
		//	for "_i" from 1 to 2 do {player addItem "kat_Painkiller";};
		//	player addItem "kat_chestSeal";
		player addItem "ACE_EntrenchingTool";
		[player,"sgun_HunterShotgun_01_F",20,1] call BIS_fnc_addWeapon;
	};
};
