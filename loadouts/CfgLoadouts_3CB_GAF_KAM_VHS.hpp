// brazenly stolen from 1tac
#define LIST_1(var1) var1
#define LIST_2(var1) var1,var1
#define LIST_3(var1) var1,var1,var1
#define LIST_4(var1) var1,var1,var1,var1
#define LIST_5(var1) var1,var1,var1,var1,var1
#define LIST_6(var1) var1,var1,var1,var1,var1,var1
#define LIST_7(var1) var1,var1,var1,var1,var1,var1,var1
#define LIST_8(var1) var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_9(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_10(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_11(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_12(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_13(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_14(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_15(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_16(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_17(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_18(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_19(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_20(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_21(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_22(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_23(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_24(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_25(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_26(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_27(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_28(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_29(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_30(var1) var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1,var1
#define LIST_45(var1) LIST_30(var1),LIST_15(var1)
#define LIST_60(var1) LIST_30(var1),LIST_30(var1)

class Loadouts {
    baseDelay = 1;
    perPlayerDelay = 1;
    handleRadios = 1;
    resetLoadout = 1;
    randomizationMode = 1;
    customGear = 300;
    customGearAllowedCategories[] = {
        "uniform",
        "vest",
        "backpack",
        "primaryWeapon",
        "primaryWeaponOptics",
        "goggles",
        "headgear",
    };

    class Side {
        class Blufor {
            uniform[] = {
                "UK3CB_GAF_B_U_CombatSmock_04_DIGI",
                "UK3CB_GAF_B_U_CombatSmock_02_DIGI",
            };
            vest[] = {
                "UK3CB_GAF_B_MBAV_RIFLEMAN_DIGI",
                "UK3CB_GAF_B_MBAV_RIFLEMAN_DIGI_OLI",
            };
            backpack = "UK3CB_GAF_B_B_ASS_DIGI";
            headgear[] = {
                //"UK3CB_GAF_B_H_Beret_Army",
                "UK3CB_GAF_B_H_6b27m_DIGI",
                "UK3CB_GAF_B_H_6b27m_ESS_DIGI",
                "UK3CB_GAF_B_H_6b27m_GRN",
                "UK3CB_GAF_B_H_6b27m_ESS_GRN",
                "UK3CB_GAF_B_H_6b27m_DIGI_NOFLAG",
                "UK3CB_GAF_B_H_6b27m_ESS_DIGI_NOFLAG",
                //"UK3CB_GAF_B_H_Opscore_Mar_OLI_01",
                //"UK3CB_GAF_B_H_Opscore_Mar_OLI_02",
                //"UK3CB_GAF_B_H_Opscore_Mar_TAN_01",
                //"UK3CB_GAF_B_H_Opscore_Mar_TAN_02",
                //"rhsusf_opscore_fg_pelt",
                //"rhsusf_opscore_mar_fg_pelt",
                //"rhsusf_opscore_rg_cover_pelt",
                //"rhsusf_opscore_paint_pelt",
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                LSIT_2("kat_Painkiller"),
                LIST_15("ACE_quikclot"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("kat_chestSeal"),
                "UK3CB_BHP_9_13Rnd",
                "kat_guedel",
            };
            addItemsToVest[] = {
                LIST_2("rhs_mag_m67"),
                LIST_2("rhs_mag_an_m8hc"),
                "rhs_mag_m18_green",
                "ACRE_PRC148",
            };
            addItemsToBackpack[] = {
            };

            primaryWeapon[] = {
                "rhs_weap_vhsd2",
            };
            primaryWeaponOptics[] = {
                "rhsusf_acc_su230",
                //"rhsusf_acc_su230_c",
                "rhsusf_acc_su230_mrds",
                //"rhsusf_acc_su230_mrds_c",
                //"rhsusf_acc_g33_xps3_tan",
                "rhsusf_acc_g33_xps3",
                "rhsusf_acc_g33_T1",
                "rhsusf_acc_T1_high",
                "rhsusf_acc_EOTECH",
                };
            primaryWeaponPointer = "ACE_DBAL_A3_Red";
            primaryWeaponMagazine = "rhsgref_30rnd_556x45_vhs2";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                "UK3CB_BHP",
                };
            handgunWeaponMagazine = "UK3CB_BHP_9_13Rnd";

            goggles[] = {
                "UK3CB_G_Tactical_Clear",
                "UK3CB_G_Tactical_Clear_Shemagh_Green",
                //"UK3CB_G_Tactical_Clear_Shemagh_Tan",
                "UK3CB_G_Tactical_Black",
                "UK3CB_G_Tactical_Black_Shemagh_Green",
                //"UK3CB_G_Tactical_Black_Shemagh_Tan",
                ""
                };
            nvgoggles = "";

            binoculars = "Binocular";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "";
        };
    };

    class Type {
        //Rifleman
        class B_Soldier_F {

        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon = "rhs_weap_vhsd2_bg";
            vest[] = {
                "UK3CB_GAF_B_MBAV_GRENADIER_DIGI",
                "UK3CB_GAF_B_MBAV_GRENADIER_DIGI_OLI",
            };
            addItemsToVest[] += {
                LIST_2("rhsusf_mag_6Rnd_M441_HE"),
            };
            addItemsToBackpack[] += {
                "rhsusf_mag_6Rnd_M714_white",
                "rhsusf_mag_6Rnd_M713_red",
                LIST_3("rhsusf_mag_6Rnd_M441_HE"),
            };
        };

        class B_soldier_exp_F: B_Soldier_F {

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "rhs_weap_m72a7";
            secondaryWeaponPointer = "rhsusf_acc_anpeq15side";
        };

        //Radio Operator / FO /JTAC
        class B_W_RadioOperator_F: B_Soldier_F {
            class Rank {
                class PRIVATE {
                    backpack = "";

                    addItemsToBackpack[] += {
                        LIST_2(""), //LR Radio
                        LIST_10(""), //Purple Smoke
                        "ACE_flags_blue",
                        "ACE_flags_yellow",
                    };
                };
               //FO
                class CORPORAL: PRIVATE {
                    backpack = "";

                    addItemsToUniform[] += {
                        "ACE_microdagr",
                    };

                    addItemsToBackpack[] += {
                        "", //Funkgerät
                    };

                    binoculars = "ACE_Vector";
                };
                //JTAC
                class SERGEANT: CORPORAL {

                };
                class LIEUTENANT: SERGEANT {

                };
            };

        };

        class B_soldier_AT_F: B_Soldier_F {

        };

        class B_soldier_AAT_F: B_Soldier_F {

        };

        class B_Soldier_A_F: B_Soldier_F {

        };

        class B_soldier_UAV_F: B_Soldier_F {

        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F {
            primaryWeapon[] = {
                "rhs_weap_m14ebrri",
            };
            primaryWeaponMagazine = "rhsusf_20Rnd_762x51_m118_special_Mag";
            primaryWeaponOptics[] = {
                "rhsusf_acc_LEUPOLDMK4",
                "rhsusf_acc_LEUPOLDMK4_wd"
            };
            primaryWeaponUnderbarrel = "rhsusf_acc_harris_bipod";
            primaryWeaponMuzzle[] = {
                "rhsusf_acc_aac_m14dcqd_silencer",
                //"rhsusf_acc_aac_m14dcqd_silencer_d",
                "rhsusf_acc_aac_m14dcqd_silencer_wd",
            };

            vest[] = {
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI",
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI_OLI",
            };

            addItemsToVest[] = {
                "ACE_Rangetable",
                LIST_3("rhsusf_20Rnd_762x51_m118_special_Mag"),
            };
            addItemsToBackpack[] = {
                LIST_8("rhsusf_20Rnd_762x51_m118_special_Mag"),
                LIST_5("rhsusf_20Rnd_762x51_m62_Mag"),
            };
            binoculars = "rhsusf_bino_lerca_1200_black";
        };

        //Autorifleman
        class B_soldier_AR_F {
            primaryWeapon = "rhs_weap_minimi_para_railed";
            primaryWeaponMagazine = "rhsusf_200Rnd_556x45_mixed_soft_pouch";
            primaryWeaponUnderBarrel = "rhsusf_acc_grip4_bipod";

            vest[] = {
                //"UK3CB_GAF_B_MBAV_MG_BLK_01",
                "UK3CB_GAF_B_MBAV_MG_DIGI_OLI_02",
                "UK3CB_GAF_B_MBAV_MG_DIGI_02",
                "UK3CB_GAF_B_MBAV_MG_OLI_01",
                //"UK3CB_GAF_B_MBAV_MG_TAN_01",
            };

            addItemsToVest[] += {
                LIST_2("rhsusf_200Rnd_556x45_mixed_soft_pouch"),
            };
            addItemsToBackpack[] = {
                LIST_2("rhsusf_200Rnd_556x45_mixed_soft_pouch"),
            };
        };

        //MMG
        class B_HeavyGunner_F {

        };

        class B_soldier_AA_F: B_Soldier_F {

        };

        class B_soldier_AAA_F: B_Soldier_F {
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {
            backpack[] = {
                "UK3CB_CHD_B_B_ENG_WDL_ALT",
                "UK3CB_TKA_O_B_ENG_Khk",
                //"UK3CB_TKA_O_B_ENG_Tan",
            };

            headgear[] = {
                "UK3CB_GAF_B_H_6b27m_DIGI",
                "UK3CB_GAF_B_H_6b27m_GRN",
                "UK3CB_GAF_B_H_6b27m_DIGI_NOFLAG",
            };

            goggles[] = {
                "",
                "rhsusf_oakley_goggles_clr",
                "rhsusf_oakley_goggles_ylw",
                "rhsusf_oakley_goggles_blk",
                "rhsusf_shemagh_gogg_grn",
                "rhsusf_shemagh2_gogg_grn",
                "rhsusf_shemagh_gogg_od",
                "rhsusf_shemagh2_gogg_od",
                "rhsusf_shemagh_gogg_tan",
                "rhsusf_shemagh2_gogg_tan",
            };

            class Rank {

                class PRIVATE {
                    addItemsToVest[] += {
                        "ACE_Clacker",
                        "ACE_Defusalkit",
                    };

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                        "ACE_SpraypaintBlack",
                    };
                };
            };
        };

        class B_soldier_mine_F: B_Soldier_F {

            class Rank {

                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
                };
            };
        };

        //Fahrzeugbesatzung
        class B_crew_F {
            primaryWeapon = "rhs_weap_vhsk2";

            vest[] = {
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI",
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI_OLI",
            };

            addItemsToVest[] += {
                LIST_3("rhsgref_30rnd_556x45_vhs2"),
            };

            headgear[] = {
                "rhs_tsh4",
                "rhs_tsh4_bala",
                "rhs_tsh4_ess",
                "rhs_tsh4_ess_bala",
                };

            class Rank {
                class PRIVATE {

                };
                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC152",
                        "ACE_microDAGR",
                    };

                    binoculars = "ACE_Vector";

                };
                class LIEUTENANT: SERGEANT {
                    backpack[] = {
                        "UK3CB_B_I_Backpack_Radio_Chem_OLI",
                        //"UK3CB_B_I_Backpack_Radio_Chem",
                    };
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                        LIST_3("ACE_Chemlight_HiYellow"),
                        "ACE_CableTie",
                    };
                };
            };
        };

        class B_sniper_F {

        };

        class B_spotter_F: B_soldier_M_F {

        };

        //Mörser
        class B_support_AMort_F: B_Soldier_F {

        };

        class B_support_Mort_F: B_support_AMort_F {
            class Rank {
                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {

                };
            };
        };

        //Pilots
        class B_helicrew_F {

        };

        class B_Helipilot_F: B_helicrew_F{

        };

        //Aufklärer
        class B_Patrol_Soldier_TL_F: B_soldier_M_F {

        };

        class B_Patrol_Soldier_UAV_F: B_soldier_M_F {

        };

        class B_Patrol_Soldier_M_F: B_soldier_M_F {

        };

        //Führung
        class B_Soldier_TL_F {
            backpack[] = {
                "UK3CB_B_I_Backpack_Radio_Chem_OLI",
                //"UK3CB_B_I_Backpack_Radio_Chem",
            };
            addItemsToUniform[] += {
                "ACE_microDAGR",
            };

            addItemsToVest[] += {
                "ItemAndroid",
                LIST_8("rhsgref_30rnd_556x45_vhs2_RT"),
            };

            addItemsToBackpack[] += {
                "ACE_SpraypaintBlack",
                "ACE_SpraypaintRed",
                "ACE_SpraypaintGreen",
                "ACRE_PRC152",
            };
            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            secondaryWeapon = "rhs_weap_m72a7";
            secondaryWeaponPointer = "rhsusf_acc_anpeq15side";

            addItemsToBackpack[] += {
                "ace_flags_red",
            };
        };

        class B_officer_F: B_Soldier_SL_F {
            //headgear = "UK3CB_GAF_B_H_Off_Beret";
        };

        //Medics
        class B_medic_F {
            primaryWeapon = "rhs_weap_vhsk2";
            vest[] = {
                //"UK3CB_GAF_B_MBAV_MEDIC_BLK_02",
                "UK3CB_GAF_B_MBAV_MEDIC_DIGI_OLI_02",
                "UK3CB_GAF_B_MBAV_MEDIC_DIGI_02",
                "UK3CB_GAF_B_MBAV_MEDIC_OLI_02",
                //"UK3CB_GAF_B_MBAV_MEDIC_TAN_01",
            };

            class Rank {

                class PRIVATE { //Squad Level Medic
                    backpack[] = {
                        "UK3CB_B_Backpack_Med_OLI",
                        //"UK3CB_B_Backpack_Med"
                    };

                    addItemsToVest[] += {
                        LIST_8("rhsgref_30rnd_556x45_vhs2"),
                        LIST_3("kat_Pulseoximeter"),
                        "ACE_SurgicalKit",
                    };
                    //Fits in a Vanilla Assault_Pack recommended for Squad-Level-Medics
                    addItemsToBackpack[] = {
                        //M
                        LIST_20("ACE_packingBandage"),
                        LIST_20("ACE_ElasticBandage"),
                        LIST_12("ACE_tourniquet"),
                        //A
                        LIST_9("kat_chestSeal"),
                        LIST_9("kat_larynx"),
                        LIST_9("kat_ncdKit"),
                        //R
                        "kat_pocketBVM",
                        //C
                        LIST_4("ACE_salineIV_250"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_9("kat_IV_16"),
                        LIST_12("ACE_epinephrine"),
                        //H
                        LIST_9("kat_Penthrox"),
                        LIST_9("kat_naloxone"),
                        LIST_9("kat_nalbuphine"),
                        LIST_4("kat_Painkiller"),
                        LIST_9("ACE_morphine"),
                        LIST_20("ACE_Suture"),
                        //Admin
                        LIST_2("ACE_CableTie"),
                        LIST_2("ACE_Chemlight_IR"),
                    };
                };

                class CORPORAL: PRIVATE {
                    backpack[] = {
                        "UK3CB_B_TacticalPack_Med_Oli",
                        "UK3CB_B_US_Medic_Backpack",
                    };

                    addItemsToVest[] = {
                        LIST_3("rhsgref_30rnd_556x45_vhs2"),
                        LIST_3("kat_Pulseoximeter"),
                        "ACE_SpraypaintBlue",
                        "ace_flags_blue",
                        "ItemAndroid",
                    };
                    //14kg
                    addItemsToBackpack[] += {
                        //M
                        LIST_10("ACE_packingBandage"),
                        LIST_10("ACE_ElasticBandage"),
                        LIST_3("ACE_tourniquet"),
                        //A
                        LIST_3("kat_chestSeal"),
                        LIST_3("kat_larynx"),
                        LIST_3("kat_ncdKit"),
                        //R
                        //C
                        LIST_8("ACE_salineIV"),
                        LIST_3("kat_IV_16"),
                        LIST_3("ACE_epinephrine"),
                        LSIT_9("kat_amiodarone"),
                        "kat_aed",
                        //H
                        LIST_3("kat_Penthrox"),
                        LIST_3("kat_naloxone"),
                        LIST_3("kat_nalbuphine"),
                        LIST_2("kat_Painkiller"),
                        LIST_9("ACE_morphine"),
                        LIST_10("ACE_Suture"),
                    };
                };

                class SERGEANT: CORPORAL {
                    backpack[] = {
                        "UK3CB_GAF_B_B_RIF_MED_DIGI",
                        "UK3CB_GAF_B_B_RIF_MED_OLI",
                        //"UK3CB_GAF_B_B_RIF_MED_TAN",
                        };
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                    };
                    addItemsToBackpack[] = {
                        //M
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        //A
                        LIST_6("kat_aatKit"),
                        "kat_accuvac",
                        LIST_6("kat_chestSeal"),
                        LIST_6("kat_larynx"),
                        //R
                        "kat_BVM",
                        "kat_oxygenTank_150",
                        //C
                        LIST_8("ACE_BloodIV"),
                        LIST_4("ACE_BloodIV_500"),
                        LIST_4("ACE_BloodIV_250"),
                        LIST_2("ACE_salineIV_250"),
                        "kat_X_AED",
                        LIST_8("kat_IV_16"),
                        LIST_2("kat_IO_FAST"),
                        LIST_12("kat_epinephrineIV"),
                        LIST_8("kat_lidocaine"),
                        LIST_6("kat_amiodarone"),
                        //H
                        LIST_5("kat_eaca"),
                        LIST_10("kat_txa"),
                        LIST_8("kat_fentanyl"),
                        LIST_8("kat_ketamine"),
                        LIST_8("kat_atropine"),
                        //Admin
                        LIST_30("ACE_Suture"),
                    };
                };

                class LIEUTENANT: SERGEANT {
                    backpack[] = {
                        "UK3CB_B_O_RadioBag_KHK",
                        "UK3CB_B_O_RadioBag_GRN",
                        "UK3CB_B_O_RadioBag_TAN",
                    };
                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                        //M
                        LIST_10("ACE_packingBandage"),
                        LIST_10("ACE_elasticBandage"),
                        //A
                        LIST_2("kat_aatKit"),
                        "kat_accuvac",
                        LIST_3("kat_chestSeal"),
                        LIST_3("kat_larynx"),
                        //R
                        "kat_BVM",
                        "kat_oxygenTank_150",
                        //C
                        LIST_5("ACE_BloodIV"),
                        LIST_3("ACE_BloodIV_500"),
                        LIST_3("ACE_BloodIV_250"),
                        "ACE_salineIV_250",
                        "kat_X_AED",
                        LIST_4("kat_IV_16"),
                        LIST_2("kat_IO_FAST"),
                        LIST_12("kat_epinephrineIV"),
                        LIST_8("kat_lidocaine"),
                        LIST_6("kat_amiodarone"),
                        //H
                        LIST_5("kat_eaca"),
                        LIST_10("kat_txa"),
                        LIST_8("kat_fentanyl"),
                        LIST_8("kat_ketamine"),
                        LIST_8("kat_atropine"),
                        //Admin
                        LIST_10("ACE_Suture"),
                    };
                };
            };
        };

        class B_soldier_repair_F: B_Soldier_F {
            primaryWeapon = "rhs_weap_vhsk2";

            vest[] = {
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI",
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI_OLI",
            };

            class Rank {

                class PRIVATE {
                    addItemsToVest[] += {
                        LIST_3("rhsgref_30rnd_556x45_vhs2"),
                    };
                    addItemsToBackpack[] += {
                        "Tookit",
                    };
                };
                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "ItemAndroid",
                    };
                    backpack[] = {
                        "UK3CB_B_O_RadioBag_KHK",
                        "UK3CB_B_O_RadioBag_GRN",
                        "UK3CB_B_O_RadioBag_TAN",
                    };
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                        "ACE_SpraypaintYellow",
                        "ace_flags_yellow",
                    };

                };
            };
        };

        //SOF
        class B_recon_F {
            primaryWeaponMuzzle[] = {
                "rhsusf_acc_nt4_black",
                //"rhsusf_acc_nt4_tan",
                };
            uniform[] = {
                "UK3CB_GAF_B_U_SF_CombatSmock_07_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_07_MULTICAM",
                "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM_TAN",
                "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM",
                "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM_TAN",
                "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM",
                "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM_TAN",
                "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM",
            };
            headgear[] = {
                //"UK3CB_GAF_B_H_Opscore_Mar_OLI_01",
                //"UK3CB_GAF_B_H_Opscore_Mar_OLI_02",
                //"UK3CB_GAF_B_H_Opscore_Mar_TAN_01",
                //"UK3CB_GAF_B_H_Opscore_Mar_TAN_02",
                "rhsusf_opscore_fg_pelt",
                "rhsusf_opscore_fg_pelt_cam",
                "rhsusf_opscore_fg_pelt_nsw",
                "rhsusf_opscore_paint_pelt_nsw_cam",
                "rhsusf_opscore_mar_fg_pelt",
                "rhsusf_opscore_rg_cover_pelt",
                "rhsusf_opscore_paint_pelt",
            };
        };

        class B_recon_LAT_F: B_recon_F {
        };

        class B_recon_medic_F: B_recon_F {

        };

        class B_recon_exp_F: B_recon_F {

        };

        class B_recon_JTAC_F: B_recon_F {

        };

        class B_recon_TL_F: B_recon_JTAC_F {

        };

        class B_recon_M_F: B_recon_F {

        };
    };
};

        // switch (typeOf ACE_Player) do
        // {
        //     case "B_soldier_exp_F":
        //         {[
        //             [
        //             "UK3CB_BAF_L128A1",                   //Classname der zweiten Waffe
        //             "",                               //Schalldämpfer oder ähnliches
        //             "",                  //Laserpointer / Waffenlicht
        //             "",                     //Optik
        //             ["UK3CB_BAF_12G_Pellets", 8],   //Magazin mit Anzahl Kugeln
        //             [],                               //Zweites Magazin (z.B. UGL)
        //             ""                                 //Zweibein oder ähnliches
        //             ]
        //         ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;};

        //     case "B_soldier_M_F":
        //         {[
        //             [
        //             "UK3CB_ACR_Crew",                   //Classname der zweiten Waffe
        //             "",                               //Schalldämpfer oder ähnliches
        //             "ACE_DBAL_A3_Red",                  //Laserpointer / Waffenlicht
        //             "rhsusf_acc_T1_high",                     //Optik
        //             ["UK3CB_ACR_30rnd_556x45", 30],   //Magazin mit Anzahl Kugeln
        //             [],                               //Zweites Magazin (z.B. UGL)
        //             ""                                 //Zweibein oder ähnliches
        //             ]
        //         ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;};

        //     case "B_Soldier_GL_F":
        //         {[
        //             [
        //             "rhs_weap_m32",                   //Classname der zweiten Waffe
        //             "",                               //Schalldämpfer oder ähnliches
        //             "rhsusf_acc_anpeq15side",                  //Laserpointer / Waffenlicht
        //             "",                     //Optik
        //             ["rhsusf_mag_6Rnd_M441_HE", 6],   //Magazin mit Anzahl Kugeln
        //             [],                               //Zweites Magazin (z.B. UGL)
        //             ""                                 //Zweibein oder ähnliches
        //             ]
        //         ] call KJW_TwoPrimaryWeapons_fnc_addSecondWeapon;};

        //     default {};
        // };
