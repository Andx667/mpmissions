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
        _x setCombatMode "YELLOW";
        _x setSpeedMode "NORMAL";

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
