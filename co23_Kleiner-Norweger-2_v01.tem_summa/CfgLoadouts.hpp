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
        "goggles",
        "headgear"
    };

    class Side {    
        class Blufor { //BluforPlayers
            uniform[] = {
                //Regular Uniform
                //"NOR_Combat_Uniform",
                //"NOR_Combat_Uniform_Gloves",
                //"NOR_Combat_Uniform_Gloves_Rolled",
                //"NOR_Combat_Uniform_Rolled",
                //Gorka
                "NOR_Gorka_Uniform",
                "NOR_Gorka_Uniform_Pads",
                //Winter
                //"NOR_Gorka_Winter_Uniform",
                //"NOR_Gorka_Winter_Uniform_Pads",
                //Winter mixed
                //"NOR_Gorka_Mixed_Uniform",
                //"NOR_Gorka_Mixed_Uniform_Pads",
                //"NOR_Gorka_Mixed_Alt_Uniform",
                //"NOR_Gorka_Mixed_Alt_Uniform_Pads",
                //Grey
                //"NOR_Gorka_Grey_Uniform",
                //"NOR_Gorka_Grey_Uniform_Pads",
                };
            vest[] = {
                "CFP_LBT6094_operator_OGA",
                "CFP_CarrierRig_Operator_OGA",
                "CFP_FAPC_Operator_OGA",
            };
            backpack = "";
            headgear[] = {
                //Regular used by Home Guard
                //"NOR_Helmet_Comms",
                //"NOR_Helmet_Comms_cov",
                //"NOR_Helmet_Winter_Comms",
                //"NOR_Helmet_Winter_Comms_cov",
                //OPSCORE
                "NOR_Opscore",
                "NOR_Opscore_Tan",
                "NOR_Opscore_Multi",
                //"NOR_Opscore_Winter",
                //SF
                //"NOR_Opscore_SF",
                //"NOR_Opscore_Tan_SF",
                //"NOR_Opscore_Winter_SF",
                };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("CUP_17Rnd_9x19_glock17"),
            };
            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                "ACRE_PRC152",
                LIST_3("Chemlight_red"),
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                "CUP_arifle_HK416_Black",
                //"CUP_arifle_HK416_Desert",
                "CUP_arifle_HK416_Wood",
                };
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK";
            primaryWeaponOptics = "CUP_optic_CompM4";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            primaryWeaponPointer = "ACE_DBAL_A3_Red";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                "CUP_hgun_Glock17",
                "CUP_hgun_Glock17_blk",
                "CUP_hgun_Glock17_tan",
                };
            handgunWeaponMagazine = "CUP_17Rnd_9x19_glock17";

            goggles[] = {
                "",
                "CUP_G_Oakleys_Clr",
                "CUP_G_Oakleys_Drk",
                "CUP_G_Oakleys_Embr",
                "CUP_G_PMC_Facewrap_Tan_Glasses_Dark",
                "CUP_G_PMC_Facewrap_Tan_Glasses_Ember",
                //"CUP_G_PMC_Facewrap_Winter_Glasses_Dark",
                //"CUP_G_PMC_Facewrap_Winter_Glasses_Ember",
                "CUP_G_Grn_Scarf_Shades_GPSCombo_Beard",
                "CUP_G_Grn_Scarf_Shades_GPSCombo_Beard_Blonde",
                "CUP_G_Tan_Scarf_Shades_GPSCombo_Beard",
                "CUP_G_Tan_Scarf_Shades_GPSCombo_Beard_Blonde",
                //"CUP_G_White_Scarf_Shades_GPSCombo_Beard",
                //"CUP_G_White_Scarf_Shades_GPSCombo_Beard_Blonde",
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
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK"),
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            vest[] = {
                "CFP_RAV_operator_OGA",
                };
            backpack = "B_AssaultPack_cbr";

            primaryWeapon[] = {
                "CUP_arifle_HK416_AGL_Black",
                //"CUP_arifle_HK416_AGL_Desert",
                "CUP_arifle_HK416_AGL_Wood",
                };
            primaryWeaponUnderbarrelMagazine = "CUP_1Rnd_HE_M203";

            addItemsToVest[] += {
                LIST_8("CUP_1Rnd_HE_M203"),
             };

            addItemsToBackpack[] += {
                LIST_12("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_SmokeRed_M203"),
                LIST_5("CUP_1Rnd_Smoke_M203"),
                //LIST_5("ACE_40mm_Pike"),
            };
        };

        class B_soldier_exp_F: B_Soldier_GL_F {
            primaryWeapon[] = {
                "CUP_arifle_HK416_CQB_Black",
                //"CUP_arifle_HK416_CQB_Desert",
                "CUP_arifle_HK416_CQB_Wood",
            };
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            
            backpack = "NOR_Predator_Backpack";
            addItemsToVest[] += {
                "ACE_DefusalKit",
                "ACE_Clacker",
            };

            addItemsToBackpack[] += {
                LIST_8("CUP_6Rnd_12Gauge_Pellets_No00_Buck"),
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
            };
        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "BWA3_RGW90_Loaded";
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {            
            backpack = "NOR_Predator_Radio_Backpack";

            addItemsToVest[] += {
                "ItemAndroid",
                "ACE_flags_blue",
                "ACE_flags_yellow",
                LIST_8("SmokeShellPurple"),
            };

            addItemsToBackpack[] = {
                "ACRE_PRC117F",
                "ACRE_VHF30108SPIKE",
                "ACRE_VHF30108MAST",
            };
        };

        class B_soldier_AT_F: B_Soldier_F {
            vest[] = {
                "CFP_RAV_operator_OGA",
            };
            backpack = "B_AssaultPack_cbr";
            primaryWeapon[] = {
                "CUP_arifle_HK416_CQB_Black",
                //"CUP_arifle_HK416_CQB_Desert",
                "CUP_arifle_HK416_CQB_Wood",
            };

            secondaryWeapon[] = {
                "launch_MRAWS_green_F",
                "launch_MRAWS_olive_F",
                "launch_MRAWS_sand_F",
            };
            secondaryWeaponMagazine = "MRAWS_HEAT_F";

            addItemsToBackpack[] = {
                LIST_2("MRAWS_HEAT_F"),
                "MAA_MAAWS_HEDP502",
            };

        };

        class B_soldier_AAT_F: B_Soldier_F {
            backpack = "NOR_Predator_Backpack";

            addItemsToBackpack[] = {
                LIST_3("MRAWS_HEAT_F"),
                LIST_3("MAA_MAAWS_HEDP502"),
            };
        };

        class B_Soldier_A_F: B_Soldier_F {
            backpack = "NOR_Predator_Backpack";

            addItemsToVest[] += {
                "ACE_EntrenchingTool",
            };

            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
            };

        };

        class B_soldier_UAV_F: B_Soldier_F {
            backpack = "NOR_Predator_Backpack";

            addItemsToVest[] += {
                "ACRE_PRC152",
                "ItemAndroid",
            };

            addItemsToBackpack[] = {
                "ITC_Land_B_AR2i_Packed",
                LIST_10("ACE_UAVBattery"),
            };

        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F {
            vest[] = {
                "CFP_RAV_operator_OGA",
            };
            backpack = "B_AssaultPack_cbr";
            primaryWeapon[] = {
                "CUP_arifle_HK417_20",
                //"CUP_arifle_HK417_20_Desert",
                "CUP_arifle_HK417_20_Wood"
                };
            primaryWeaponMagazine = "CUP_20Rnd_762x51_HK417";
            primaryWeaponOptics[] = {
                "CUP_optic_SB_11_4x20_PM",
                //"CUP_optic_SB_11_4x20_PM_tan",
                "CUP_optic_SB_11_4x20_PM_od",
                };
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";

            addItemsToVest[] += {
                LIST_8("CUP_20Rnd_762x51_HK417"),
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                LIST_8("CUP_20Rnd_TE1_Red_Tracer_762x51_HK417"),
            };
            binoculars = "ACE_Yardage450";
        };

        //Autorifleman
        class B_soldier_AR_F {
            vest[] = {
                "CFP_RAV_MG_OGA",
                "CFP_LBT6094_MG_OGA",
                "CFP_CarrierRig_Gunner_OGA",
                };

            primaryWeapon = "CUP_lmg_m249_pip2";
            primaryWeaponMagazine = "CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_black",
                //"CUP_optic_Elcan_SpecterDR_coyote",
                "CUP_optic_Elcan_SpecterDR_od",
            };
            primaryWeaponPointer = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            addItemsToVest[] += {
                LIST_4("CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch"),
            };
        };

        class B_HeavyGunner_F {
            vest = "CFP_FAPC_MG_OGA";

            //primaryWeapon = "CUP_lmg_FNMAG_RIS_modern";
            primaryWeapon[] = {
                "CUP_lmg_Mk48_od",
                //"CUP_lmg_Mk48_des",
                //"CUP_lmg_Mk48_tan",
                "CUP_lmg_Mk48",
                };
            primaryWeaponMagazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
            primaryWeaponOptics[] = {
                "CUP_optic_Eotech553_Black",
                //"CUP_optic_Eotech553_Coyote",
                "CUP_optic_Eotech553_OD",
                };
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            addItemsToVest[] += {
                LIST_5("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
                "ACE_Sparebarrel",
            };
        };

        class B_soldier_AA_F: B_Soldier_F {
            secondaryWeapon = "BWA3_Fliegerfaust";
            secondaryWeaponMagazine = "BWA3_Fliegerfaust_Mag";
        };

        class B_soldier_AAA_F: B_Soldier_F {
            backpack = "NOR_Predator_Backpack";

            addItemsToBackpack[] += {
                LIST_3("BWA3_Fliegerfaust_Mag"),
            };
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {
            backpack = "NOR_Predator_Backpack";

            // primaryWeapon[] = {
            //     "CUP_arifle_HK416_CQB_Black",
            //     "CUP_arifle_HK416_CQB_Desert",
            //     "CUP_arifle_HK416_CQB_Wood",
            //     };

            addItemsToVest[] += {
                "ACE_DefusalKit",
                "ACE_Clacker",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed",
            };
            addItemsToBackpack[] += {
                "ACE_EntrenchingTool",
                "mts_cutter_folding_saw",
                "ACE_wirecutter",
                LIST_3("DemoCharge_Remote_Mag"),
                "ACE_VMH3",
                LIST_12("mts_items_marker_mines"),
                LIST_12("mts_items_marker_yellow"),
                LIST_3("ACE_M14"),
            };
            class Rank {

                class PRIVATE {}; 
                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_152",
                    };
                };
            };
        };

        class B_soldier_mine_F: B_Soldier_F {
            backpack = "NOR_Predator_Backpack";

            primaryWeapon[] = {
                "CUP_arifle_HK416_CQB_Black",
                //"CUP_arifle_HK416_CQB_Desert",
                "CUP_arifle_HK416_CQB_Wood",
                };
            handgunWeapon = "ACE_VMH3";
            handgunWeaponMagazine = "";

            addItemsToVest[] += {
                "ACE_DefusalKit",
                "ACE_Clacker",
                "iedd_item_notebook",
            };
            addItemsToBackpack[] += {
                "ACE_EntrenchingTool",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed",
                LIST_3("DemoCharge_Remote_Mag"),
                LIST_10("ace_marker_flags_orange"),
            };
            class Rank {

                class PRIVATE {}; 
                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "ACRE_152",
                    };
                };
            };
        };

    //Fahrzeugbesatzung
        class B_crew_F {
            uniform[] = {
                "NOR_Combat_Uniform",
                "NOR_Combat_Uniform_Gloves",
                "NOR_Combat_Uniform_Gloves_Rolled",
                "NOR_Combat_Uniform_Rolled",
                };
            vest = "CUP_V_PMC_CIRAS_Coyote_Veh";
            headgear = "H_HelmetCrew_I_E";

            primaryWeapon = "CUP_smg_MP7";
            primaryWeaponMagazine = "CUP_20Rnd_46x30_MP7";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";

            addItemsToVest[] += {
                LIST_2("CUP_20Rnd_46x30_MP7"),
            };

            class Rank {
                class PRIVATE {}; 
                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_152",
                    };
                    binoculars = "Rangefinder";
                };
                class LIEUTENANT: SERGEANT {
                    backpack = "NOR_Predator_Radio_Backpack";

                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                    };
                };
            };
        };

        class B_sniper_F {
            //uniform = "U_B_FullGhillie_lsh";
            vest = "CUP_V_O_SLA_M23_1_OD";
            backpack = "B_Kitbag_cbr";
            headgear = "CUP_H_FR_BeanieGreen";
            
            primaryWeapon = "srifle_LRR_camo_F";
            primaryWeaponMagazine = "ACE_7Rnd_408_305gr_Mag";
            primaryWeaponOptics = "optic_LRPS";
            primaryWeaponPointer = "";

            addItemsToVest[] += {
                "ACE_microDAGR",
                "ACE_Kestrel4500",
                "ACE_ATragMX",
                "ACE_Rangecard",
                LIST_5("ACE_7Rnd_408_305gr_Mag"),
            };

            addItemsToBackpack[] += {
                "ACE_Tripod",
                LIST_5("ACE_7Rnd_408_305gr_Mag"),
                "ClaymoreDirectionalMine_Remote_Mag",
                "ACE_Clacker",
                "ACE_DefusalKit",
            };
            binoculars = "ACE_Vector";
        };

        class B_spotter_F: B_soldier_M_F {
            //uniform = "U_B_FullGhillie_lsh";
            vest = "CUP_V_O_SLA_M23_1_OD";
            backpack = "B_Kitbag_cbr";
            headgear = "CUP_H_FR_BeanieGreen";

            primaryWeaponOptics = "CUP_optic_SB_3_12x50_PMII";

            addItemsToUniform[] += {
                "ACE_microDAGR",
                "ACE_ATragMX",
                "ACE_Kestrel4500",
            };

            addItemsToBackpack[] = {
                "ACE_SpottingScope",
                "ACE_EntrenchingTool",
                LIST_5("ACE_7Rnd_408_305gr_Mag"),
                "ACRE_PRC117F",
                "ClaymoreDirectionalMine_Remote_Mag",
                "ACE_Clacker",
                "ACE_DefusalKit",
            };
            binoculars = "ACE_Vector";
        };
        //Mörser
        class B_support_AMort_F: B_Soldier_F {
            primaryWeapon[] = {
                "CUP_arifle_HK416_CQB_Black",
                //"CUP_arifle_HK416_CQB_Desert",
                "CUP_arifle_HK416_CQB_Wood",
            };


            addItemsToVest[] += {
                "ACE_microdagr",
                "ACE_Plottingboard",
                "ACE_EntrenchingTool",
            };
        };

        class B_support_Mort_F: B_support_AMort_F {
            class Rank {
                class PRIVATE {

                };
                class CORPORAL: PRIVATE {};
                class SERGEANT: CORPORAL {
                    backpack = "NOR_Predator_Radio_Backpack";

                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                        "ACRE_VHF30108SPIKE",
                        "ACRE_VHF30108MAST",
                    };
                };
            };
        };

        //Pilots
        class B_helicrew_F {
            uniform = "NOR_Combat_Uniform_Gloves";
            vest = "FIR_pilot_vest";

            primaryWeapon = "CUP_smg_MP7";
            primaryWeaponMagazine = "CUP_20Rnd_46x30_MP7";
            primaryWeaponOptics = "";

            headgear = "H_CrewHelmetHeli_B";

            addItemsToVest[] = {
                LIST_2("SmokeShellPurple"),
                LIST_2("ACE_Chemlight_UltraHiOrange"),
                LIST_2("CUP_20Rnd_46x30_MP7"),
                "ItemAndroid",
            };

            goggles = "";
        };

        class B_Helipilot_F: B_helicrew_F{
            backpack = "NOR_Predator_Radio_Backpack";

            headgear = "H_PilotHelmetHeli_B";

            addItemsToBackpack[] = {
                "ACRE_PRC117F",
            };
        };

        //Führung
        class B_Soldier_TL_F: B_Soldier_GL_F {
            primaryWeaponOptics = "CUP_optic_AIMM_COMPM4_BLK";
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red";

            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                "ACRE_PRC152",
                "ItemAndroid",
                LIST_8("CUP_1Rnd_HE_M203"),
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red"),
                "ACE_MicroDAGR",
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F {
            primaryWeaponOptics = "CUP_optic_AIMM_COMPM4_BLK";
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red";
            vest[] = {
                "CFP_LBT6094_operator_OGA",
                "CFP_CarrierRig_Operator_OGA",
                "CFP_FAPC_Operator_OGA",
            };

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red"),
                "ace_flags_red",
                "ACRE_PRC152",
                "ItemAndroid",
                "ACE_MicroDAGR",
            };

            binoculars = "ACE_Vector";
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class TTT_B_FO_F: B_Soldier_F {
            backpack = "NOR_Predator_Radio_Backpack";

            addItemsToVest[] += {
                "ACE_MicroDAGR",
                "ACRE_PRC152",
                "ItemAndroid",
            };

            addItemsToBackpack[] += {
                "ACRE_PRC117F",
                "ACRE_VHF30108SPIKE",
                "ACRE_VHF30108MAST",
                "itc_land_tablet_fdc",
            };
            binoculars = "ACE_Vector";
        };

        //Medics
        class B_medic_F {
            vest = "CUP_V_CPC_medicalbelt_coy";
            backpack = "NOR_Predator_Backpack";

            primaryWeapon[] = {
                "CUP_arifle_HK416_CQB_Black",
                //"CUP_arifle_HK416_CQB_Desert",
                "CUP_arifle_HK416_CQB_Wood",
            };
            
            class Rank {

                class PRIVATE {
                    addItemsToVest[] = {
                        LIST_3("CUP_30Rnd_556x45_Emag"),
                        "ACE_flags_blue",
                        "ACE_SpraypaintBlue",
                    };

                    addItemsToBackpack[] = {
                        LIST_30("ACE_Suture"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_10("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        LIST_20("ACE_quikclot"),

                        LIST_16("ACE_Epinephrine"),
                        LIST_8("ACE_Painkillers"),
                        LIST_8("ACE_morphine"),

                        LIST_10("ACE_SalineIV"),
                        LIST_5("ACE_salineIV_500"),
                        LIST_5("ACE_SalineIV_250"),
                        "ACE_SurgicalKit",  
                        "ACE_Bodybag",
                    };
                };

                class CORPORAL: PRIVATE {};

                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                    };
                };

                class LIEUTENANT: SERGEANT {
                    backpack = "NOR_Predator_Radio_Backpack";

                    addItemsToVest[] += {
                        "ItemAndroid",
                    };

                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                        "ACE_Bodybag",
                        LIST_30("ACE_Suture"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_30("ACE_elasticBandage"),

                        LIST_12("ACE_Epinephrine"),
                        LIST_6("ACE_Painkillers"),
                        LIST_6("ACE_morphine"),

                        LIST_8("ACE_SalineIV"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_4("ACE_SalineIV_250"),
                    };

                };
            };
        };

        class B_soldier_repair_F: B_Soldier_F {
            vest = "CUP_V_CPC_communicationsbelt_coy";
            backpack = "NOR_Predator_Backpack";

            primaryWeapon[] = {
                "CUP_arifle_HK416_CQB_Black",
                //"CUP_arifle_HK416_CQB_Desert",
                "CUP_arifle_HK416_CQB_Wood",
                };

            addItemsToVest[] = {
                LIST_3("CUP_30Rnd_556x45_Emag"),
                "ACE_flags_yellow",
                "ACE_SpraypaintYellow",
            };

            addItemsToBackpack[] += {
                "Toolkit",
            };

            class Rank {

                class PRIVATE {};
                class SERGEANT: PRIVATE {
                    backpack = "NOR_Predator_Radio_Backpack";

                    addItemsToBackpack[] += {
                        "ACRE_PRC117F"
                    };
                };
            };
        };
        
        //Recon
        class B_recon_F {
            uniform[] = {
                //Grey
                "NOR_Gorka_Grey_Uniform",
                "NOR_Gorka_Grey_Uniform_Pads",
                };
            backpack = "CFP_Kitbag_Drab";
            headgear[] = {
                //SF
                //"NOR_Opscore_SF",
                //"NOR_Opscore_Tan_SF",
                //"NOR_Opscore_Winter_SF",
                //Beanies
                "CUP_H_PMC_Beanie_Headphones_Black",
                "CUP_H_PMC_Beanie_Headphones_Khaki",
                "CUP_H_PMC_Beanie_Headphones_Winter",
                };

            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                "ACRE_PRC152",
                LIST_3("Chemlight_red"),
                "ACE_mircodagr",
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK"),
            };

            addItemsToBackpack[] = {
                "NOR_Opscore_Multi_SF",
            };
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_KF_RMR",
                "CUP_optic_Elcan_SpecterDR_KF_RMR_od",
                "CUP_optic_Elcan_SpecterDR_KF_RMR_coyote",
                "CUP_optic_Elcan_SpecterDR_KF_RMR_black",
            };
            primaryWeaponMuzzle[] = {
                "CUP_muzzle_snds_G36_black",
                "CUP_muzzle_snds_G36_desert",
                "CUP_muzzle_snds_G36_hex",
                "CUP_muzzle_snds_G36_wood",
                };
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            primaryWeaponPointer = "ACE_DBAL_A3_Red";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";

            binoculars = "ACE_Vector";
        };

        class B_recon_LAT_F: B_recon_F {
            secondaryWeapon = "BWA3_RGW90_Loaded";
        };

        class B_recon_medic_F: B_recon_F {
            addItemsToBackpack[] = {
                LIST_30("ACE_Suture"),
                LIST_16("ACE_Tourniquet"),
                LIST_10("ACE_packingBandage"),
                LIST_30("ACE_elasticBandage"),
                LIST_20("ACE_quikclot"),

                LIST_16("ACE_Epinephrine"),
                LIST_8("ACE_Painkillers"),
                LIST_8("ACE_morphine"),

                LIST_8("ACE_SalineIV"),
                LIST_4("ACE_salineIV_500"),
                LIST_4("ACE_SalineIV_250"),
                "ACE_SurgicalKit",
            };
        };

        class B_recon_exp_F: B_recon_F {
            addItemsToVest[] += {
                "ACE_Defusalkit",
                "ACE_Clacker",
            };
            addItemsToBackpack[] = {
                "ACE_EntrenchingTool",
                "mts_cutter_folding_saw",
                "ACE_wirecutter",
                LIST_3("DemoCharge_Remote_Mag"),
                "ACE_VMH3",
            };
        };
        
        class B_recon_JTAC_F: B_recon_F {

            addItemsToVest[] += {
                "ItemAndroid",
            };

            addItemsToBackpack[] += {
                "ACRE_PRC117F",
                "Laserbatteries",
            };
            binoculars = "Laserdesignator_01_khk_F";
        };

        class B_recon_TL_F: B_recon_JTAC_F {

        };

        class B_recon_M_F {
            uniform[] = {
                //Grey
                "NOR_Gorka_Grey_Uniform",
                "NOR_Gorka_Grey_Uniform_Pads",
            };
            backpack = "CFP_Kitbag_Drab";
            headgear[] = {
                //SF
                //"NOR_Opscore_SF",
                //"NOR_Opscore_Tan_SF",
                //"NOR_Opscore_Winter_SF",
                //Beanies
                "CUP_H_PMC_Beanie_Headphones_Black",
                "CUP_H_PMC_Beanie_Headphones_Khaki",
                "CUP_H_PMC_Beanie_Headphones_Winter",
            };

            primaryWeapon[] = {
                "CUP_arifle_HK417_20",
                //"CUP_arifle_HK417_20_Desert",
                "CUP_arifle_HK417_20_Wood",
            };
            primaryWeaponMagazine = "ACE_20Rnd_762x51_M118LR_Mag";
            primaryWeaponOptics = "CUP_optic_SB_3_12x50_PMII";
            primaryWeaponMuzzle = "CUP_muzzle_snds_socom762rc";
            primaryWeaponUnderbarrel[] = {
                "CUP_bipod_VLTOR_Modpod_black",
                "CUP_bipod_VLTOR_Modpod_od",
                "CUP_bipod_VLTOR_Modpod",
            };
            primaryWeaponUnderbarrelMagazine = "";
            primaryWeaponPointer = "ACE_DBAL_A3_Red";

            addItemsToVest[] = {
                LIST_8("ACE_20Rnd_762x51_M118LR_Mag"),
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                LIST_8("ACE_20Rnd_762x51_Mag_SD"),
                "NOR_Opscore_Multi_SF",
            };
        };
    };
};