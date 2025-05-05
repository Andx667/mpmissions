/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2022, 6, 25, 11, 15]; //Datum ändern

{
    if (side _x != west) then {
        _x setBehaviour "SAFE";
        _x setCombatMode "WHITE";
        _x setSpeedMode "LIMITED";

        _x setSkill ["general", 0.75];
        _x setSkill ["commanding", 0.75];
        _x setSkill ["courage", 0.75];
        _x setSkill ["aimingAccuracy", 0.65];
        _x setSkill ["aimingShake", 0.65];
        _x setSkill ["aimingSpeed", 0.65];
        _x setSkill ["reloadSpeed", 0.75];
        _x setSkill ["spotDistance", 0.85];
        _x setSkill ["spotTime", 0.85];
        _x enableAI "COVER";
        _x enableAI "AUTOCOMBAT";
    };
} forEach allUnits;

[
    [heli_01, mtvr_01], //Werfer
    [
        ["B_AssaultPack_blk", 1],
        ["Toolkit", 1]
    ],
    true
] call ttt_common_fnc_crateFiller;

[
    [ammo_01, ammo_02, ammo_03, ammo_04, ammo_05, ammo_06], //Munition
    [
        ["CUP_17Rnd_9x19_glock17", 8],
        ["CUP_30Rnd_556x45_Emag", 24],
        ["CUP_30Rnd_556x45_Emag_Tracer_Red", 24],
        ["CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl", 8],
        ["CUP_20Rnd_762x51_B_SCAR_bkl", 8],
        ["CUP_100Rnd_TE4_Red_Tracer_556x45_M249", 5],
        ["CUP_6Rnd_12Gauge_Pellets_No00_Buck", 6]
    ],
    true
] call ttt_common_fnc_crateFiller;

[
    [grenades_01, grenades_02, grenades_03, grenades_04, grenades_05, grenades_06], //Granaten
    [
        ["CUP_1Rnd_HE_M203", 30],
        ["CUP_1Rnd_HEDP_M203", 10],
        ["1Rnd_Smoke_Grenade_shell", 10],
        ["1Rnd_SmokeRed_Grenade_shell", 10],

        ["CUP_HandGrenade_M67", 16],
        ["SmokeShell", 16],
        ["SmokeShellGreen", 8]
    ],
    true
] call ttt_common_fnc_crateFiller;

[
    [launcher_01, launcher_02, launcher_03, launcher_04], //Werfer
    [
        ["CUP_launch_M136", 2]
    ],
    true
] call ttt_common_fnc_crateFiller;

//VBT
//VBA
//Sprengstoff
//über TTT Standardkisten

[
    [spreng_01, spreng_02, spreng_03, spreng_04], //Werfer
    [
        ["tsp_breach_block_mag", 3],
        ["tsp_breach_package_mag", 3]
    ],
    false
] call ttt_common_fnc_crateFiller;

[
    [vbt_01, vbt_02, vbt_03, vbt_04, vbt_05, vbt_06], //Werfer
    [
        ["ACE_SalineIV_250", 8],
        ["ACE_salineIV_500", 4]
    ],
    false
] call ttt_common_fnc_crateFiller;

