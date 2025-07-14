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
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "goggles",
        "headgear"
    };

    class Side {
        class Blufor {
            uniform[] = {
                "UK3CB_GAF_B_U_CombatSmock_04_DIGI",
                "UK3CB_GAF_B_U_CombatSmock_02_DIGI",
                // "UK3CB_GAF_B_U_SF_CombatSmock_07_MULTICAM_OLIVE",
                // "UK3CB_GAF_B_U_SF_CombatSmock_07_MULTICAM",
                // "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM_OLIVE",
                // "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM_TAN",
                // "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM",
                // "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM_OLIVE",
                // "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM_TAN",
                // "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM",
                // "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM_OLIVE",
                // "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM_TAN",
                // "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM",
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
                "kat_Painkiller",
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
                "UK3CB_GAF_B_H_6b27m_DIGI",
            };

            primaryWeapon[] = {
                "UK3CB_ACR_Carbine",
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
            primaryWeaponMagazine = "UK3CB_ACR_30rnd_556x45";
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
                "UK3CB_G_Tactical_Clear_Shemagh_Tan",
                "UK3CB_G_Tactical_Black",
                "UK3CB_G_Tactical_Black_Shemagh_Green",
                "UK3CB_G_Tactical_Black_Shemagh_Tan",
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

        class TTT_B_RadioOperator_F: B_Soldier_F {

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
                "UK3CB_M14DMR",
                "UK3CB_M14DMR_BLK",
            };
            primaryWeaponMagazine = "ACE_20Rnd_762x51_Mag_Tracer";
            primaryWeaponOptics = "uk3cb_optic_artel_m14";
            primaryWeaponPointer = "";

            vest[] = {
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI",
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI_OLI",
            };

            addItemsToVest[] = {
                "ACE_Rangetable",
                LIST_3("ACE_20Rnd_762x51_Mag_Tracer"),
            };
            addItemsToBackpack[] = {
                LIST_8("ACE_20Rnd_762x51_M118LR_Mag"),
                LIST_6("UK3CB_ACR_30rnd_556x45"),
                LIST_5("ACE_20Rnd_762x51_Mag_Tracer"),
            };
            binoculars = "rhsusf_bino_lerca_1200_black";
        };

        //Autorifleman
        class B_soldier_AR_F {
            primaryWeapon = "rhs_weap_m249_pip_S_para";
            primaryWeaponMagazine = "rhsusf_200Rnd_556x45_mixed_soft_pouch";

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

            class Rank {

                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {

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
            primaryWeapon = "UK3CB_ACR_Crew";

            vest[] = {
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI",
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI_OLI",
            };

            addItemsToVest[] += {
                LIST_3("UK3CB_ACR_30rnd_556x45"),
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
                "UK3CB_B_I_Backpack_Radio_Chem",
            };

            addItemsToVest[] += {
                "ACE_SpraypaintBlack",
                "ACE_microDAGR",
                "ACRE_PRC152",
                "ItemAndroid",
                LIST_8("UK3CB_ACR_30rnd_556x45_RT"),
            };
            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            addItemsToBackpack[] += {
                "ace_flags_red",
            };
        };

        class B_officer_F: B_Soldier_SL_F {
            //headgear = "UK3CB_GAF_B_H_Off_Beret";
        };

        class TTT_B_FO_F: B_Soldier_F {

        };

        //Medics
        class B_medic_F {
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
                        LIST_8("UK3CB_ACR_30rnd_556x45"),
                        "kat_basicDiagnostic",
                        "kat_Pulseoximeter",
                    };
                    //Fits in a Vanilla Assault_Pack recommended for Squad-Level-Medics
                    addItemsToBackpack[] = {
                        LIST_45("ACE_quikclot"),
                        LIST_45("ACE_packingBandage"),
                        LIST_12("ACE_tourniquet"),

                        LIST_8("kat_IV_16"),
                        LIST_4("kat_IO_FAST"),

                        LIST_8("kat_chestSeal"),
                        LIST_8("kat_larynx"),
                        LIST_8("kat_ncdKit"),

                        LIST_2("kat_pocketBVM"),

                        LIST_8("ACE_salineIV_250"),

                        LIST_8("kat_TXA"),
                        LIST_8("ACE_adenosine"),
                        LIST_8("ACE_epinephrine"),
                        LIST_8("kat_naloxone"),
                        LIST_8("kat_nalbuphine"),
                        LIST_8("kat_Painkiller"),
                        LIST_8("kat_Penthrox"),
                        LIST_2("ACE_CableTie"),
                        LIST_2("ACE_Chemlight_IR"),
                    };
                };

                class CORPORAL: PRIVATE {
                    primaryWeapon = "UK3CB_ACR_Crew";

                    backpack[] = {
                        "UK3CB_B_TacticalPack_Med_Oli",
                    };

                    addItemsToVest[] = {
                        LIST_3("UK3CB_ACR_30rnd_556x45"),
                        "kat_basicDiagnostic",
                        "kat_Pulseoximeter",
                        "ACE_SpraypaintBlue",
                        "ace_flags_blue",
                    };
                    addItemsToBackpack[] += {
                        LIST_25("ACE_quikclot"),
                        LIST_25("ACE_packingBandage"),
                        LIST_4("ACE_tourniquet"),

                        LIST_4("kat_IV_16"),
                        LIST_2("kat_IO_FAST"),

                        LIST_4("kat_chestSeal"),
                        LIST_4("kat_larynx"),
                        LIST_4("kat_ncdKit"),

                        LIST_4("ACE_salineIV_250"),

                        LIST_4("kat_TXA"),          //verbindet regelmäßig Wunden
                        LIST_4("ACE_adenosine"),    //senkt HR/BP
                        LIST_4("ACE_epinephrine"),  //Hebt HR/BP, hilft beim Aufwachen, verlangsamt Blutung um 15%
                        LIST_4("kat_naloxone"),     //Opioid Antagonist
                        LIST_4("kat_nalbuphine"),   //mittleres Schmerzmittel, senkt HR/BP
                        LIST_4("kat_Painkiller"),   //leichtes Schmerzmittel
                        LIST_4("kat_Penthrox"),     //mittleres Schmerzmittel
                    };
                };

                class SERGEANT: CORPORAL {
                    backpack[] = {
                        "UK3CB_GAF_B_B_RIF_MED_DIGI",
                        "UK3CB_GAF_B_B_RIF_MED_OLI",
                        //"UK3CB_GAF_B_B_RIF_MED_TAN",
                        };
                    addItemsToVest[] += {
                        "ACE_surgicalKit",
                    };
                    addItemsToBackpack[] = {
                        //M
                        LIST_8("ACE_tourniquet"),
                        LIST_30("ACE_elasticBandage"),
                        //A
                        "kat_accuvac",
                        LIST_8("kat_chestSeal"),
                        LIST_8("kat_aatKit"),
                        LIST_8("kat_larynx"),
                        //R
                        "kat_BVM",
                        LIST_2("kat_oxygenTank_150"),
                        //C
                        "kat_X_AED",
                        LIST_10("kat_IV_16"),
                        LIST_4("kat_IV_fast"),
                        LIST_2("ACE_SalineIV250"),
                        LIST_8("ACE_BloodIV"),
                        LIST_4("ACE_BloodIV500"),
                        LIST_4("ACE_BloodIV250"),
                        //H
                        //Misc
                        LIST_30("ACE_Suture"),
                        LIST_12("kat_eaca"),        //Näht regelmäßig offene Wunden
                        "ACE_Bodybag",
                        LIST_8("kat_lidocaine"),    //leichtes Schmerzmittel, verbessert AED Chancen um 8%
                        LIST_8("kat_ketamine"),     //starkes Schemrzmittel, hebt HR/BP
                        LIST_8("kat_fentanyl"),     //starkes Schmerzmittel, senkt HR/BP
                        LIST_8("kat_amiodarone"),   //verbessert AED Chancen um 8-20%, 33% Brachykardie als Nebenwirkung
                        LIST_6("kat_atropine"),     //Gegenmittel für chemische Symptome, Gegenmittel für Brachykardie
                    };
                };

                class LIEUTENANT: SERGEANT {

                };
            };
        };

        class B_soldier_repair_F: B_Soldier_F {

            class Rank {

                class PRIVATE {

                };
                class SERGEANT: PRIVATE {

                };
            };
        };

        //SOF
        class B_recon_F {

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

        class B_recon_M_F {

        };
    };
};
