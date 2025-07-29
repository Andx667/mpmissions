/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2020, 6, 25, 11, 15]; //Datum ändern

{
    if (side _x != west) then {
        [_x] call andx_fnc_setAISkill;

        _x setBehaviour "SAFE";
        _x setCombatMode "WHITE";
        _x setSpeedMode "LIMITED";

        _x enableAI "COVER";
        _x enableAI "AUTOCOMBAT";
    };
} forEach allUnits;

//Fhz befüllen
[
    [dingo_01, dingo_02, dingo_03, dingo_04, dingo_05],
    [
        //San A
        ["ACE_ElasticBandage", 50],
        ["ACE_packingBandage", 50],
        ["ACE_Tourniquet", 12],
        ["kat_chestSeal", 12],
        ["kat_Painkiller", 12],

        //Munition
        ["BWA3_30Rnd_556x45_G36_AP", 40],
        ["BWA3_20Rnd_762x51_G28_AP", 12],
        ["BWA3_20Rnd_762x51_G28_LR", 12],
        ["BWA3_200Rnd_556x45_Tracer", 10],
        ["CUP_6Rnd_12Gauge_Pellets_No00_Buck", 5],
        ["BWA3_15Rnd_9x19_P8", 12],

        //Granaten
        ["1Rnd_HE_Grenade_shell", 20],
        ["1Rnd_SmokeRed_Grenade_shell", 5],
        ["1Rnd_Smoke_Grenade_shell", 5],
        ["BWA3_DM32_Green", 10],
        ["BWA3_DM25", 20],
        ["BWA3_DM51A1", 20],

        //Werfer
        ["BWA3_PzF3_Tandem_Loaded", 1],

        //Sonstigen
        ["DemoCharge_Remote_Mag", 5],
        ["B_AssaultPack_blk", 1]
    ]
] call ttt_common_fnc_crateFiller;

[
    [dingo_01],
    [
        ["BWA3_120Rnd_762x51_Tracer_soft", 10],
        ["ACE_UAVBattery", 10],
        ["ITC_Land_B_AR2i_Packed", 1]
    ],
    false
] call ttt_common_fnc_crateFiller;

//San - B (Medic)
[
    [sanB_01, sanB_02, sanB_03, sanB_04, sanB_05],
    [
        //M
        ["ACE_packingBandage", 40],
        ["ACE_ElasticBandage", 40],
        ["ACE_tourniquet", 24],
        //A
        ["kat_larynx", 18],
        //R
        ["kat_chestSeal", 18],
        ["kat_ncdKit", 18],
        ["kat_pocketBVM", 1],
        ["kat_Pulseoximeter", 1],
        //C
        ["ACE_salineIV_250", 8],
        ["ACE_salineIV_500", 8],
        ["kat_IV_16", 18],
        ["ACE_epinephrine", 24],
        //H
        ["kat_Penthrox", 9],
        ["kat_naloxone", 9],
        ["kat_nalbuphine", 9],
        ["kat_Painkiller", 4],
        ["ACE_morphine", 9],
        ["ACE_Suture", 40]
    ]
] call ttt_common_fnc_crateFiller;

//San - C (Doctor)
[
    [sanC_01, sanC_02, sanC_03, sanC_04, heli_01, heli_02],
    [
        //M
        ["ACE_packingBandage", 40],
        ["ACE_ElasticBandage", 40],
        ["ACE_tourniquet", 24],
        //A
        ["kat_larynx", 18],
        ["kat_accuvac", 1],
        //R
        ["kat_chestSeal", 18],
        ["kat_aatKit", 18],
        ["kat_BVM", 1],
        ["kat_oxygenTank_150", 2],
        ["kat_Pulseoximeter", 1],
        //C
        ["ACE_BloodIV", 12],
        ["ACE_BloodIV_500", 8],
        ["ACE_BloodIV_250", 8],
        ["ACE_salineIV_250", 4],
        ["kat_X_AED", 1],
        ["kat_IV_16", 18],
        ["kat_IO_FAST", 4],
        ["kat_epinephrineIV", 24],
        ["kat_lidocaine", 16],
        ["kat_amiodarone", 12],
        //H
        ["kat_eaca", 10],
        ["kat_txa", 20],
        ["kat_fentanyl", 9],
        ["kat_atropine", 9],
        ["kat_ketamine", 9],
        ["ACE_Suture", 40]
    ]
] call ttt_common_fnc_crateFiller;
[
    [heli_01, heli_02],
    [
        ["B_AssaultPack_blk", 1]
    ],
    false
] call ttt_common_fnc_crateFiller;

{
    {
        // Füllt alle schwarzen Rucksäcke in den Fhz mit einem Werkzeugkasten
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
        };
    } forEach (everyBackpack _x);
} forEach [dingo_01, dingo_02, dingo_03, dingo_04, dingo_05, heli_01, heli_02];


[sanB_01, dingo_01] call ace_cargo_fnc_loadItem;
[sanB_02, dingo_02] call ace_cargo_fnc_loadItem;
[sanB_03, dingo_03] call ace_cargo_fnc_loadItem;
[sanB_04, dingo_04] call ace_cargo_fnc_loadItem;
[sanB_05, dingo_05] call ace_cargo_fnc_loadItem;
