/*
 * Author: TTT
 * Executes only on server at mission start
 * Executes before initPlayerLocal
 *
 * Arguments:
 * None
 *
 * Return Value
 * None
 *
 * Example:
 * None
 */


setDate [2015, 09, 08, 03, 50];

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
        _x setSkill ["spotDistance", 1];
        _x setSkill ["spotTime", 1];
        _x enableAI "COVER";
        _x enableAI "AUTOCOMBAT";
    };
} forEach allUnits;