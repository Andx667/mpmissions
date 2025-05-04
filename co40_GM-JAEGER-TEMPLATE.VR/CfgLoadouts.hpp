/*
 * Für weitere Informationen, wie genau Vererbung in einer Config funktioniert, wird der folgende BiWiki Eintrag empfohlen:
 *                              https://community.bistudio.com/wiki/Class_Inheritance
 *
 */

class CfgLoadouts {
    
    /* Grundklassen */
    class CommonBlufor { //Die Grundklasse für alle Blufor Einheiten. Sie stellt die unterste Ebene aller Blufor Loadouts dar, die aus ihr erben.
        //LTM Settings
        roledescription = "Default Loadout"; //Unter diesem Namen wir das Loadout im LTM-Menü angezeigt
        isplayerloadout = false; //Definiert, ob das Loadout im LTM-Menü angezeigt wird.
        
        //Clothing
        uniform[] = {"gm_ge_uniform_soldier_90_flk"};
        backpack[] = {""};
        vest[] = {"gm_ge_vest_armor_90_rifleman_flk"};
        headgear[] = {"gm_ge_headgear_m92_flk", "gm_ge_headgear_m92_glasses_flk"};

        //Gasmaske geht auch auf den Goggles Slot -> Camo ist weg
        //goggles[] = {"gm_headgear_foliage_summer_forest_01", "gm_headgear_foliage_summer_forest_02", "gm_headgear_foliage_summer_forest_03", "gm_headgear_foliage_summer_forest_04"};
        goggles[] = {"gm_headgear_foliage_summer_grass_01", "gm_headgear_foliage_summer_grass_02", "gm_headgear_foliage_summer_grass_03", "gm_headgear_foliage_summer_grass_04"};

        //Weapons
        primary[] = {
            {"gm_g36a1_blk", "", "","",""}
        };
        secondary[] = {"","","",""};
        launcher[] = {"","","","",""};
        binoculars[] = {"gm_ferod16_oli"};
        
        //Mags + Items
        magazines[] = {
            "gm_handgrenade_frag_dm51a1", 2,
            "gm_smokeshell_grn_gc",
            "gm_smokeshell_wht_gc",2,
        };
        items[] = {
            "ACE_fieldDressing",15,
            "ACE_packingBandage",15,
            "ACE_MapTools",
            "ACE_Flashlight_KSF1",
            "ACE_tourniquet",4,
            "ACE_Painkillers",1,
            "acex_intelitems_notepad"
        };
        
        //misc
        map[] = {"ItemMap"};
        gps[] = {""};
        nvgs[] = {""};
        compass[] = {"ItemCompass"};
        watch[] = {"ItemWatch"};
        
        //Scripted
        insignia[] = {""};
        slingHelmet[] = {"", "", ""};
        identity[] = {""};
        preLoadout = "";
        postLoadout = "";
    };
    

    /* Spielerloadouts */
    class B_Soldier_F: CommonBlufor {
        roledescription = "JÄGER";
        isplayerloadout = true;

        magazines[] += {
            "gm_30Rnd_556x45mm_B_DM11_g36_blk", 9,
        };

    };

    class B_soldier_AR_F: CommonBlufor {
        roledescription = "JÄGER U. MG1";
        isplayerloadout = true;

        vest[] = {"gm_ge_vest_armor_90_machinegunner_flk"};

        primary[] = {"gm_mg3_blk","gm_120Rnd_762x51mm_B_T_DM21_mg3_grn","","",""};
        secondary[] = {"gm_p210_blk","gm_8Rnd_9x19mm_B_DM51_p210_blk","",""};

        magazines[] += {
            "gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 2,
            "gm_8Rnd_9x19mm_B_DM51_p210_blk", 2
        };

        items[] += {
            "ACE_SpareBarrel",
        };
    };

    class B_soldier_AAR_F: B_Soldier_F {
        roledescription = "JÄGER U. MG2";
        isplayerloadout = true;

        backpack[] = {"gm_ge_army_backpack_90_flk"};

        primary[] = {"gm_g36a1_blk", "", "","",""};

        magazines[] += {
            "gm_120Rnd_762x51mm_B_T_DM21_mg3_grn", 4
        };

        items[] += {
            "ACE_EntrenchingTool"
        };
    };

    class B_soldier_M_F: CommonBlufor {
        roledescription = "JÄGER U. SCHARFSCHTZ";
        isplayerloadout = true;

        primary[] = {"gm_g3sg1_oli", "gm_diavari_da_stanagClaw_oli", "gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk","gm_g3_bipod_blk",""};

        magazines[] += {
            "gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk", 8,
        };

        items[] += {
            "ACE_Rangecard"
        };
    };

    class B_soldier_LAT2_F: B_Soldier_F {
        roledescription = "JÄGER  und Pzf3-Schütze";
        isplayerloadout = true;

        launcher[] = {"gm_pzf3_blk","gm_1Rnd_60mm_heat_dm22_pzf3","",""};
    };

    class B_soldier_AT_F: B_Soldier_F {
        roledescription = "JÄGER U. PZ ABW SOLD MILAN";
        isplayerloadout = true;
    };

    class B_soldier_AAT_F: B_Soldier_F {
        roledescription = "JÄGER U. PZ ABW SOLD MILAN U. KRAFTFAHRER B";
        isplayerloadout = true;
    };

    class B_crew_F: B_Soldier_F {
        roledescription = "KRAFTFAHRER C-7,5";
        isplayerloadout = true;

        backpack[] = {"gm_ge_army_backpack_medic_80_oli"};

        items[] += {
            "ACE_SurgicalKit",
            "ACE_Suture",30,

            "ACE_PackingBandage",10,
            "ACE_ElasticBandage",30,
            "ACE_Tourniquet",5,

            "ACE_SalineIV",5,
            "ACE_SalineIV_500",3,
            "ACE_SalineIV_250",3,
            "ACE_Painkillers",5,
            "ACE_Morphine",5,
            "ACE_Epinephrine",5
        };
    };

    class B_medic_F: B_Soldier_F {
        roledescription = "JÄGER UND San-B";
        isplayerloadout = true;

        vest[] = {"gm_ge_vest_armor_90_medic_flk"};
        backpack[] = {"gm_ge_army_backpack_90_flk"};
        items[] += {
            "ACE_SurgicalKit",
            "ACE_Suture",60,

            "ACE_PackingBandage",30,
            "ACE_ElasticBandage",60,
            "ACE_Tourniquet",10,

            "ACE_SalineIV",16,
            "ACE_SalineIV_500",8,
            "ACE_SalineIV_250",8,
            "ACE_Painkillers",8,
            "ACE_Morphine",8,
            "ACE_Epinephrine",8
        };
    };

    class B_soldier_exp_F: B_Soldier_F {
        roledescription = "Pionier";
        isplayerloadout = true;

        vest[] = {"gm_ge_vest_armor_90_demolition_flk"};
        backpack[] = {"gm_ge_army_backpack_90_flk"};

        secondary[] = {"ACE_VMH3","","","",""};

        items[] += {
            "ACE_wirecutter",
            "ACE_EntrenchingTool",
            "ACE_Clacker",
            "ACE_DefusalKit",
            "gm_explosive_petn_charge", 3,
            "SatchelCharge_Remote_Mag", 1,
            "ATMine_Range_Mag",
        };

        preLoadout = "";
    };

    class B_Soldier_TL_F: CommonBlufor {
        roledescription = "Stellv. Gruppenführer";
        isplayerloadout = true;

        //Kommentar entfernen für etwas weniger Realismus
        //vest[] = {"gm_ge_vest_armor_90_leader_flk"};

        magazines[] += {
            "gm_30Rnd_556x45mm_B_T_DM21_g36_blk", 9,
        };

        items[] += {
            "mts_whistle_FOX40",
            "ace_flags_red",
            //"ACRE_SEM52SL",
        };
    };

    class B_Soldier_SL_F: B_Soldier_TL_F {
        roledescription = "JG UFFZ U. GRP FHR";
        isplayerloadout = true;

        backpack[] = {"gm_dk_army_backpack_73_oli"};

        secondary[] = {"gm_p2a1_blk","","",""};

        magazines[] += {
            "gm_1Rnd_265mm_flare_single_grn_gc", 5,
            "gm_1Rnd_265mm_flare_multi_red_gc", 5,
        };

        items[] += {
            "ACRE_SEM52SL",
        };
    };



    class TTT_B_RadioOperator_F: B_Soldier_TL_F {
        roledescription = "JÄGER UND FU GER BED";
        isplayerloadout = true;

        backpack[] = {"gm_ge_backpack_sem35_oli"};

        items[] += {
            "ACRE_SEM70",
        };
    };

    class TTT_B_Executive_Officer_F: B_Soldier_TL_F {
        roledescription = "JG FW U. PZ ABW FW MILAN";
        isplayerloadout = true;

        backpack[] = {"gm_dk_army_backpack_73_oli"};

        secondary[] = {"gm_p2a1_blk","","",""};

        magazines[] += {
            "gm_1Rnd_265mm_flare_single_grn_gc", 5,
            "gm_1Rnd_265mm_flare_multi_red_gc", 5,
        };
    };

    class B_officer_F: B_Soldier_SL_F {
        roledescription = "JG OFFZ u. ZUGFHR OFFZU";
        isplayerloadout = true;

        backpack[] = {};

        primary[] = {"gm_mp2a1_blk", "gm_32Rnd_9x19mm_B_DM51_mp2_blk", "","",""};

        magazines[] = {
            "gm_32Rnd_9x19mm_B_DM51_mp2_blk", 6,
            "gm_handgrenade_frag_dm51a1", 2,
            "gm_smokeshell_grn_gc",
            "gm_smokeshell_wht_gc",2,
        };

        items[] += {
            "ACRE_SEM52SL",
        };
    };
};