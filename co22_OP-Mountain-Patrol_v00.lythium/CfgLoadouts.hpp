/*
 * Für weitere Informationen, wie genau Vererbung in einer Config funktioniert, wird der folgende BiWiki Eintrag empfohlen:
 *                              https://community.bistudio.com/wiki/Class_Inheritance
 *
 */
//Auskommentieren was nicht gewollt

class CfgLoadouts {
    
    /* Grundklassen */
    class CommonBlufor { //Die Grundklasse für alle Blufor Einheiten. Sie stellt die unterste Ebene aller Blufor Loadouts dar, die aus ihr erben.
        //LTM Settings
        roledescription = "Default Loadout"; //Unter diesem Namen wir das Loadout im LTM-Menü angezeigt
        isplayerloadout = false; //Definiert, ob das Loadout im LTM-Menü angezeigt wird.
        
        //Clothing
        uniform[] = {"UK3CB_BAF_U_CombatUniform_MTP"};
        backpack[] = {
            //Nicht benötigte Blöcke einfach auskommentieren
            //Overnight
            "UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A",
            "UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B",
            "UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C",
            //Regular
            // "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_A",
            // "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_B",
            // "UK3CB_BAF_B_Bergen_MTP_Rifleman_L_C",
            };
        vest[] = {
            "UK3CB_BAF_V_Osprey_Rifleman_A",
            //"UK3CB_BAF_V_Osprey_Rifleman_B", //hat einen Holster, die anderen nicht
            "UK3CB_BAF_V_Osprey_Rifleman_C",
            "UK3CB_BAF_V_Osprey_Rifleman_D",
            "UK3CB_BAF_V_Osprey_Rifleman_E",};
        headgear[] = {
            //Nicht benötigte Blöcke einfach auskommentieren
            //regular
            "UK3CB_BAF_H_Mk7_Camo_A",
            "UK3CB_BAF_H_Mk7_Camo_B",
            "UK3CB_BAF_H_Mk7_Camo_C",
            "UK3CB_BAF_H_Mk7_Camo_D",
            "UK3CB_BAF_H_Mk7_Camo_E",
            "UK3CB_BAF_H_Mk7_Camo_F",
            //scrim
            "UK3CB_BAF_H_Mk7_Scrim_A",
            "UK3CB_BAF_H_Mk7_Scrim_B",
            "UK3CB_BAF_H_Mk7_Scrim_C",
            "UK3CB_BAF_H_Mk7_Scrim_D",
            "UK3CB_BAF_H_Mk7_Scrim_E",
            "UK3CB_BAF_H_Mk7_Scrim_F",
            //ESS
            "UK3CB_BAF_H_Mk7_Camo_ESS_A",
            "UK3CB_BAF_H_Mk7_Camo_ESS_B",
            "UK3CB_BAF_H_Mk7_Camo_ESS_C",

            "UK3CB_BAF_H_Mk7_Net_ESS_A",
            "UK3CB_BAF_H_Mk7_Net_ESS_B",
            "UK3CB_BAF_H_Mk7_Net_ESS_C",
            "UK3CB_BAF_H_Mk7_Net_ESS_D",

            "UK3CB_BAF_H_Mk7_Net_CESS_A",
            "UK3CB_BAF_H_Mk7_Net_CESS_B",
            "UK3CB_BAF_H_Mk7_Net_CESS_C",
            "UK3CB_BAF_H_Mk7_Net_CESS_D",

            "UK3CB_BAF_H_Mk7_Scrim_ESS_A",
            "UK3CB_BAF_H_Mk7_Scrim_ESS_B",
            "UK3CB_BAF_H_Mk7_Scrim_ESS_C",

            "UK3CB_BAF_H_Mk7_Camo_CESS_A",
            "UK3CB_BAF_H_Mk7_Camo_CESS_B",
            "UK3CB_BAF_H_Mk7_Camo_CESS_C",
            };
        goggles[] = {""};
        
        //Weapons
        primary[] = {
            {"UK3CB_BAF_L85A3", "RKSL_optic_LDS", "UK3CB_BAF_LLM_Flashlight_Tan","UK3CB_underbarrel_acc_grippod",""},
            {"UK3CB_BAF_L85A3", "RKSL_optic_LDS_C", "UK3CB_BAF_LLM_Flashlight_Tan","UK3CB_underbarrel_acc_grippod",""},
            {"UK3CB_BAF_L85A3", "RKSL_optic_LDS", "UK3CB_BAF_LLM_Flashlight_Black","UK3CB_underbarrel_acc_grippod",""},
            {"UK3CB_BAF_L85A3", "RKSL_optic_LDS_C", "UK3CB_BAF_LLM_Flashlight_Black","UK3CB_underbarrel_acc_grippod",""},
        };
        //secondary[] = {"UK3CB_BAF_L117A2","UK3CB_BAF_9_15Rnd","",""};
        launcher[] = {"","","","",""};
        binoculars[] = {"Binocular"};
        
        //Mags + Items
        magazines[] = {
            //"UK3CB_BAF_9_15Rnd", 2,
            "UK3CB_BAF_SmokeShell", 2,
            "UK3CB_BAF_SmokeShellGreen", 1,
            "HandGrenade", 2,
            "acex_intelitems_notepad",
        };

        items[] = {
            "ACE_Packingbandage", 15,
            "ACE_fieldDressing", 15,
            "ACE_Tourniquet", 4,
            "ACE_CableTie", 2,
            "ACE_Painkillers", 1,
            "ACE_MapTools",
            "ACE_Flashlight_XL50",
            "ACE_IR_Strobe_Item",
            "ACE_EntrenchingTool", 
            "ACRE_PRC152",   
            "ACE_NVG_Gen4_Black",
            "UK3CB_BAF_Bayonet_L3A1"
            };
        
        //misc
        map[] = {"ItemMap"};
        gps[] = {""};
        nvgs[] = {""};
        compass[] = {"ItemCompass"};
        watch[] = {"ItemWatch"};
        
        //Scripted
        insignia[] = {"TTT_green_emblem"};
        slingHelmet[] = {"", "", ""};
        identity[] = {""};
        preLoadout = "";
        postLoadout = "[ACE_player, currentWeapon ACE_player, true] call ace_safemode_fnc_setWeaponSafety;";
    };
    

    /* Spielerloadouts */
    class B_Soldier_F: CommonBlufor {
        roledescription = "Rifleman";
        isplayerloadout = true;

        secondary[] = {
            {"hgun_esd_01_F", "muzzle_antenna_01_f", "", "", ""}
        };

        magazines[] += {
            "UK3CB_BAF_556_30Rnd", 17,
            "UK3CB_BAF_762_200Rnd_T",
        };

        items[] += {
            "ItemMicroDAGR"
        };
    };

    class B_soldier_AR_F: B_Soldier_F  {
        roledescription = "Machine Gunner";
        isplayerloadout = true;

        vest[] = {
            "UK3CB_BAF_V_Osprey_MG_A",
            "UK3CB_BAF_V_Osprey_MG_B"
        };

        primary[] = {
            {"UK3CB_BAF_L7A2", "UK3CB_BAF_762_200Rnd_T", "", "", ""}
        };
        //launcher[] = {"UK3CB_BAF_Tripod", "", "", "", ""}; //Optional, kann auch ein Fhz

        magazines[] = {
            "UK3CB_BAF_762_200Rnd_T", 3,
            "UK3CB_BAF_9_15Rnd", 2,
            "UK3CB_BAF_SmokeShell", 2,
            "UK3CB_BAF_SmokeShellGreen", 1,
            "HandGrenade", 2,
        };

        items[] += {
            "ACE_SpareBarrel"
        };
    };

    class B_soldier_M_F: B_Soldier_F  {
        roledescription = "Sharpshooter";
        isplayerloadout = true;

        vest[] = {
            "UK3CB_BAF_V_Osprey_Marksman_A"
        };

        primary[] = {
            {"UK3CB_BAF_L129A1", "UK3CB_BAF_TA648_308", "UK3CB_BAF_LLM_Flashlight_Tan", "UK3CB_underbarrel_acc_grippod", ""},
            {"UK3CB_BAF_L129A1", "UK3CB_BAF_TA648_308", "UK3CB_BAF_LLM_Flashlight_Black", "UK3CB_underbarrel_acc_grippod", ""},
        };

        binoculars[] = {"Rangefinder"};

        magazines[] = {
            "UK3CB_BAF_762_L42A1_20Rnd_T", 10,
            "UK3CB_BAF_762_L42A1_20Rnd", 10,
            "UK3CB_BAF_9_15Rnd", 2,
            "UK3CB_BAF_762_200Rnd_T",

            "UK3CB_BAF_SmokeShell", 2,
            "UK3CB_BAF_SmokeShellGreen", 1,
            "HandGrenade", 2,
        };

        items[] += {
            "ACE_RangeCard"
        };
    };
    
    class B_Soldier_GL_F: B_Soldier_F {
        roledescription = "Grenadier";
        isplayerloadout = true;

        vest[] = {
            "UK3CB_BAF_V_Osprey_Grenadier_A",
            "UK3CB_BAF_V_Osprey_Grenadier_B"
        };

        primary[] = {
            {"UK3CB_BAF_L85A3_UGL", "RKSL_optic_LDS", "UK3CB_BAF_LLM_Flashlight_Tan","",""},
            {"UK3CB_BAF_L85A3_UGL", "RKSL_optic_LDS_C", "UK3CB_BAF_LLM_Flashlight_Tan","",""},
            {"UK3CB_BAF_L85A3_UGL", "RKSL_optic_LDS", "UK3CB_BAF_LLM_Flashlight_Black","",""},
            {"UK3CB_BAF_L85A3_UGL", "RKSL_optic_LDS_C", "UK3CB_BAF_LLM_Flashlight_Black","",""},
        };

        magazines[] += {
            "1Rnd_HE_Grenade_shell", 25,
            "1Rnd_Smoke_Grenade_shell", 10,
            "1Rnd_SmokeRed_Grenade_shell", 10,
        };

        items[] += {
            "ACE_Fortify"
        };

    };

    class B_Soldier_TL_F: CommonBlufor {
        roledescription = "Section 2iC";
        isplayerloadout = true;

        vest[] = {
            "UK3CB_BAF_V_Osprey_SL_A",
            "UK3CB_BAF_V_Osprey_SL_B"
        };

        binoculars[] = {"ACE_Vector"};

        magazines[] += {
            "UK3CB_BAF_556_30Rnd_T", 9,
            "UK3CB_BAF_762_200Rnd_T",
        };

        items[] += {
            "ItemAndroid",
            "ACRE_PRC152",
            "ace_flags_red",
            "ACE_MicroDAGR"
        };
    };

    class B_Soldier_SL_F: B_Soldier_TL_F {
        roledescription = "Section Commander";
        isplayerloadout = true;

        backpack[] = {
            "UK3CB_BAF_B_Bergen_MTP_SL_H_A",
            //"UK3CB_BAF_B_Bergen_MTP_SL_L_A"
        };

        items[] += {
            "ACRE_PRC117F"
        };
    };

    class B_officer_F: B_Soldier_SL_F {
        roledescription = "Platoon Commander";
        isplayerloadout = true;
    };

    class B_engineer_F: B_Soldier_F {
        roledescription = "Combat Engineer";
        isplayerloadout = true;

        backpack[] = {
            "UK3CB_BAF_B_Bergen_MTP_Sapper_H_A",
            //"UK3CB_BAF_B_Bergen_MTP_Sapper_L_A"
        };

        items[] += {
            "ACE_DefusalKit",
            "ACE_Clacker",
            "ACE_Wirecutter",
            "mts_cutter_folding_saw",
            "ACE_fortify",
        };

        magazines[] += {
            "DemoCharge_Remote_Mag", 3,
            "SatchelCharge_Remote_Mag", 1,
        };

        preLoadout = "player setVariable ['ACE_isEngineer', 1, true]; player setVariable ['ACE_isEOD', true, true];";
    };

    class B_soldier_mine_F: B_Soldier_F {
        roledescription = "EOD Technician";
        isplayerloadout = true;

        backpack[] = {
            "UK3CB_BAF_B_Bergen_MTP_Engineer_H_A",
            //"UK3CB_BAF_B_Bergen_MTP_Engineer_L_A"
        };

        items[] += {
            "ACE_DefusalKit",
            "ACE_VMH3",
        };

        preLoadout = "player setVariable ['ACE_isEngineer', 1, true]; player setVariable ['ACE_isEOD', true, true];";
    };

    class B_soldier_exp_F: B_Soldier_F {
        roledescription = "Breacher";
        isplayerloadout = true;

        backpack[] = {
            "UK3CB_BAF_B_Bergen_MTP_PointMan_H_A",
            //"UK3CB_BAF_B_Bergen_MTP_PointMan_L_A"
        };

        magazines[] += {
            "tsp_breach_block_mag", 3,
            "tsp_breach_package_mag", 3,
            "UK3CB_BAF_12G_Pellets", 12
        };

        items[] += {
            "ACE_Clacker",
            "ACE_Wirecutter"
        };

        preLoadout = "player setVariable ['ACE_isEngineer', 1, true]; player setVariable ['ACE_isEOD', true, true];";
        postLoadout = "[['UK3CB_BAF_L128A1','','','',['UK3CB_BAF_12G_Pellets',8],[],'']] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;";
    };

    class B_medic_F: CommonBlufor {
        roledescription = "Pararescue Jumper #3";
        isplayerloadout = true;

        uniform[] = {
            "UK3CB_BAF_U_JumperUniform_MTP"
        };
        vest[] = {
            "UK3CB_BAF_V_Osprey_Medic_B"
        };
        backpack[] = {
            "UK3CB_BAF_B_Bergen_MTP_Medic_H_B"
        };

        magazines[] += {
            "UK3CB_BAF_556_30Rnd", 8,
        };

        items[] += {
            "ACE_SurgicalKit",
            "ACE_PersonalAidKit",
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

        preLoadout = "player setVariable ['ace_medical_medicClass', 2, true];";
    };

    class TTT_B_Medic_CM_F: B_medic_F {
        roledescription = "Pararescue Jumper #2";
        isplayerloadout = true;

        vest[] = {
            "UK3CB_BAF_V_Osprey_Medic_C",
        };
        backpack[] = {
            "UK3CB_BAF_B_Bergen_MTP_Medic_L_A"
        };

        items[] += {
            "ACRE_PRC152"
        };
    };

    class TTT_B_Medic_Doctor_F: TTT_B_Medic_CM_F {
        roledescription = "Pararescue Jumper #1";
        isplayerloadout = true;

        vest[] = {
            "UK3CB_BAF_V_Osprey_Medic_D"
        };
        backpack[] = {
            "UK3CB_BAF_B_Bergen_MTP_Radio_H_B"
        };

        items[] = {
            "ACE_SurgicalKit",
            "ACE_PersonalAidKit",
            "ACE_Suture",30,

            "ACE_PackingBandage",30,
            "ACE_ElasticBandage",60,
            "ACE_Tourniquet",10,

            "ACE_SalineIV",12,
            "ACE_SalineIV_500",6,
            "ACE_SalineIV_250",6,

            "ACE_Painkillers",8,
            "ACE_Morphine",8,
            "ACE_Epinephrine",8,

            "ACRE_PRC117F"
        };
    };
};