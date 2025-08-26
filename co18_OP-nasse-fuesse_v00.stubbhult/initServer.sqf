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

        [_x] call ttt_common_fnc_setAISkill;
        _x enableAI "COVER";
        _x enableAI "AUTOCOMBAT";
    };
} forEach allUnits;



[
    [fhz_01, fhz_02, fhz_03],
    [
        ["ACE_fieldDressing", 90],
        ["ACE_packingBandage", 90],
        ["ACE_Tourniquet", 24],
        ["ACE_Painkillers", 6],

        ["BWA3_15Rnd_9x19_P8", 8],
        ["BWA3_30Rnd_556x45_G36_AP", 40],
        ["BWA3_120Rnd_762x51_Tracer_soft", 10],
        ["BWA3_30Rnd_556x45_G36_Tracer", 20],

        ["BWA3_DM25", 12],
        ["BWA3_DM51A1", 12],
        ["BWA3_DM32_Green", 6],
        ["1Rnd_HE_Grenade_shell", 40],
        ["1Rnd_SmokeRed_Grenade_shell", 5],
        ["1Rnd_Smoke_Grenade_shell", 5],

        ["BWA3_G36A3", 1],
        ["ACE_Wirecutter", 1],
        ["ACE_EntrenchingTool", 1],

        ["B_AssaultPack_blk", 1]
    ]
] call ttt_common_fnc_crateFiller;

{
    {
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
        };
    } forEach (everyBackpack _x);

} forEach [fhz_01, fhz_02, fhz_03];
