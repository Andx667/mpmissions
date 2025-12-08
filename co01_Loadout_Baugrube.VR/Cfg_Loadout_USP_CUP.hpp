// filepath: c:\Users\andyb\Documents\Arma 3 - Other Profiles\Andx\mpmissions\CfgLoadouts_Combined.hpp
// Combined loadout configuration
// Uniforms, vests, helmets from USP configuration
// Weapons and equipment from CUP Rangers configuration

#define LIST_1(item) item
#define LIST_2(item) LIST_1(item),item
#define LIST_3(item) LIST_2(item),item
#define LIST_4(item) LIST_3(item),item
#define LIST_5(item) LIST_4(item),item
#define LIST_6(item) LIST_5(item),item
#define LIST_7(item) LIST_6(item),item
#define LIST_8(item) LIST_7(item),item
#define LIST_9(item) LIST_8(item),item
#define LIST_10(item) LIST_9(item),item
#define LIST_15(item) LIST_10(item),LIST_5(item)
#define LIST_16(item) LIST_15(item),item
#define LIST_20(item) LIST_10(item),LIST_10(item)
#define LIST_30(item) LIST_20(item),LIST_10(item)

class Loadouts {
    baseDelay = 1;
    perPlayerDelay = 1;
    handleRadios = 1;
    resetLoadout = 1;
    randomizationMode = 1;
    customGear = 300;
    customGearAllowedCategories[] = {
        //"uniform",
        //"vest",
        //"backpack",
        "headgear",
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "primaryWeaponMuzzle",
        "goggles"
    };

    class Side {
        class Blufor {
            // Uniforms from USP file
            uniform[] = {
                "USP_G3C_MC",
                "USP_G3C_CU_MC",
                "USP_G3C_CU_KP_MC",
                "USP_G3C_CU_KP_MX_MC",
                "USP_G3C_CU_KP_OR_MC",
                "USP_G3C_CU_MX_MC",
                "USP_G3C_CU_OR_MC",
                "USP_G3C_KP_MC",
                "USP_G3C_KP_MX_MC",
                "USP_G3C_KP_OR_MC",
                "USP_G3C_MX_MC",
                "USP_G3C_MX_VQ_MC",
                "USP_G3C_OR_MC",
                "USP_G3C_OR_VQ_MC"
            };
            
            // Vests from USP file
            vest[] = {
                "USP_CRYE_JPC_ASLTB_RGR",
                "USP_CRYE_JPC_ASLTB",
                "USP_CRYE_JPC_ASLTB_KHK",
                "USP_CRYE_JPC_ASLTB_CBR"
            };
            
            // Backpacks from USP file
            backpack[] = {
                "USP_ZIPON_PANEL_CPC_MC",
                "USP_ZIPON_PANEL_CPC_SM_MC",
                "USP_ZIPON_PANEL_CPC_SMK_MC",
                "USP_ZIPON_PANEL_CPC_SMK_SM_MC"
            };
            
            // Headgear from USP file
            headgear[] = {
                "USP_OPSCORE_FASTMTC_C",
                "USP_OPSCORE_FASTMTC_CM",
                "USP_OPSCORE_FASTMTC_CMW",
                "USP_OPSCORE_FASTMTC_CMS",
                "USP_OPSCORE_FASTMTC_CMSW",
                "USP_OPSCORE_FASTMTC_CW",
                "USP_OPSCORE_FASTMTC_CGW",
                "USP_OPSCORE_FASTMTC_CS",
                "USP_OPSCORE_FASTMTC_CSW"
            };

            // Equipment from CUP Rangers file
            addItemsToUniform[] = {
                "ACRE_PRC148",
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
                LIST_2("CUP_17Rnd_9x19_M17_Black")
            };
            
            addItemsToBackpack[] = {};

            // Weapons from CUP Rangers file
            primaryWeapon[] = {
                "CUP_arifle_M4A1_SOMMOD_black",
                "CUP_arifle_M4A1_SOMMOD_tan",
                "CUP_arifle_M4A1_SOMMOD_green",
                "CUP_arifle_M4A1_SOMMOD_Grip_black",
                "CUP_arifle_M4A1_SOMMOD_Grip_tan",
                "CUP_arifle_M4A1_SOMMOD_Grip_green"
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
                "CUP_optic_Eotech553_OD"
            };
            
            primaryWeaponPointer[] = {
                "CUP_acc_ANPEQ_15_Flashlight_Black_L",
                "CUP_acc_ANPEQ_15_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Flashlight_Tan_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_Black_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L"
            };
            
            primaryWeaponMuzzle[] = {
                // "CUP_muzzle_snds_M16",
                // "CUP_muzzle_snds_M16_coyote",
                // "CUP_muzzle_snds_M16_desert",
                // "CUP_muzzle_snds_M16_camo"
            };
            
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            
            handgunWeapon = "CUP_hgun_M17_Black";
            handgunWeaponMagazine = "CUP_17Rnd_9x19_M17_Black";

            // Goggles from USP file
            goggles[] = {
                "USP_RAID_SMC2_BLK",
                "USP_RAID_SMC2_BLK2",
                "USP_RAID_SMC3_BLK",
                "USP_RAID_SMC3_BLK2",
                "USP_RAID_SMG2_BLK",
                "USP_RAID_SMG2_BLK2",
                "USP_RAID_SMG3_BLK",
                "USP_RAID_SMG3_BLK2",
                "USP_RAID_BLK",
                "USP_RAID_BLK2",
                "USP_RAID_BLK3",
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
        // Rifleman
        class B_Soldier_F {
            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK_RPL")
            };
            addItemsToBackpack[] = {};
        };

        // Grenadier
        class B_Soldier_GL_F: B_Soldier_F {
            vest[] = {
                "USP_CRYE_JPC_GRB_RGR",
                "USP_CRYE_JPC_GRB",
                "USP_CRYE_JPC_GRB_KHK",
                "USP_CRYE_JPC_GRB_CBR"
            };

            primaryWeapon[] = {
                "CUP_arifle_mk18_m203_black",
                "CUP_arifle_Mk16_STD_EGLM_black"
            };

            addItemsToVest[] += {
                LIST_8("CUP_1Rnd_HE_M203")
            };

            addItemsToBackpack[] = {
                LIST_10("CUP_1Rnd_HE_M203"),LIST_2("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_Smoke_M203"),
                LIST_5("CUP_1Rnd_SmokeRed_M203")
            };
        };

        // Marksman
        class B_soldier_M_F: B_Soldier_F {
            vest[] = {
                "USP_CRYE_JPC_DMB_CBR",
                "USP_CRYE_JPC_DMB_KHK",
                "USP_CRYE_JPC_DMB_RGR",
                "USP_CRYE_JPC_DMB"
            };

            primaryWeapon[] = {
                "CUP_srifle_M110_black",
                "CUP_srifle_M110",
                "CUP_srifle_M110_woodland"
            };
            
            primaryWeaponMagazine = "CUP_20Rnd_TE1_Red_Tracer_762x51_M110";
            
            primaryWeaponMuzzle[] = {
                "CUP_muzzle_snds_M110_black",
                "CUP_muzzle_snds_M110",
                "CUP_muzzle_snds_M110_woodland"
            };
            
            primaryWeaponOptics[] = {
                "CUP_optic_LeupoldMk4_10x40_LRT_Desert",
                "CUP_optic_LeupoldMk4_10x40_LRT_Woodland",
                "CUP_optic_LeupoldMk4"
            };
            
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";

            addItemsToVest[] = {
                LIST_8("CUP_20Rnd_TE1_Red_Tracer_762x51_M110"),
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                LIST_2("CUP_17Rnd_9x19_M17_Black"),
                "ACE_Rangecard"
            };

            addItemsToBackpack[] = {
                LIST_8("CUP_20Rnd_762x51_B_M110")
            };

            addItemsToUniform[] += {
                "ACE_Rangecard"
            };

            binoculars = "ACE_Yardage450";
        };

        // Breacher
        class B_soldier_exp_F: B_Soldier_F {
            backpack = "USP_PACK_BREACHER_MC";

            addItemsToVest[] = {
                "ACE_Clacker",
                "ACE_DefusalKit"
            };

            addItemsToBackpack[] = {
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
                "ACE_wirecutter"
            };
        };

        // Light Anti Tank
        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "";
        };

        // Radio Operator / FO / JTAC
        class B_W_RadioOperator_F: B_Soldier_F {
            headgear[] = {
                "USP_OPSCORE_FASTMTC_CMT",
                "USP_OPSCORE_FASTMTC_CMTW",
                "USP_OPSCORE_FASTMTC_CGT",
                "USP_OPSCORE_FASTMTC_CGTW",
                "USP_OPSCORE_FASTMTC_CT",
                "USP_OPSCORE_FASTMTC_CTW",
                "USP_OPSCORE_FASTMTC_CMGT",
                "USP_OPSCORE_FASTMTC_CMGTW"
            };

            goggles[] += {
                "USP_WRISTMAP",
                "G_Bandanna_aviator",
                "G_Aviator"
            };

            class Rank {
                class PRIVATE {
                    backpack[] = {
                        "USP_TACTICAL_PACK_CCT",
                        "USP_TACTICAL_PACK_CCT2",
                        "USP_TACTICAL_PACK_CCT3",
                        "USP_TACTICAL_PACK_CCT4",
                        "USP_TACTICAL_PACK_CCT5",
                        "USP_TACTICAL_PACK_CCT6",
                        "USP_TACTICAL_PACK_CCT7",
                        "USP_TACTICAL_PACK_CCT8"
                    };

                    addItemsToBackpack[] += {
                        LIST_2("ACRE_PRC117F"),
                        LIST_10("SmokeShellPurple"),
                        "ACE_flags_blue",
                        "ACE_flags_yellow"
                    };
                };

                class CORPORAL: PRIVATE {
                    headgear[] += {
                        "USP_BASEBALL_CAPB_C",
                        "USP_BASEBALL_CAPB_CG",
                        "USP_BASEBALL_CAPB_CGS",
                        "USP_BASEBALL_CAPB_CS",
                        "USP_BASEBALL_CAPB_CT3",
                        "USP_BASEBALL_CAP_CG",
                        "USP_BASEBALL_CAP_C",
                        "USP_BASEBALL_CAP_CGS",
                        "USP_BASEBALL_CAP_CS",
                        "USP_BASEBALL_CAP_CT3"
                    };
                    
                    addItemsToUniform[] += {
                        "ACE_microdagr"
                    };

                    addItemsToBackpack[] += {
                        "ACRE_PRC152"
                    };

                    binoculars = "ACE_Vector";
                };

                class SERGEANT: CORPORAL {
                    uniform[] = {
                        "USP_G3C_RS2_MC",
                        "USP_G3C_RS2_CU_MC",
                        "USP_G3C_RS2_CU_KP_MC",
                        "USP_G3C_RS2_CU_KP_MX_MC",
                        "USP_G3C_RS2_CU_KP_MX_VQ_MC",
                        "USP_G3C_RS2_CU_KP_OR_MC",
                        "USP_G3C_RS2_CU_KP_OR_VQ_MC",
                        "USP_G3C_RS2_CU_KP_VQ_MC",
                        "USP_G3C_RS2_CU_MX_MC",
                        "USP_G3C_RS2_CU_MX_VQ_MC",
                        "USP_G3C_RS2_CU_OR_MC",
                        "USP_G3C_RS2_CU_OR_VQ_MC",
                        "USP_G3C_RS2_CU_VQ_MC",
                        "USP_G3C_RS_MC"
                    };
                };

                class LIEUTENANT: SERGEANT {};
            };
        };

        // Anti Tank
        class B_soldier_AT_F: B_Soldier_F {
            primaryWeapon = "CUP_arifle_mk18_black";
            secondaryWeapon = "launch_MRAWS_olive_F";
            secondaryWeaponMagazine = "MRAWS_HE_F";

            addItemsToVest[] += {
                LIST_2("CUP_30Rnd_556x45_PMAG_BLACK_RPL")
            };

            addItemsToBackpack[] = {
                LIST_2("MRAWS_HE_F"),
                "MRAWS_HEAT55_F"
            };
        };

        // Anti Tank Assistant
        class B_soldier_AAT_F: B_Soldier_F {
            backpack[] = {
                "USP_PATROL_PACK",
                "USP_PATROL_PACK_CB",
                "USP_PATROL_PACK_CB_FH",
                "USP_PATROL_PACK_CB_FH_RP",
                "USP_PATROL_PACK_CB_FH_RP_ZT",
                "USP_PATROL_PACK_CB_FH_ZT",
                "USP_PATROL_PACK_CB_RP",
                "USP_PATROL_PACK_CB_RP_ZT",
                "USP_PATROL_PACK_CB_ZT",
                "USP_PATROL_PACK_FH",
                "USP_PATROL_PACK_FH_ZT",
                "USP_PATROL_PACK_ZT"
            };

            addItemsToBackpack[] = {
                LIST_3("MRAWS_HEAT55_F"),
                LIST_3("MRAWS_HE_F")
            };
        };

        // MMG
        class B_HeavyGunner_F: B_Soldier_F {
            primaryWeapon = "CUP_lmg_M240_B";
            primaryWeaponMagazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
            primaryWeaponOptics[] = {
                "CUP_optic_ElcanM145",
                ""
            };
            primaryWeaponPointer = "";
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            vest = "USP_CRYE_JPC_MGB";

            addItemsToVest[] = {
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                LIST_2("CUP_17Rnd_9x19_M17_Black")
            };

            addItemsToBackpack[] += {
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
                "ACE_Sparebarrel"
            };
        };

        // MMG Assistant
        class B_Soldier_A_F: B_Soldier_F {
            backpack[] = {
                "USP_PATROL_PACK",
                "USP_PATROL_PACK_CB",
                "USP_PATROL_PACK_CB_FH",
                "USP_PATROL_PACK_CB_FH_RP",
                "USP_PATROL_PACK_CB_FH_RP_ZT",
                "USP_PATROL_PACK_CB_FH_ZT",
                "USP_PATROL_PACK_CB_RP",
                "USP_PATROL_PACK_CB_RP_ZT",
                "USP_PATROL_PACK_CB_ZT",
                "USP_PATROL_PACK_FH",
                "USP_PATROL_PACK_FH_ZT",
                "USP_PATROL_PACK_ZT"
            };

            addItemsToBackpack[] += {
                "ACE_Sparebarrel",
                "ACE_EntrenchingTool"
            };
        };

        // UAV Operator
        class B_soldier_UAV_F: B_Soldier_F {
            backpack[] = {
                "USP_REEBOW_3DAP_MC",
                "USP_REEBOW_3DAP_ACC2_MC",
                "USP_REEBOW_3DAP_ACC3_MC",
                "USP_REEBOW_3DAP_ACC5_MC",
                "USP_REEBOW_3DAP_ACC8_MC"
            };

            addItemsToBackpack[] = {
                LIST_10("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed"
            };

            gps = "B_UavTerminal";
        };

        // Autorifleman
        class B_soldier_AR_F: B_Soldier_F {
            vest[] = {
                "USP_CRYE_JPC_MGB_RGR",
                "USP_CRYE_JPC_MGB",
                "USP_CRYE_JPC_MGB_KHK",
                "USP_CRYE_JPC_MGB_CBR"
            };

            primaryWeapon = "CUP_lmg_m249_pip4";
            primaryWeaponMagazine = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_black",
                "CUP_optic_Elcan_SpecterDR_coyote",
                "CUP_optic_Elcan_SpecterDR_od"
            };
            primaryWeaponUnderbarrel = "";

            addItemsToVest[] += {
                LIST_4("CUP_100Rnd_TE4_Red_Tracer_556x45_M249")
            };

            addItemsToBackpack[] = {
                LIST_3("CUP_100Rnd_TE4_Red_Tracer_556x45_M249")
            };
        };

        // Team Leader
        class B_Soldier_TL_F: B_Soldier_F {
            primaryWeapon = "CUP_arifle_mk18_black";
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_OD_RPL_Tracer_Red";

            uniform[] = {
                "USP_G3C_RS_CU_KP_MX_VQ_MC",
                "USP_G3C_RS_CU_KP_OR_VQ_MC",
                "USP_G3C_RS_CU_KP_VQ_MC",
                "USP_G3C_RS_KP_OR_VQ_MC",
                "USP_G3C_RS_KP_VQ_MC",
                "USP_G3C_RS2_CU_KP_MX_VQ_MC",
                "USP_G3C_RS2_CU_KP_OR_VQ_MC",
                "USP_G3C_RS2_CU_KP_VQ_MC",
                "USP_G3C_RS2_KP_OR_VQ_MC",
                "USP_G3C_RS2_KP_VQ_MC"
            };

            vest[] = {
                "USP_CRYE_JPC_TL_RGR",
                "USP_CRYE_JPC_TL",
                "USP_CRYE_JPC_TL_KHK",
                "USP_CRYE_JPC_TL_CBR"
            };

            backpack[] = {
                "USP_PACK_BREACHER_MC",
                "USP_PACK_BREACHER_CBR",
                "USP_PACK_BREACHER_RGR"
            };

            addItemsToUniform[] += {
                "ACE_Microdagr"
            };

            addItemsToVest[] += {
                "ACRE_PRC152",
                LIST_7("CUP_30Rnd_556x45_PMAG_OD_RPL_Tracer_Red")
            };

            addItemsToBackpack[] += {
                LIST_2("tsp_breach_block_auto_mag"),
                "ACE_flags_red",
                "ACE_SpraypaintBlack",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed"
            };

            binoculars = "ACE_Vector";
        };

        // Squad Leader
        class B_Soldier_SL_F: B_Soldier_TL_F {
            secondaryWeapon = "CUP_launch_M72A6_Special";

            vest[] = {
                "USP_CRYE_JPC_TL_RGR",
                "USP_CRYE_JPC_TL",
                "USP_CRYE_JPC_TL_KHK",
                "USP_CRYE_JPC_TL_CBR"
            };

            backpack[] = {
                "USP_ZIPON_PANEL_CPC_RF2_MC",
                "USP_ZIPON_PANEL_CPC_RF2_SM_MC",
                "USP_ZIPON_PANEL_CPC_RF2_SMK_MC",
                "USP_ZIPON_PANEL_CPC_RF2_SMK_SM_MC"
            };

            addItemsToVest[] += {
                "ItemAndroid"
            };
        };

        // Officer
        class B_officer_F: B_Soldier_SL_F {};

        // Medic
        class B_medic_F: B_Soldier_F {
            vest = "USP_CRYE_CPC_MEDIC_BELT_MC";

            headgear[] = {
                "USP_OPSCORE_FASTMTC_CMT",
                "USP_OPSCORE_FASTMTC_CMTW",
                "USP_OPSCORE_FASTMTC_CGT",
                "USP_OPSCORE_FASTMTC_CGTW",
                "USP_OPSCORE_FASTMTC_CT",
                "USP_OPSCORE_FASTMTC_CTW"
            };

            class Rank {
                class PRIVATE {
                    backpack = "USP_DELTA_BAG_MC";

                    addItemsToVest[] += {
                        LIST_3("CUP_30Rnd_556x45_PMAG_BLACK_RPL"),
                        "ACE_SurgicalKit"
                    };

                    addItemsToBackpack[] = {
                        LIST_30("ACE_Suture"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        LIST_20("ACE_quikclot"),
                        LIST_16("ACE_Epinephrine"),
                        LIST_8("ACE_Painkillers"),
                        LIST_8("ACE_morphine"),
                        LIST_4("ACE_SalineIV"),
                        LIST_2("ACE_salineIV_500"),
                        LIST_2("ACE_SalineIV_250")
                    };
                };

                class CORPORAL: PRIVATE {
                    primaryWeapon = "";
                    primaryWeaponMagazine = "";
                    primaryWeaponOptics = "";
                    primaryWeaponPointer = "";
                    primaryWeaponMuzzle = "";

                    backpack[] = {
                        "USP_PATROL_PACK_CB_CS",
                        "USP_PATROL_PACK_CB_CS_FH",
                        "USP_PATROL_PACK_CB_CS_FH_RP",
                        "USP_PATROL_PACK_CB_CS_FH_RP_ZT",
                        "USP_PATROL_PACK_CB_CS_FH_ZT",
                        "USP_PATROL_PACK_CB_CS_RP",
                        "USP_PATROL_PACK_CB_CS_RP_ZT",
                        "USP_PATROL_PACK_CB_CS_ZT",
                        "USP_PATROL_PACK_CS",
                        "USP_PATROL_PACK_CS_FH",
                        "USP_PATROL_PACK_CS_FH_ZT",
                        "USP_PATROL_PACK_CS_ZT"
                    };

                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC152",
                        "ACE_SpraypaintBlue",
                        "ace_flags_blue"
                    };

                    addItemsToBackpack[] += {
                        LIST_4("ACE_SalineIV"),
                        LIST_2("ACE_salineIV_500"),
                        LIST_2("ACE_SalineIV_250")
                    };
                };

                class SERGEANT: CORPORAL {
                    uniform[] = {
                        "USP_G3C_RS_CU_KP_MX_VQ_MC",
                        "USP_G3C_RS_CU_KP_OR_VQ_MC",
                        "USP_G3C_RS_CU_KP_VQ_MC",
                        "USP_G3C_RS_KP_OR_VQ_MC",
                        "USP_G3C_RS_KP_VQ_MC",
                        "USP_G3C_RS2_CU_KP_MX_VQ_MC",
                        "USP_G3C_RS2_CU_KP_OR_VQ_MC",
                        "USP_G3C_RS2_CU_KP_VQ_MC",
                        "USP_G3C_RS2_KP_OR_VQ_MC",
                        "USP_G3C_RS2_KP_VQ_MC"
                    };
                };

                class LIEUTENANT: SERGEANT {};
            };
        };

        //Logistik
        class B_soldier_repair_F: B_Soldier_F {
            vest[] = {
                "USP_CRYE_CPC_COMMS_BELT",
                "USP_CRYE_CPC_COMMS_BELT_MC",
                "USP_CRYE_CPC_COMMS_BELT_RGR"
            };

            backpack[] = {
                "USP_PATROL_PACK",
                "USP_PATROL_PACK_CB",
                "USP_PATROL_PACK_CB_FH",
                "USP_PATROL_PACK_CB_FH_RP",
                "USP_PATROL_PACK_CB_FH_RP_ZT",
                "USP_PATROL_PACK_CB_FH_ZT",
                "USP_PATROL_PACK_CB_RP",
                "USP_PATROL_PACK_CB_RP_ZT",
                "USP_PATROL_PACK_CB_ZT",
                "USP_PATROL_PACK_FH",
                "USP_PATROL_PACK_FH_ZT",
                "USP_PATROL_PACK_ZT"
            };

            class Rank {

                class PRIVATE {

                };
                class SERGEANT: PRIVATE {
                    uniform[] = {
                        //KP/VQ
                        "USP_G3C_RS_CU_KP_MX_VQ_MC",
                        "USP_G3C_RS_CU_KP_MX_VQ_RGR",
                        "USP_G3C_RS_CU_KP_OR_VQ_MC",
                        "USP_G3C_RS_CU_KP_OR_VQ_RGR",
                        "USP_G3C_RS_CU_KP_VQ_MC",
                        "USP_G3C_RS_CU_KP_VQ_RGR",
                        "USP_G3C_RS_KP_OR_VQ_MC",
                        "USP_G3C_RS_KP_OR_VQ_RGR",
                        "USP_G3C_RS_KP_VQ_MC",
                        "USP_G3C_RS_KP_VQ_RGR",
                        "USP_G3C_RS2_CU_KP_MX_VQ_MC",
                        "USP_G3C_RS2_CU_KP_MX_VQ_RGR",
                        "USP_G3C_RS2_CU_KP_OR_VQ_MC",
                        "USP_G3C_RS2_CU_KP_OR_VQ_RGR",
                        "USP_G3C_RS2_CU_KP_VQ_MC",
                        "USP_G3C_RS2_CU_KP_VQ_RGR",
                        "USP_G3C_RS2_KP_OR_VQ_MC",
                        "USP_G3C_RS2_KP_VQ_MC",
                        "USP_G3C_RS2_KP_VQ_RGR"
                    };

                    vest[] ={
                        "USP_CRYE_CPC_LEAD_BELT",
                        "USP_CRYE_CPC_LEAD_BELT_MC",
                        "USP_CRYE_CPC_LEAD_BELT_RGR"
                    };

                    backpack[] = {
                        "USP_TACTICAL_PACK_CCT",
                        "USP_TACTICAL_PACK_CCT2",
                        "USP_TACTICAL_PACK_CCT3",
                        "USP_TACTICAL_PACK_CCT4",
                        "USP_TACTICAL_PACK_CCT5",
                        "USP_TACTICAL_PACK_CCT6",
                        "USP_TACTICAL_PACK_CCT7",
                        "USP_TACTICAL_PACK_CCT8"
                    };
                };
            };
        };

        //SOF
        class B_recon_F {
            uniform[] = {
                "USP_SOFTSHELL_G3C_KP_MC",
                "USP_SOFTSHELL_G3C_KP_MC_MCW",
                "USP_SOFTSHELL_G3C_KP_MC_RGR",
                "USP_SOFTSHELL_G3C_KP_RGR",
                "USP_SOFTSHELL_G3C_KP_RGR_MC",
                "USP_SOFTSHELL_G3C_KP_RGR_MCW",
                "USP_SOFTSHELL_G3C_KP_MX_MC",
                "USP_SOFTSHELL_G3C_KP_MX_MC_MCW",
                "USP_SOFTSHELL_G3C_KP_MX_MC_RGR",
                "USP_SOFTSHELL_G3C_KP_MX_RGR",
                "USP_SOFTSHELL_G3C_KP_MX_RGR_MC",
                "USP_SOFTSHELL_G3C_KP_MX_RGR_MCW",
                "USP_SOFTSHELL_G3C_KP_OR_MC",
                "USP_SOFTSHELL_G3C_KP_OR_MC_MCW",
                "USP_SOFTSHELL_G3C_KP_OR_MC_RGR",
                "USP_SOFTSHELL_G3C_KP_OR_RGR",
                "USP_SOFTSHELL_G3C_KP_OR_RGR_MC",
                "USP_SOFTSHELL_G3C_KP_OR_RGR_MCW"
            };

            vest[] = {
                "USP_VEST_STRANDHOGG2_RGR",
                "USP_VEST_STRANDHOGG2_MCT",
                "USP_VEST_STRANDHOGG2_MC",
                "USP_VEST_STRANDHOGG2_CBR",
                "USP_VEST_STRANDHOGG2_ATXFG",
                "USP_VEST_STRANDHOGG2_ATXAU"
            };

            backpack[] = {
                "USP_REEBOW_3DAP_ACC3_CBR",
                "USP_REEBOW_3DAP_ACC3_MC",
                "USP_REEBOW_3DAP_ACC3_MCT",
                "USP_REEBOW_3DAP_ACC3_RGR",
                "USP_REEBOW_3DAP_ACC8_CBR",
                "USP_REEBOW_3DAP_ACC8_MC",
                "USP_REEBOW_3DAP_ACC8_MCT",
                "USP_REEBOW_3DAP_ACC8_RGR"
            };

            headgear[] = {
                "USP_OPSCORE_FASTMT_FCV_C",
                "USP_OPSCORE_FASTMT_FCV_OD_CM",
                "USP_OPSCORE_FASTMT_FCV_OD_CMW",
                "USP_OPSCORE_FASTMT_FCV_CMW",
                "USP_OPSCORE_FASTMT_FCV_OD_CMS",
                "USP_OPSCORE_FASTMT_FCV_CMS",
                "USP_OPSCORE_FASTMT_FCV_OD_CMSW",
                "USP_OPSCORE_FASTMT_FCV_CMSW",
                "USP_OPSCORE_FASTMT_FCV_OD_CW",
                "USP_OPSCORE_FASTMT_FCV_CW",
                "USP_OPSCORE_FASTMT_FCV_OD_CS",
                "USP_OPSCORE_FASTMT_FCV_CS",
                "USP_OPSCORE_FASTMT_FCV_OD_CSW",
                "USP_OPSCORE_FASTMT_FCV_CSW",
                "USP_OPSCORE_FASTMT_FCV_FULL_C"
            };

            // Weapons from CUP Rangers file
            primaryWeapon[] = {
                "CUP_arifle_M4A1_SOMMOD_black",
                "CUP_arifle_M4A1_SOMMOD_tan",
                "CUP_arifle_M4A1_SOMMOD_green",
                "CUP_arifle_M4A1_SOMMOD_Grip_black",
                "CUP_arifle_M4A1_SOMMOD_Grip_tan",
                "CUP_arifle_M4A1_SOMMOD_Grip_green"
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
                "CUP_optic_Eotech553_OD"
            };
            
            primaryWeaponPointer[] = {
                "CUP_acc_ANPEQ_15_Flashlight_Black_L",
                "CUP_acc_ANPEQ_15_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Flashlight_Tan_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_Black_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L"
            };
            
            primaryWeaponMuzzle[] = {
                "CUP_muzzle_snds_M16",
                "CUP_muzzle_snds_M16_coyote",
                "CUP_muzzle_snds_M16_desert",
                "CUP_muzzle_snds_M16_camo"
            };
            
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            
            handgunWeapon = "CUP_hgun_M17_Black";
            handgunWeaponMagazine = "CUP_17Rnd_9x19_M17_Black";

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK_RPL"),
            };
            addItemsToBackpack[] = {
                LIST_4("CUP_30Rnd_556x45_PMAG_BLACK_RPL"),
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
            };

            goggles[] = {
                "USP_RAID_BLK",
                "USP_RAID_BLK2",
                "USP_RAID_BLK3",
                ""
            };
            gps = "ItemAndroid";
        };

        class B_recon_LAT_F: B_recon_F {
            secondaryWeapon = "CUP_launch_M136";
        };

        class B_recon_medic_F: B_recon_F {
            vest = "USP_CRYE_CPC_MEDIC_BELT_MC";
            backpack[] = {
                "USP_45L_RUCKSACK_MC",
                "USP_45L_RUCKSACK_GRN",
                "USP_45L_RUCKSACK_TAN"};

            headgear[] = {
                "USP_OPSCORE_FASTMT_FCV_OD_CMT",
                "USP_OPSCORE_FASTMT_FCV_CMT",
                "USP_OPSCORE_FASTMT_FCV_OD_CMTW",
                "USP_OPSCORE_FASTMT_FCV_CMTW",
                "USP_OPSCORE_FASTMT_FCV_OD_CT",
                "USP_OPSCORE_FASTMT_FCV_CT",
                "USP_OPSCORE_FASTMT_FCV_OD_CTW",
                "USP_OPSCORE_FASTMT_FCV_CTW"
            };

            addItemsToVest[] += {
                "ACE_SurgicalKit",
            };
            addItemsToBackpack[] += {
                //M
                //A
                //R
                //C
                //H
            };
        };

        class B_recon_exp_F: B_recon_F {
            headgear[] = {
                "USP_OPSCORE_FASTMT_FCV_OD_CMG",
                "USP_OPSCORE_FASTMT_FCV_CMG",
                "USP_OPSCORE_FASTMT_FCV_OD_CMGS",
                "USP_OPSCORE_FASTMT_FCV_CMGS",
                "USP_OPSCORE_FASTMT_FCV_OD_CMGSW",
                "USP_OPSCORE_FASTMT_FCV_CMGSW",
                "USP_OPSCORE_FASTMT_FCV_OD_CG",
                "USP_OPSCORE_FASTMT_FCV_CG",
                "USP_OPSCORE_FASTMT_FCV_OD_CGW",
                "USP_OPSCORE_FASTMT_FCV_CGW",
                "USP_OPSCORE_FASTMT_FCV_OD_CGS",
                "USP_OPSCORE_FASTMT_FCV_CGS",
                "USP_OPSCORE_FASTMT_FCV_OD_CGSW",
                "USP_OPSCORE_FASTMT_FCV_CGSW"
            };
            backpack[] = {
                "USP_REEBOW_3DAP_ACC1_MC",
                "USP_REEBOW_3DAP_ACC10_MC",
                "USP_REEBOW_3DAP_ACC6_MC",
                "USP_REEBOW_3DAP_ACC7_MC"
            };

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
                LIST_6("ACE_M84"),
            };

            addItemsToBackpack[] += {
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
                LIST_3("DemoCharge_Remote_Mag"),
                LIST_5("ACE_M14"),
                "ACE_EntrenchingTool",
            };
        };

        class B_recon_JTAC_F: B_recon_F {
            backpack[] = {
                "USP_REEBOW_3DAP_ACC2_MC",
                "USP_REEBOW_3DAP_ACC2_RGR",
                "USP_REEBOW_3DAP_ACC2_CBR",
                "USP_REEBOW_3DAP_ACC2_MCT",
            
                "USP_REEBOW_3DAP_ACC5_CBR",
                "USP_REEBOW_3DAP_ACC5_MCT",
                "USP_REEBOW_3DAP_ACC5_MC",
                "USP_REEBOW_3DAP_ACC5_RGR",

                "USP_REEBOW_3DAP_ACC9_CBR",
                "USP_REEBOW_3DAP_ACC9_MC",
                "USP_REEBOW_3DAP_ACC9_MCT",
                "USP_REEBOW_3DAP_ACC9_RGR"
            };

            headgear[] = {
                "USP_OPSCORE_FASTMT_FCV_OD_CMT",
                "USP_OPSCORE_FASTMT_FCV_CMT",
                "USP_OPSCORE_FASTMT_FCV_OD_CMTW",
                "USP_OPSCORE_FASTMT_FCV_CMTW",
                "USP_OPSCORE_FASTMT_FCV_OD_CT",
                "USP_OPSCORE_FASTMT_FCV_CT",
                "USP_OPSCORE_FASTMT_FCV_OD_CTW",
                "USP_OPSCORE_FASTMT_FCV_CTW"
            };

            addItemsToVest[] += {

            };

            addItemsToBackpack[] += {
                "Laserbatteries",
                "ACRE_VHF30108SPIKE",
                "ACRE_PRC117F",
                LIST_10("SmokeShellPurple"),
            };

            binoculars = "Laserdesignator_03";
        };

        class B_recon_TL_F: B_recon_JTAC_F {

        };

        class B_recon_M_F: B_recon_F {
            headgear[] += {
                "USP_BOONIE_HAT_MC"
            };

            primaryWeapon[] = {
                "CUP_srifle_RSASS_Black",
                "CUP_srifle_RSASS_Jungle",
                //"CUP_srifle_RSASS_Sand",
                //"CUP_srifle_RSASS_Winter",
                "CUP_srifle_RSASS_WDLNet",
                "CUP_srifle_RSASS_WDL"
            };
            primaryWeaponMagazine = "CUP_20Rnd_762x51_B_M110"; //CUP_20Rnd_TE1_Red_Tracer_762x51_M110
            primaryWeaponMuzzle = "CUP_muzzle_snds_socom762rc";
            primaryWeaponOptics[] = {
                "optic_AMS_khk", //MM DLC
                //"optic_AMS_snd", //MM DLC
                "optic_AMS",     //MM DLC

            };
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";

            addItemsToUniform[] += {
                "ACE_Rangecard",
            };
            addItemsToVest[] = {
                LIST_8("CUP_20Rnd_762x51_B_M110"),
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                LIST_2("CUP_17Rnd_9x19_M17_Black"),
                "ACRE_PRC148",
            };
            addItemsToBackpack[] = {
                LIST_16("CUP_20Rnd_TE1_Red_Tracer_762x51_M110"),
                LIST_8("CUP_20Rnd_762x51_B_M110"),
            };
        };
    };
};