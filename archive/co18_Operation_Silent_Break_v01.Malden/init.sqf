/*
	 * Author: TTT
	 * Runs globally on mission start
	 * Executed globally before briefing screen (does not run again for JIP players unlike editor init field)
	 * Executes before initPlayerLocal and initPlayerServer
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

// Streamator
if !(isNil "CLib_fnc_loadModules") then {
	call CLib_fnc_loadModules;
};

//Setzt KI Skill für Einheiten die Während der Mission erzeugt werden
addMissionEventHandler ["EntityCreated", {
    params ["_entity"];

    if !(_entity isKindOf "CAManBase") exitWith {};

    if (side _entity != west) then {
        _entity setSkill ["general", 0.75];
        _entity setSkill ["commanding", 0.75];
        _entity setSkill ["courage", 0.75];
        _entity setSkill ["aimingAccuracy", 0.65];
        _entity setSkill ["aimingShake", 0.65];
        _entity setSkill ["aimingSpeed", 0.65];
        _entity setSkill ["reloadSpeed", 0.75];
        _entity setSkill ["spotDistance", 0.85];
        _entity setSkill ["spotTime", 0.85];
        _entity enableAI "COVER";
        _entity enableAI "AUTOCOMBAT";
    };
}];
["ace_grenades_flashbangedAI", {
    params ["_unit", "_strength", "_grenadePosASL"];
    if (isPlayer _unit || _unit getVariable ["dro_flashbangSurrenderResisted", false]) exitWith {};

    if (_strength > 0.5) exitWith {
        if (vehicle _unit != _unit) then {moveOut _unit};
        if (currentWeapon _unit != "") then {
            [_unit] call ace_common_fnc_throwWeapon;
        };
        [_unit, true] remoteExecCall ["ACE_captives_fnc_setSurrendered", _unit];
    };
    _unit setVariable ["dro_flashbangSurrenderResisted", true];
}] call CBA_fnc_addEventHandler;