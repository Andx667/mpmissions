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
                "UK3CB_GAF_B_U_SF_CombatSmock_07_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_07_MULTICAM",
                "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM_TAN",
                "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM",
                "UK3CB_GAF_B_U_CombatSmock_02_DIGI",
                "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM_TAN",
                "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM",
                "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM_TAN",
                "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM",
            };
            vest[] = {
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI_OLI",
                "UK3CB_GAF_B_MBAV_LIGHT_DIGI",
            };
            backpack = "";
            headgear[] = {
                "UK3CB_GAF_B_H_Beret_Army",
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
            };
            addItemsToVest[] = {
                LIST_2("rhs_mag_m67"),
                LIST_2("rhs_mag_an_m8hc"),
                "rhs_mag_m18_green",
                "ACRE_PRC148"

            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                "UK3CB_ACR_Carbine",
            };
            primaryWeaponOptics[] = {
                "rhsusf_acc_su230",
                "rhsusf_acc_su230_c",
                "rhsusf_acc_su230_mrds",
                "rhsusf_acc_su230_mrds_c",
                "rhsusf_acc_g33_xps3_tan",
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
                };
            handgunWeaponMagazine = "";

            goggles[] = {
                "",
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

        };

        class B_soldier_exp_F: B_Soldier_GL_F {

        };

        class B_soldier_LAT2_F: B_Soldier_F {
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

        };

        //Autorifleman
        class B_soldier_AR_F {

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
        //TF mit GL
        class B_Soldier_TL_F {

        };

        class B_Soldier_SL_F: B_Soldier_TL_F {

        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class TTT_B_FO_F: B_Soldier_F {

        };

        //Medics
        class B_medic_F {
            vest[] = {
                "UK3CB_GAF_B_MBAV_MEDIC_BLK_02",
                "UK3CB_GAF_B_MBAV_MEDIC_DIGI_OLI_02",
                "UK3CB_GAF_B_MBAV_MEDIC_DIGI_02",
                "UK3CB_GAF_B_MBAV_MEDIC_OLI_02",
                "UK3CB_GAF_B_MBAV_MEDIC_TAN_01",
            };

            primaryWeapon = "UK3CB_ACR_Crew";

            class Rank {

                class PRIVATE { //Squad Level Medic
                    backpack[] = {
                        "B_AssaultPack_rgr",
                        };

                    addItemsToVest[] += {
                        LIST_3("UK3CB_ACR_30rnd_556x45"),
                        "kat_basicDiagnostic",
                        "kat_Pulseoximeter",
                    };
                    //Fits in a Vanilla Assault_Pack recommended for Squad-Level-Medics
                    addItemsToBackpack[] = {
                        LIST_30("ACE_quikclot"),
                        LIST_30("ACE_packingBandage"),
                        LIST_12("ACE_tourniquet"),

                        LIST_8("kat_IV_16"),
                        LIST_4("kat_IO_FAST"),

                        LIST_8("kat_chestSeal"),
                        LIST_8("kat_larynx"),
                        LIST_8("kat_ncdKit"),

                        "kat_pocketBVM",

                        LIST_8("ACE_salineIV_250"),

                        LIST_8("kat_TXA"),
                        LIST_8("ACE_adenosine"),
                        LIST_8("ACE_epinephrine"),
                        LIST_8("kat_naloxone"),
                        LIST_8("kat_nalbuphine"),
                        LIST_8("kat_Painkiller"),
                        LIST_8("kat_Penthrox"),
                    };

                };

                class CORPORAL: PRIVATE {
                    backpack = "B_TacticalPack_rgr";

                    addItemsToBackpack[] += {
                        LIST_15("ACE_quikclot"),
                        LIST_15("ACE_packingBandage"),
                        LIST_4("ACE_tourniquet"),

                        LIST_4("kat_IV_16"),
                        LIST_2("kat_IO_FAST"),

                        LIST_4("kat_chestSeal"),
                        LIST_4("kat_larynx"),
                        LIST_4("kat_ncdKit"),

                        LIST_4("ACE_salineIV_250"),

                        LIST_4("kat_TXA"),
                        LIST_4("ACE_adenosine"),
                        LIST_4("ACE_epinephrine"),
                        LIST_4("kat_naloxone"),
                        LIST_4("kat_nalbuphine"),
                        LIST_4("kat_Painkiller"),
                        LIST_4("kat_Penthrox"),
                    };
                };

                class SERGEANT: CORPORAL {
                    backpack[] = {
                        "UK3CB_GAF_B_B_RIF_MED_DIGI",
                        "UK3CB_GAF_B_B_RIF_MED_OLI",
                        "UK3CB_GAF_B_B_RIF_MED_TAN",
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
