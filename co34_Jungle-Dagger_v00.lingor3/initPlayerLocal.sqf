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
params ["_player", "_didJIP"];

// Gegenstück zu [QGVAR(loadoutApplied), [_loadoutTarget, _targetLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
private _id = [
    "grad_loadout_loadoutApplied",
    {
        params ["_target",""];

        [
            //Function
            {
                params ["_unit"];

                [_unit, currentWeapon _unit, true] call ace_safemode_fnc_setWeaponSafety;

                private _groupID = groupID group _unit;
                switch (_groupID) do {
                    case "Bulldog": {
                        [_unit, "TTT_yellow_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Bulldog-1": {
                        [_unit, "TTT_black_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Bulldog-2": {
                        [_unit, "TTT_red_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Bulldog-3": {
                        [_unit, "TTT_violet_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Pavehawk": {
                        [_unit, "TTT_white_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                    case "Guardian": {
                        [_unit, "TTT_white_emblem"] call BIS_fnc_setUnitInsignia;
                    };
                };

                switch (typeOf _unit) do {
                    case "B_soldier_exp_F": {
                        [
                            [
                            "UK3CB_BAF_L128A1",             //Classname der zweiten Waffe
                            "",                             //Schalldämpfer oder ähnliches
                            "",                             //Laserpointer / Waffenlicht
                            "",                             //Optik
                            ["UK3CB_BAF_12G_Pellets", 8],   //Magazin mit Anzahl Kugeln
                            [],                             //Zweites Magazin (z.B. UGL)
                            ""                              //Zweibein oder ähnliches
                            ]
                        ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;

                        private _backpack = unitBackpack _unit;
                        _backpack setObjectTextureGlobal [1, ""]; //hide the Shotgun on the backpack
                    };
                    case "B_helicrew_F";
                    case "B_Helipilot_F": {
                        [_unit] call ace_weaponselect_fnc_putWeaponAway;
                    };
                };
            },
            //Args
            [_target],
            //Delay
            5
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
