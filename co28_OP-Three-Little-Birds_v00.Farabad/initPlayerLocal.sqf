/*
    Die initPlayerLocal.sqf wird für jeden Spieler einmal bei Missionsbeitritt
    ausgeführt, das heißt also entweder wenn die Mission gestartet wird (noch
    bevor das Briefing angezeigt wird), oder wenn der Spieler während die
    Mission bereits läuft sich mit dem Server verbindet, also jipt (steht für
    join in progress).
    Soll ein Skript nur für nicht-JIPs ausgeführt werden, können JIPs mit dem
    didJIP Befehl gefiltert werden.

    * Arguments
    * 0 Player <OBJECT>
    * 1 Did JIP <BOOL>
 */
 params ["_player", "_didJIP"];

// Waffe sichern
// Gegenstück zu [QGVAR(loadoutApplied), [_loadoutTarget, _unitLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
[
    "grad_loadout_loadoutApplied",
    {
        params ["_target", "_loadout"];
        [
            {
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


//
[intel_01, "Laptop nach Hinweisen durchsuchen", false, ["Laptop aus Werkstatt", "Warten auf Material aus der Stadt. Diese Faulen Säcke sind bestimmt wieder im Hotel nebenan. Oder in der Tankstelle Kippen holen"]] call ttt_common_fnc_addIntel;
//
[intel_02, "Notizblock lesen", true, ["Notizblock aus Lager", "Nächste Lieferung ans HQ zusammen mit den Drogen zum Hafen bringen. Zum Anleger am Kahak River. </br> Stapelt die Kisten nicht zu hoch, die müssen noch unter der Brücke durchpassen."]] call ttt_common_fnc_addIntel;
//
[intel_03, "Karte untersuchen", true, ["Karte aus dem HQ", "Auf der Karte ist der Wohnort des Warlords <marker name='obj4'>markiert</marker>."]] call ttt_common_fnc_addIntel;