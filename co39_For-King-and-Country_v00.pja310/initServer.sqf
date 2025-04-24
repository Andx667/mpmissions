/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2022, 5, 25, 3, 45]; //Datum ändern

{
    if (side _x != west) then {
        _x setBehaviour "SAFE";
        _x setCombatMode "YELLOW";
        _x setSpeedMode "NORMAL";

        _x setSkill ["general", 0.75];
        _x setSkill ["commanding", 0.75];
        _x setSkill ["courage", 0.75];
        _x setSkill ["aimingAccuracy", 0.5];
        _x setSkill ["aimingShake", 0.35];
        _x setSkill ["aimingSpeed", 0.5];
        _x setSkill ["reloadSpeed", 0.75];
        _x setSkill ["spotDistance", 0.8];
        _x setSkill ["spotTime", 0.8];
        _x enableAI "COVER";
        _x enableAI "AUTOCOMBAT";
    };
} forEach allUnits;

// Kisten befüllen
// Fhz Basis
[
    [quad_01, mtvr_01, mtvr_02, mtvr_03, plane_01, plane_02],
    [
        ["Toolkit", 1],
        ["B_AssaultPack_blk" ,1]
    ],
    true
] call ttt_common_fnc_crateFiller;

// Kisten
// Inf Mun
[
    [ammo_01, ammo_02, ammo_03, ammo_04, ammo_05, ammo_06, ammo_07],
    [
        ["CUP_30Rnd_556x45_Stanag_L85", 30],
        ["CUP_30Rnd_556x45_Stanag_L85_T", 15],
        ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10],
        ["CUP_20Rnd_762x51_L129_M", 15],
        ["CUP_17Rnd_9x19_glock17", 5]
    ],
    true
] call ttt_common_fnc_crateFiller;

// Granaten
[
    [gren_01, gren_02, gren_03, gren_04, gren_05, gren_06, gren_07],
    [
        ["CUP_1Rnd_HE_M203", 40],
        ["CUP_1Rnd_HEDP_M203", 10],
        ["CUP_HandGrenade_L109A2_HE", 16],
        ["SmokeShell", 16],
        ["SmokeShellGreen", 8]
    ],
    true
] call ttt_common_fnc_crateFiller;

// Launcher
[
    [launcher_01, launcher_02, launcher_03, launcher_04],
    [
        ["CUP_launch_NLAW", 2]
    ],
    true
] call ttt_common_fnc_crateFiller;

//VBT, VBA, Spreng, Fallschirme über TTT-Standardkisten

// grad-fortifications
[equip_01, "PortableHelipadLight_01_green_F", 10] call grad_fortifications_fnc_addFort;
[equip_01, "PortableHelipadLight_01_red_F", 10] call grad_fortifications_fnc_addFort;