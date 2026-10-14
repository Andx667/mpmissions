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

        _x setSpeedMode "LIMITED";

        _x enableAI "COVER";
    };
} forEach allUnits;


[
    [test_01],
    [
        ["B_CombinationUnitRespirator_01_F", 4]
    ],
    true
] call ttt_common_fnc_crateFiller;