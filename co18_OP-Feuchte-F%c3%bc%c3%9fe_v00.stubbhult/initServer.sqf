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

{
    {
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
        };
    } forEach (everyBackpack _x);

} forEach [fhz_01, fhz_02];
