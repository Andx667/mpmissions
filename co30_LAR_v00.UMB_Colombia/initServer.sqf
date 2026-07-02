/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2016, 6, 25, 11, 15]; //Datum ändern

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

//Fhz allgemein
[
    [fhz_01, fhz_02, fhz_03, fhz_04, fhz_05],
    [
        //Ammo
        ["CUP_30Rnd_556x45_Stanag", 60],
        ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 16],
        //Grenades
        ["CUP_HandGrenade_M67", 18],
        ["SmokeShell", 18],
        ["SmokeShellGreen", 12],
        ["ACE_M84", 18],
        ["CUP_1Rnd_HE_M203", 15],
        ["CUP_1Rnd_HEDP_M203", 15],
        ["CUP_1Rnd_SmokeRed_M203", 15],
        ["CUP_1Rnd_Smoke_M203", 15],
        //Utils
        ["ACE_EntrenchingTool", 3],
        ["B_AssaultPack_blk", 1],
        ["ACE_Wirecutter", 3],
        ["CUP_B_USMC_MOLLE", 1],
        ["CUP_launch_M136", 1],
        ["ACE_VMH3", 1],
        //San
        ["ACE_elasticBandage", 40],
        ["ACE_packingBandage", 40],
        ["ACE_quikClot", 40],
        ["ACE_tourniquet", 12],
        ["kat_chestSeal", 12],
        ["kat_Painkiller", 5]
    ]
] call ttt_common_fnc_crateFiller;

[
    [fhz_01, fhz_03, fhz_05],
    [
        ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 12],
        ["dzn_MG_Tripod_M122A1_M240Mount_Carry", 1],
        ["CUP_lmg_M240_norail", 1],
        ["ACE_SpareBarrel", 2],
        ["CUP_B_USMC_MOLLE", 1]
    ],
    false
] call ttt_common_fnc_crateFiller;

[
    [fhz_03, fhz_05],
    [
        ["CUP_srifle_M107_LeupoldMk4", 1],
        ["CUP_10Rnd_127x99_M107", 10]
    ],
    false
] call ttt_common_fnc_crateFiller;

[
    [fhz_02, fhz_04, fhz_05],
    [
        ["CUP_B_USMC_MOLLE", 1],
        ["CUP_launch_MAAWS_Scope", 1],
        ["CUP_MAAWS_HEDP_M", 4],
        ["CUP_MAAWS_HEAT_M", 8]
    ],
    false
] call ttt_common_fnc_crateFiller;

[
    [heli_01, heli_02],
    [
        ["ACE_elasticBandage", 75],
        ["ACE_packingBandage", 70],
        ["ACE_tourniquet", 15],
        ["kat_chestSeal", 15],

        ["kat_epinephrineIV", 15],
        ["ACE_epinephrine", 15],
        ["kat_ketamine", 10],
        ["kat_naloxone", 10],
        ["kat_fentanyl", 10],
        ["kat_Penthrox", 5],
        ["kat_Painkiller", 5],
        ["kat_lidocaine", 10],
        ["kat_nitroglycerin", 10],
        ["kat_norepinephrine", 10],
        ["kat_phenylephrine", 10],
        ["kat_amiodarone", 10],
        ["kat_atropine", 10],
        ["kat_TXA", 15],
        ["kat_EACA", 10],

        ["ACE_surgicalKit", 1],
        ["ACE_suture", 80],
        ["kat_aatKit", 15],
        ["kat_BVM", 1],
        ["kat_pocketBVM", 3],
        ["kat_larynx", 15],
        ["kat_IV_16", 20],
        ["kat_IO_FAST", 15],
        ["kat_Pulseoximeter", 3],
        ["kat_X_AED", 1],
        ["kat_oxygenTank_150", 1],
        ["kat_accuvac", 1],

        ["ACE_bloodIV", 15],
        ["ACE_bloodIV_500", 15],
        ["ACE_bloodIV_250", 5],
        ["ACE_salineIV_250", 2],

        ["kat_basicDiagnostic", 1],
        ["ace_flags_blue", 1],
        ["ACE_SpraypaintBlue", 1],
        ["ACE_bodyBag", 1],
        ["SmokeShellBlue", 5]
    ]
] call ttt_common_fnc_crateFiller;

[
    [sanc_01, sanc_02],
    [
        ["TTT_personalAidKit", 3]
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
} forEach [fhz_01, fhz_02, fhz_03, fhz_04, fhz_05, heli_01, heli_02];


{
    _x addMagazinesTurret ["CUP_60Rnd_TE1_Red_Tracer_25mm_M242_APDS", [0], 4];
    _x addMagazinesTurret ["CUP_150Rnd_TE1_Red_Tracer_25mm_M242_HE", [0], 4];
    _x addMagazinesTurret ["CUP_400Rnd_TE4_Red_Tracer_762x51_M240_M", [0], 4];
    _x setVariable ["ace_rearm_scriptedLoadout", true, true];
} forEach [fhz_01, fhz_02, fhz_03, fhz_04, fhz_05]