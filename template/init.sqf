/*
    Die init.sqf wird sowohl auf dem Server, den Headless Clients und den
    verbundenen Spielern einmal bei Missionstart (und JIP) ausgeführt.

    !!! Achtung !!!
    Da die init.sqf im Singleplayer nicht genau so funktioniert wie im
    Multiplayer wird davon abgeraten sie zu verwenden. Stattdessen sollten
    initServer.sqf und initPlayerLocal.sqf verwendet werden.
    Mehr Informationen dazu unter
    https://community.bistudio.com/wiki/Initialization_Order
 */

//Laden von CLib Modulen für den Streamator
if !(isNil "CLib_fnc_loadModules") then {call CLib_fnc_loadModules;};

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
