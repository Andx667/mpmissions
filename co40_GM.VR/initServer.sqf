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
    [truck_01, truck_02, truck_03, truck_04, truck_05],
    [
        ["gm_ge_backpack_satchel_80_san", 1],
        ["B_AssaultPack_blk", 1],

        ["gm_1Rnd_60mm_heat_dm22_pzf3", 6],
        ["gm_1Rnd_60mm_heat_dm32_pzf3", 2],
        ["gm_pzf3_blk", 2]
    ]
] call ttt_common_fnc_crateFiller;

[
    [truck_05],
    [

        ["gm_milan_launcher_weaponBag", 1]
    ],
    false
] call ttt_common_fnc_crateFiller;

[
    [truck_01, truck_02, truck_03, truck_04],
    [
        ["gm_mine_at_dm21", 12], //AT Mine
        ["gm_g36a1_blk", 1],

        ["gm_1Rnd_60mm_heat_dm22_pzf3", 6], //HEAT
        ["gm_1Rnd_60mm_heat_dm32_pzf3", 2], //Bunkerfaust
        ["gm_pzf3_blk", 2],

        ["ace_compat_gm_MG3TripodCarry", 1],

        ["gm_1rnd_40x46mm_he_dm91", 20],
        ["gm_1rnd_40x46mm_smoke_dm35", 5],

        ["gm_30Rnd_556x45mm_B_DM11_g36_blk", 100],
        ["gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk", 20],
        ["gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn", 10],

        ["gm_handgrenade_frag_dm51a1", 20],
        ["gm_smokeshell_wht_dm25", 20],
        ["gm_smokeshell_grn_dm21", 10],

        ["ACE_ElasticBandage", 50],
        ["ACE_packingBandage", 50],
        ["ACE_Tourniquet", 10],
        ["kat_chestSeal", 20],
        ["kat_Painkiller", 10]
    ],
    false
] call ttt_common_fnc_crateFiller;

//Kisten
[
    [mun_01, mun_02, mun_03, mun_04],
    [
        ["gm_30Rnd_556x45mm_B_DM11_g36_blk", 100],
        ["gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk", 20],
        ["gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn", 10]
    ]
] call ttt_common_fnc_crateFiller;

[
    [granaten_01, granaten_02, granaten_03, granaten_04],
    [
        ["gm_1rnd_40x46mm_he_dm91", 20],
        ["gm_1rnd_40x46mm_smoke_dm35", 5],

        ["gm_handgrenade_frag_dm51a1", 20],
        ["gm_smokeshell_wht_dm25", 20],
        ["gm_smokeshell_grn_dm21", 10]
    ]
] call ttt_common_fnc_crateFiller;

[
    [exp_01],
    [
        ["gm_explosive_petn_charge", 12]
    ]
] call ttt_common_fnc_crateFiller;

[
    [sanA_01, sanA_02, sanA_03, sanA_04],
    [
        ["ACE_ElasticBandage", 50],
        ["ACE_packingBandage", 50],
        ["ACE_Tourniquet", 10],
        ["kat_chestSeal", 20],
        ["kat_Painkiller", 10]
    ]
] call ttt_common_fnc_crateFiller;

[
    [sanB_01, sanB_02, sanB_03, sanB_04],
    [
        //M
        ["ACE_packingBandage", 40],
        ["ACE_ElasticBandage", 40],
        ["ACE_tourniquet", 24],
        //A
        ["kat_larynx", 18],
        //R
        ["kat_chestSeal", 18],
        ["kat_ncdKit", 18],
        ["kat_pocketBVM", 1],
        //C
        ["ACE_salineIV_250", 8],
        ["ACE_salineIV_500", 8],
        ["kat_IV_16", 18],
        ["ACE_epinephrine", 24],
        //H
        ["kat_Penthrox", 9],
        ["kat_naloxone", 9],
        ["kat_nalbuphine", 9],
        ["kat_Painkiller", 4],
        ["ACE_morphine", 9],
        ["ACE_Suture", 40]
    ]
] call ttt_common_fnc_crateFiller;

[
    [sanC_01],
    [
        //M
        ["ACE_packingBandage", 40],
        ["ACE_ElasticBandage", 40],
        ["ACE_tourniquet", 24],
        //A
        ["kat_larynx", 18],
        //R
        ["kat_chestSeal", 18],
        ["kat_aatKit", 18],
        ["kat_BVM", 1],
        ["kat_oxygenTank_150", 2],
        //C
        ["ACE_BloodIV", 12],
        ["ACE_BloodIV_500", 8],
        ["ACE_BloodIV_250", 8],
        ["ACE_salineIV_250", 4],
        ["kat_IV_16", 18],
        ["kat_epinephrineIV", 24],
        //H
        ["kat_eaca", 10],
        ["kat_txa", 20],
        ["kat_fentanyl", 9],
        ["kat_ketamine", 9],
        ["ACE_Suture", 40]
    ]
] call ttt_common_fnc_crateFiller;

{
    {
        switch (typeof _x) do {

            case "B_AssaultPack_blk": {
                _x addItemCargoGlobal ["gm_repairkit_01", 1];
            };
        };
    } forEach (everyBackpack _x);
} forEach [truck_01, truck_02, truck_03, truck_04];
