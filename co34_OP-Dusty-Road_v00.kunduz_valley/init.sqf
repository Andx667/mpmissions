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

    [_entity] call andx_fnc_setAISkill;
}];
