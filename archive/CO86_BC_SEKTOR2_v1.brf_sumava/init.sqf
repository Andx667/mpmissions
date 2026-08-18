CHVD_allowNoGrass = false;
CHVD_maxView = 7500; // Sichtweite in Metern
CHVD_maxObj = 5000; // Objektsichtweite muss kleiner als Sichtweite sein


//======================FUNK KANÄLE======================
// Sets ACRE2 channel names
{
    [_x, "default", "TTT"] call acre_api_fnc_copyPreset;
    [_x, "TTT", 1, "label", "OPZ"] call acre_api_fnc_setPresetChannelField;      		// OPZ
    [_x, "TTT", 2, "label", "GELB-OPL1"] call acre_api_fnc_setPresetChannelField;		// KpFührung <-> OPL-KPCHEF
    [_x, "TTT", 3, "label", "GELB-OPL2"] call acre_api_fnc_setPresetChannelField;		// KpFührung <-> OPL-FUNKER/Alternativ
    [_x, "TTT", 4, "label", "NSCHFW"] call acre_api_fnc_setPresetChannelField;   		// Logistik Anforderung 
    [_x, "TTT", 5, "label", "BRONZE-ZGFHR"] call acre_api_fnc_setPresetChannelField;	// KPZ Zugführung             
    [_x, "TTT", 6, "label", "ROT-ZGFHR"] call acre_api_fnc_setPresetChannelField;       // PZGREN Zugführung
    [_x, "TTT", 7, "label", "GOLD-AUFKL"] call acre_api_fnc_setPresetChannelField;      // SPÄHTRP-Aufklärer
    [_x, "TTT", 8, "label", "VIOLETT-AA"] call acre_api_fnc_setPresetChannelField;      // LUFTABWEHRPANZER GEPARD
	[_x, "TTT", 9, "label", "WEISS-SANB"] call acre_api_fnc_setPresetChannelField;      // SANITÄTER
    [_x, "TTT", 10, "label", "SILBER-LOG"] call acre_api_fnc_setPresetChannelField;     // LOGISTIK

    //Funknamen anpassen!
    [_x, "TTT", 11, "label", "BRONZE 1"] call acre_api_fnc_setPresetChannelField;       	// Zugführung intern
    [_x, "TTT", 12, "label", "BRONZE 2"] call acre_api_fnc_setPresetChannelField;         	// 2. Gruppe
    [_x, "TTT", 13, "label", "BRONZE 3"] call acre_api_fnc_setPresetChannelField;         	// 3. Gruppe
    [_x, "TTT", 14, "label", "BRONZE 4"] call acre_api_fnc_setPresetChannelField;         	// 4. Gruppe
    [_x, "TTT", 15, "label", "ROT 1"] call acre_api_fnc_setPresetChannelField;           		// Zugführung intern
    [_x, "TTT", 16, "label", "ROT 2"] call acre_api_fnc_setPresetChannelField;         			// 2. Gruppe
    [_x, "TTT", 17, "label", "ROT 3"] call acre_api_fnc_setPresetChannelField;         			// 3. Gruppe
    [_x, "TTT", 18, "label", "ROT 4"] call acre_api_fnc_setPresetChannelField;         			// 4. Gruppe
	[_x, "TTT", 19, "label", "GOLD 1"] call acre_api_fnc_setPresetChannelField;           			// SPÄHTRP 1
    [_x, "TTT", 20, "label", "GOLD 2"] call acre_api_fnc_setPresetChannelField;           			// SPÄHTRP 2
    [_x, "TTT", 21, "label", "VIOLETT"] call acre_api_fnc_setPresetChannelField;          				// GEPARD Luftabwehr
    [_x, "TTT", 22, "label", "WEISS-SANB"] call acre_api_fnc_setPresetChannelField;         				// Sanitäter
	[_x, "TTT", 23, "label", "SILBER-LOG"] call acre_api_fnc_setPresetChannelField;         					// Logistik
	[_x, "TTT", 24, "label", "OPL-INT"] call acre_api_fnc_setPresetChannelField;         	// OPL-INTERN

    [_x, "TTT"] call acre_api_fnc_setPreset;
} forEach ["ACRE_PRC117F", "ACRE_PRC152"];


//======================STREAMATOR======================
if !(isNil "CLib_fnc_loadModules") then { call CLib_fnc_loadModules; };