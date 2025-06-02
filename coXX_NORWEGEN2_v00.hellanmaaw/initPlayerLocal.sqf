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
                
                // if (typeOf ACE_player == "B_soldier_exp_F") then {
                //     [
                //         [
                //         "CUP_sgun_M1014_Entry_vfg",                   //Classname der zweiten Waffe
                //         "",                               //Schalldämpfer oder ähnliches
                //         "",                  //Laserpointer / Waffenlicht
                //         "",                     //Optik
                //         ["CUP_6Rnd_12Gauge_Pellets_No00_Buck", 6],   //Magazin mit Anzahl Kugeln
                //         [],                               //Zweites Magazin (z.B. UGL)
                //         ""                                 //Zweibein oder ähnliches
                //         ]
                //     ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;
                //};

                switch (typeOf ACE_player) do {
                    case "B_soldier_exp_F";
                    case "B_soldier_AAT_F";
                    case "B_Soldier_A_F";
                    case "B_soldier_UAV_F";
                    case "B_engineer_F";
                    case "B_soldier_mine_F": {
                        (unitBackpack ace_player) setVariable ["ttt_medic_backpack_hasTent", false];
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
