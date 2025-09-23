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

// Gegenstück zu [QGVAR(loadoutApplied), [_loadoutTarget, _unitLoadout], _loadoutTarget] call CBA_fnc_targetEvent;
[
    "grad_loadout_loadoutApplied",
    {
        params ["_unit", "_loadout"];

        [
            {// Waffe sichern
                [_unit, currentWeapon _unit, true] call ace_safemode_fnc_setWeaponSafety;
            },
            //Args
            [],
            //Delay
            3
        ] call CBA_fnc_waitAndExecute;

        switch (typeOf _unit) do {
            case "B_Soldier_SL_F";
            case "B_soldier_AR_F";
            case "B_Soldier_TL_F";
            case "B_soldier_M_F";
            case "B_Soldier_F";
            case "B_soldier_UAV_F";
            case "B_W_RadioOperator_F";
            case "B_officer_F": {
                [_unit, "TTT_black_emblem"] call BIS_fnc_setUnitInsignia;
            };
            case "B_HeavyGunner_F";
            case "B_Soldier_A_F": {
                [_unit, "TTT_orange_emblem"] call BIS_fnc_setUnitInsignia;
            };
            case "B_soldier_exp_F": {
                [
                    [
                        "CUP_sgun_M1014_Entry",                   //Classname der zweiten Waffe
                        "",                               //Schalldämpfer oder ähnliches
                        "",                  //Laserpointer / Waffenlicht
                        "",                     //Optik
                        ["CUP_6Rnd_12Gauge_Pellets_No00_Buck", 6],   //Magazin mit Anzahl Kugeln
                        [],                               //Zweites Magazin (z.B. UGL)
                        ""                                 //Zweibein oder ähnliches
                    ]
                ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;
                [_unit, "TTT_black_emblem"] call BIS_fnc_setUnitInsignia;
                //[_unit, "TTT_blue_emblem"] call BIS_fnc_setUnitInsignia;
            };
            case "B_Helipilot_F";
            case "B_medic_F": {
                if ((RANK _unit) == "PRIVATE") then {
                    //[_unit, "TTT_brown_emblem"] call BIS_fnc_setUnitInsignia;
                    [_unit, "TTT_black_emblem"] call BIS_fnc_setUnitInsignia;
                } else {
                    [_unit, "TTT_white_emblem"] call BIS_fnc_setUnitInsignia;
                };
            };
            default {
                [_unit, "TTT_black_emblem"] call BIS_fnc_setUnitInsignia;
            };
        };
    }
] call CBA_fnc_addEventHandler;


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
