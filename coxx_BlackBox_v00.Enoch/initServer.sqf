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

[car_07, "Land_BagFence_01_long_green_F", 30] call grad_fortifications_fnc_addFort;
[car_07, "VR_Area_01_square_2x2_yellow_F", 1] call grad_fortifications_fnc_addFort;

// Munition aus CfgLoadouts.hpp in die Fahrzeuge car_01 bis car_07 laden
[
    [car_01, car_02, car_03, car_04, car_05, car_07],
    [
        ["uk3cb_10rnd_magazine_sks_R", 60], // SKS (Schuetzen, TL/SL, Sanitaeter)
        ["UK3CB_CZ75_9_20Rnd", 20],         // CZ75 Pistole
        ["UK3CB_CZ550_5rnd_Mag_R", 20],     // CZ550 (Marksman, Spotter)
        ["rhsusf_8Rnd_00Buck", 16]          // M590 Schrotflinte (EOD)
    ],
    false
] call ttt_common_fnc_crateFiller;
