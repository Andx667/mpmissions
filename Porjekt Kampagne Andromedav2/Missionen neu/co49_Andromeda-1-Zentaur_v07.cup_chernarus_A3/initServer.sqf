/*
	author = Andx + Karl Baker
	description = 
*/


//Skript zum Flagge einholen und hissen
[flagPole_01] call reim_flag_fnc_flagINIT;

///////////////////
// Datum
///////////////////
setDate [2020, 9, 16, 9, 0];

///////////////////
// KI Skill
///////////////////

{
	if (side _x == east) then {						
		_x setBehaviour "SAFE";
		_x setCombatMode "WHITE";
        _x setSpeedMode "LIMITED";
		
        //1 ist Profi, 0 ist Noob
        _x call ttt_common_fnc_setAISkill;
	};
} forEach allUnits;

///////////////////
// Fahrzeuge
///////////////////

// Fahrzeuge Schwarz
[
    [coyote_01, coyote_02, coyote_03, coyote_04],
    [
        ["UK3CB_BAF_127_100Rnd", 5],
        ["UK3CB_BAF_762_200Rnd_T", 5],
        ["ACE_EntrenchingTool", 4],
        ["dzn_MG_Tripod_M122A1_M240Mount_Carry", 2],
        ["B_AssaultPack_blk", 1],
        ["ACE_TacticalLadder_Pack", 1]
    ]
] call ttt_common_fnc_crateFiller;

// Fahrzeug Blau 
[
    [dingo_01],
    [
        ["BWA3_G82_Hensoldt", 1],
        ["BWA3_10Rnd_127x99_G82", 3],
        ["B_UGV_02_Demining_backpack_F", 1],
        ["B_UavTerminal", 1],
        ["B_AssaultPack_blk", 1],
        ["ACE_TacticalLadder_Pack", 1],
        ["mts_items_marker_yellow", 20],
        ["mts_items_marker_mines", 20]
    ]
] call ttt_common_fnc_crateFiller;

// Helikopter Platin
[
    [heli_01],
    [
        ["B_AssaultPack_blk", 1]
    ]
] call ttt_common_fnc_crateFiller;

// Helikopter Weiß
[
    [heli_02],
    [   
        ["B_AssaultPack_blk", 1],
        ["B_Parachute", 12],
        ["ACE_Rope12", 1],
        ["ACE_Rope36", 1]
    ]
] call ttt_common_fnc_crateFiller;

// Helikopter Silber
[
    [heli_03],
    [
        ["B_AssaultPack_blk", 1],
        ["B_Parachute", 23],
        ["UK3CB_BAF_762_200Rnd_T", 12],
        ["ACE_Rope12", 1],
        ["ACE_Rope36", 1]
    ]
] call ttt_common_fnc_crateFiller;

// CDF Log Fhz
[
    [log_01, log_02, log_03, gaz_01, gaz_02],
    [
        ["B_AssaultPack_blk", 1]
    ]
] call ttt_common_fnc_crateFiller;

///////////////////
// Rucksäcke in Fahrzeugen + ACE Cargo Space
///////////////////

{	
	{
		//Reperatur und Abschlepp
		if (typeof _x == "B_AssaultPack_blk") then
		{
			_x addItemCargoGlobal ["Toolkit", 1];
			_x addItemCargoGlobal ["ACE_Rope12", 1];
            _x addItemCargoGlobal ["ACE_Rope6", 1];
		};
	} forEach (everyBackpack _x);

    // ACE Cargo
    [_x, 4] call ace_cargo_fnc_setSpace;

} forEach [coyote_01, coyote_02, coyote_03, coyote_04, dingo_01, heli_01, heli_02, heli_03, log_01, log_02, log_03, gaz_01, gaz_02];

///////////////////
// Fahrzeuge
///////////////////

// Fahrzeuge Schwarz
[
    [coyote_01, coyote_02, coyote_03, coyote_04],
    [
        ["UK3CB_BAF_127_100Rnd", 5],
        ["UK3CB_BAF_762_200Rnd_T", 5],
        ["ACE_EntrenchingTool", 4],
        ["dzn_MG_Tripod_M122A1_M240Mount_Carry", 2],
        ["B_AssaultPack_blk", 1],
        ["ACE_TacticalLadder_Pack", 1]
    ]
] call ttt_common_fnc_crateFiller;

// Fahrzeug Blau 
[
    [dingo_01],
    [
        ["BWA3_G82_Hensoldt", 1],
        ["BWA3_10Rnd_127x99_G82", 3],
        ["B_UGV_02_Demining_backpack_F", 1],
        ["B_UavTerminal", 1],
        ["B_AssaultPack_blk", 1],
        ["ACE_TacticalLadder_Pack", 1],
        ["mts_items_marker_yellow", 20],
        ["mts_items_marker_mines", 20],
        ["ACE_UAVBattery", 6]
    ]
] call ttt_common_fnc_crateFiller;

// Helikopter Platin
[
    [heli_01],
    [
        ["B_AssaultPack_blk", 1]
    ]
] call ttt_common_fnc_crateFiller;

// Helikopter Weiß
[
    [heli_02],
    [   
        ["B_AssaultPack_blk", 1],
        ["B_Parachute", 12],
        ["ACE_Rope12", 1],
        ["ACE_Rope36", 1]
    ]
] call ttt_common_fnc_crateFiller;

// Helikopter Silber
[
    [heli_03],
    [
        ["B_AssaultPack_blk", 1],
        ["B_Parachute", 23],
        ["UK3CB_BAF_762_200Rnd_T", 12],
        ["ACE_Rope12", 1],
        ["ACE_Rope36", 1]
    ]
] call ttt_common_fnc_crateFiller;

// CDF Log Fhz
[
    [log_01, log_02, log_03, gaz_01, gaz_02],
    [
        ["B_AssaultPack_blk", 1]
    ]
] call ttt_common_fnc_crateFiller;

///////////////////
// Rucksäcke in Fahrzeugen + ACE Cargo Space
///////////////////

{	
	{
		//Reperatur und Abschlepp
		if (typeof _x == "B_AssaultPack_blk") then
		{
			_x addItemCargoGlobal ["Toolkit", 1];
			_x addItemCargoGlobal ["ACE_Rope12", 1];
            _x addItemCargoGlobal ["ACE_Rope6", 1];
		};
	} forEach (everyBackpack _x);

    // ACE Cargo
    [_x, 4] call ace_cargo_fnc_setSpace;

} forEach [coyote_01, coyote_02, coyote_03, coyote_04, dingo_01, heli_01, heli_02, heli_03, log_01, log_02, log_03, gaz_01, gaz_02];

///////////////////
// Nachschubkisten
///////////////////

//Infanterie Munition 
[
    [munition_01, munition_02, munition_03, munition_04, munition_05, munition_06, munition_07, munition_08, munition_09, munition_10, munition_11, munition_12],
    [
        ["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 30],
        ["rhs_mag_30Rnd_556x45_M855A1_PMAG", 30],
        ["rhsusf_200Rnd_556x45_mixed_soft_pouch_coyote", 10],
        ["UK3CB_BAF_762_L42A1_20Rnd_T", 13],
        ["16Rnd_9x21_Mag", 9]
    ]
] call ttt_common_fnc_crateFiller;

//UGV Ersatz
[
    [ugv_01],
    [
        ["B_UGV_02_Demining_backpack_F", 1],
        ["B_UavTerminal", 1],
        ["ACE_UAVBattery", 6]
    ]
] call ttt_common_fnc_crateFiller;

// Infanterie Granaten
[
    [granaten_01, granaten_02, granaten_03, granaten_04, granaten_05, granaten_06, granaten_07, granaten_08, granaten_09, granaten_10, granaten_11, granaten_12],
    [
        ["rhs_mag_M433_HEDP", 22],
        ["ACE_HuntIR_M203", 6],
        ["1Rnd_Smoke_Grenade_shell", 10],
        ["1Rnd_SmokeRed_Grenade_shell", 15],
        ["1Rnd_SmokeOrange_Grenade_shell", 10],

        ["ACE_M84", 18],
        ["rhs_mag_m67", 18],
        ["SmokeShell", 18],

        ["SmokeShellGreen", 9],
        ["SmokeShellBlue", 6],
        ["SmokeShellRed", 6],

        ["SmokeShellOrange", 5],
        ["SmokeShellPurple", 5],
        ["SmokeShellYellow", 5]
    ]
] call ttt_common_fnc_crateFiller;

// Werfer 
[
    [werfer_01, werfer_02, werfer_03],
    [
        ["rhs_mag_maaws_HEDP", 4],
        ["rhs_mag_maaws_HEAT", 2]
    ]
] call ttt_common_fnc_crateFiller;

// Piloten 
[
    [piloten_01],
    [
        ["50Rnd_570x28_SMG_03", 24],
        ["ACE_Handflare_Green", 12],
        ["SmokeShellOrange", 6],
        ["B_Parachute", 5]
    ]
] call ttt_common_fnc_crateFiller;

// Markiermittel 
// Mehrfachnennung ist gewollt
[
    [marker_01],
    [
        ["ACE_SpraypaintGreen", 4],
        ["ACE_SpraypaintRed", 4],
        ["ACE_SpraypaintBlack", 4],
        ["ACE_SpraypaintBlue", 4],

        ["ace_marker_flags_green", 20],
        ["ace_marker_flags_red", 20],
        ["ace_marker_flags_yellow", 20],

        ["ace_marker_flags_black", 20],
        ["ace_marker_flags_red", 20],
        ["ace_marker_flags_purple", 20],
        ["ace_marker_flags_orange", 20],

        ["ace_marker_flags_orange", 20],

        ["mts_items_flag_blue", 4],
        ["mts_items_flag_red", 4]
    ]
] call ttt_common_fnc_crateFiller;

// Pionierbedarf
[
    [explosives_01, explosives_02, explosives_03],
    [
        ["DemoCharge_Remote_Mag", 12],
        ["tsp_frameCharge_mag", 12],
        ["SLAMDirectionalMine_Wire_Mag", 5],
        ["ATMine_Range_Mag", 5],

        ["rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red", 8],
        ["rhs_mag_30Rnd_556x45_M855A1_PMAG", 24],

        ["ACE_M84", 8],
        ["rhs_mag_m67", 8],
        ["SmokeShell", 8],
        ["SmokeShellGreen", 8]
    ]
] call ttt_common_fnc_crateFiller;

// Fahrzeugmunition
[
    [vehicle_ammo_01, vehicle_ammo_02, vehicle_ammo_03],
    [
        ["UK3CB_BAF_127_100Rnd", 15],
        ["UK3CB_BAF_762_200Rnd_T", 15]
    ]
] call ttt_common_fnc_crateFiller;


///////////////////
// Set Up Grad Fortifications
// 2-6 nur für erste Mission, 1 immer verfügbar
// 7 für Mission 4
///////////////////

// Kiste 1 - Verteidigungsanlagen #
[bau_supplies_01, "Land_Razorwire_F", 10] call grad_fortifications_fnc_addFort;
[bau_supplies_01, "Land_BagFence_Short_F", 20] call grad_fortifications_fnc_addFort;
[bau_supplies_01, "Land_SandbagBarricade_01_half_F", 10] call grad_fortifications_fnc_addFort;

// Kiste 2 - Zelte #
[bau_supplies_02, "CampEast_EP1", 8] call grad_fortifications_fnc_addFort;

// Kiste 3 - Medic 
[bau_supplies_03, "MASH_EP1", 4] call grad_fortifications_fnc_addFort; 
[bau_supplies_03, "Land_IntravenStand_01_empty_F", 7] call grad_fortifications_fnc_addFort; 
[bau_supplies_03, "Land_Stretcher_01_F", 7] call grad_fortifications_fnc_addFort; 

// Kiste 4 - Innenaustattung #
[bau_supplies_04, "Land_Stretcher_01_olive_F", 40] call grad_fortifications_fnc_addFort;
[bau_supplies_04, "Land_CampingTable_white_F", 1] call grad_fortifications_fnc_addFort;
[bau_supplies_04, "Land_MapBoard_F", 1] call grad_fortifications_fnc_addFort;
[bau_supplies_04, "PlasticBarrier_02_grey_F", 10] call grad_fortifications_fnc_addFort;

// Kiste 5 - TTT Schilder #
[bau_supplies_05, "TTT_Sign_Small_Blue", 1] call grad_fortifications_fnc_addFort;
[bau_supplies_05, "TTT_Sign_Small_Black", 5] call grad_fortifications_fnc_addFort;
[bau_supplies_05, "TTT_Sign_Small_Platinum", 1] call grad_fortifications_fnc_addFort;
[bau_supplies_05, "TTT_Sign_Small_Silver", 1] call grad_fortifications_fnc_addFort;
[bau_supplies_05, "TTT_Sign_Small_White", 1] call grad_fortifications_fnc_addFort; 
[bau_supplies_05, "TTT_Flag_White", 1] call grad_fortifications_fnc_addFort; 
[bau_supplies_05, "TTT_Sign_Logo", 1] call grad_fortifications_fnc_addFort;

// Kiste 6 - misc #
[bau_supplies_06, "Land_Toilet", 3] call grad_fortifications_fnc_addFort;
[bau_supplies_06, "Land_Sink_F", 3] call grad_fortifications_fnc_addFort;
[bau_supplies_06, "Windsock_01_F", 3] call grad_fortifications_fnc_addFort;

// Kiste 7 - Verteidigungsanlagen in Zelenogorsk #
[bau_supplies_07, "Land_Razorwire_F", 5] call grad_fortifications_fnc_addFort;
[bau_supplies_07, "Land_BagFence_Long_F", 10] call grad_fortifications_fnc_addFort;
[bau_supplies_07, "Land_SandbagBarricade_01_F", 5] call grad_fortifications_fnc_addFort;


// Cargo Space auf 0 setzen damit die Kisten nicht für andere Dinge missbraucht werden
{
    [_x, 0] call ace_cargo_fnc_setSpace;
    
} forEach [bau_supplies_01, bau_supplies_02, bau_supplies_03, bau_supplies_04, bau_supplies_05, bau_supplies_06, bau_supplies_07];