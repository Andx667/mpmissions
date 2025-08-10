/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2016, 6, 25, 11, 15]; //Datum ändern

{
    if (side _x != west) then {
        [_x] call ttt_common_fnc_setAISkill;

        _x setBehaviour "SAFE";
        _x setCombatMode "WHITE";
        _x setSpeedMode "LIMITED";

        _x enableAI "COVER";
        _x enableAI "AUTOCOMBAT";
    };
} forEach allUnits;

[
    [heli_01, heli_02],
    [
        ["B_AssaultPack_blk", 1],
        ["UK3CB_BAF_L85A2", 4],
        ["UK3CB_BAF_556_30Rnd", 12],
        ["ACE_NonSteerableParachute", 4]
    ]
] call ttt_common_fnc_crateFiller;

{
    {
        // Füllt alle schwarzen Rucksäcke in den Fhz mit einem Werkzeugkasten
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
        };
    } forEach (everyBackpack _x);
} forEach [heli_01, heli_02];


[
    [vbt_01, vbt_02, vbt_03, vbt_04, vbt_05],
    [
        ["ACE_elasticBandage", 80],
        ["ACE_packingBandage", 80],
        ["ACE_Tourniquet", 30],
        ["kat_chestSeal", 12],
        ["kat_Painkiller", 12]
    ]
] call ttt_common_fnc_crateFiller;

[
    [vbs_01, vbs_02, vbs_03],
    [
        ["ACE_elasticBandage", 80],
        ["ACE_packingBandage", 80],
        ["ACE_Tourniquet", 30],
        ["kat_chestSeal", 12],
        ["kat_Painkiller", 12],

        ["kat_larynx", 12],
        ["kat_ncdKit", 12],

        ["kat_pocketBVM", 1],

        ["ACE_salineIV_250", 10],
        ["ACE_salineIV_500", 10],
        ["kat_IV_16", 12],
        ["kat_AED", 1],

        ["kat_Penthrox", 5],
        ["kat_naloxone", 5],
        ["kat_nalbuphine", 5],
        ["ACE_epinephrine", 10],
        ["ACE_morphine", 5],
        ["ACE_Suture", 45]
    ]
] call ttt_common_fnc_crateFiller;

[
    [vba_01, heli_01, heli_02],
    [
        ["ACE_elasticBandage", 80],
        ["ACE_packingBandage", 80],
        ["ACE_Tourniquet", 30],
        ["kat_chestSeal", 12],
        ["kat_Painkiller", 12],

        ["kat_larynx", 12],
        ["kat_ncdKit", 12],
        ["kat_aatKit", 12],
        ["kat_accuvac", 1],

        ["kat_pocketBVM", 1],

        ["ACE_bloodIV_250", 10],
        ["ACE_bloodIV_500", 10],
        ["ACE_bloodIV", 10],
        ["kat_IV_16", 12],
        ["kat_X_AED", 1],

        ["kat_Penthrox", 5],
        ["kat_naloxone", 5],
        ["kat_nalbuphine", 5],
        ["ACE_epinephrine", 10],
        ["ACE_morphine", 5],
        ["kat_eaca", 10],
        ["kat_TXA", 20],
        ["kat_amiodarone", 10],
        ["kat_fentanyl", 10],
        ["kat_ketamine", 10],
        ["kat_atropine", 10],
        ["ACE_epinephrine", 10],
        ["kat_lidocaine", 10],
        ["ACE_Suture", 50]
    ]
] call ttt_common_fnc_crateFiller;
