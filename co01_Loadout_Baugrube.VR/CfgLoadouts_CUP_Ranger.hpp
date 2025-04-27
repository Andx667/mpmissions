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
        "goggles",
        "primaryWeapon",
        "primaryWeaponOptics",
    };

    class Side {
        class Blufor {
            uniform[] = {
                "CFP_75th_CRYE_V1b_Full",
                "CFP_75th_CRYE_V2_Full",
                "CFP_75th_CRYE_V2b_Full",
                "CFP_75th_CRYE_V3_Full",
                "CFP_75th_CRYE_V3b_Full",
                "CFP_75th_CRYE_V4_Full",
                "CFP_75th_CRYE_V4b_Full",
                "CFP_75th_CRYE_V1b_Sleeved",
                "CFP_75th_CRYE_V2_Sleeved",
                "CFP_75th_CRYE_V2b_Sleeved",
                "CFP_75th_CRYE_V3_Sleeved",
                "CFP_75th_CRYE_V3b_Sleeved",
                "CFP_75th_CRYE_V4_Sleeved",
                "CFP_75th_CRYE_V4b_Sleeved",
                //"CUP_U_CRYE_G3C_M81_RGR_US",
                //"CUP_U_CRYE_G3C_M81_RGR",
                //"CUP_U_CRYE_G3C_M81_Tan",
                "CUP_U_CRYE_G3C_MC_US",
                "CUP_U_CRYE_G3C_MC_V2",
                "CUP_U_CRYE_G3C_MC_V3",
                "CUP_U_CRYE_G3C_MC",
                //"CUP_U_CRYE_G3C_RGR",
                "CUP_U_CRYE_G3C_RGR_MC_US",
                "CUP_U_CRYE_G3C_Tan_MC_US",
                "CUP_U_CRYE_G3C_MC_US_V2",
                };
            vest = "CUP_V_B_Ciras_MCam";

            backpack[] = {
                "CFP_Camelbak_Mule_RngrGrn",
                "CFP_Camelbak_Mule_Khki",
                "CFP_Camelbak_Mule_Drab",
                "CFP_Camelbak_Mule_Coy",
                };

            headgear[] = {
                "CUP_H_OpsCore_Covered_MCAM_US_SF",
                "CUP_H_OpsCore_Covered_MCAM_SF",
                "CUP_H_OpsCore_Covered_Tigerstripe_SF",
                "CUP_H_OpsCore_Covered_MTP_SF",
                "CUP_H_OpsCore_Covered_UCP_SF",
                "CUP_H_OpsCore_Spray_US_SF",
                "CUP_H_OpsCore_Spray_SF",
                "CUP_H_OpsCore_Tan_SF",
                "CUP_H_OpsCore_Green_SF",
                "CFP_OpsC_Cov_Goggles_Off",
                "CFP_OpsC_Covered",
                "CFP_OpsC_Covered2",
                "CFP_OpsC_Painted",
                "CFP_OpsC_Med",
                "CFP_OpsC_Uncov_Full",
                "CFP_OpsC_Uncov_Goggles",
                "CFP_OpsC_Uncov_Goggle_Off",
                "CFP_OpsC_Uncovered",
                };

            addItemsToUniform[] = {
                "ACRE_PRC343",
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet")
            };
            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
            };

            primaryWeapon[] = {
                "CUP_arifle_M4A1_SOMMOD_black",
                "CUP_arifle_M4A1_SOMMOD_tan",
                "CUP_arifle_M4A1_SOMMOD_green",
                "CUP_arifle_M4A1_SOMMOD_Grip_black",
                "CUP_arifle_M4A1_SOMMOD_Grip_tan",
                "CUP_arifle_M4A1_SOMMOD_Grip_green",
                };
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK_RPL";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_RMR_black",
                "CUP_optic_Elcan_SpecterDR_RMR_coyote",
                "CUP_optic_Elcan_SpecterDR_RMR",
                "CUP_optic_Elcan_SpecterDR_RMR_od",

                "CUP_optic_MicroT1",
                "CUP_optic_MicroT1_coyote",

                "CUP_optic_Eotech553_Black",
                "CUP_optic_Eotech553_Coyote",
                "CUP_optic_Eotech553_OD",
                "CUP_optic_Eotech533",

                "CUP_optic_G33_HWS_BLK",
                "CUP_optic_G33_HWS_COYOTE",
                "CUP_optic_G33_HWS_TAN",
                "CUP_optic_G33_HWS_OD",
                };
            primaryWeaponPointer[] = {
                "CUP_acc_ANPEQ_15_Flashlight_Black_L",
                "CUP_acc_ANPEQ_15_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Flashlight_Tan_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_Black_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L",
            };
            primaryWeaponMuzzle[] = {
                "CUP_muzzle_snds_M16",
                "CUP_muzzle_snds_M16_coyote",
                "CUP_muzzle_snds_M16_desert",
                "CUP_muzzle_snds_M16_camo",
            };
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";

            handgunWeapon = "CUP_hgun_M17_Black";
            handgunWeaponMagazine = "CUP_17Rnd_9x19_M17_Black";

            goggles = "";
            nvgoggles[] = {
                "CFP_ANPVS15_Black",
                "CFP_ANPVS15_Camo_V1",
                "CFP_ANPVS15_Camo_V2",
                "CFP_ANPVS15_Camo_V3",
                "CFP_ANPVS15_Camo_V4",
                };

            binoculars = "Binocular";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "";
        };
    };

    class Type {

        class B_Soldier_F {

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK_RPL"),
                LIST_2("CUP_17Rnd_9x19_M17_Black"),
            };

        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon[] = {
                "CUP_arifle_mk18_m203_black",
                "CUP_arifle_Mk16_STD_EGLM_black",
            };

            addItemsToVest[] += {
                LIST_8("CUP_1Rnd_HE_M203"),
            };

            addItemsToBackpack[] = {
                LIST_12("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_Smoke_M203"),
                LIST_5("CUP_1Rnd_SmokeRed_M203"),
            };
        };

        class B_soldier_AR_F: B_Soldier_F {
            primaryWeapon = "CUP_lmg_m249_pip3";
            primaryWeaponMagazine = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_black",
                "CUP_optic_Elcan_SpecterDR_coyote",
                "CUP_optic_Elcan_SpecterDR_od",
            };

            vest[] = {
                "CFP_LBT6094_MG_Multicam",
                "CFP_RAV_MG_Multicam",
                "CFP_FAPC_MG_Multicam",
            };

            addItemsToVest[] += {
                LIST_3("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
            };

            addItemsToBackpack[] = {
                LIST_3("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
            };
        };

        class B_HeavyGunner_F: B_Soldier_F {
            //Mk48
            // primaryWeapon[] = {
            //     "CUP_lmg_Mk48",
            //     "CUP_lmg_Mk48_des",
            //     "CUP_lmg_Mk48_od",
            //     "CUP_lmg_Mk48_tan",
            //     };
            // primaryWeaponOptics[] = { 
            //      "CUP_optic_Elcan_SpecterDR_black",
            //      "CUP_optic_Elcan_SpecterDR_coyote",
            //      "CUP_optic_Elcan_SpecterDR_od",
            //      };
            //M240
            primaryWeapon = "CUP_lmg_M240_B";
            primaryWeaponOptics[] = {
                "CUP_optic_ElcanM145",
                "",
                };
            primaryWeaponMagazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";

            vest[] = {
                "CFP_LBT6094_MG_Multicam",
                "CFP_RAV_MG_Multicam",
                "CFP_FAPC_MG_Multicam",
            };

            addItemsToVest[] += {
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
            };

            addItemsToBackpack[] = {
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
            };
        };

        class B_Soldier_A_F: B_Soldier_F {
            backpack = "CUP_B_US_IIID_OCP";

            addItemsToBackpack[] = {
                LIST_3("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
                "ACE_SpareBarrel",
            };
        };    

        class B_soldier_AT_F: B_Soldier_F {
            primaryWeapon = "CUP_arifle_mk18_black";

            secondaryWeapon = "launch_MRAWS_olive_F";
            secondaryWeaponMagazine = "MRAWS_HE_F";

            addItemsToVest[] += {
                LIST_2("CUP_30Rnd_556x45_PMAG_BLACK_RPL"),
            };

            addItemsToBackpack[] = {
                LIST_2("MRAWS_HE_F"),
                "MRAWS_HEAT55_F",
            };
        };

        class B_soldier_AAT_F: B_Soldier_F {
            backpack = "CFP_Kitbag_MCam_Grn";

            addItemsToBackpack[] = {
                LIST_3("MRAWS_HEAT55_F"),
                LIST_3("MRAWS_HE_F"),
            };
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {
            backpack = "CUP_B_Kombat_Radio_Olive";

            addItemsToVest[] += {
                "ACRE_PRC152",
            };

            addItemsToBackpack[] = {
                LIST_2("ACRE_PRC117F"),
                LIST_5("SmokeShellPurple"),
                "ace_flags_yellow",
                "ace_flags_blue",
            };
        };

        //Führung
        class B_Soldier_TL_F {
            primaryWeapon = "CUP_arifle_mk18_black";

            vest[] = {
                "CUP_V_CPC_tlbelt_mc",
                "CUP_V_CPC_tlbelt_rngr",
                "CUP_V_JPC_tlbelt_mc",
                "CUP_V_JPC_tlbelt_rngr",
            };
            backpack = "CFP_Cutters";

            binoculars = "ACE_Vector";

            addItemsToVest[] += {
                "ItemAndroid",
                "ACRE_PRC152",
                "ACE_Microdagr",
                LIST_8("CUP_30Rnd_556x45_PMAG_OD_RPL_Tracer_Red"),
            };

            addItemsToBackpack[] += {
                LIST_2("tsp_breach_block_auto_mag"),
            };

        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            secondaryWeapon = "CUP_launch_M72A6_Special";
            backpack[] = {
                "CFP_Camelbak_Mule_RngrGrn",
                "CFP_Camelbak_Mule_Khki",
                "CFP_Camelbak_Mule_Drab",
                "CFP_Camelbak_Mule_Coy",
                };

            addItemsToVest[] += {
                "ACRE_PRC152",
            };

            addItemsToBackpack = "";
        };

        class B_officer_F: B_Soldier_SL_F {
            
        };

        //Sani
        class B_medic_F {
            vest[] = {
                "CUP_V_CPC_medicalbelt_mc",
                "CUP_V_CPC_medicalbelt_rngr",
                "CUP_V_JPC_medicalbelt_mc",
                "CUP_V_JPC_medicalbelt_rngr",
            };
            backpack = "CFP_Carryall_Multicam";

            class Rank {
                class PRIVATE {
                    addItemsToVest[] += {
                        LIST_3("CUP_30Rnd_556x45_PMAG_BLACK_RPL"),
                        LIST_2("CUP_17Rnd_9x19_M17_Black"),
                        "ACE_SurgicalKit",
                    };

                    addItemsToBackpack[] = {
                        LIST_30("ACE_Suture"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_30("ACE_packingBandage"),
                        LIST_10("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        LIST_10("ACE_elasticBandage"),
                        LIST_20("ACE_quikclot"),

                        LIST_16("ACE_Epinephrine"),
                        LIST_8("ACE_Painkillers"),
                        LIST_8("ACE_morphine"),

                        LIST_4("ACE_SalineIV"),
                        LIST_2("ACE_salineIV_500"),
                        LIST_2("ACE_SalineIV_250"),

                        "ACE_Bodybag",
                    };
                };

                class CORPORAL: PRIVATE {
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC152",
                        "ACE_PersonalAidkit",
                    };

                    addItemsToBackpack[] += {
                        LIST_4("ACE_SalineIV"),
                        LIST_2("ACE_salineIV_500"),
                        LIST_2("ACE_SalineIV_250"),
                    };
                };

                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ace_flags_blue",
                    };
                };

                class LIEUTENANT: SERGEANT {

                };
            };
        };
    }; 
};