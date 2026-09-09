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
                "ACE_elasticBandage", 10,
                "ACE_packingBandage", 10,
                "ACE_quikClot", 10,
                "kat_chestSeal", 2,
                "ACE_tourniquet", 4,
                "kat_Painkiller", 2,
                "ACE_MicroDAGR",
            };

            addItemsToVest[] = {
                "CUP_HandGrenade_M67", 2,
                "SmokeShell", 2,
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
                "CUP_30Rnd_556x45_Emag", 12,
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
                "CUP_1Rnd_HE_M203", 5,
            };

            addItemsToBackpack[] = {
                "CUP_1Rnd_HE_M203", 12,
                "CUP_1Rnd_HEDP_M203", 5,
                "1Rnd_Smoke_Grenade_shell", 5,
                "1Rnd_SmokeRed_Grenade_shell", 5,
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
                "SmokeShellPurple", 10,
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
                "Democharge_Remote_Mag", 4,
                "tsp_breach_block_mag", 3,
                "tsp_breach_package_mag", 3,
                "CUP_6Rnd_12Gauge_Pellets_No00_Buck", 6,
                "ACE_Wirecutter",
            };
        };

        class B_soldier_M_F: B_Survivor_F {
            vest = "USP_EAGLE_CIRAS_LOAD";

            primaryWeapon[] = {
                "CUP_arifle_Mk20",
                //"CUP_arifle_Mk20_black",
                //"CUP_arifle_Mk20_woodland",
            };
            primaryWeaponMagazine = "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl";
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";
            primaryWeaponOptics[] = {
                //"optic_SOS_khk_F",
                //"optic_SOS",
                //"CUP_optic_SB_11_4x20_PM_od",
                //"CUP_optic_SB_11_4x20_PM_tan",
                //"CUP_optic_SB_11_4x20_PM"
                "BWA3_optic_PMII_ShortdotCC"
            };
            handgunWeapon = "CUP_hgun_Glock17_blk";
            handgunWeaponMagazine = "CUP_17Rnd_9x19_glock17";

            addItemsToVest[] += {
                "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl", 6,
                "ACE_Rangecard",
                "CUP_17Rnd_9x19_glock17", 2,
            };
            addItemsToBackpack[] = {
                "CUP_20Rnd_762x51_B_SCAR_wdl", 8,
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
            primaryWeaponMagazine = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_KF_black",
                "CUP_optic_Elcan_SpecterDR_KF_coyote",
                "CUP_optic_Elcan_SpecterDR_KF_od",
                "CUP_optic_Elcan_SpecterDR_KF",
            };

            addItemsToVest[] += {
                "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", 4,
            };
            addItemsToBackpack[] = {
                "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", 6,
            };
        };

        class B_soldier_UAV_F: B_Soldier_F {
            backpack = "USP_REEBOW_3DAP_ACC3_MCT";
            addItemsToBackpack[] = {
                "ITC_Land_B_AR2i_Packed",
                "ACE_UAVBattery", 10,
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
                "CUP_1Rnd_HE_M203", 6,
                "CUP_30Rnd_556x45_Emag_Tracer_Red", 8,
            };
            addItemsToBackpack[] = {
                "CUP_1Rnd_HE_M203", 14,
                "1Rnd_Smoke_Grenade_shell", 5,
                "1Rnd_SmokeRed_Grenade_shell", 5,
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
                "CUP_30Rnd_556x45_Emag_Tracer_Red", 8,
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
                "CUP_30Rnd_556x45_Emag", 3,
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
                        "ACE_packingBandage", 30,
                        "ACE_elasticBandage", 30,
                        "ACE_tourniquet", 12,
                        //A
                        "kat_chestSeal", 8,
                        "kat_larynx", 8,
                        "kat_ncdKit", 6,
                        //R
                        "kat_pocketBVM", 3,
                        //C
                        "ACE_salineIV_250", 4,
                        "ACE_salineIV_500", 8,
                        "kat_IV_16", 8,
                        "ACE_epinephrine", 12,
                        "ACE_adenosine", 4,
                        //H
                        "kat_Penthrox", 6,
                        "kat_naloxone", 8,
                        "kat_Painkiller", 4,
                        "ACE_morphine", 8,
                        "ACE_suture", 60,
                        //Admin
                        "ACE_surgicalKit",
                        "kat_Pulseoximeter", 3,
                        "ACE_suture", 30,
                    };
                };

                class CORPORAL: PRIVATE { //Platoon Level Medic
                    backpack = "CUP_B_TacticalPack_TTS";

                    addItemsToVest[] = {
                        "kat_Pulseoximeter", 3,
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        "ACE_surgicalKit",
                        "CUP_30Rnd_556x45_Emag", 3,
                    };

                    addItemsToBackpack[] += {
                        //A
                        "kat_larynx", 2,
                        "kat_ncdKit", 2,
                        //C
                        "ACE_salineIV", 5,
                        "kat_amiodarone", 9,
                        "kat_aed",
                        //HIGH-TECH
                        "kat_lidocaine", 8,
                        "ACE_suture", 30,
                    };
                };

                class SERGEANT: CORPORAL { //Company Level Medic
                    backpack = "ttt_backpack_medic_rgr_02";

                    addItemsToBackpack[] = {
                        //M
                        "ACE_packingBandage", 45,
                        "ACE_elasticBandage", 45,
                        //A
                        "kat_aatKit", 6,
                        "kat_accuvac",
                        "kat_chestSeal", 6,
                        "kat_larynx", 5,
                        //R
                        "kat_BVM", 3,
                        "kat_oxygenTank_150",
                        //C
                        "ACE_BloodIV", 8,
                        "ACE_BloodIV_500", 3,
                        "ACE_BloodIV_250", 3,
                        "ACE_salineIV_250",
                        "kat_X_AED",
                        "kat_IV_16", 10,
                        "kat_IO_FAST", 2,
                        "kat_epinephrineIV", 12,
                        "ACE_epinephrine", 12,
                        "kat_lidocaine", 10,
                        "kat_amiodarone", 6,
                        "kat_atropine", 6,
                        //H
                        "kat_eaca", 6,
                        "kat_txa", 12,
                        "kat_fentanyl", 6,
                        "kat_ketamine", 6,
                        "kat_naloxone", 6,
                        "kat_nitroglycerin", 6,
                        "kat_norepinephrine", 6,
                        "kat_phenylephrine", 6,
                        //Admin
                        "ACE_suture", 30,
                        "ACE_suture", 30,
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
                        "ACE_packingBandage", 30,
                        "ACE_elasticBandage", 30,
                        //A
                        "kat_aatKit", 6,
                        "kat_accuvac",
                        "kat_chestSeal", 6,
                        "kat_larynx", 5,
                        //R
                        "kat_BVM", 3,
                        "kat_oxygenTank_150",
                        //C
                        "ACE_BloodIV", 8,
                        "ACE_BloodIV_500", 4,
                        "ACE_BloodIV_250", 4,
                        "ACE_salineIV_250",
                        "kat_X_AED",
                        "kat_IV_16", 10,
                        "kat_IO_FAST", 2,
                        "kat_epinephrineIV", 12,
                        "ACE_epinephrine", 12,
                        "kat_lidocaine", 10,
                        "kat_amiodarone", 6,
                        "kat_atropine", 6,
                        //H
                        "kat_eaca", 6,
                        "kat_txa", 12,
                        "kat_fentanyl", 6,
                        "kat_ketamine", 6,
                        "kat_naloxone", 6,
                        "kat_nitroglycerin", 6,
                        "kat_norepinephrine", 6,
                        "kat_phenylephrine", 6,
                        //Admin
                        "ACE_suture", 45,
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
                "CUP_17Rnd_9x19_glock17", 2,
                "SmokeShellPurple", 3,
                "SmokeShellYellow", 3,
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
