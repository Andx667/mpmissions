/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2026, 6, 20, 4, 0]; //Datum ändern

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
    [heli_01, heli_02, heli_03, heli_04],
    [
        ["KAT_Painkiller", 10],
        ["ACE_elasticBandage", 50],
        ["ACE_Quikclot", 50],
        ["ACE_packingBandage", 50],
        ["ACE_Tourniquet", 20],

        ["CUP_HandGrenade_M67", 20],
        ["SmokeShell", 20],
        ["ACE_M84", 20],
        ["CUP_30Rnd_556x45_PMAG_BLACK_RPL", 30],
        ["CUP_30Rnd_556x45_PMAG_OD_RPL_Tracer_Red", 20],
        ["CUP_17Rnd_9x19_M17_Black", 10],
        ["CUP_100Rnd_TE4_Red_Tracer_556x45_M249", 15],

        ["tsp_breach_package_mag", 3],
        ["tsp_breach_block_mag", 3],
        ["CUP_6Rnd_12Gauge_Pellets_No00_Buck", 5],

        ["kat_ncdKit", 10],
        ["kat_pocketBVM", 3],
        ["ACE_SalineIV", 10],
        ["kat_larynx", 10],
        ["ACE_salineIV_500", 10],
        ["kat_chestSeal", 10],
        ["kat_ncdKit", 10],
        ["ACE_SalineIV_250", 10],

        ["ACE_Epinephrine", 10],
        ["kat_IV_16", 10],
        ["ACE_Morphine", 10],
        ["ACE_Suture", 10]
    ],
    true
] call ttt_common_fnc_crateFiller;