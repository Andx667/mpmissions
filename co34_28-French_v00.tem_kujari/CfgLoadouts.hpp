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
    handleRadios = 0;
    resetLoadout = 1;
    randomizationMode = 2;
    customGear = 300;
    //customGear = "(_this select 0) distance2D (getMarkerPos 'respawn') < 50";
    customGearAllowedCategories[] = {
        "uniform",
        "headgear",
        "primaryWeapon",
        "primaryWeaponOptics",
    };

    class Side {
        class BluFor {
        //class BluforPlayers {
            uniform[] = {
                //CCE = Wüste
                "CUP_U_B_HIL_ACU_CCE",
                "CUP_U_B_HIL_ACU_Gloves_CCE",
                "CUP_U_B_HIL_ACU_Kneepad_CCE",
                "CUP_U_B_HIL_ACU_Kneepad_Gloves_CCE",
                "CUP_U_B_HIL_ACU_Kneepad_Rolled_CCE",
                "CUP_U_B_HIL_ACU_Kneepad_Rolled_Gloves_CCE",
                "CUP_U_B_HIL_ACU_Rolled_CCE",
                "CUP_U_B_HIL_ACU_Rolled_Gloves_CCE",
                //TTS - Dschungel/Wald
                // "CUP_U_B_HIL_ACU_TTS",
                // "CUP_U_B_HIL_ACU_Gloves_TTS",
                // "CUP_U_B_HIL_ACU_Kneepad_TTS",
                // "CUP_U_B_HIL_ACU_Kneepad_Gloves_TTS",
                // "CUP_U_B_HIL_ACU_Kneepad_Rolled_TTS",
                // "CUP_U_B_HIL_ACU_Kneepad_Rolled_Gloves_TTS",
                // "CUP_U_B_HIL_ACU_Rolled_TTS",
                // "CUP_U_B_HIL_ACU_Rolled_Gloves_CCE",
                };
            vest = "CUP_V_PMC_CIRAS_OD_Empty";
            backpack = "";

            addItemsToUniform[] = {
                "ACRE_PRC148",
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                };
            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                "CUP_17Rnd_9x19_glock17",
                };
            addItemsToBackpack[] = {

                };

            primaryWeapon[] = {
                "CUP_arifle_HK416_Black",
                "CUP_arifle_HK416_Desert",
                "CUP_arifle_HK416_Wood",
                };
            primaryWeaponMagazine = "CUP_30Rnd_556x45_Emag";
            primaryWeaponMuzzle[] = {
                "",
                };
            primaryWeaponOptics[] = {
                "CUP_optic_MicroT1_OD",
                "CUP_optic_MicroT1_coyote",
                "CUP_optic_MicroT1_OD",
                };
            primaryWeaponPointer[] = {
                "acc_pointer_IR",
                };
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            secondaryWeaponMuzzle = "";
            secondaryWeaponOptics = "";
            secondaryWeaponPointer = "";
            secondaryWeaponUnderbarrel = "";

            handgunWeapon = "CUP_hgun_Glock17_blk";
            handgunWeaponMagazine = "CUP_17Rnd_9x19_glock17";
            handgunWeaponMuzzle = "";
            handgunWeaponOptics = "";
            handgunWeaponPointer = "";
            handgunWeaponUnderbarrel = "";

            headgear[] = {
                "CUP_H_HIL_HelmetACH_GCovered_Headset_CCE",
                "CUP_H_HIL_HelmetACH_ESS_Headset_CCE",
                "CUP_H_HIL_HelmetACH_Headset_CCE",
                // "CUP_H_HIL_HelmetACH_GCovered_Headset_TTS",
                // "CUP_H_HIL_HelmetACH_ESS_Headset_TTS",
                // "CUP_H_HIL_HelmetACH_Headset_TTS",
                };
            goggles = "";
            nvgoggles = "";
            binoculars = "Binocular";
            map = "ItemMap";
            gps = "";
            compass = "ItemCompass";
            watch = "ItemWatch";
            radio = "";
        };

    };

    class Type {
        class B_Soldier_F {
            vest = "CUP_V_PMC_CIRAS_OD_Patrol";
            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_Emag"),
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            vest = "CUP_V_PMC_CIRAS_OD_Grenadier";
            backpack = "CUP_B_TacticalPack_CCE";

            primaryWeapon[] = {
                "CUP_arifle_HK416_AGL_Black",
                "CUP_arifle_HK416_AGL_Desert",
                "CUP_arifle_HK416_AGL_Wood",
            };

            addItemsToVest[] += {
                LIST_5("CUP_1Rnd_HE_M203"),
            };
            addItemsToBackpack[] = {
                LIST_12("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_HEDP_M203"),
                LIST_5("1Rnd_Smoke_Grenade_shell"),
                LIST_5("1Rnd_SmokeRed_Grenade_shell"),
            };
        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "CUP_launch_M136";
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {
            backpack = "ttt_backpack_radio_coyote";
            
            addItemsToBackpack[] = {
                "ACRE_PRC117F",
                LIST_10("SmokeShellPurple"),
                "ACE_flags_blue",
                "ACE_flags_yellow",
                "ItemcTab",
            };
        };

        class B_soldier_exp_F: B_Soldier_F {
            backpack = "CUP_B_TacticalPack_CCE";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_Defusalkit",
            };

            addItemsToBackpack[] = {
                LIST_4("Democharge_Remote_Mag"),
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
                LIST_6("CUP_6Rnd_12Gauge_Pellets_No00_Buck"),
                "ACE_Wirecutter",
                };
        };

        class B_soldier_M_F {
            vest = "CUP_V_PMC_CIRAS_OD_Patrol";
            backpack = "CUP_B_TacticalPack_CCE";
            primaryWeapon[] = {
                "CUP_arifle_Mk20",
                "CUP_arifle_Mk20_black",
                "CUP_arifle_Mk20_woodland",
            };
            primaryWeaponMagazine = "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl";
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";
            primaryWeaponOptics[] = {
                "CUP_optic_SB_11_4x20_PM_od",
                "CUP_optic_SB_11_4x20_PM_tan",
                "CUP_optic_SB_11_4x20_PM",
            };

            addItemsToVest[] += {
                LIST_7("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_bkl"),
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                LIST_8("CUP_20Rnd_762x51_B_SCAR_bkl"),
            };

            binoculars = "ACE_Yardage450";
        };

        class B_Soldier_AR_F {
            vest[] = {
                "CFP_FAPC_MG_OGA_OD",
                "CFP_CarrierRig_Gunner_OGA_OD",
                "CFP_LBT6094_MG_OGA_OD",
                "CFP_RAV_MG_OGA_OD",
            };
            backpack = "CUP_B_TacticalPack_CCE";
            primaryWeapon[] = {
                "LMG_03_F",
            };
            primaryWeaponMagazine = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_KF_black",
                "CUP_optic_Elcan_SpecterDR_KF_coyote",
                "CUP_optic_Elcan_SpecterDR_KF_od",
                "CUP_optic_Elcan_SpecterDR_KF",
            };

            addItemsToVest[] += {
                LIST_2("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
            };
            addItemsToBackpack[] = {
                LIST_2("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
            };
        };

        //Führung
        class B_Soldier_TL_F {
            vest = "CUP_V_PMC_CIRAS_OD_Grenadier";
            backpack = "CUP_B_TacticalPack_CCE";

            primaryWeapon[] = {
                "CUP_arifle_HK416_AGL_Black",
                "CUP_arifle_HK416_AGL_Desert",
                "CUP_arifle_HK416_AGL_Wood",
            };

            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };

            addItemsToVest[] += {
                LIST_5("CUP_1Rnd_HE_M203"),
                "ACE_SpraypaintBlack",
            };
            addItemsToBackpack[] = {
                LIST_10("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_HEDP_M203"),
                LIST_5("1Rnd_Smoke_Grenade_shell"),
                LIST_5("1Rnd_SmokeRed_Grenade_shell"),
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F {
            vest = "CUP_V_PMC_CIRAS_OD_TL";

            primaryWeaponMagazine = "CUP_30Rnd_556x45_Emag_Tracer_Red";

            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };

            addItemsToVest[] = {
                "ACRE_PRC152",
                "ItemAndroid",
                LIST_8("CUP_30Rnd_556x45_Emag_Tracer_Red"),
                "ACE_flags_red",
                "ACE_SpraypaintBlack",
            };

            binoculars = "ACE_Vector";
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        //Sani
        class B_medic_F {
            vest = "CUP_V_CPC_medicalbelt_rngr";

            class Rank {

                class PRIVATE {
                    backpack = "CFP_AssaultPack_PolygonDesert";

                    addItemsToVest[] += {
                        LIST_8("CUP_30Rnd_556x45_Emag"),
                    };

                    addItemsToBackpack[] += {
                        LIST_10("ACE_Tourniquet"),
                        LIST_30("ACE_packingBandage"),
                        LIST_10("ACE_elasticBandage"),
                        LIST_30("ACE_quikclot"),

                        LIST_4("ACE_Painkillers"),

                        LIST_8("ACE_salineIV_500"),
                        LIST_8("ACE_SalineIV_250"),
                        "ACE_flags_blue",
                        "ACE_SpraypaintBlue",
                    };
                };

                class CORPORAL: PRIVATE {
                    backpack = "CUP_B_TacticalPack_CCE";
                    
                    addItemsToVest[] = {
                        "ACE_SurgicalKit",                       
                        LIST_3("CUP_30Rnd_556x45_Emag"),
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

                        LIST_8("ACE_SalineIV"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_4("ACE_SalineIV_250"),

                        "ACE_Bodybag",
                        "ACE_flags_blue",
                        "ACE_SpraypaintBlue",
                    };

                };

                class SERGEANT: CORPORAL {
                    backpack = "CFP_Kitbag_PolygonDesert";

                    addItemsToVest[] += {
                        "ACRE_PRC152",
                        "ItemAndroid",
                    };

                    addItemsToBackpack[] += {
                        "ACE_flags_blue",
                        "ACE_SpraypaintBlue",
                        LIST_4("ACE_SalineIV"),
                        LIST_2("ACE_salineIV_500"),
                        LIST_2("ACE_SalineIV_250"),
                    };

                };

                class LIEUTENANT: SERGEANT {
                    backpack = "ttt_backpack_radio_coyote";

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

        class B_helicrew_F {
            //vest = "CUP_V_B_BAF_DDPM_Osprey_Mk3_Pilot"; //DDPM
            vest = "CUP_V_PMC_CIRAS_OD_Veh";
            backpack = "";

            //primaryWeapon = "CUP_arifle_HK416_CQB_Black";
            primaryWeapon = "";

            handgunWeapon = "CUP_hgun_Glock17_blk";
            handgunWeaponMagazine = "CUP_17Rnd_9x19_glock17";

            addItemsToVest[] = {
                LIST_2("CUP_17Rnd_9x19_glock17"),
                LIST_3("SmokeShellPurple"),
                LIST_3("SmokeShellYellow"),
                "ACE_HandFlare_Green",
            };

            headgear = "H_CrewHelmetHeli_I_E";
        };
        
        class B_Helipilot_F: B_helicrew_F  {
            backpack = "B_AssaultPack_blk";

            addItemsToBackpack[] = {
                "ACRE_PRC117F",
                "ItemAndroid"
            }; 

            headgear[] = {
                "H_PilotHelmetHeli_I_E",
                "ttt_helmet_falcon",
            };
        };
    };
};