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
            },
            //Args
            [],
            //Delay
            2
        ] call CBA_fnc_waitAndExecute;
    }
] call CBA_fnc_addEventHandler;