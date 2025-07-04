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
[
    "grad_loadout_loadoutApplied",
    {
        [
            {
                [ACE_Player, currentWeapon ACE_Player, true] call ace_safemode_fnc_setWeaponSafety;

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
                    case "B_medic_F": {
                        [ACE_player, "TTT_white_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "B_engineer_F": {
                        [ACE_player, "TTT_blue_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "B_helicrew_F";
                    case "B_soldier_repair_F";
                    case "B_Helipilot_F": {
                        [ACE_player, "TTT_silver_emblem"] call BIS_fnc_setUnitInsignia;
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