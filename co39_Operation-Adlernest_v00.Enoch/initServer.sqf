/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2026, 6, 25, 11, 00]; //Datum ändern

{
    if (side _x != west) then {
        [_x] call ttt_common_fnc_setAISkill;

        _x setBehaviour "SAFE";
        _x setCombatMode "WHITE";
        _x setSpeedMode "LIMITED";

        _x enableAI "COVER";
        _x enableAI "AUTOCOMBAT";
    };
} forEach allUnits;


{//Fhz Inventar vergrößern
    _x setMaxLoad 5000;
} foreach [boxer_01, boxer_02, boxer_03, boxer_04, boxer_05, boxer_06];

[//Alle Boxer
    [boxer_01, boxer_02, boxer_03, boxer_04, boxer_05, boxer_06],
    [
        //Rucksäcke
        ["B_AssaultPack_blk", 1], //Werkzeugkasten
        ["BWA3_Kitbag_Fleck", 1], //Spreng/Blend

        //Ersatz/MG
        ["BWA3_G36A3_ZO4x30_RSAS_pointer", 1],

        //Munition
        ["BWA3_30Rnd_556x45_G36_AP", 45],
        ["BWA3_30Rnd_556x45_G36_Tracer", 15],
        ["BWA3_120Rnd_762x51_Tracer_soft", 10],
        ["BWA3_200Rnd_556x45_Tracer_soft", 10],
        ["BWA3_15Rnd_9x19_P8", 12],

        //Werfer
        ["BWA3_PzF3_Tandem_Loaded", 4],
        ["BWA3_Bunkerfaust_Loaded", 2],

        //Granten
        ["1Rnd_HE_Grenade_shell", 30],
        ["1Rnd_SmokeRed_Grenade_shell", 5],
        ["1Rnd_Smoke_Grenade_shell", 5],
        ["BWA3_DM25", 20],
        ["BWA3_DM51A1", 20],

        //Tools
        ["ACE_EntrenchingTool", 7],
        ["ACE_TacticalLadder_Pack", 1],

        // Medical restock for 10 soldiers
        ["KAT_Painkiller", 20],
        ["ACE_elasticBandage", 100],
        ["ACE_packingBandage", 100],
        ["ACE_Quikclot", 100],
        ["ACE_Tourniquet", 40],
        ["KAT_chestSeal", 20]
    ],
    true
 ] call ttt_common_fnc_crateFiller;

 [//ZgF Boxer
    [boxer_01, boxer_06],
    [
        ["BWA3_PatrolPack_Fleck", 1],
        ["BWA3_MG5_tan_ZO4x30i_pointer", 1],
        ["ITC_Land_B_AR2i_Packed", 1]
    ],
    false
 ] call ttt_common_fnc_crateFiller;

 [//Grp Boxer
    [boxer_02, boxer_03, boxer_04, boxer_05],
    [
        ["ace_gunbag", 1],
        ["BWA3_MG4_ZO4x30_pointer", 1],
        ["BWA3_200Rnd_556x45_Tracer", 10]
    ],
    false
 ] call ttt_common_fnc_crateFiller;

 {
    {
        // Füllt alle schwarzen Rucksäcke in den Fhz mit einem Werkzeugkasten
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
        };
        if (typeof _x == "BWA3_Kitbag_Fleck") then {
            _x addItemCargoGlobal ["BWA3_DM25", 12];
            _x addItemCargoGlobal ["tsp_breach_package_mag", 5];
            _x addItemCargoGlobal ["tsp_breach_block_auto_mag", 5];
            _x addItemCargoGlobal ["ACE_wirecutter", 1];
            _x addItemCargoGlobal ["mts_cutter_folding_saw", 1];
            _x addItemCargoGlobal ["ACE_Clacker", 1];
        };
        //MG5 Hilf für ZgF
        if (typeof _x == "BWA3_PatrolPack_Fleck") then {
            _x addItemCargoGlobal ["BWA3_120Rnd_762x51_Tracer_soft", 5];
            _x addItemCargoGlobal ["ACE_SpareBarrel", 1];
            _x addItemCargoGlobal ["ACE_EntrenchingTool", 1];
        };
        //G27/G28 DMR
        if (typeof _x == "ace_gunbag") then {
            // private _weapon = "BWA3_G28";
            // private _items = [
            //     "BWA3_optic_PMII_DMR_MicroT1_rear",
            //     "BWA3_muzzle_snds_Rotex_IIA",
            //     "BWA3_bipod_Harris_tan",
            //     "CUP_acc_LLM_black"
            //     ];
            private _weapon = "BWA3_G27";
            private _items = [
                "BWA3_optic_ZO4x30i_MicroT2",
                "CUP_acc_LLM_black",
                "CUP_muzzle_snds_socom762rc",
                "BWA3_bipod_Harris"
            ];
            private _magazines = [
                ["BWA3_20Rnd_762x51_G28_LR", 20]
                ];
            _x setVariable ["ace_gunbag_gunbagWeapon", [_weapon , _items, _magazines], true];
            _x addItemCargoGlobal ["BWA3_20Rnd_762x51_G28_LR", 5];
            _x addItemCargoGlobal ["ACE_Rangecard", 1];
            _x addItemCargoGlobal ["ACE_Yardage450", 1];
        };
    } forEach (everyBackpack _x);
} forEach [boxer_01,boxer_02,boxer_03,boxer_04,boxer_05, boxer_06];


//San Kisten einladen
[sanb_01, boxer_02, true] call ace_cargo_fnc_loadItem;
[sanb_02, boxer_03, true] call ace_cargo_fnc_loadItem;
[sanb_03, boxer_04, true] call ace_cargo_fnc_loadItem;
[sanc_01, boxer_01, true] call ace_cargo_fnc_loadItem;
[sanc_02, boxer_01, true] call ace_cargo_fnc_loadItem;

//Mehr Munition für die Boxer
{
    _x addMagazinesTurret ["CUP_200Rnd_TE1_Red_Tracer_127x99_M", [0], 5];
    _x setVariable ["ace_rearm_scriptedLoadout", true, true];
} foreach [boxer_01, boxer_02, boxer_03, boxer_04, boxer_05, boxer_06]