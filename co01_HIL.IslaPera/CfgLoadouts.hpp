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
    randomizationMode = 1;
    customGear = 300;
    //customGear = "(_this select 0) distance2D (getMarkerPos 'respawn') < 50";
    customGearAllowedCategories[] = {
        "uniform",
        "headgear",
        "primaryWeapon",
        "primaryWeaponOptics",
        "goggles",
    };

    class Type {
        class B_Survivor_F {
            uniform[] = {
                //CCE = Wüste
                // "CUP_U_B_HIL_ACU_CCE",
                // "CUP_U_B_HIL_ACU_Gloves_CCE",
                // "CUP_U_B_HIL_ACU_Kneepad_CCE",
                // "CUP_U_B_HIL_ACU_Kneepad_Gloves_CCE",
                // "CUP_U_B_HIL_ACU_Kneepad_Rolled_CCE",
                // "CUP_U_B_HIL_ACU_Kneepad_Rolled_Gloves_CCE",
                // "CUP_U_B_HIL_ACU_Rolled_CCE",
                // "CUP_U_B_HIL_ACU_Rolled_Gloves_CCE",
                //TTS - Dschungel/Wald
                //"CUP_U_B_HIL_ACU_TTS",
                //"CUP_U_B_HIL_ACU_Gloves_TTS",
                // "CUP_U_B_HIL_ACU_Kneepad_TTS",
                // "CUP_U_B_HIL_ACU_Kneepad_Gloves_TTS",
                // "CUP_U_B_HIL_ACU_Kneepad_Rolled_TTS",
                // "CUP_U_B_HIL_ACU_Kneepad_Rolled_Gloves_TTS",
                //"CUP_U_B_HIL_ACU_Rolled_TTS",
                //"CUP_U_B_HIL_ACU_Rolled_Gloves_TTS",
                //MCT
                "USP_G3C_KP_MCT",
                "USP_G3C_KP_MX_MCT",
                "USP_G3C_KP_OR_MCT",
                "USP_G3C_RS_CU_KP_MCT",
                "USP_G3C_RS_CU_KP_MX_MCT",
                "USP_G3C_RS_CU_KP_OR_MCT",
                "USP_G3C_RS_KP_MCT",
                "USP_G3C_RS_KP_MX_MCT",
                "USP_G3C_RS_KP_OR_MCT",
                "USP_G3C_RS2_CU_KP_MCT",
                "USP_G3C_RS2_CU_KP_MX_MCT",
                "USP_G3C_RS2_CU_KP_OR_MCT",
                "USP_G3C_RS2_KP_MCT",
                "USP_G3C_RS2_KP_OR_MCT",
                "USP_G3C_RS2_KP_MX_MCT",
                "USP_G3C_CU_KP_MCT",
                "USP_G3C_CU_KP_MX_MCT",
                "USP_G3C_CU_KP_OR_MCT",
            };

            vest = "CUP_V_PMC_CIRAS_OD_Empty";
            backpack = "CFP_Camelbak_Mule_RngrGrn";

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                LIST_10("ACE_elasticBandage"),
                LIST_10("ACE_packingBandage"),
                LIST_10("ACE_quikClot"),
                LIST_2("kat_chestSeal"),
                LIST_4("ACE_tourniquet"),
                LIST_2("kat_Painkiller"),
                "ACE_MicroDAGR",
            };

            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                "CUP_17Rnd_9x19_glock17",
                "ACRE_PRC148",
            };

            addItemsToBackpack[] = {

            };

            primaryWeapon[] = {
                "CUP_arifle_HK416_Black",
                "CUP_arifle_HK416_Desert",
                "CUP_arifle_HK416_Wood",

                "CUP_arifle_Mk16_STD_AFG_woodland",
                "CUP_arifle_Mk16_STD_AFG_black",
                "CUP_arifle_Mk16_STD_AFG",

                "CUP_arifle_Mk16_STD",
                "CUP_arifle_Mk16_STD_black",
                "CUP_arifle_Mk16_STD_woodland",

                "CUP_arifle_Mk16_STD_FG",
                "CUP_arifle_Mk16_STD_FG_black",
                "CUP_arifle_Mk16_STD_FG_woodland",
            };

            primaryWeaponMagazine = "CUP_30Rnd_556x45_Emag";
            primaryWeaponMuzzle[] = {
                "",
            };

            primaryWeaponOptics[] = {
                "CUP_optic_MicroT1",
                "CUP_optic_MicroT1_coyote",
                "CUP_optic_MicroT1_OD",
                "CUP_optic_HoloBlack",
                "CUP_optic_HoloDesert",
                "CUP_optic_HoloWdl"
            };

            primaryWeaponPointer[] = {
                "CUP_acc_LLM",
                "CUP_acc_LLM_black",
                "CUP_acc_LLM_od"
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
                // "CUP_H_HIL_HelmetACH_GCovered_Headset_CCE",
                // "CUP_H_HIL_HelmetACH_ESS_Headset_CCE",
                // "CUP_H_HIL_HelmetACH_Headset_CCE",
                // "CUP_H_HIL_HelmetACH_GCovered_Headset_TTS",
                // "CUP_H_HIL_HelmetACH_ESS_Headset_TTS",
                // "CUP_H_HIL_HelmetACH_Headset_TTS",
                "USP_OPSCORE_FASTMTC_MCT_CS",
                "USP_OPSCORE_FASTMTC_MCT_C"
            };

            goggles[] = {
                // "CUP_G_Oakleys_Clr",
                // "CUP_G_Oakleys_Drk",
                // "CUP_G_Oakleys_Embr",
                "USP_RAID_BLK",
                "USP_RAID_BLK2",
                "USP_RAID_BLK3",
                "USP_RAID_SMG3_BLK",
                "USP_RAID_SMG3_BLK2",
                "USP_MFRAME_BLK",
                "USP_MFRAME_BLK2",
                "USP_MFRAME_BLK3",
                "USP_MFRAME_TAN",
                "USP_MFRAME_TAN2",
                "USP_MFRAME_TAN3",
                "USP_MFRAME_SMG3_BLK",
                "USP_MFRAME_SMG3_BLK2",
                "USP_MFRAME_SMG3_TAN",
                "USP_MFRAME_SMG3_TAN2",
                ""
            };

            nvgoggles = "";
            binoculars = "Binocular";
            map = "ItemMap";
            gps = "";
            compass = "ItemCompass";
            watch = "ItemWatch";
            radio = "";
        };

        class B_Soldier_F: B_Survivor_F {
            vest = "USP_EAGLE_CIRAS_LOAD";

            addItemsToVest[] += {
                LIST_6("CUP_30Rnd_556x45_Emag"),
            };

            addItemsToBackpack[] = {
                LIST_6("CUP_30Rnd_556x45_Emag"),
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            vest = "CUP_V_JPC_weaponsbelt_rngr";
            backpack[] = {
                // "CUP_B_TacticalPack_CCE",
                "CUP_B_TacticalPack_TTS",
            };

            primaryWeapon[] = {
                "CUP_arifle_HK416_AGL_Black",
                "CUP_arifle_HK416_AGL_Desert",
                "CUP_arifle_HK416_AGL_Wood",
                "CUP_arifle_Mk16_STD_EGLM",
                "CUP_arifle_Mk16_STD_EGLM_black",
                "CUP_arifle_Mk16_STD_EGLM_woodland"
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
            secondaryWeapon[] = {
                "CUP_launch_M72A6",
                "CUP_launch_M72A6_Special"
            };
        };

        class B_W_RadioOperator_F: B_Soldier_F {
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
            backpack[] = {
                //"CUP_B_TacticalPack_CCE",
                "CUP_B_TacticalPack_TTS"
            };

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

        class B_soldier_M_F: B_Survivor_F {
            vest = "USP_EAGLE_CIRAS_LOAD";

            primaryWeapon[] = {
                //"CUP_arifle_Mk20",
                //"CUP_arifle_Mk20_black",
                "CUP_arifle_Mk20_woodland",
            };
            primaryWeaponMagazine = "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl";
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";
            primaryWeaponOptics[] = {
                //"optic_SOS_khk_F",
                //"optic_SOS",
                "CUP_optic_SB_11_4x20_PM_od",
                //"CUP_optic_SB_11_4x20_PM_tan",
                //"CUP_optic_SB_11_4x20_PM"
            };
            handgunWeapon = "CUP_hgun_Glock17_blk";
            handgunWeaponMagazine = "CUP_17Rnd_9x19_glock17";

            addItemsToVest[] += {
                LIST_6("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl"),
                "ACE_Rangecard",
                LIST_2("CUP_17Rnd_9x19_glock17"),
            };
            addItemsToBackpack[] = {
                LIST_8("CUP_20Rnd_762x51_B_SCAR_wdl"),
            };

            binoculars = "ACE_Yardage450";
        };

        class B_Soldier_AR_F: B_Survivor_F {
            vest[] = {
                "CFP_FAPC_MG_OGA_OD",
                "CFP_CarrierRig_Gunner_OGA_OD",
                "CFP_LBT6094_MG_OGA_OD",
                "CFP_RAV_MG_OGA_OD",
            };

            primaryWeapon[] = {
                "CUP_lmg_m249_pip3",
            };
            primaryWeaponMagazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_KF_black",
                "CUP_optic_Elcan_SpecterDR_KF_coyote",
                "CUP_optic_Elcan_SpecterDR_KF_od",
                "CUP_optic_Elcan_SpecterDR_KF",
            };

            addItemsToVest[] += {
                LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
            };
            addItemsToBackpack[] = {
                LIST_3("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
            };
        };

        class B_soldier_UAV_F: B_Soldier_F {
            backpack = "USP_REEBOW_3DAP_ACC3_MCT";
            addItemsToBackpack[] = {
                "ITC_Land_B_AR2i_Packed",
                LIST_10("ACE_UAVBattery"),
                "tt_drone_tarp_Yellow"
            };
        };

        //Führung
        class B_Soldier_TL_F: B_Survivor_F {
            vest = "USP_CRYE_CPC_WEAPON_BELT_RGR";
            backpack[] = {
                //"CUP_B_TacticalPack_CCE",
                //"CUP_B_TacticalPack_TTS"
                "USP_ZIPON_PACK_CPC_MCT",
                "USP_ZIPON_PACK_CPC_BC_MCT",
                "USP_ZIPON_PACK_CPC_BC_SM_MCT",
                "USP_ZIPON_PACK_CPC_SM_MCT"
            };

            headgear[] += {
                "USP_OPSCORE_FASTMTC_MCT_CM",
                "USP_OPSCORE_FASTMTC_MCT_CMS",
                "USP_OPSCORE_FASTMTC_MCT_CMT",
            };

            primaryWeapon[] = {
                "CUP_arifle_HK416_AGL_Black",
                "CUP_arifle_HK416_AGL_Desert",
                "CUP_arifle_HK416_AGL_Wood",
                "CUP_arifle_Mk16_STD_EGLM",
                "CUP_arifle_Mk16_STD_EGLM_black",
                "CUP_arifle_Mk16_STD_EGLM_woodland"
            };

            primaryWeaponOptics[] += {
                "CUP_optic_ACOG_TA01B_RMR_Black",
                "CUP_optic_ACOG_TA01B_RMR_Coyote",
                "CUP_optic_ACOG_TA01B_RMR_OD",
                "CUP_optic_ACOG_TA01B_RMR_Tan",
                "CUP_optic_ACOG_TA01B_RMR_Tropic"
            };

            primaryWeaponMagazine = "CUP_30Rnd_556x45_Emag_Tracer_Red";

            addItemsToVest[] += {
                LIST_6("CUP_1Rnd_HE_M203"),
                LIST_8("CUP_30Rnd_556x45_Emag_Tracer_Red")
            };
            addItemsToBackpack[] = {
                LIST_14("CUP_1Rnd_HE_M203"),
                LIST_5("1Rnd_Smoke_Grenade_shell"),
                LIST_5("1Rnd_SmokeRed_Grenade_shell"),
                "ACE_SpraypaintRed",
                "ACE_SpraypaintGreen",
                "ACE_Flags_red",
                "ACE_Flags_green",
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Survivor_F {
            vest = "USP_CRYE_CPC_LEAD_BELT_RGR";
            backpack[] = {
                "USP_ZIPON_PANEL_CPC_MCT",
                "USP_ZIPON_PANEL_CPC_SM_MCT",
                "USP_ZIPON_PANEL_CPC_SMK_MCT",
                "USP_ZIPON_PANEL_CPC_SMK_SM_MCT"
            };

            headgear[] += {
                "USP_OPSCORE_FASTMTC_MCT_CM",
                "USP_OPSCORE_FASTMTC_MCT_CMS",
                "USP_OPSCORE_FASTMTC_MCT_CMT",
            };

            primaryWeaponOptics[] += {
                "CUP_optic_ACOG_TA01B_RMR_Black",
                "CUP_optic_ACOG_TA01B_RMR_Coyote",
                "CUP_optic_ACOG_TA01B_RMR_OD",
                "CUP_optic_ACOG_TA01B_RMR_Tan",
                "CUP_optic_ACOG_TA01B_RMR_Tropic"
            };

            primaryWeaponMagazine = "CUP_30Rnd_556x45_Emag_Tracer_Red";

            addItemsToVest[] += {
                "ACRE_PRC152",
                LIST_8("CUP_30Rnd_556x45_Emag_Tracer_Red"),
            };

            addItemsToBackpack[] = {
                "ACE_SpraypaintRed",
                "ACE_SpraypaintBlack",
                "ACE_SpraypaintGreen",
                "ACE_Flags_red",
                "ACE_Flags_green",
            };

            binoculars = "ACE_Vector";
            gps = "ItemAndroid";
        };

        class B_officer_F: B_Soldier_SL_F {
            backpack[] = {
                //"CUP_B_TacticalPack_CCE",
                //"CUP_B_TacticalPack_TTS"
                "USP_ZIPON_PACK_CPC_AT_MCT",
                "USP_ZIPON_PACK_CPC_AT_SM_MCT"
            };
        };

        class B_crew_F: B_Survivor_F {
            primaryWeapon[] = {
                "CUP_arifle_HK416_CQB_Black",
                "CUP_arifle_HK416_CQB_Desert",
                "CUP_arifle_HK416_CQB_Wood"
            };

            uniform[] = {
                "USP_G3C_MCT",
                "USP_G3C_CU_MCT",
                "USP_G3C_CU_MX_MCT",
                "USP_G3C_CU_OR_MCT",
                "USP_G3C_MX_MCT",
                "USP_G3C_OR_MCT"
            };
            vest = "CUP_V_PMC_CIRAS_OD_Veh";
            addItemsToVest[] += {
                LIST_3("CUP_30Rnd_556x45_Emag")
            };
            backpack = "";
            headgear = "ttt_Helmet_Bronze_Vehiclecrew";
            goggles[] = {
                "USP_BALACLAVA2_MCT",
                "USP_BALACLAVA_ADV_MCT",
                "USP_BALACLAVA_ADV_SMB1_MCT",
                "USP_BALACLAVA_ADV_SMB1_MCT2",
                "USP_BALACLAVA_ADV_SMB1_MCT3",
                "USP_BALACLAVA_ESS_MCT",
                "USP_BALACLAVA_ESS_MCT2",
                "USP_BALACLAVA_ESS_MCT3",
            };

            class Rank {
                class PRIVATE {};
                class CORPORAL: PRIVATE {};
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
                    };
            
                };
            };
        };

        //Sani
        //Medics
        class B_medic_F: B_Soldier_F {
            vest = "USP_CRYE_CPC_MEDIC_BELT_RGR";
            addItemsToBackpack[] = {};

            headgear[] += {
                "USP_OPSCORE_FASTMTC_MCT_CT",
            };

            class Rank {

                class PRIVATE { //Squad Level Medic
                    backpack = "USP_DELTA_BAG_MCT";

                    addItemsToBackpack[] = {
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
                        LIST_8("ACE_salineIV_500"),
                        LIST_8("kat_IV_16"),
                        LIST_12("ACE_epinephrine"),
                        LIST_4("ACE_adenosine"),
                        //H
                        LIST_6("kat_Penthrox"),
                        LIST_8("kat_naloxone"),
                        LIST_4("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        LIST_60("ACE_suture"),
                        //Admin
                        "ACE_surgicalKit",
                        LIST_3("kat_Pulseoximeter"),
                        LIST_30("ACE_suture"),
                    };
                };

                class CORPORAL: PRIVATE { //Platoon Level Medic
                    backpack = "CUP_B_TacticalPack_TTS";

                    addItemsToVest[] = {
                        LIST_3("kat_Pulseoximeter"),
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        "ACE_surgicalKit",
                        LIST_3("CUP_30Rnd_556x45_Emag"),
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
                        LIST_30("ACE_suture"),
                    };
                };

                class SERGEANT: CORPORAL { //Company Level Medic
                    backpack = "ttt_backpack_medic_rgr_02";

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
                        LIST_30("ACE_suture"),
                        LIST_30("ACE_suture"),
                        "ACE_PersonalAidKit",
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green"
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

        class B_helicrew_F: B_Survivor_F {
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

            };

            headgear[] = {
                "H_PilotHelmetHeli_I_E",
                "ttt_helmet_falcon",
            };
            gps = "ItemAndroid";
        };
    };
};
