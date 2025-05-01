/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2026, 9, 19, 5, 00]; //Datum ändern

{
    if (side _x != west) then {
        _x setBehaviour "SAFE";
        _x setCombatMode "WHITE";
        _x setSpeedMode "LIMITED";

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

        _x linkItem "CUP_NVG_1PN138";
    };
} forEach allUnits;

//Helikopter befüllen
[
    [nh90_01, nh90_02, nh90_03, nh90_04, nh90_05],
    [
        ["B_AssaultPack_blk", 1],
        ["BWA3_Kitbag_Fleck", 1],

        ["BWA3_30Rnd_556x45_G36_AP", 50],
        ["BWA3_30Rnd_556x45_G36_Tracer", 20],
        ["BWA3_200Rnd_556x45_Tracer", 20],
        ["BWA3_20Rnd_762x51_G28_Tracer", 12],
        ["BWA3_20Rnd_762x51_G28_LR", 12],
        ["BWA3_15Rnd_9x19_P8", 10],

        ["BWA3_DM25", 20],
        ["BWA3_DM51A1", 20],
        ["ACE_M84", 20],

        ["BWA3_PzF3_Tandem_Loaded", 2],

        ["ACE_fieldDressing", 50],
        ["ACE_packingBandage", 20],
        ["ACE_Tourniquet", 8]
    ],
    true
] call ttt_common_fnc_crateFiller;


{
    {
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
        };

        if (typeof _x == "BWA3_Kitbag_Fleck") then {
            _x addItemCargoGlobal ["ACE_EntrenchingTool", 1];
            _x addItemCargoGlobal ["ACE_wirecutter", 1];
            _x addItemCargoGlobal ["mts_cutter_folding_saw", 1];
            _x addItemCargoGlobal ["tsp_breach_block_auto_mag", 3];
            _x addItemCargoGlobal ["BWA3_DM25", 10];
        };
    } forEach (everyBackpack _x);

} forEach [nh90_01, nh90_02, nh90_03, nh90_04, nh90_05];