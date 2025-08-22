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

// Gegenstück zu [QGVAR(loadoutApplied), [_loadoutTarget, _unitLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
[
    "grad_loadout_loadoutApplied",
    {
        params ["_unit", "_loadout"];

        [
            {
                [_unit, currentWeapon _unit, true] call ace_safemode_fnc_setWeaponSafety;
            },
            //Args
            [_unit],
            //Delay
            3
        ] call CBA_fnc_waitAndExecute;

        private _groupID = groupID group _unit;
        switch (_groupID) do {
            case "Alpha": {
                [_unit, "TTT_yellow_emblem"] call BIS_fnc_setUnitInsignia;
            };
            case "Alpha-1": {
                [_unit, "TTT_green_emblem"] call BIS_fnc_setUnitInsignia;
            };
            case "Alpha-2": {
                [_unit, "TTT_black_emblem"] call BIS_fnc_setUnitInsignia;
            };
            case "Alpha-3": {
                [_unit, "TTT_red_emblem"] call BIS_fnc_setUnitInsignia;
            };
        };

        switch (typeOf _unit) do {
            case "B_Soldier_GL_F": {
                [
                    [
                    "gm_hk69a1_blk",                   //Classname der zweiten Waffe
                    "",                               //Schalldämpfer oder ähnliches
                    "",                  //Laserpointer / Waffenlicht
                    "",                     //Optik
                    ["",0],   //Magazin mit Anzahl Kugeln
                    [],                               //Zweites Magazin (z.B. UGL)
                    ""                                 //Zweibein oder ähnliches
                ]
                ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;
            };
            case "B_soldier_exp_F": {
                [_unit, "TTT_blue_emblem"] call BIS_fnc_setUnitInsignia;
            };
            case "B_medic_F": {
                if (rank _unit isNotEqualTo "PRIVATE") then {
                    [_unit, "TTT_white_emblem"] call BIS_fnc_setUnitInsignia;
                };
            };
        };
    }
] call CBA_fnc_addEventHandler;

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
