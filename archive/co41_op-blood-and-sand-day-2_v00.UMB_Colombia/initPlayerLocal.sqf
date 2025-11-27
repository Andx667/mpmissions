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
 params ["_player","_didJIP"];

// Hier wird das Briefing automatisch eingefügt und ausgeführt
#include "briefing.sqf"

// Waffe sichern
// Gegenstück zu [QGVAR(loadoutApplied), [_loadoutTarget, _unitLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
private _id = [
    "grad_loadout_loadoutApplied",
    {
        params ["_target", ""];

        [
            {//Function
                params ["_unit"];
                [_unit, currentWeapon _unit, true] call ace_safemode_fnc_setWeaponSafety;

                switch (typeOf _unit) do {
                    case "B_soldier_exp_F": {
                        [
                            [
                            "CUP_sgun_M1014_Entry",                             //Classname der zweiten Waffe
                            "",                             //Schalldämpfer oder ähnliches
                            "",                             //Laserpointer / Waffenlicht
                            "",                             //Optik
                            ["CUP_6Rnd_12Gauge_Pellets_No00_Buck", 6],                         //Magazin mit Anzahl Kugeln
                            [],                             //Zweites Magazin (z.B. UGL)
                            ""                              //Zweibein oder ähnliches
                            ]
                        ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;
                    };
                    case "B_helicrew_F";
                    case "B_Helipilot_F": {
                        [_unit] call ace_weaponselect_fnc_putWeaponAway;
                    };
                };

                //Change callsign to mission
                private _groupID = groupID group _unit;
                switch (_groupID) do {
                    case "Alpha": {
                        [_unit, "TTT_yellow_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Alpha-1": {
                        [_unit, "TTT_black_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Alpha-2": {
                        [_unit, "TTT_red_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Alpha-3": {
                        [_unit, "TTT_orange_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Mike": {
                        [_unit, "TTT_white_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Lima": {
                        [_unit, "TTT_silver_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                };
            },
            //Args
            [_target],
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
