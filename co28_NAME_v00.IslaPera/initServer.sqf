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

{
    // [_x, "Land_BagBunker_01_large_green_F", 1] call grad_fortifications_fnc_addFort;
    [_x, "Land_BagFence_01_corner_green_F", 10] call grad_fortifications_fnc_addFort;
    [_x, "Land_BagFence_01_long_green_F", 10] call grad_fortifications_fnc_addFort;
    [_x, "Land_Razorwire_F", 3] call grad_fortifications_fnc_addFort;
} forEach [dingo_01, dingo_02, dingo_03, dingo_04, dingo_05];
