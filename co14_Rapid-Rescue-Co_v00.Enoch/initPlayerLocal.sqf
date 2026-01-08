/*
    Die initPlayerLocal.sqf wird für jeden Spieler einmal bei Missionsbeitritt
    ausgeführt, das heißt also entweder wenn die Mission gestartet wird (noch
    bevor das Briefing angezeigt wird), oder wenn der Spieler während die
    Mission bereits läuft sich mit dem Server verbindet, also jipt (steht für
    join in progress).
    Soll ein Skript nur für nicht-JIPs ausgeführt werden, können JIPs mit dem
    didJIP Befehl gefiltert werden.

    * Arguments:
    * 0: Player <OBJECT>
    * 1: Did JIP <BOOL>
 */

params ["_player"];

// Waffe sichern
// Gegenstück zu [QGVAR(loadoutApplied), [_loadoutTarget, _unitLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
private _id = [
    "grad_loadout_loadoutApplied",
    {
        params ["_unit", "_loadout"];

        [
            {//Function
                params ["_unit", "_loadout"];

                [_unit, currentWeapon _unit, true] call ace_safemode_fnc_setWeaponSafety;

                //Add TTT Helmet based on position in Squad
                private _helmet = ["ttt_Helmet_",groupID _unit,"_BW_Flecktarn"] joinString "";
                //_unit addItemToBackpack _helmet;

               switch (typeOf _unit) do {
                    case "B_recon_F";
                    case "B_recon_LAT_F";
                    case "B_recon_medic_F";
                    case "B_recon_exp_F";
                    case "B_recon_TL_F";
                    case "B_recon_JTAC_F";
                    case "B_recon_M_F": {
                        [_unit, "TTT_grau_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "B_Soldier_SL_F";
                    case "B_soldier_AR_F";
                    case "B_medic_F";
                    case "B_Soldier_TL_F";
                    case "B_Soldier_GL_F": {
                        [_unit, "TTT_green_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "B_soldier_UAV_F": {
                        [_unit, "TTT_yellow_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                };

                switch (groupID group _unit) do {
                    case "GREY": {
                        _success = [["ACRE_PRC152", 10], ["ACRE_PRC148", 11], ["ACRE_PRC117F", 4] ] call acre_api_fnc_setupRadios;
                    };
                    case "Fox 1-9";
                    case "Fox 1-3";
                    case "Fox 1-1": {
                        _success = [["ACRE_PRC152", 10], ["ACRE_PRC148", 11] ] call acre_api_fnc_setupRadios;
                    };
                    case "Fox 2-7";
                    case "Fox 2-2": {
                        _success = [["ACRE_PRC152", 10], ["ACRE_PRC148", 12] ] call acre_api_fnc_setupRadios;
                    };
                    default {
                        _success = [["ACRE_PRC152", 10], ["ACRE_PRC148", 14] ] call acre_api_fnc_setupRadios;
                    };
                };
            },
            //Args
            [_unit,_loadout],
            //Delay
            3
        ] call CBA_fnc_waitAndExecute;
    }
] call CBA_fnc_addEventHandler;

//Damit die Insignia auch bei Respawn gesetzt wird

_player addMPEventHandler ["MPRespawn", {
	params ["_unit", "_corpse"];
	private _insignia = [_corpse] call BIS_fnc_getUnitInsignia;
	[_unit, _insignia] spawn {
		params ["_unit", "_insignia"];
		sleep 1;
		isNil {
			_unit setVariable ["BIS_fnc_setUnitInsignia_class", nil]; // you can also do [_unit, ""] call BIS_fnc_setUnitInsignia, but this way is faster (plus no network traffic)
			[_unit, _insignia] call BIS_fnc_setUnitInsignia;
		};
	};
}];
