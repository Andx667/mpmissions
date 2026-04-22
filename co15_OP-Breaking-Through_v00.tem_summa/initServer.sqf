/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2026, 4, 22, 16, 55];

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

[
    [fahrzeug_01],
    [
        ["Toolkit", 1]
    ],
    true
] call ttt_common_fnc_crateFiller;

[
    [ammo_01,ammo_02],
    [
        ["CUP_30Rnd_556x45_PMAG_BLACK_RPL", 30],
        ["CUP_100Rnd_TE4_Red_Tracer_556x45_M249", 10]
    ],
    true
] call ttt_common_fnc_crateFiller;        

[
    [launcher_01],
    [
        ["CUP_launch_M72A6_Special", 3]
    ],
    true
] call ttt_common_fnc_crateFiller; 

[
    [equip_01],
    [
        ["ttt_B_UAFPV_PG7VL_AT_CASE", 3],
        ["ITC_Land_B_AR2i_Packed", 1],
        ["ACE_UAVBattery", 5]
    ],
    true
] call ttt_common_fnc_crateFiller; 

[
    [gren_01],
    [
        ["CUP_1Rnd_HE_M203", 10],
        ["CUP_1Rnd_Smoke_M203", 5],
        ["CUP_HandGrenade_M67", 10],
        ["SmokeShell", 10]
    ],
    true
] call ttt_common_fnc_crateFiller; 