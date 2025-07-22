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
                "BWA3_Uniform2_Fleck",
                "BWA3_Uniform2_sleeves_Fleck",
            };
            vest[] = {
                "BWA3_Vest_Rifleman_Fleck",
            };
            backpack = "BWA3_AssaultPack_Fleck";
            headgear[] = {
                "BWA3_OpsCore_FastMT_Peltor_Fleck",
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("kat_chestSeal"),
                "kat_guedel",
                LIST_2("kat_Painkiller"),
            };
            addItemsToVest[] = {
                "ACRE_SEM52SL",
                LIST_2("BWA3_DM51A1"),
                LIST_2("BWA3_DM25"),
                "BWA3_DM32_Green",
                LIST_2("BWA3_15Rnd_9x19_P8"),
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                "BWA3_G36A3",
                "BWA3_G36A3_green",
                "BWA3_G36A3_tan",
            };
            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30_MicroT2",
                "BWA3_optic_ZO4x30_MicroT2_brown",
                "BWA3_optic_ZO4x30_RSAS",
                "BWA3_optic_ZO4x30_RSAS_brown",
                };
            primaryWeaponPointer[] = {
                "BWA3_acc_LLM01_irlaser",
                "BWA3_acc_LLM01_irlaser_green",
                "BWA3_acc_LLM01_irlaser_tan",
                };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_AP";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                "BWA3_P8",
                };
            handgunWeaponMagazine = "BWA3_15Rnd_9x19_P8";

            goggles[] = {
                "BWA3_G_Combat_black",
                "BWA3_G_Combat_clear",
                "BWA3_G_Combat_orange",
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
                LIST_8("BWA3_30Rnd_556x45_G36_AP"),
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon[] = {
                "BWA3_G36A3_AG40",
                "BWA3_G36A3_AG40_green",
                "BWA3_G36A3_AG40_tan",
                };
            vest = "BWA3_Vest_Grenadier_Fleck";
            addItemsToVest[] += {
                LIST_8("1Rnd_HE_Grenade_shell"),
            };
            addItemsToBackpack[] += {
                LIST_12("1Rnd_HE_Grenade_shell"),
                LIST_5("1Rnd_SmokeRed_Grenade_shell"),
                LIST_5("1Rnd_Smoke_Grenade_shell"),
            };
        };

        class B_soldier_exp_F: B_Soldier_GL_F {

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "BWA3_RGW90_Loaded";
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {

        };
        class B_soldier_AT_F: B_Soldier_F {

        };

        class B_soldier_AAT_F: B_Soldier_F {

        };

        class B_Soldier_A_F: B_Soldier_F {
            backpack = "BWA3_PatrolPack_Fleck";

            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                LIST_6("BWA3_120Rnd_762x51_Tracer_soft"),
                "ACE_EntrenchingTool",
            };
        };

        class B_soldier_UAV_F: B_Soldier_F {

        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F {
            primaryWeapon = "BWA3_G28";
            primaryWeaponOptics[] = {
                "BWA3_optic_PMII_DMR_MicroT1_front",
                "BWA3_optic_PMII_DMR_MicroT1_rear",
                };

            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan",
                };

            vest = "BWA3_Vest_Marksman_Fleck";

            addItemsToVest[] += {
                LIST_7("BWA3_20Rnd_762x51_G28_AP"),
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                LIST_8("BWA3_20Rnd_762x51_G28_LR"),
            };
        };

        //Autorifleman
        class B_soldier_AR_F {
            primaryWeapon = "BWA3_MG4";
            primaryWeaponMagazine = "BWA3_200Rnd_556x45_Tracer";


            vest = "BWA3_Vest_Marksman_Fleck";

            addItemsToVest[] += {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
            };
            addItemsToBackpack[] = {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
            };
        };

        //MMG
        class B_HeavyGunner_F {
            primaryWeapon[] = {"BWA3_MG5","BWA3_MG5_tan"};
            primaryWeaponMagazine = "BWA3_120Rnd_762x51_Tracer_soft";
            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30i",
                "BWA3_optic_ZO4x30i_MicroT2",
                "BWA3_optic_ZO4x30i_MicroT2_sand",
                "BWA3_optic_ZO4x30i_RSAS",
                "BWA3_optic_ZO4x30i_RSAS_sand",
                "BWA3_optic_ZO4x30i_sand",
            };

            vest = "BWA3_Vest_Marksman_Fleck";
            addItemsToVest[] += {
                LIST_2("BWA3_120Rnd_762x51_Tracer_soft"),
            };
            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                LIST_2("BWA3_120Rnd_762x51_Tracer_soft"),
            };
        };

        class B_soldier_AA_F: B_Soldier_F {
            secondaryWeapon = "BWA3_Fliegerfaust";
            secondaryWeaponMagazine = "BWA3_Fliegerfaust_Mag";
            backpack = "";

        };

        class B_soldier_AAA_F: B_Soldier_F {
            backpack = "BWA3_PatrolPack_Fleck";
            addItemsToBackpack[] = {
                LIST_3("BWA3_Fliegerfaust_Mag"),
            };
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {
            backpack = "BWA3_PatrolPack_Fleck";

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
            backpack = "BWA3_PatrolPack_Fleck";

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
            uniform = "BWA3_Uniform_Crew_Fleck";
            vest = "BWA3_Vest_Fleck";
            backpack = "";
            headgear = "BWA3_CrewmanKSK_Fleck_Headset";

            primaryWeapon = "BWA3_MP7";
            primaryWeaponMagazine = "BWA3_20Rnd_46x30_MP7";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";

            goggles[] = {
                "CUP_G_ESS_BLK",
                "CUP_G_ESS_BLK_Facewrap_Black",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "",
            };

            class Rank {
                class PRIVATE {
                    addItemsToVest[] += {
                        LIST_3("BWA3_20Rnd_46x30_MP7"),
                    };

                };
                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                    };

                };
                class LIEUTENANT: SERGEANT {
                    backpack = "CUP_B_Kombat_Radio_Olive";
                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
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
            vest = "BWA3_Vest_Leader_Fleck";

            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };
            addItemsToVest[] += {
                "ItemAndroid",
                LIST_8("BWA3_30Rnd_556x45_G36_Tracer"),
            };

            binoculars = "ACE_Vector";

        };

        class B_Soldier_SL_F: B_Soldier_TL_F {

            addItemsToBackpack[] += {
                "ace_flags_red",
                };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class TTT_B_FO_F: B_Soldier_F {

        };

        //Medics
        class B_medic_F {
            vest = "BWA3_Vest_Medic_Fleck";

            class Rank {

                class PRIVATE {
                    backpack = "BWA3_AssaultPack_Fleck_Medic";
                    addItemsToVest[] += {
                        "ACE_SurgicalKit",
                        LIST_8("BWA3_30Rnd_556x45_G36_AP"),
                    };
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
                    };
                };

                class CORPORAL: PRIVATE {
                    primaryWeapon = "BWA3_MP7";
                    primaryWeaponMagazine = "BWA3_20Rnd_46x30_MP7";
                    primaryWeaponOptics = "";
                    primaryWeaponPointer = "";

                    addItemsToVest[] = {
                        LIST_3("BWA3_20Rnd_46x30_MP7"),
                        "ItemAndroid",
                        "ACRE_PRC152",
                        "ACE_SurgicalKit",
                        "ACE_flags_blue",
                        "ACE_spraypaintblue",
                    };

                    backpack = "BWA3_TacticalPack_Fleck_Medic";

                    addItemsToBackpack[] += {
                        //M
                        LIST_10("ACE_packingBandage"),
                        LIST_10("ACE_ElasticBandage"),
                        //A
                        LIST_3("kat_chestSeal"),
                        LIST_3("kat_larynx"),
                        LIST_3("kat_ncdKit"),
                        //R
                        //C
                        LIST_4("ACE_salineIV"),
                        LIST_3("kat_IV_16"),
                        LIST_3("ACE_epinephrine"),
                        //H
                        LIST_3("kat_Penthrox"),
                        LIST_3("kat_naloxone"),
                        LIST_3("kat_nalbuphine"),
                        LIST_2("kat_Painkiller"),
                        LIST_3("ACE_morphine"),
                        LIST_10("ACE_Suture"),
                    };

                };

                class SERGEANT: CORPORAL {
                    backpack = "BWA3_Kitbag_Fleck_Medic";

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
                        LIST_6("ACE_BloodIV"),
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
