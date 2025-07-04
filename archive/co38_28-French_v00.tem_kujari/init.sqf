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

// Sets ACRE2 channel names
{
    [_x, "default", "TTT"] call acre_api_fnc_copyPreset;
    [_x, "TTT", 1, "label", "PLT NET 1"] call acre_api_fnc_setPresetChannelField;      // Kampfkreis
    [_x, "TTT", 2, "label", "PLT NET 2"] call acre_api_fnc_setPresetChannelField;
    [_x, "TTT", 3, "label", "PLT NET 3"] call acre_api_fnc_setPresetChannelField;
    [_x, "TTT", 4, "label", "COY NET"] call acre_api_fnc_setPresetChannelField;   // Zugführung <-> Zeus/HQ
    [_x, "TTT", 5, "label", "CAS"] call acre_api_fnc_setPresetChannelField;             // JTAC <-> Fluggerät
    [_x, "TTT", 6, "label", "ATC"] call acre_api_fnc_setPresetChannelField;             // Flugfunk
    [_x, "TTT", 7, "label", "SUPPORT"] call acre_api_fnc_setPresetChannelField;         // Zugführung <-> Aufklärer/Pioniere/etc
    [_x, "TTT", 8, "label", "FIRES"] call acre_api_fnc_setPresetChannelField;           // FO <-> Artillere/Mörser
    [_x, "TTT", 9, "label", "LOGISTICS"] call acre_api_fnc_setPresetChannelField;       // Zugführung <-> Sanität und Logistik

    //Funknamen anpassen!
    [_x, "TTT", 10, "label", "Fox"] call acre_api_fnc_setPresetChannelField;           // Zugführung intern
    [_x, "TTT", 11, "label", "Fox-1"] call acre_api_fnc_setPresetChannelField;         // 1. Gruppe
    [_x, "TTT", 12, "label", "Fox-2"] call acre_api_fnc_setPresetChannelField;         // 2. Gruppe
    [_x, "TTT", 13, "label", "Fox-3"] call acre_api_fnc_setPresetChannelField;         // 3. Gruppe
    [_x, "TTT", 14, "label", "Eagle-1"] call acre_api_fnc_setPresetChannelField;         // Hubschrauber
    [_x, "TTT", 15, "label", "Eagle-2"] call acre_api_fnc_setPresetChannelField;         // Hubschrauber
    [_x, "TTT"] call acre_api_fnc_setPreset;
} forEach ["ACRE_PRC148", "ACRE_PRC152", "ACRE_PRC117F"];
