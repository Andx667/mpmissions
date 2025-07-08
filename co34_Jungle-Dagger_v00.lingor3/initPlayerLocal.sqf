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

// Hier wird das Briefing automatisch eingefügt und ausgeführt
#include "briefing.sqf"

// Waffe sichern
// Gegenstück zu [QGVAR(loadoutApplied), [_loadoutTarget, _unitLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
private _id = [
    "grad_loadout_loadoutApplied",
    {
        params ["_unit", "_loadout"];

        [
            {//Function
                [ACE_Player, currentWeapon ACE_Player, true] call ace_safemode_fnc_setWeaponSafety;

                private _place = -1;
                    {
                        if(isPlayer _x && local _x) then {
                            _place = _forEachIndex;
                            break;
                        };
                    } forEach units player;
            },
            //Args
            [_unit,_loadout],
            //Delay
            3
        ] call CBA_fnc_waitAndExecute;

        if (typeOf ACE_player == "B_soldier_exp_F") then {
            [
                [
                "UK3CB_BAF_L128A1",                   //Classname der zweiten Waffe
                "",                               //Schalldämpfer oder ähnliches
                "",                  //Laserpointer / Waffenlicht
                "",                     //Optik
                ["UK3CB_BAF_12G_Pellets", 8],   //Magazin mit Anzahl Kugeln
                [],                               //Zweites Magazin (z.B. UGL)
                ""                                 //Zweibein oder ähnliches
                ]
            ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;
        };
        if (typeOf ACE_player == "B_HelicopterPilot_F" || typeOf ACE_player == "B_HelicopterPilot_F") then {
            [ACE_player] call ace_weaponselect_fnc_putWeaponAway;
        };
    }
] call CBA_fnc_addEventHandler;

//Damit die Insignia auch bei Respawn gesetzt wird
params ["_player"];
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
