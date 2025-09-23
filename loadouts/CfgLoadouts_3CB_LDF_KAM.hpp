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
                "UK3CB_LDF_B_U_CombatUniform_WDL_01",
                "UK3CB_LDF_B_U_CombatUniform_Shortsleeve_WDL_01",
            };
            vest[] = {
                "UK3CB_LDF_B_V_RIF_Vest_KKZ10_OLI",
                "UK3CB_LDF_B_V_RIF_Vest_KKZ10_GEO",
                "UK3CB_LDF_B_V_RIF_ALT_Vest_KKZ10_OLI",
                "UK3CB_LDF_B_V_RIF_ALT_Vest_KKZ10_GEO",
            };
            backpack[] = {
                "UK3CB_LDF_B_B_ASS_WDL",
                "UK3CB_LDF_B_B_ASS_OLI",
                };
            headgear[] = {
                "UK3CB_LDF_B_H_MHB15_Headset_GEO",
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
            };
            addItemsToVest[] = {
                "ACRE_PRC148",
                LIST_2("rhs_mag_an_m8hc"),
                LIST_2("rhs_mag_m67"),
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                "uk3cb_auga3",
            };
            primaryWeaponOptics = "rhsusf_acc_ACOG3";
            primaryWeaponPointer = "ACE_DBAL_A3_Red";
            primaryWeaponMagazine = "UK3CB_AUG_30Rnd_556x45_Magazine";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                };
            handgunWeaponMagazine = "";

            goggles[] = {
                "UK3CB_G_Tactical_Clear",
                "UK3CB_G_Tactical_Clear_Shemagh_Green",
                "UK3CB_G_Tactical_Clear_Shemagh_Tan",
                "UK3CB_G_Tactical_Black",
                "UK3CB_G_Tactical_Black_Shemagh_Green",
                "UK3CB_G_Tactical_Black_Shemagh_Tan",
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
            addItemsToVest[] += {
                LIST_8("UK3CB_AUG_30Rnd_556x45_Magazine"),
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {

        };

        class B_soldier_exp_F: B_Soldier_F {
            backpack[] += {
                "UK3CB_CHD_B_B_ENG_WDL_ALT",
                "UK3CB_TKA_O_B_ENG_Tan",
                "UK3CB_TKA_O_B_ENG_Khk",
            };

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
            };

            addItemsToBackpack[] += {
                LIST_5("rhsusf_5Rnd_00Buck"),
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
                "mts_cutter_folding_saw",
                LIST_8("rhs_mag_mk84"),
            };

        };

        class B_soldier_LAT2_F: B_Soldier_F {
        };

        class B_W_RadioOperator_F: B_Soldier_F {
            backpack = "UK3CB_LDF_I_B_RadioBag_GEO";
            addItemsToBackpack[] += {
                LIST_2("ACRE_PRC117F"),
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
            primaryWeapon = "rhs_weap_sr25_ec_wd";
            primaryWeaponOptics = "RKSL_optic_PMII_312_sunshade_wdl";
            primaryWeaponUnderBarrel = "bipod_01_F_khk";
            primaryWeaponMuzzle = "rhsgref_sdn6_suppressor";
            primaryWeaponMagazine = "rhsusf_20Rnd_762x51_SR25_m62_Mag";

            handgunWeapon = "UK3CB_USP";
            handgunWeaponMagazine = "UK3CB_USP_9_15Rnd";

            vest[] += {
                "UK3CB_LDF_B_V_MK_Vest_KKZ10_OLI",
                "UK3CB_LDF_B_V_MK_Vest_KKZ10_GEO",
            };

            addItemsToUniform[] += {
                "ACE_Rangecard",
                LIST_2("UK3CB_USP_9_15Rnd"),
            };

            addItemsToVest[] += {
                LIST_5("rhsusf_20Rnd_762x51_SR25_m62_Mag"),
            };
            addItemsToBackpack[] += {
                LIST_6("rhsusf_20Rnd_762x51_SR25_mk316_special_Mag"),
            };

            binoculars = "rhsusf_bino_lerca_1200_black";
        };

        //Autorifleman
        class B_soldier_AR_F {
            primaryWeapon[] = {
                "rhs_weap_m249_light_S",
                "rhs_weap_m249_pip_S_para",
                "rhs_weap_m249_light_S",
            };
            primaryWeaponUnderbarrel = "rhsusf_acc_grip4_bipod";
            primaryWeaponMagazine = "rhsusf_200Rnd_556x45_mixed_soft_pouch";

            handgunWeapon = "UK3CB_USP";
            handgunWeaponMagazine = "UK3CB_USP_9_15Rnd";

            vest[] = {
                "UK3CB_LDF_B_V_LMG_Vest_KKZ10_OLI",
                "UK3CB_LDF_B_V_LMG_Vest_KKZ10_GEO",
            };

            addItemsToUniform[] += {
                LIST_2("UK3CB_USP_9_15Rnd"),
            };

            addItemsToVest[] += {
                LIST_2("rhsusf_200Rnd_556x45_mixed_soft_pouch"),
            };
            addItemsToBackpack[] += {
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

            class Rank {
                class PRIVATE {

                };
                class SERGEANT: PRIVATE {

                };
                class LIEUTENANT: SERGEANT {
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
            primaryWeapon = "";
            vest = "UK3CB_LDF_B_V_TacVest_GEO";
            backpack = "UK3CB_B_Invisible";
            headgear = "H_CrewHelmetHeli_I_E";

        };

        class B_Helipilot_F: B_helicrew_F{
            headgear[] += {
                "ttt_Helmet_Buzzard",
                "ttt_Helmet_Eagle",
                "ttt_Helmet_Falcon",
                "ttt_Helmet_Hawk",
                "H_PilotHelmetHeli_I_E",
            };

            addItemsToBackpack[] += {
                "ACRE_PRC117F",
            };
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
            vest[] = {
                "UK3CB_LDF_B_V_TL_Vest_KKZ10_GEO",
                "UK3CB_LDF_B_V_TL_Vest_KKZ10_OLI",
            };
            backpack = "UK3CB_B_I_Backpack_Radio_Chem_OLI";

            primaryWeaponMagazine = "UK3CB_AUG_30Rnd_556x45_Magazine_RT";

            addItemsToUniform[] += {
                "ACE_Microdagr",
            };

            addItemsToVest[] += {
                "ItemAndroid",
                "ACRE_PRC152",
                LIST_8("UK3CB_AUG_30Rnd_556x45_Magazine_RT"),
                "rhs_mag_m18_green"
            };

            binoculars = "ACE_Vector";

        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            vest[] = {
                "UK3CB_LDF_B_V_SL_Vest_KKZ10_OLI",
                "UK3CB_LDF_B_V_SL_Vest_KKZ10_GEO",
            };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class TTT_B_FO_F: B_Soldier_F {

        };

        //Medics
        class B_medic_F {
            vest[] = {
                "UK3CB_LDF_B_V_MD_Vest_KKZ10_GEO",
                "UK3CB_LDF_B_V_MD_Vest_KKZ10_OLI",
            };

            class Rank {

                class PRIVATE {

                };

                class CORPORAL: PRIVATE {
                    backpack = "UK3CB_B_US_Medic_Backpack";

                    addItemsToVest[] += {
                        "kat_basicDiagnostic",
                        "ACE_surgicalKit",
                        LIST_3("kat_Pulseoximeter"),
                        "ACE_SpraypaintBlue",
                        "ace_flags_blue",
                        LIST_3("UK3CB_AUG_30Rnd_556x45_Magazine"),
                    };

                    addItemsToBackpack[] += {
                        //M
                        LIST_45("ACE_elasticBandage"),
                        LIST_45("ACE_packingBandage"),
                        LIST_12("ACE_tourniquet"),
                        //A
                        LIST_12("kat_larynx"),
                        //R
                        "kat_pocketBVM",
                        LIST_12("kat_chestSeal"),
                        LIST_6("kat_ncdKit"),
                        //C
                        LIST_6("ACE_salineIV"),
                        LIST_3("ACE_salineIV_250"),
                        LIST_3("ACE_salineIV_500"),
                        LIST_15("kat_IV_16"),
                        LIST_12("ACE_epinephrine"),
                        LIST_6("kat_lidocaine"),
                        LIST_3("KAT_Empty_bloodIV_250"),
                        LIST_3("KAT_Empty_bloodIV_500"),
                        "kat_AED",
                        LIST_6("kat_phenylephrineAuto"),
                        //H
                        LIST_10("kat_Penthrox"),
                        LIST_10("kat_Painkiller"),
                        LIST_10("ACE_morphine"),
                        LIST_10("kat_naloxone"),
                        LIST_45("ACE_Suture"),
                    };
                };

                class SERGEANT: CORPORAL {
                    backpack = "ttt_backpack_medic_rgr_02";
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
