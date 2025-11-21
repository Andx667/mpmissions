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
        ["CUP_30Rnd_556x45_Stanag", 30],
        ["CUP_200Rnd_TE4_Red_Tracer_556x45_M249", 12],
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
        ["ACE_VMH3", 1]
    ]
] call ttt_common_fnc_crateFiller;

[
    [fhz_01, fhz_03, fhz_05],
    [
        ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 12],
        ["dzn_MG_Tripod_M122A1_M240Mount_Carry", 1],
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
        ["B_AssaultPack_blk", 1]
    ]
] call ttt_common_fnc_crateFiller;

{
    {
        // Füllt alle schwarzen Rucksäcke in den Fhz mit einem Werkzeugkasten
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
        };
    } forEach (everyBackpack _x);
} forEach [fhz_01, fhz_02, fhz_03, fhz_04, fhz_05, heli_01, heli_02];
