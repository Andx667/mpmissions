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
 params ["_player", ""];

// Waffe sichern
// Gegenstück zu [QGVAR(loadoutApplied), [_loadoutTarget, _unitLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
private _id = [
    "grad_loadout_loadoutApplied",
    {
        params ["_target", "_loadout"];

        [
            {
                params ["_unit", "_loadout"];

                [_unit, currentWeapon _unit, true] call ace_safemode_fnc_setWeaponSafety;

                //Change callsign to mission
                private _groupID = groupID group _unit;
                switch (_groupID) do {
                    case "Victor-1";
                    case "Victor-2";
                    case "Victor-3";
                    case "Victor-4": {
                        [_unit, "TTT_bronze_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Alpha-1";
                    case "Alpha-2": {
                        [_unit, "TTT_black_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Bravo-1";
                    case "Bravo-2": {
                        [_unit, "TTT_red_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "November": {
                        [_unit, "TTT_white_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Mike": {
                        [_unit, "TTT_silver_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Doc": {
                        [_unit, "TTT_brown_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                };
            },
            //Args
            [_target, _loadout],
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
            _unit setVariable ["BIS_fnc_setUnitInsignia_class", nil];
            [_unit, _insignia] call BIS_fnc_setUnitInsignia;
        };
    };
}];
