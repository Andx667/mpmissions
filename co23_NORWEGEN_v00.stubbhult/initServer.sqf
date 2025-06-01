/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2016, 6, 25, 11, 15]; //Datum ändern

{
    if (side _x != west) then {
        _x setBehaviour "SAFE";
        _x setCombatMode "WHITE";
        _x setSpeedMode "LIMITED";

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

{
    {
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
        };
    } forEach (everyBackpack _x);

} forEach [heli_01];

[
    [
        [ammo_01, ammo_02, ammo_03, ammo_04, ammo_05, ammo_06],
        ["CUP_30Rnd_556x45_PMAG_BLACK", 30],
        ["CUP_17Rnd_9x19_glock17", 10],
        ["CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch", 12],
        ["CUP_6Rnd_12Gauge_Pellets_No00_Buck", 6],
    ],
    true
] call ttt_common_crateFiller;