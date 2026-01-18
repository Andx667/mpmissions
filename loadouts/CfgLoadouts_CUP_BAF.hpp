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
#define LIST_40(var1) LIST_30(var1),LIST_10(var1)

class Loadouts {
    baseDelay = 1;
    perPlayerDelay = 1;
    handleRadios = 0;
    resetLoadout = 1;
    randomizationMode = 2;
    customGear = 300;
    //customGear = "(_this select 0) distance2D (getMarkerPos 'respawn') < 50";
    customGearAllowedCategories[] = {
        "uniform",
        "headgear",
        "goggles",
        //"primaryWeaponOptics",
    };

    // MTP = Multi-Terrain Pattern
    // DDPM = Disruptive Pattern Material
    // DPMT = Disruptive Pattern Material Temperate
    class Side {
        class Blufor {
            uniform[] = {
                //MTP / Universal / Modern
                "CUP_U_B_BAF_MTP_UBACSLONG",
                "CUP_U_B_BAF_MTP_UBACSLONG_Gloves",
                "CUP_U_B_BAF_MTP_UBACSLONGKNEE",
                "CUP_U_B_BAF_MTP_UBACSLONGKNEE_Gloves",

                "CUP_U_B_BAF_MTP_UBACSROLLED",
                "CUP_U_B_BAF_MTP_UBACSROLLED_Gloves",
                "CUP_U_B_BAF_MTP_UBACSROLLEDKNEE",

                //"CUP_U_B_BAF_MTP_UBACSTSHIRT",
                //"CUP_U_B_BAF_MTP_UBACSTSHIRT_Gloves",
                //"CUP_U_B_BAF_MTP_UBACSTSHIRTKNEE",

                //DDPM / Wüste
                // "CUP_U_B_BAF_DDPM_UBACSLONG",
                // "CUP_U_B_BAF_DDPM_UBACSLONG_Gloves",
                // "CUP_U_B_BAF_DDPM_UBACSLONGKNEE",
                // "CUP_U_B_BAF_DDPM_UBACSLONGKNEE_Gloves",

                // "CUP_U_B_BAF_DDPM_UBACSROLLED",
                // "CUP_U_B_BAF_DDPM_UBACSROLLED_Gloves",
                // "CUP_U_B_BAF_DDPM_UBACSROLLEDKNEE",

                // "CUP_U_B_BAF_DDPM_UBACSTSHIRT",
                // "CUP_U_B_BAF_DDPM_UBACSTSHIRT_Gloves",
                // "CUP_U_B_BAF_DDPM_UBACSTSHIRTKNEE"

                //DPM / Wald
                // "CUP_U_B_BAF_DPM_UBACSLONG",
                // "CUP_U_B_BAF_DPM_UBACSLONG_Gloves",
                // "CUP_U_B_BAF_DPM_UBACSLONGKNEE",
                // "CUP_U_B_BAF_DPM_UBACSLONGKNEE_Gloves",
                // "CUP_U_B_BAF_DPM_UBACSROLLED",
                // "CUP_U_B_BAF_DPM_UBACSROLLED_Gloves",
                // "CUP_U_B_BAF_DPM_UBACSROLLEDKNEE",
                // "CUP_U_B_BAF_DPM_UBACSTSHIRT",
                // "CUP_U_B_BAF_DPM_UBACSTSHIRT_Gloves",
                // "CUP_U_B_BAF_DPM_UBACSTSHIRTKNEE",
                };

            //MTP
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman";
            //DDPM
            // vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Rifleman";
            //DPM
            // vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Rifleman";

            backpack = "CUP_B_Bergen_BAF";
            headgear[] = {
                //MTP
                "CUP_H_BAF_MTP_Mk6_EMPTY_PRR",
                "CUP_H_BAF_MTP_Mk6_GLASS_PRR",
                "CUP_H_BAF_MTP_Mk6_GOGGLES_PRR",
                "CUP_H_BAF_MTP_Mk6_NETTING_PRR",
                "CUP_H_BAF_MTP_Mk7_PRR",
                "CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B",
                "CUP_H_BAF_MTP_Mk7_PRR_SCRIM_A",

                //DDPM
                // "CUP_H_BAF_DDPM_Mk6_EMPTY_PRR",
                // "CUP_H_BAF_DDPM_Mk6_GLASS_PRR",
                // "CUP_H_BAF_DDPM_Mk6_GOGGLES_PRR",
                // "CUP_H_BAF_DDPM_Mk6_NETTING_PRR",

                //DPM
                // "CUP_H_BAF_DPM_Mk6_EMPTY_PRR",
                // "CUP_H_BAF_DPM_Mk6_GLASS_PRR",
                // "CUP_H_BAF_DPM_Mk6_GOGGLES_PRR",
                // "CUP_H_BAF_DPM_Mk6_NETTING_PRR",
                };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_10("ACE_elasticBandage"),
                LIST_10("ACE_packingBandage"),
                LIST_10("ACE_quikclot"),
                LIST_2("KAT_ChestSeal"),
                LIST_4("ACE_Tourniquet"),
                "CUP_NVG_HMNVS"
            };
            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_L109A2_HE"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                LIST_2("CUP_17Rnd_9x19_glock17"),
            };

            primaryWeapon = "CUP_arifle_L85A2_G";
            primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag_L85";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_reflex_coyote",
                "CUP_optic_Elcan_reflex",
                "CUP_optic_Elcan_reflex_OD",
                //"CUP_optic_ACOG",
                };
            primaryWeaponPointer[] = {
                "CUP_acc_LLM",
                "CUP_acc_LLM_black",
                "CUP_acc_LLM_od"
            };
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon = "CUP_hgun_Glock17_blk";
            handgunWeaponMagazine = "CUP_17Rnd_9x19_glock17";

            goggles[] = {
                "CUP_G_Oakleys_Clr",
                "CUP_G_Oakleys_Drk",
                "CUP_G_Oakleys_Embr",
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
            addItemsToVest[] = {
                LIST_8("CUP_30Rnd_556x45_Stanag_L85"),
                "ACRE_PRC152",
            };
        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "CUP_launch_NLAW"; //CUP_launch_M136
            secondaryWeaponMagazine = "";

            addItemsToBackpack[] = {
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon = "CUP_arifle_L85A2_GL";
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Grenadier"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Grenadier"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Grenadier"; //DPM

            addItemsToBackpack[] = {
                LIST_20("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_HEDP_M203"),
                LIST_5("CUP_1Rnd_SmokeRed_M203"),
                LIST_5("CUP_1Rnd_Smoke_M203"),
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
            };
        };

        class B_W_RadioOperator_F: B_Soldier_F {
            backpack = "CUP_B_Predator_Radio_MTP";

            addItemsToBackpack[] = {
                LIST_2("ACRE_PRC117F"),
                LIST_5("SmokeShellPurple"),
                LIST_5("SmokeShellYellow"),
                "ace_flags_yellow",
                "ace_flags_blue",
            };

            class Rank {
                class PRIVATE;
                class CORPORAL: PRIVATE {
                    addItemsToUniform[] += {
                        "ACE_Microdagr"
                    };
                    binoculars = "ACE_Vector";
                    gps = "ItemAndroid";
                };

                class SERGEANT: CORPORAL {
                };

                class LIEUTENANT: SERGEANT {
                };
            };
        };

        class B_soldier_M_F: B_Soldier_F {
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Scout"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Scout"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Scout"; //DPM

            primaryWeapon = "CUP_srifle_L129A1_HG";
            primaryWeaponMagazine = "CUP_20Rnd_762x51_L129_M";
            primaryWeaponOptics[] = {
                "CUP_optic_ACOG_TA648_308_RDS_Black",
                "CUP_optic_ACOG_TA648_308_RDS_coyo",
                "CUP_optic_ACOG_TA648_308_RDS_od",
                "CUP_optic_ACOG_TA648_308_RDS_Desert",
                "CUP_optic_ACOG_TA648_308_RDS_Wdl"
                };
            primaryWeaponPointer[] = {
                "CUP_acc_LLM",
                "CUP_acc_LLM_black",
                "CUP_acc_LLM_od"
            };
            primaryWeaponUnderbarrel = "";

            addItemsToVest[] = {
                LIST_8("CUP_20Rnd_762x51_L129_M")
            };

            addItemsToBackpack[] = {
                LIST_8("CUP_20Rnd_762x51_L129_M"),
                "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
            };

            binoculars = "ACE_Yardage450";
        };

        class B_soldier_AR_F: B_Soldier_F {
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_AutomaticRifleman"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_AutomaticRifleman"; //DPM

            primaryWeapon = "CUP_lmg_L110A1";
            primaryWeaponMagazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1";
            primaryWeaponOptics = "CUP_optic_CompM4";
            primaryWeaponUnderbarrel = "";

            addItemsToVest[] = {
                LIST_2("CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1")
            };

            addItemsToBackpack[] = {
                "CUP_200Rnd_TE4_Red_Tracer_556x45_L110A1",
                "ACE_SpareBarrel" //eigentlich nicht Teil der TOE
            };
        };

        class B_HeavyGunner_F: B_Soldier_F {
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_AutomaticRifleman"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_AutomaticRifleman"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_AutomaticRifleman"; //DPM

            primaryWeapon = "CUP_lmg_L7A2_Flat";
            primaryWeaponMagazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
            primaryWeaponOptics = "";
            primaryWeaponUnderbarrel = "";

            addItemsToVest[] = {
                LIST_3("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
            };

            addItemsToBackpack[] = {
                "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                "ACE_SpareBarrel" //eigentlich nicht Teil der TOE
            };
        };

        //Engineers
        class B_engineer_F {
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Engineer"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Engineer"; //DPM
            backpack = "CUP_B_Motherlode_MTP";
            headgear[] = {
                //MTP
                "CUP_H_BAF_MTP_Mk6_GLASS_PRR",
                "CUP_H_BAF_MTP_Mk6_GOGGLES_PRR",
                //DDPM
                // "CUP_H_BAF_DDPM_Mk6_GLASS_PRR",
                // "CUP_H_BAF_DDPm_Mk6_GOGGLES_PRR",
                //DPM
                // "CUP_H_BAF_DPM_Mk6_GLASS_PRR",
                // "CUP_H_BAF_DPM_Mk6_GOGGLES_PRR",
            };

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_Stanag_L85"),
                "ACE_DefusalKit",
                "ACE_Clacker",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed",
                "ACRE_PRC152",
            };

            addItemsToBackpack[] = {
                LIST_3("DemoCharge_Remote_Mag"),
                "SatchelCharge_Remote_Mag",
                "ACE_Wirecutter",
                "ACE_EntrenchingTool",
                "mts_cutter_folding_saw",
                "ACE_VMH3",
                LIST_5("ACE_M14"),
            };

            class Rank {
                class SERGEANT {
                    addItemsToVest[] += {
                        "ACE_M26_Clacker",
                        "ItemAndroid",
                        "ACRE_PRC152",
                    };
                };
            };
        };

        class B_soldier_exp_F {

            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Engineer"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Engineer"; //DPM
            backpack = "CUP_B_Motherlode_MTP";

            addItemsToVest[] += {
                "ACRE_PRC152",
                LIST_8("CUP_30Rnd_556x45_Stanag_L85"),
                "ACE_DefusalKit",
                "ACE_Clacker",
            };

            addItemsToBackpack[] = {
                LIST_6("DemoCharge_Remote_Mag"),
                LIST_2("SatchelCharge_Remote_Mag"),
                LIST_5("ACE_M14"),
            };

            class Rank {
                class SERGEANT {
                    addItemsToVest[] += {
                        "ACE_M26_Clacker",
                        "ACRE_PRC152",
                    };
                    gps = "ItemAndroid";
                };
            };
        };

        class B_soldier_mine_F {
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Engineer"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Engineer"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Engineer"; //DPM

            handgunWeapon = "ACE_VMH3";

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_Stanag_L85"),
                "ACE_DefusalKit",
                "ACE_Clacker",
                "iedd_item_notebook",
                "ACRE_PRC152",
            };

            addItemsToBackpack[] = {
                LIST_3("DemoCharge_Remote_Mag"),
                LIST_20("ace_marker_flags_orange"),
                LIST_10("mts_items_marker_mines"),
                LIST_10("mts_items_marker_yellow"),
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed",
            };

            class Rank {
                class SERGEANT {
                    addItemsToVest[] += {
                        "ACE_M26_Clacker",
                        "ACRE_PRC152",
                    };
                    gps = "ItemAndroid";
                };
            };
        };

        // Logistics
        class B_soldier_repair_F {
            backpack = "CUP_B_Motherlode_MTP";

            addItemsToVest[] = {
                LIST_8("CUP_30Rnd_556x45_Stanag_L85"),
                "ACRE_PRC152",
            };
            addItemsToBackpack[] = {
                "Toolkit",
            };

            class Rank {
                class SERGEANT {
                    backpack = "CUP_B_Motherlode_Radio_MTP";

                    addItemsToVest[] += {
                        "ACRE_PRC152"
                    };
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                        "ace_flags_yellow"
                    };
                    gps = "ItemAndroid";
                };
            };
        };

        //Führung
        class B_Soldier_TL_F {
            backpack = "CUP_B_Motherlode_MTP";

            primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag_L85_Tracer_Red";

            addItemsToUniform[] += {
                "ACE_Microdagr"
            };

            addItemsToVest[] = {
                LIST_8("CUP_30Rnd_556x45_Stanag_L85_Tracer_Red"),
                "ACRE_PRC152"
            };
            addItemsToBackpack[] = {
                LIST_5("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
                "ace_flags_red",
                "ACE_SpraypaintRed",
                "ACE_spraypaintGreen",
                "ACE_spraypaintBlack"
            };

            binoculars = "ACE_Vector";
            gps = "ItemAndroid";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            backpack = "CUP_B_Motherlode_Radio_MTP";

            addItemsToBackpack[] = {
                "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
                "ACRE_PRC117F",
                "ace_flags_red",
                "ACE_SpraypaintRed",
                "ACE_spraypaintGreen",
                "ACE_spraypaintBlack"
            };
        };

        class B_officer_F: B_Soldier_SL_F {
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Officer"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Officer"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Officer"; //DPM

            primaryWeapon = "CUP_arifle_L85A2_GL";

            addItemsToBackpack[] += {
                LIST_10("CUP_1Rnd_SmokeRed_M203"),
                "TTT_Spraypaint2",
            };

        };

        // Medics
        class B_medic_F {
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Medic"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Medic"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Medic"; //DPM

            class Rank {
                class PRIVATE {
                    addItemsToVest[] = {
                        LIST_8("CUP_30Rnd_556x45_Stanag_L85"),
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        "ACE_surgicalKit",
                        "kat_basicDiagnostic",
                        LIST_3("kat_Pulseoximeter")
                    };
                    addItemsToBackpack[] = {
                        //M
                        LIST_40("ACE_packingBandage"),
                        LIST_40("ACE_quikclot"),
                        LIST_40("ACE_elasticBandage"),
                        LIST_16("ACE_Tourniquet"),
                        //A
                        LIST_8("kat_larynx"),
                        //R
                        LIST_3("kat_pocketBVM"),
                        LIST_8("kat_ncdKit"),
                        LIST_8("kat_chestSeal"),
                        //C
                        LIST_16("kat_IV_16"),
                        LIST_4("ACE_salineIV_250"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_8("ACE_epinephrine"),
                        LIST_8("ACE_adenosine"),
                        //H
                        //P
                        LIST_8("ACE_morphine"),
                        LIST_8("kat_Penthrox"),
                        LIST_8("kat_Painkiller"),
                        LIST_8("kat_naloxone"),
                        //A
                        //W
                        LIST_40("ACE_Suture"),
                        //S
                    };
                };
                class CORPORAL: PRIVATE {
                    backpack = "CUP_B_Predator_MTP";
                    addItemsToVest[] = {
                        LIST_3("CUP_30Rnd_556x45_Stanag_L85"),
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        "ACE_surgicalKit",
                        "ACRE_PRC152",
                        LIST_3("kat_Pulseoximeter"),
                        "kat_basicDiagnostic"
                    };
                    addItemsToBackpack[] += {
                        //M
                        LIST_40("ACE_packingBandage"),
                        LIST_40("ACE_quikclot"),
                        LIST_40("ACE_elasticBandage"),
                        LIST_16("ACE_Tourniquet"),
                        //A
                        LIST_8("kat_larynx"),
                        //R
                        LIST_3("kat_pocketBVM"),
                        LIST_8("kat_ncdKit"),
                        LIST_8("kat_chestSeal"),
                        //C
                        LIST_16("kat_IV_16"),
                        LIST_4("ACE_salineIV_250"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_8("ACE_epinephrine"),
                        LIST_8("ACE_adenosine"),
                        //H
                        //P
                        LIST_8("ACE_morphine"),
                        LIST_8("kat_Penthrox"),
                        LIST_8("kat_Painkiller"),
                        LIST_8("kat_naloxone"),
                        //A
                        //W
                        LIST_40("ACE_Suture")
                        //S
                    };
                    gps = "ItemAndroid";
                };

                class SERGEANT: CORPORAL {
                    addItemsToBackpack[] = {
                        //M
                        LIST_40("ACE_packingBandage"),
                        LIST_40("ACE_quikclot"),
                        LIST_40("ACE_elasticBandage"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_8("kat_TXA"),
                        LIST_8("kat_EACA"),
                        //A
                        LIST_8("kat_larynx"),
                        "kat_suction",
                        //R
                        LIST_3("kat_pocketBVM"),
                        LIST_8("kat_ncdKit"),
                        LIST_8("kat_chestSeal"),
                        //C
                        LIST_16("kat_IV_16"),
                        LIST_6("ACE_bloodIV"),
                        LIST_3("ACE_bloodIV_250"),
                        LIST_3("ACE_bloodIV_500"),
                        "ACE_salineIV_250",
                        LIST_8("ACE_epinephrine"),
                        LIST_8("ACE_adenosine"),
                        LIST_8("kat_epinephrineIV"),
                        LIST_8("kat_nitroglycerin"),
                        LIST_8("kat_norepinephrine"),
                        LIST_8("kat_phenylephrine"),
                        //H
                        //P
                        LIST_8("ACE_morphine"),
                        LIST_8("kat_fentanyl"),
                        LIST_8("kat_ketamine"),
                        LIST_8("kat_Penthrox"),
                        LIST_8("kat_Painkiller"),
                        LIST_8("kat_naloxone"),
                        //A
                        //W
                        LIST_40("ACE_Suture"),
                        //S
                    };
                };

                class LIEUTENANT: SERGEANT {
                    backpack = "CUP_B_Predator_Radio_MTP";


                    addItemsToBackpack[] = {
                        //M
                        LIST_40("ACE_packingBandage"),
                        LIST_40("ACE_quikclot"),
                        LIST_40("ACE_elasticBandage"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_8("kat_TXA"),
                        LIST_8("kat_EACA"),
                        //A
                        LIST_8("kat_larynx"),
                        "kat_suction",
                        //R
                        LIST_3("kat_pocketBVM"),
                        LIST_8("kat_ncdKit"),
                        LIST_8("kat_chestSeal"),
                        //C
                        LIST_16("kat_IV_16"),
                        LIST_6("ACE_bloodIV"),
                        LIST_3("ACE_bloodIV_250"),
                        LIST_3("ACE_bloodIV_500"),
                        LIST_2("ACE_salineIV_250"),
                        LIST_8("ACE_epinephrine"),
                        LIST_8("ACE_adenosine"),
                        LIST_8("kat_epinephrineIV"),
                        LIST_8("kat_nitroglycerin"),
                        LIST_8("kat_norepinephrine"),
                        LIST_8("kat_phenylephrine"),
                        //H
                        //P
                        LIST_8("ACE_morphine"),
                        LIST_8("kat_fentanyl"),
                        LIST_8("kat_ketamine"),
                        LIST_8("kat_Penthrox"),
                        LIST_8("kat_Painkiller"),
                        LIST_8("kat_naloxone"),
                        //A
                        //W
                        LIST_40("ACE_Suture"),
                        //S
                        "ACRE_PRC117F",
                    };
                };
            };
        };

        // Fahrzeugbesatzung
        class B_crew_F {
            vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Crewman"; //MTP
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Crewman"; //DDPM
            //vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Crewman"; //DPM
            backpack = "";
            headgear = "CUP_H_BAF_MTP_Mk6_CREW_PRR"; //MTP
            //headgear = "CUP_H_BAF_DDPM_Mk6_CREW_PRR"; //DDPM
            //headgear = "CUP_H_BAF_DPM_Mk6_CREW_PRR"; //DPM

            handgunWeapon = "";
            handgunWeaponMagazine = "";

            addItemsToVest[] = {
                LIST_3("CUP_30Rnd_556x45_Stanag_L85"),
            };

            class Rank {
                class CORPORAL {
                    addItemsToVest[] += {
                        "ACRE_PRC148",
                    };
                };

                class SERGEANT: CORPORAL {
                    backpack = "CUP_B_Predator_Radio_MTP";

                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                    };
                };

                class LIEUTENANT: SERGEANT {

                };
            };
        };

        class B_sniper_F {
            primaryWeapon[] = {
                "CUP_srifle_AWM_wdl",
                "CUP_srifle_AWM_blk",
                "CUP_srifle_AWM_des"
            };
            primaryWeaponMagazine = "CUP_5Rnd_86x70_L115A1";
            primaryWeaponOptics = "CUP_optic_LeupoldMk4_25x50_LRT";
            primaryWeaponPointer = "";
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";
            primaryWeaponMuzzle = "CUP_muzzle_snds_AWM";

            uniform = "CUP_U_B_BAF_MTP_GHILLIE";
            headgear = "CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B";
        };

        class B_spotter_F: B_soldier_M_F {
            uniform = "CUP_U_B_BAF_MTP_GHILLIE";
            primaryWeaponMuzzle = "CUP_muzzle_snds_socom762rc";

            headgear = "CUP_H_BAF_MTP_Mk7_PRR_SCRIM_B";
        };

        class B_helicrew_F {
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Pilot"; //DDPM
            vest = "CUP_V_B_BAF_DPM_Osprey_Mk3_Pilot"; //DPM
            backpack = "";

            headgear = "H_CrewHelmetHeli_I_E";

            primaryWeapon = "";

            addItemsToVest[] = {
                LIST_3("SmokeShellPurple"),
                LIST_3("SmokeShellYellow"),
                "ACE_HandFlare_Green",
                "ACE_microdagr",
            };
        };

        class B_Helipilot_F: B_helicrew_F  {
            headgear = "CUP_H_BAF_Helmet_Pilot";

            backpack = "CUP_B_Predator_Radio_MTP";
            addItemsToBackpack[] = {
                "ACRE_PRC117F",
            };
        };

       //Mörser
        class B_support_AMort_F: B_Soldier_F {
            secondaryWeapon = "ace_csw_carryMortarBaseplate";
            backpack = "";
            addItemsToUniform[] += {
                "ACE_Microdagr"
            };
            addItemsToVest[] += {
                "ACE_PlottingBoard"
            };
        };

        class B_support_Mort_F: B_support_AMort_F {
            class Rank {
                class PRIVATE {
                    secondaryWeapon = "CUP_l16a2_carry";
                };
                class CORPORAL: PRIVATE {
                    secondaryWeapon = "";

                };
                class SERGEANT: CORPORAL {
                    backpack = "CUP_B_Predator_Radio_MTP";
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                        "ACRE_VHF30108"
                    };
                };
            };
        };
        //SOF
        class B_recon_F {
            uniform = "CUP_U_B_BAF_MTP_UBACSSEAL";
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

        class B_recon_M_FB_recon_F {

        };
    };
};
