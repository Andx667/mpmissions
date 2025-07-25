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
#include "comms.sqf"

// Waffe sichern
// Gegenstück zu [QGVAR(loadoutApplied), [_loadoutTarget, _unitLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
[
    "grad_loadout_loadoutApplied",
    {
        [
            {
                [ACE_Player, currentWeapon ACE_Player, true] call ace_safemode_fnc_setWeaponSafety;

                if (typeOf ACE_player == "B_soldier_exp_F") then {
                    [
                        [
                        "CUP_sgun_M1014_Entry_vfg",                   //Classname der zweiten Waffe
                        "",                               //Schalldämpfer oder ähnliches
                        "",                  //Laserpointer / Waffenlicht
                        "",                     //Optik
                        ["CUP_6Rnd_12Gauge_Pellets_No00_Buck", 6],   //Magazin mit Anzahl Kugeln
                        [],                               //Zweites Magazin (z.B. UGL)
                        ""                                 //Zweibein oder ähnliches
                        ]
                    ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;
                };

                switch (typeOf ACE_player) do {
                    case "B_Soldier_F";
                    case "B_soldier_LAT2_F";
                    case "TTT_B_RadioOperator_F";
                    case "B_soldier_exp_F";
                    case "B_soldier_M_F";
                    case "B_Soldier_AR_F";
                    case "B_Soldier_TL_F";
                    case "B_Soldier_SL_F": {
                        [ACE_player, "TTT_green_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "B_helicrew_F";
                    case "B_Helipilot_F";
                    case "B_medic_F": {
                        [ACE_player, "TTT_white_emblem"] call BIS_fnc_setUnitInsignia;
                    };

                    default {
                        [ACE_player, "TTT_green_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                };
            },
            //Args
            [],
            //Delay
            2
        ] call CBA_fnc_waitAndExecute;
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

//Intel
[intel_01, "Dokumente nehmen", true, ["Geheime Dokumente aus dem Palast", "Miliz Bastion - 139-073."]] call ttt_common_fnc_addIntel;
[intel_02, "Dokumente nehmen", true, ["Geheime Dokumente der Miliz 1", "Miliz Feindstärke in der Bastion: Drei Gruppen, 4 HMG."]] call ttt_common_fnc_addIntel;
[intel_03, "Dokumente nehmen", true, ["Geheime Dokumente der Miliz 2", "Verstärkung der Armee: 2x BTR-60 und 1x Ural mit jeweils 1x Gruppe stehen bereit."]] call ttt_common_fnc_addIntel;
