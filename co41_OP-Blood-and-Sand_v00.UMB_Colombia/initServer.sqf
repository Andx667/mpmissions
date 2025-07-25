/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2016, 6, 25, 11, 15]; //Datum ändern

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


ACE_maxWeightCarry = 750; //wie schwer kann man Tragen
ACE_maxWeightDrag = 1750;  //wie schwer kann man ziehen

// Fahrzeuge allgemein
[
    [fhz_log_01, fhz_log_02, fhz_med_01, fhz_med_02],
    [
        ["B_AssaultPack_blk", 1],
        ["Toolkit", 1]
    ],
    true
] call ttt_common_fnc_crateFiller;

// Fahrzeuge Med
[
    [fhz_med_01, fhz_med_02],
    [
        ["ACE_Persoanalaidkit", 6]
    ],
    false
] call ttt_common_fnc_crateFiller;

//Kisten allgemein
[
    [ammo_01, ammo_02, ammo_03, ammo_04, ammo_05, ammo_06, ammo_07, ammo_08, ammo_09, ammo_10, ammo_11, ammo_12],
    [
        ["CUP_30Rnd_556x45_Stanag_Tracer_Red", 30],
        ["CUP_30Rnd_556x45_Stanag", 30],
        ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 25],
        ["ACE_20Rnd_762x51_M118LR_Mag", 8],
        ["ACE_20Rnd_762x51_Mag_Tracer", 8]
    ],
    true
] call ttt_common_fnc_crateFiller;

[
    [grenades_01, grenades_02, grenades_03, grenades_04, grenades_05, grenades_06, grenades_07, grenades_08, grenades_09, grenades_10, grenades_11, grenades_12],
    [
        ["CUP_HandGrenade_M67", 25],
        ["SmokeShell", 25],
        ["SmokeShellGreen", 13],
        ["CUP_1Rnd_HE_M203", 50],
        ["CUP_1Rnd_HEDP_M203", 12],
        ["CUP_1Rnd_SmokeRed_M203", 12],
        ["CUP_1Rnd_Smoke_M203", 12]
    ],
    true
] call ttt_common_fnc_crateFiller;

[
    [launcher_01, launcher_02, launcher_03, launcher_04],
    [
        ["CUP_SMAW_HEAA_M", 4],
        ["CUP_SMAW_HEDP_M", 4],
        ["CUP_SMAW_Spotting", 5]
    ],
    true
] call ttt_common_fnc_crateFiller;

[
    [pio_01],
    [
        ["ACE_M14", 10]
    ],
    false
] call ttt_common_fnc_crateFiller;

[
    [boat_01, boat_02],
    [
        ["Tookit", 1]
    ],
    true
] call ttt_common_fnc_crateFiller;

{
    [_x, fhz_log_02, true] call ace_cargo_fnc_loadItem;
} forEach [
    ammo_01, ammo_02, ammo_03, ammo_04, ammo_05, ammo_06, ammo_07, ammo_08, ammo_09, ammo_10, ammo_11,
    grenades_01, grenades_02, grenades_03, grenades_04, grenades_05, grenades_06, grenades_07, grenades_08, grenades_09, grenades_10, grenades_11,
    launcher_01, launcher_02, launcher_03, launcher_04,
    pio_01,
    vba_01,
    vbt_01, vbt_02, vbt_03, vbt_04, vbt_05
];

{
    [_x, fhz_med_02, true] call ace_cargo_fnc_loadItem;
} forEach [
    vba_02,
    vbt_06
];
