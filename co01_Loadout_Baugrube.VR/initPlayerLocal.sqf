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

        if (typeOf ACE_player == "B_soldier_M_F") then {
            [
                [
                "rhs_weap_vhsk2",                   //Classname der zweiten Waffe
                "",                               //Schalldämpfer oder ähnliches
                "",                  //Laserpointer / Waffenlicht
                "rhsusf_acc_eotech_552",                     //Optik
                ["rhsgref_30rnd_556x45_vhs2", 30],   //Magazin mit Anzahl Kugeln
                [],                               //Zweites Magazin (z.B. UGL)
                ""                                 //Zweibein oder ähnliches
                ]
            ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;
        };
    }
] call CBA_fnc_addEventHandler;