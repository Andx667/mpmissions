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
        //"uniform",
        "vest",
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "primaryWeaponPointer",
        "goggles",
        "headgear"
    };

    class Side {
        class Blufor {
            uniform[] = {
                //"BWA3_Uniform_Fleck",
                //"BWA3_Uniform_sleeves_Fleck", //handled by AWX
                "BWA3_Uniform_Multi",
                //"BWA3_Uniform_sleeves_Multi",
                //"BWA3_Uniform_Tropen",
                //"BWA3_Uniform_sleeves_Tropen",
            };
            vest[] = {
                //"BWA3_Vest_Rifleman_Fleck"
                //"BWA3_Vest_Rifleman_Tropen"
                "BWA3_Vest_Rifleman_Multi"
            };
            backpack[] = {  
                //"BWA3_AssaultPack_Fleck",
                "BWA3_AssaultPack_Multi",
                //"BWA3_AssaultPack_Tropen"
                };
            headgear[] = {
                "BWA3_OpsCore_FastMT_Peltor",
                //"BWA3_OpsCore_FastMT_Peltor_Fleck",
                "BWA3_OpsCore_FastMT_Peltor_Multi",
                //"BWA3_OpsCore_FastMT_Peltor_Tropen",
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                LIST_2("KAT_Painkiller"),
                LIST_10("ACE_elasticBandage"),
                LIST_10("ACE_packingBandage"),
                LIST_10("ACE_Quikclot"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("KAT_chestSeal"),
                "BWA3_15Rnd_9x19_P8",
            };
            addItemsToVest[] = {
                LIST_2("BWA3_DM25"),
                LIST_2("BWA3_DM51A1"),
                "ACRE_SEM52SL",
                "BWA3_DM32_Green",
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                // "BWA3_G36A3",
                // "BWA3_G36A3_green",
                // "BWA3_G36A3_tan"
                "BWA3_G38",
                "BWA3_G38_tan"
                };
            primaryWeaponOptics[] = {
                //"BWA3_optic_ZO4x30_MicroT2",
                //"BWA3_optic_ZO4x30_MicroT2_brown",
                "BWA3_optic_ZO4x30_RSAS",
                "BWA3_optic_ZO4x30_RSAS_brown"
                };
            primaryWeaponPointer[] = {
                "CUP_acc_LLM",
                "CUP_acc_LLM_black",
                "CUP_acc_LLM_od"
                };
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_AP";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon = "BWA3_P8";
            handgunWeaponMagazine = "BWA3_15Rnd_9x19_P8";

            goggles[] = {
                "",
                "BWA3_G_Combat_black",
                "BWA3_G_Combat_clear",
                "BWA3_G_Combat_orange",
                };
            nvgoggles = "";

            binoculars = "";
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
                // "BWA3_G36A3_AG40",
                // "BWA3_G36A3_AG40_green",
                // "BWA3_G36A3_AG40_tan",
                "BWA3_G38_AG40",
                "BWA3_G38_AG40_tan"
                };
            vest[] = {
                //"BWA3_Vest_Grenadier_Fleck",
                "BWA3_Vest_Grenadier_Multi",
                //"BWA3_Vest_Grenadier_Tropen"
                };
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
            secondaryWeapon = "BWA3_PzF3_Tandem_Loaded";
            backpack = "";
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
            secondaryWeapon = "BWA3_CarlGustav";
            secondaryWeaponOptics = "BWA3_optic_CarlGustav";
            secondaryWeaponMagazine = "BWA3_CarlGustav_HEAT"

            //backpack = "";
            addItemsToBackpack[] = {
                "BWA3_CarlGustav_HEAT",
                "BWA3_CarlGustav_HEDP"
             };
        };

        class B_soldier_AAT_F: B_Soldier_F {
            backpack[] = {
                //"BWA3_PatrolPack_Fleck",
                "BWA3_PatrolPack_Multi",
                //"BWA3_PatrolPack_Tropen"
                };

            addItemsToBackpack[] = {
                LIST_2("BWA3_CarlGustav_HEAT"),
                LIST_2("BWA3_CarlGustav_HEDP"),
            };

        };

        class B_Soldier_A_F: B_Soldier_F {
            backpack[] = {
                //"BWA3_PatrolPack_Fleck",
                "BWA3_PatrolPack_Multi",
                //"BWA3_PatrolPack_Tropen"
                };

            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                LIST_6("BWA3_120Rnd_762x51_Tracer_soft"),
                "ACE_EntrenchingTool",
            };
            binoculars = "Binocular";
        };

        class B_soldier_UAV_F: B_Soldier_F {
            backpack[] = {
                //"BWA3_PatrolPack_Fleck",
                "BWA3_PatrolPack_Multi",
                //"BWA3_PatrolPack_Tropen"
                };

            addItemsToBackpack[] = {
                LIST_10("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed"
            };
            gps = "B_UavTerminal";
        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F {
            //primaryWeapon = "BWA3_G28";
            primaryWeapon[] = {
                "BWA3_G27",
                "BWA3_G27_tan"
            };
            primaryWeaponOptics[] = {
                // "BWA3_optic_PMII_DMR_MicroT1_front",
                // "BWA3_optic_PMII_DMR_MicroT1_rear",
                "BWA3_optic_ZO4x30i_MicroT2",
                "BWA3_optic_ZO4x30i_MicroT2_sand",
                "BWA3_optic_ZO4x30i_RSAS",
                "BWA3_optic_ZO4x30i_RSAS_sand"
                };

            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan",
                };

            vest[] = {
                //"BWA3_Vest_Marksman_Fleck"
                "BWA3_Vest_Marksman_Multi",
                //"BWA3_Vest_Marksman_Tropen"
                };

            addItemsToVest[] += {
                LIST_7("BWA3_20Rnd_762x51_G28_AP"),
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                LIST_8("BWA3_20Rnd_762x51_G28_LR"),
            };
            binoculars = "ACE_Yardage450";
        };

        //Autorifleman
        class B_soldier_AR_F {
            vest[] ={
                //"BWA3_Vest_MachineGunner_Fleck"
                "BWA3_Vest_MachineGunner_Multi",
                //"BWA3_Vest_MachineGunner_Tropen"
                };

            primaryWeapon = "BWA3_MG4";
            primaryWeaponMagazine = "BWA3_200Rnd_556x45_Tracer";

            addItemsToVest[] += {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
            };
            addItemsToBackpack[] = {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
            };
        };

        //MMG
        class B_HeavyGunner_F {
            vest[] = {
                //"BWA3_Vest_MachineGunner_Fleck"
                "BWA3_Vest_MachineGunner_Multi",
                //"BWA3_Vest_MachineGunner_Tropen"
                };

            primaryWeapon[] = {
                "BWA3_MG5",
                "BWA3_MG5_tan"
                };
            primaryWeaponMagazine = "BWA3_120Rnd_762x51_Tracer_soft";
            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30i",
                //"BWA3_optic_ZO4x30i_MicroT2",
                //"BWA3_optic_ZO4x30i_MicroT2_sand",
                //"BWA3_optic_ZO4x30i_RSAS",
                //"BWA3_optic_ZO4x30i_RSAS_sand",
                "BWA3_optic_ZO4x30i_sand",
            };
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
            backpack[] = {  
                //"BWA3_PatrolPack_Fleck",
                "BWA3_PatrolPack_Multi",
                //"BWA3_PatrolPack_Tropen"
                };
            addItemsToBackpack[] = {
                LIST_3("BWA3_Fliegerfaust_Mag"),
            };
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {
            backpack[] = {  
                //"BWA3_PatrolPack_Fleck",
                "BWA3_PatrolPack_Multi",
                //"BWA3_PatrolPack_Tropen"
                };

            goggles[] = {
                "CUP_G_ESS_KHK_Scarf_Face_Tan",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "CUP_G_ESS_KHK_Scarf_Tan",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_BLK",
                ""
            };

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
            backpack[] = {  
                //"BWA3_PatrolPack_Fleck",
                "BWA3_PatrolPack_Multi",
                //"BWA3_PatrolPack_Tropen"
                };

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
            //uniform = "BWA3_Uniform_Crew_Fleck";
            vest[] = {
                //"BWA3_Vest_Fleck",
                "BWA3_Vest_Multi",
                //"BWA3_Vest_Tropen"
                };
            backpack = "";
            headgear = "BWA3_CrewmanKSK_Fleck_Headset";

            // primaryWeapon = "BWA3_MP7";
            // primaryWeaponMagazine = "BWA3_20Rnd_46x30_MP7";
            // primaryWeaponOptics[] = {
            //     "BWA3_optic_RSAS_riser",
            //     "BWA3_optic_RSAS_sand",
            //     "BWA3_optic_RSAS_tan",
            //     "",
            // };
            primaryWeaponPointer = "";

            addItemsToVest[] += {
                //LIST_3("BWA3_20Rnd_46x30_MP7"),
                LIST_3("BWA3_30Rnd_556x45_G36_AP"),
            };

            goggles[] = {
                "CUP_G_ESS_BLK",
                "CUP_G_ESS_BLK_Facewrap_Black",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "",
            };

            class Rank {
                class PRIVATE {

                };

                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                    };

                    gps = "ItemAndroid";
                };
                class LIEUTENANT: SERGEANT {
                    backpack = "CUP_B_Kombat_Radio_Olive";
                    
                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                        "ACE_flags_purple"
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
            uniform = "BWA3_Uniform2_Fleck";
            vest = "BWA3_Vest_Fleck";
            headgear[] = {
                "BWA3_CrewHelmet_NH90",
                "ttt_Helmet_Buzzard",
                "ttt_Helmet_Eagle",
                "ttt_Helmet_Falcon",
            };

            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle = "";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";

            addItemsToVest[] = {
                "ACRE_SEM52SL",
            };
            goggles = "";

        };

        class B_Helipilot_F: B_helicrew_F{
            uniform = "BWA3_Uniform_Helipilot";
            headgear[] += {
                "BWA3_TopOwl_nvg",
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
                //"BWA3_Vest_Leader_Fleck"
                "BWA3_Vest_Leader_Multi",
                //"BWA3_Vest_Leader_Tropen"
                };
            primaryWeapon[] = {
                //"BWA3_G36KA3",
                //"BWA3_G36KA3_green",
                //"BWA3_G36KA3_tan",
                //"BWA3_G36A3_AG40",
                //"BWA3_G36A3_AG40_green",
                //"BWA3_G36A3_AG40_tan"
                //In mot.-mech. Units TF usually have a GL and shorter Rifles.
                //"BWA3_G38K",
                //"BWA3_G38K_tan"
                "BWA3_G38K_AG40",
                "BWA3_G38K_AG40_tan"

            };

            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_Tracer";

            addItemsToUniform[] += {
                "ACE_MicroDAGR",
                "ACE_key_west"
            };
            addItemsToVest[] += {
                LIST_8("BWA3_30Rnd_556x45_G36_Tracer"),
                "ACRE_PRC152"
            };
            addItemsToBackpack[] += {
                "ACE_SprayPaintRed",
                "ACE_SprayPaintGreen",
                "ACE_SprayPaintBlack",
                "ACE_flags_red",
                "ACE_flags_green",
                "ACE_flags_purple",
                LIST_15("1Rnd_HE_Grenade_shell"),
                LIST_5("1Rnd_SmokeRed_Grenade_shell"),
                LIST_5("1Rnd_Smoke_Grenade_shell")
            };

            binoculars = "ACE_Vector";
            gps = "ItemAndroid";

        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            primaryWeapon[] = {
                // "BWA3_G36KA3",
                // "BWA3_G36KA3_green",
                // "BWA3_G36KA3_tan",
                // "BWA3_G36KA4",
                // "BWA3_G36KA4_green",
                // "BWA3_G36KA4_tan"
                "BWA3_G38K",
                "BWA3_G38K_tan"
                };

            addItemsToBackpack[] = {
                "ACE_SprayPaintRed",
                "ACE_SprayPaintGreen",
                "ACE_SprayPaintBlack",
                "ace_flags_red",
                "ACE_flags_green",
                "ACE_flags_purple"
            };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        //Medics
        class B_medic_F: B_Soldier_F {
            vest[] = {
                //"BWA3_Vest_Medic_Fleck"
                "BWA3_Vest_Medic_Multi",
                //"BWA3_Vest_Medic_Tropen"
                };

            class Rank {

                class PRIVATE { //Squad Level Medic
                    backpack[] = {
                        //"BWA3_AssaultPack_Fleck_Medic",
                        "BWA3_AssaultPack_Multi_Medic",
                        //"BWA3_AssaultPack_Tropen_Medic"
                        };
                    addItemsToVest[] += {
                        //"kat_basicDiagnostic",
                        LIST_3("kat_Pulseoximeter"),
                        "ACE_surgicalKit",
                    };

                    addItemsToBackpack[] += {
                        //M
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        LIST_12("ACE_tourniquet"),
                        //A
                        LIST_8("kat_chestSeal"),
                        LIST_8("kat_larynx"),
                        LIST_6("kat_ncdKit"),
                        //R
                        LIST_3("kat_pocketBVM"),
                        //C
                        LIST_4("ACE_salineIV_250"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_8("kat_IV_16"),
                        LIST_12("ACE_epinephrine"),
                        LIST_4("ACE_adenosine"),
                        //H
                        LIST_6("kat_Penthrox"),
                        LIST_8("kat_naloxone"),
                        LIST_4("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        LIST_45("ACE_suture"),
                        //Admin
                        LIST_2("ACE_Chemlight_IR"),
                    };
                };

                class CORPORAL: PRIVATE { //Platoon Level Medic
                    backpack[] = {
                        //"BWA3_TacticalPack_Fleck_Medic",
                        "BWA3_TacticalPack_Multi_Medic",
                        //"BWA3_TacticalPack_Tropen_Medic"
                        };

                    addItemsToVest[] += {
                        LIST_3("kat_Pulseoximeter"),
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                    };

                    addItemsToBackpack[] += {
                        //A
                        LIST_2("kat_larynx"),
                        LIST_2("kat_ncdKit"),
                        //C
                        LIST_5("ACE_salineIV"),
                        LIST_9("kat_amiodarone"),
                        "kat_aed",
                        //HIGH-TECH
                        LIST_8("kat_lidocaine"),
                    };
                };

                class SERGEANT: CORPORAL { //Company Level Medic
                    backpack = "ttt_backpack_medic_rgr_01";//BWA3_Kitbag_Fleck_Medic

                    addItemsToVest[] += {
                    };

                    addItemsToBackpack[] = {
                        //M
                        LIST_45("ACE_packingBandage"),
                        LIST_45("ACE_elasticBandage"),
                        //A
                        LIST_6("kat_aatKit"),
                        "kat_accuvac",
                        LIST_6("kat_chestSeal"),
                        LIST_5("kat_larynx"),
                        //R
                        LIST_3("kat_BVM"),
                        "kat_oxygenTank_150",
                        //C
                        LIST_8("ACE_BloodIV"),
                        LIST_3("ACE_BloodIV_500"),
                        LIST_3("ACE_BloodIV_250"),
                        "ACE_salineIV_250",
                        "kat_X_AED",
                        LIST_10("kat_IV_16"),
                        LIST_2("kat_IO_FAST"),
                        LIST_12("kat_epinephrineIV"),
                        LIST_12("ACE_epinephrine"),
                        LIST_10("kat_lidocaine"),
                        LIST_6("kat_amiodarone"),
                        LIST_6("kat_atropine"),
                        //H
                        LIST_6("kat_eaca"),
                        LIST_12("kat_txa"),
                        LIST_6("kat_fentanyl"),
                        LIST_6("kat_ketamine"),
                        LIST_6("kat_naloxone"),
                        LIST_6("kat_nitroglycerin"),
                        LIST_6("kat_norepinephrine"),
                        LIST_6("kat_phenylephrine"),
                        //Admin
                        LIST_45("ACE_suture"),
                        "ACE_PersonalAidKit"
                    };
                };

                class LIEUTENANT: SERGEANT { //Battalion Level Medic

                    addItemsToVest[] += {
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        "kat_Pulseoximeter",
                    };

                    addItemsToBackpack[] = {
                        //M
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        //A
                        LIST_6("kat_aatKit"),
                        "kat_accuvac",
                        LIST_6("kat_chestSeal"),
                        LIST_5("kat_larynx"),
                        //R
                        LIST_3("kat_BVM"),
                        "kat_oxygenTank_150",
                        //C
                        LIST_8("ACE_BloodIV"),
                        LIST_4("ACE_BloodIV_500"),
                        LIST_4("ACE_BloodIV_250"),
                        "ACE_salineIV_250",
                        "kat_X_AED",
                        LIST_10("kat_IV_16"),
                        LIST_2("kat_IO_FAST"),
                        LIST_12("kat_epinephrineIV"),
                        LIST_12("ACE_epinephrine"),
                        LIST_10("kat_lidocaine"),
                        LIST_6("kat_amiodarone"),
                        LIST_6("kat_atropine"),
                        //H
                        LIST_6("kat_eaca"),
                        LIST_12("kat_txa"),
                        LIST_6("kat_fentanyl"),
                        LIST_6("kat_ketamine"),
                        LIST_6("kat_naloxone"),
                        LIST_6("kat_nitroglycerin"),
                        LIST_6("kat_norepinephrine"),
                        LIST_6("kat_phenylephrine"),
                        //Admin
                        LIST_45("ACE_suture"),
                    };
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
