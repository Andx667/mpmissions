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
        "backpack",
        "headgear",
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "primaryWeaponMuzzle",
        "goggles"
    };

    class Side {
        class Blufor {
            uniform[] = {
                // "USP_G3C_MCW",
                // "USP_G3C_CU_MCW",
                // "USP_G3C_CU_KP_MCW",
                // "USP_G3C_CU_KP_MX_MCW",
                // "USP_G3C_CU_KP_OR_MCW",
                // "USP_G3C_CU_MX_MCW",
                // "USP_G3C_CU_OR_MCW",
                // "USP_G3C_KP_MCW",
                // "USP_G3C_KP_MX_MCW",
                // "USP_G3C_KP_OR_MCW",
                // "USP_G3C_MX_MCW",
                // "USP_G3C_MX_VQ_MCW",
                // "USP_G3C_OR_MCW",
                // "USP_G3C_OR_VQ_MCW",
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
                "USP_G3C_OR_VQ_MC",
            };
            vest[] = {
                "USP_CRYE_JPC_ASLTB_RGR",
                "USP_CRYE_JPC_ASLTB",
                "USP_CRYE_JPC_ASLTB_KHK",
                "USP_CRYE_JPC_ASLTB_CBR"
            };
            backpack[] = {
                // "USP_ZIPON_PACK_CPC_MC",
                // "USP_ZIPON_PACK_CPC_SM_MC",
                // "USP_ZIPON_PACK_MT_CPC_MC",
                // "USP_ZIPON_PANEL_CPC_MC"
                "USP_ZIPON_PANEL_CPC_MC",
                "USP_ZIPON_PANEL_CPC_SM_MC",
                "USP_ZIPON_PANEL_CPC_SMK_MC",
                "USP_ZIPON_PANEL_CPC_SMK_SM_MC"
            };
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

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                LIST_2("kat_Painkiller"),
                LIST_15("ACE_elasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("kat_chestseal"),
                LIST_2(""), //Frag Grenade
                LIST_2(""), //White Smoke Grenade
            };
            addItemsToVest[] = {
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
            };
            primaryWeaponOptics[] = {
                "",
            };
            primaryWeaponPointer = "";
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
            };
            handgunWeaponMagazine = "";

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
        //Rifleman
        class B_Soldier_F {
            addItemsToVest[] = {
                LIST_8(""),
            };
            addItemsToBackpack[] = {

            };
        };

        //Grenadier
        class B_Soldier_GL_F: B_Soldier_F {
            vest[] = {
                "USP_CRYE_JPC_GRB_RGR",
                "USP_CRYE_JPC_GRB",
                "USP_CRYE_JPC_GRB_KHK",
                "USP_CRYE_JPC_GRB_CBR"
            };

            primaryWeapon[] = {
            };
            primaryWeaponUnderbarrelMagazine = "";

            addItemsToVest[] = {

            };
            addItemsToBackpack[] = {

            };
        };

        //Marksman
        class B_soldier_M_F {
            vest[] = {
                "USP_CRYE_JPC_DMB_CBR",
                "USP_CRYE_JPC_DMB_KHK",
                "USP_CRYE_JPC_DMB_RGR",
                "USP_CRYE_JPC_DMB"
            };
            primaryWeapon[] = {
            };
            primaryWeaponOptics = "";
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";

            handgunWeapon[] = {

                };
            handgunWeaponMagazine = "";

            addItemsToUniform[] += {
                "ACE_Rangecard",
            };

            binoculars = "ACE_Yardage450";
        };

        //Breacher
        class B_soldier_exp_F: B_Soldier_F {
            backpack = "USP_PACK_BREACHER_MC";

            addItemsToVest[] = {
                "ACE_Clacker",
                "ACE_DefusalKit",
            };

            addItemsToBackpack[] = {
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
                "ACE_wirecutter",
            };
        };

        //Light Anti Tank
        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "";
        };

        //Radio Operator / FO /JTAC
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
                        LIST_2(""), //LR Radio
                        LIST_10(""), //Purple Smoke
                        "ACE_flags_blue",
                        "ACE_flags_yellow",
                    };
                };
               //FO
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
                        "ACE_microdagr",
                    };

                    addItemsToBackpack[] += {
                        "", //Funkgerät
                    };

                    binoculars = "ACE_Vector";
                };
                //JTAC
                class SERGEANT: CORPORAL {
                    uniform[] = {
                        // "USP_G3C_RS_MCW",
                        // "USP_G3C_RS_CU_MCW",
                        // "USP_G3C_RS_CU_KP_MCW",
                        // "USP_G3C_RS_CU_KP_MX_MCW",
                        // "USP_G3C_RS_CU_KP_MX_VQ_MCW",
                        // "USP_G3C_RS_CU_KP_OR_MCW",
                        // "USP_G3C_RS_CU_KP_OR_VQ_MCW",
                        // "USP_G3C_RS_CU_KP_VQ_MCW",
                        // "USP_G3C_RS_CU_MX_MCW",
                        // "USP_G3C_RS_CU_MX_VQ_MCW",
                        // "USP_G3C_RS_CU_OR_MCW",
                        // "USP_G3C_RS_CU_OR_VQ_MCW",
                        // "USP_G3C_RS_CU_VQ_MCW",
                        // "USP_G3C_RS_KP_MCW",
                        // "USP_G3C_RS_KP_MX_MCW",
                        // "USP_G3C_RS_KP_OR_MCW",
                        // "USP_G3C_RS_KP_OR_VQ_MCW",
                        // "USP_G3C_RS_KP_VQ_MCW",
                        // "USP_G3C_RS_MX_MCW",
                        // "USP_G3C_RS_MX_VQ_MCW",
                        // "USP_G3C_RS_OR_MCW",
                        // "USP_G3C_RS_OR_VQ_MCW",
                        // "USP_G3C_RS_VQ_MCW",
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
                        "USP_G3C_RS_MC",
                        "USP_G3C_RS_CU_MC",
                        "USP_G3C_RS_CU_KP_MC",
                        "USP_G3C_RS_CU_KP_MX_MC",
                        "USP_G3C_RS_CU_KP_MX_VQ_MC",
                        "USP_G3C_RS_CU_KP_OR_MC",
                        "USP_G3C_RS_CU_KP_OR_VQ_MC",
                        "USP_G3C_RS_CU_KP_VQ_MC",
                        "USP_G3C_RS_CU_MX_MC",
                        "USP_G3C_RS_CU_MX_VQ_MC",
                        "USP_G3C_RS_CU_OR_MC",
                        "USP_G3C_RS_CU_OR_VQ_MC",
                        "USP_G3C_RS_CU_VQ_MC",
                        "USP_G3C_RS_KP_MC",
                        "USP_G3C_RS_KP_MX_MC",
                        "USP_G3C_RS_KP_OR_MC",
                        "USP_G3C_RS_KP_OR_VQ_MC",
                        "USP_G3C_RS_KP_VQ_MC",
                        "USP_G3C_RS_MX_MC",
                        "USP_G3C_RS_MX_VQ_MC",
                        "USP_G3C_RS_OR_MC",
                        "USP_G3C_RS_OR_VQ_MC",
                        "USP_G3C_RS_VQ_MC",
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
                        "USP_G3C_RS2_CU_VQ_MC"
                    };
                };
                class LIEUTENANT: SERGEANT {

                };
            };

        };

        //Anti Tank
        class B_soldier_AT_F: B_Soldier_F {
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";

            addItemsToBackpack[] = {

            };
        };

        //Anti Tank Assistent
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

            };
        };

        //MMG
        class B_HeavyGunner_F {
            primaryWeapon[] = {

            };
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            vest = "USP_CRYE_JPC_MGB";
            addItemsToVest[] += {

            };
            addItemsToBackpack[] += {
                "ACE_Sparebarrel",
            };
        };

        //MMG Assistent
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
                "ACE_EntrenchingTool",
            };
        };

        //Drohnenbediener
        class B_soldier_UAV_F: B_Soldier_F {
            backpack[] = {
                "USP_REEBOW_3DAP_MC",
                "USP_REEBOW_3DAP_ACC2_MC",
                "USP_REEBOW_3DAP_ACC3_MC",
                "USP_REEBOW_3DAP_ACC5_MC",
                "USP_REEBOW_3DAP_ACC8_MC",
            };

            addItemsToBackpack[] = {
                LIST_10("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed",
            };

            gps = "B_UavTerminal";
        };

        //Autorifleman
        class B_soldier_AR_F {
            vest[] = {
                "USP_CRYE_JPC_MGB_RGR",
                "USP_CRYE_JPC_MGB",
                "USP_CRYE_JPC_MGB_KHK",
                "USP_CRYE_JPC_MGB_CBR"
            };

            primaryWeapon[] = {
            };
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";

            handgunWeapon[] = {
                };
            handgunWeaponMagazine = "";
        };

        //Anti Air
        class B_soldier_AA_F: B_Soldier_F {
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";

            addItemsToBackpack[] = {

            };
        };

        class B_soldier_AAA_F: B_Soldier_F {
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

            };
        };

        //Unterstützung
        //Pionier
        class B_engineer_F: B_Soldier_F {
            vest[] = {
                "USP_CRYE_CPC_COMMS_BELT",
                "USP_CRYE_CPC_COMMS_BELT_MC",
                "USP_CRYE_CPC_COMMS_BELT_RGR"
            };

            backpack[] = {
                "USP_REEBOW_3DAP_ACC1_MC",
                "USP_REEBOW_3DAP_ACC10_MC",
                "USP_REEBOW_3DAP_ACC6_MC",
                "USP_REEBOW_3DAP_ACC7_MC"
            };

            headgear[] = {
                "USP_OPSCORE_FASTMTC_CMG",
                "USP_OPSCORE_FASTMTC_CMGS",
                "USP_OPSCORE_FASTMTC_CMGSW",
                "USP_OPSCORE_FASTMTC_CG",
                "USP_OPSCORE_FASTMTC_CGW",
                "USP_OPSCORE_FASTMTC_CGS",
                "USP_OPSCORE_FASTMTC_CGSW",
            };

            class Rank {

                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
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

                    headgear[] = {
                        "USP_OPSCORE_FASTMTC_CGT",
                        "USP_OPSCORE_FASTMTC_CGTW",
                        "USP_OPSCORE_FASTMTC_CMGT",
                        "USP_OPSCORE_FASTMTC_CMGTW"
                    };
                };
            };
        };

        //EOD
        class B_soldier_mine_F: B_Soldier_F {
            handgunWeapon = "ACE_VMH3";

            vest[] = {
                "USP_CRYE_CPC_COMMS_BELT",
                "USP_CRYE_CPC_COMMS_BELT_MC",
                "USP_CRYE_CPC_COMMS_BELT_RGR"
            };

            backpack[] = {
                "USP_REEBOW_3DAP_ACC1_MC",
                "USP_REEBOW_3DAP_ACC10_MC",
                "USP_REEBOW_3DAP_ACC6_MC",
                "USP_REEBOW_3DAP_ACC7_MC"
            };

            headgear[] = {
                "USP_OPSCORE_FASTMTC_CMG",
                "USP_OPSCORE_FASTMTC_CMGS",
                "USP_OPSCORE_FASTMTC_CMGSW",
                "USP_OPSCORE_FASTMTC_CG",
                "USP_OPSCORE_FASTMTC_CGW",
                "USP_OPSCORE_FASTMTC_CGS",
                "USP_OPSCORE_FASTMTC_CGSW",
            };

            addItemsToVest[] += {
                "ACE_DefusalKit",
                "ACE_Clacker",
            };

            class Rank {

                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
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
                    headgear[] = {
                        "USP_OPSCORE_FASTMTC_CGT",
                        "USP_OPSCORE_FASTMTC_CGTW",
                        "USP_OPSCORE_FASTMTC_CMGT",
                        "USP_OPSCORE_FASTMTC_CMGTW"
                    };
                };
            };
        };

        //Fahrzeugbesatzung
        class B_crew_F {
            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";

            vest = "USP_CRYE_CPC_FS";
            backpack = "";

            class Rank {
                class PRIVATE {

                };
                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "", //Radio
                    };
                };
                class LIEUTENANT: SERGEANT {
                    backpack[] = {
                        "USP_ZIPON_PACK_CPC_AT_MC",
                        "USP_ZIPON_PACK_CPC_AT_RF2_MC"
                    };

                    addItemsToBackpack[] += {
                        "", //LR Radio
                    };
                };
            };
        };

        //Mörser
        class B_support_AMort_F: B_Soldier_F {
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

            addItemsToVest[] += {
                "ACE_PlottingBoard",
            };

        };

        class B_support_Mort_F: B_support_AMort_F {

            class Rank {
                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
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

                    addItemsToBackpack[] += {
                        "", //LR Radio
                    };
                };
            };
        };

        //Pilots
        class B_helicrew_F {

        };

        class B_Helipilot_F: B_helicrew_F{

        };

        //Aufklärer
        class B_sniper_F {
            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";

            uniform = ""; //ghillie
            vest = "";
            backpack = "";

            addItemsToUniform[] += {

            };

            addItemsToVest[] += {

            };

            addItemsToBackpack[] += {
                "ACE_Tripod",
            };

            binoculars = "ACE_Vector";

        };

        class B_spotter_F: B_soldier_M_F {
            primaryWeaponOptics = "";
            primaryWeaponMuzzle = "";

            uniform = ""; //ghillie
            vest = "";
            backpack = "";

            addItemsToUniform[] += {
                "ACE_microdagr",
            };

            addItemsToVest[] += {
                "ACE_Kestrel4500",
                "ACE_ATragMX",
                "ACE_DefusalKit",
                "ACE_Clacker",
            };

            addItemsToBackpack[] += {
                "ACE_SpottingScope",
                "ACE_EntrenchingTool",
                "", //LR Radio
            };

            binoculars = "ACE_Vector";
        };

        class B_Patrol_Soldier_TL_F: B_soldier_M_F {
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

            backpack[] = {
                "USP_REEBOW_3DAP_ACC2_MC",
                "USP_REEBOW_3DAP_ACC5_MC",
                "USP_REEBOW_3DAP_ACC9_MC"
            };
            addItemsToUniform[] += {
                "ACE_microdagr",
            };

            addItemsToVest[] += {
                "", //BFT
            };

            addItemsToBackpack[] += {
                "", //LR Radio
            };

            binoculars = "ACE_VEctor";
        };

        class B_Patrol_Soldier_UAV_F: B_soldier_M_F {
            backpack[] = {
                "USP_REEBOW_3DAP_MC",
                "USP_REEBOW_3DAP_ACC2_MC",
                "USP_REEBOW_3DAP_ACC3_MC",
                "USP_REEBOW_3DAP_ACC5_MC",
                "USP_REEBOW_3DAP_ACC8_MC",
            };

            addItemsToBackpack[] += {
                LIST_10("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed",
            };

            gps = "B_UavTerminal";

        };

        class B_Patrol_Soldier_M_F: B_soldier_M_F {
            backpack[] = {
                "USP_REEBOW_3DAP_MC",
                "USP_REEBOW_3DAP_ACC3_MC"
            };
        };

        //Führung
        class B_Soldier_TL_F {
            primaryWeaponMagazine = ""; //Tracer instead of regular ball
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

            addItemsToUniform[] += {
                "ACE_Microdagr",
            };

            addItemsToVest[] += {
                "", //Radio
                "", //Android
                "", // Smoke Green
            };
            addItemsToBackpack[] += {
                "ACE_flags_red",
                "ACE_SpraypaintBlack",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed"
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            backpack[] += {
                "USP_ZIPON_PANEL_CPC_RF2_MC",
                "USP_ZIPON_PANEL_CPC_RF2_SM_MC",
                "USP_ZIPON_PANEL_CPC_RF2_SMK_MC",
                "USP_ZIPON_PANEL_CPC_RF2_SMK_SM_MC",
            };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        //Medics
        class B_medic_F {
            vest = "USP_CRYE_CPC_MEDIC_BELT_MC";
            headgear[] = {
                "USP_OPSCORE_FASTMTC_CMT",
                "USP_OPSCORE_FASTMTC_CMTW",
                "USP_OPSCORE_FASTMTC_CGT",
                "USP_OPSCORE_FASTMTC_CGTW",
                "USP_OPSCORE_FASTMTC_CT",
                "USP_OPSCORE_FASTMTC_CTW",
            };

            class Rank {

                class PRIVATE {
                    backpack = "USP_DELTA_BAG_MC";
                    addItemsToVest[] += {
                        //Soldier Items
                        LIST_8(""), //Primary Weapon Magazine
                        LIST_2(""), //Frag Grenade
                        LIST_2(""), //White Smoke Grenade
                        //Medic Items
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

                class CORPORAL: PRIVATE {
                    primaryWeapon = ""; //Kurze Waffe?
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

                    addItemsToVest[] = {
                        //Soldier Items
                        LIST_3(""), //Primary Weapon Magazine
                        LIST_2(""), //Frag Grenade
                        LIST_2(""), //White Smoke Grenade
                        //Medic Items
                        "ACE_SurgicalKit",
                        "ACE_SpraypaintBlue",
                        "ace_flags_blue",
                    };
                    addItemsToBackpack[] = {
                        //M
                        //A
                        //R
                        //C
                        //H
                    };
                };

                class SERGEANT: CORPORAL {
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

                    addItemsToVest[] = {

                    };
                    addItemsToBackpack[] = {
                        //M
                        //A
                        //R
                        //C
                        //H
                    };
                };

                class LIEUTENANT: SERGEANT {
                    addItemsToVest[] = {

                    };
                    addItemsToBackpack[] = {
                        //M
                        //A
                        //R
                        //C
                        //H
                        "",
                    };
                };
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
                "USP_REEBOW_3DAP_ACC5_MC",
                "USP_REEBOW_3DAP_ACC8_MC",
                "USP_REEBOW_3DAP_ACC9_MC",
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

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2(""),
                LIST_2(""),
            };
            addItemsToVest[] = {
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
            };
            primaryWeaponOptics[] = {
                "",
            };
            primaryWeaponPointer = "";
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                };
            handgunWeaponMagazine = "";

            goggles[] = {
                "USP_RAID_BLK",
                "USP_RAID_BLK2",
                "USP_RAID_BLK3",
                ""
            };
        };

        class B_recon_LAT_F: B_recon_F {
            secondaryWeapon = "";
        };

        class B_recon_medic_F: B_recon_F {
            vest = "USP_CRYE_CPC_MEDIC_BELT_MC";
            backpack = "USP_45L_RUCKSACK_MC";

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
            };

            addItemsToBackpack[] += {

            };
        };

        class B_recon_JTAC_F: B_recon_F {
            backpack[] = {
                "USP_REEBOW_3DAP_ACC2_MC",
                "USP_REEBOW_3DAP_ACC5_MC",
                "USP_REEBOW_3DAP_ACC9_MC"
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
                "", //BFT
                "", //SR Radio
            };

            addItemsToBackpack[] += {
                "Laserbatteries",
            };

            binoculars = "Laserdesignator_03";
        };

        class B_recon_TL_F: B_recon_JTAC_F {

        };

        class B_recon_M_F {
            headgear[] += {
                "USP_BOONIE_HAT_MC"
            };

            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle = "";
            primaryWeaponOptics = "";
            primaryWeaponUnderbarrel = "";

            addItemsToUniform[] += {
                "ACE_Rangecard",
            };
        };
    };
};
