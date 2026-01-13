/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2025, 8, 21, 18, 00]; //Datum ändern

{
    _x setBehaviour "AWARE";
    _x setCombatMode "YELLOW";
    _x setSpeedMode "LIMITED";

    [_x, "Recruit"] call ttt_common_fnc_setAISkillLevel;

    _x enableAI "COVER";
    _x enableAI "AUTOCOMBAT";

    _x linkItem "CUP_NVG_PVS7";
} forEach units opfor;

[
    [grenades_01],
    [
        ["ACE_M84", 10],
        ["SmokeShell", 10],
        ["CUP_HandGrenade_M67", 5],
        ["CUP_1Rnd_HEDP_M203", 10]
    ]
] call ttt_common_fnc_crateFiller;

[
    [ammo_01],
    [
        ["CUP_30Rnd_556x45_PMAG_BLACK_RPL", 8],
        ["CUP_100Rnd_TE4_Red_Tracer_556x45_M249", 10]
    ]
] call ttt_common_fnc_crateFiller;

[
    [launcher_01],
    [
        ["CUP_launch_M72A6", 4]
    ]
] call ttt_common_fnc_crateFiller;