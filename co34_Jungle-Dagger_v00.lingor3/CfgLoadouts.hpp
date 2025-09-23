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
    perPlayerDelay = 0;
    handleRadios = 1;
    resetLoadout = 1;
    randomizationMode = 1;
    customGear = -1;
    customGearAllowedCategories[] = {
        //"uniform",
        //"vest",
        //"backpack",
        //"primaryWeapon",
        //"primaryWeaponOptics",
        //"primaryWeaponUnderbarrel",
        //"primaryWeaponPointer",
        //"goggles",
        //headgear",
    };

    class Side {
        class Blufor {
            uniform[] = {
                //DDPM Desert
                // "UK3CB_BAF_U_CombatUniform_DDPM",
                // "UK3CB_BAF_U_CombatUniform_DDPM_ShortSleeve",
                // //DPM Jungle
                // "UK3CB_BAF_U_CombatUniform_DPMJ",
                // "UK3CB_BAF_U_CombatUniform_DPMJ_ShortSleeve",
                // //DPM Temperate
                // "UK3CB_BAF_U_CombatUniform_DPMT",
                // "UK3CB_BAF_U_CombatUniform_DPMT_ShortSleeve",
                // //DPM Tropen
                // "UK3CB_BAF_U_CombatUniform_DPMTrop",
                // "UK3CB_BAF_U_CombatUniform_DPMTrop_ShortSleeve",
                // //DPM Woodland
                // "UK3CB_BAF_U_CombatUniform_DPMW",
                // "UK3CB_BAF_U_CombatUniform_DPMW_ShortSleeve",
                //MTP
                "UK3CB_BAF_U_CombatUniform_MTP",
                "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",
            };
            vest[] = {
                "UK3CB_BAF_V_Osprey_Rifleman_A",
                "UK3CB_BAF_V_Osprey_Rifleman_C",
                "UK3CB_BAF_V_Osprey_Rifleman_D",
                "UK3CB_BAF_V_Osprey_Rifleman_E",
                "UK3CB_BAF_V_Osprey_Rifleman_F",
            };
            backpack[] = {
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B",
                "UK3CB_BAF_B_Bergen_MTP_Rifleman_H_C",
            };
            headgear[] = {
                "UK3CB_BAF_H_Mk7_Camo_B",
                "UK3CB_BAF_H_Mk7_Camo_C",
                "UK3CB_BAF_H_Mk7_Camo_D",
                "UK3CB_BAF_H_Mk7_Camo_E",
                "UK3CB_BAF_H_Mk7_Camo_F",
                //"UK3CB_BAF_H_Mk7_Camo_ESS_B",
                //"UK3CB_BAF_H_Mk7_Camo_ESS_C",
                //"UK3CB_BAF_H_Mk7_Camo_ESS_D",
                "UK3CB_BAF_H_Mk7_Net_B",
                "UK3CB_BAF_H_Mk7_Net_C",
                "UK3CB_BAF_H_Mk7_Net_D",
                //"UK3CB_BAF_H_Mk7_Net_ESS_B",
                //"UK3CB_BAF_H_Mk7_Net_ESS_C",
                //"UK3CB_BAF_H_Mk7_Net_ESS_D",
                //"UK3CB_BAF_H_Mk7_Net_CESS_B",
                //"UK3CB_BAF_H_Mk7_Net_CESS_C",
                //"UK3CB_BAF_H_Mk7_Net_CESS_D",
                "UK3CB_BAF_H_Mk7_Scrim_A",
                "UK3CB_BAF_H_Mk7_Scrim_B",
                "UK3CB_BAF_H_Mk7_Scrim_D",
                "UK3CB_BAF_H_Mk7_Scrim_E",
                "UK3CB_BAF_H_Mk7_Scrim_F",
                //"UK3CB_BAF_H_Mk7_Scrim_ESS_A",
                //"UK3CB_BAF_H_Mk7_Scrim_ESS_B",
                //"UK3CB_BAF_H_Mk7_Camo_CESS_B",
                //"UK3CB_BAF_H_Mk7_Camo_CESS_C",
                //"UK3CB_BAF_H_Mk7_Camo_CESS_D",
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                LIST_15("ACE_elasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                "ACRE_PRC343",
                LIST_2("kat_chestSeal"),
                LIST_2("kat_Painkiller"),
            };
            addItemsToVest[] = {
                LIST_2("UK3CB_BAF_SmokeShell"),
                LIST_2("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                LIST_2("ACE_CableTie"),
                "UK3CB_BAF_Bayonet_L3A1",
            };
            addItemsToBackpack[] = {
            };

            primaryWeapon[] = {
                "UK3CB_BAF_L85A2_RIS",
                "UK3CB_BAF_L85A2_RIS_G",
                "UK3CB_BAF_L85A2_RIS_D",
                //"UK3CB_BAF_L85A2_RIS_W",
            };
            primaryWeaponOptics[] = {
                "RKSL_optic_LDS",
                "RKSL_optic_LDS_C",
                };
            primaryWeaponPointer[] = {
                "UK3CB_BAF_LLM_Flashlight_Black",
                "UK3CB_BAF_LLM_Flashlight_Tan",
            };
            primaryWeaponMagazine = "UK3CB_BAF_556_30Rnd";
            primaryWeaponUnderbarrel[] = {
                "UK3CB_underbarrel_acc_grippod",
                "UK3CB_underbarrel_acc_grippod_d",
                "UK3CB_underbarrel_acc_grippod_g",
                "UK3CB_underbarrel_acc_grippod_t",
                //"UK3CB_underbarrel_acc_grippod_w",
                "",
            };
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                };
            handgunWeaponMagazine = "";

            goggles[] = {
                "UK3CB_BAF_G_Tactical_Black",
                "UK3CB_BAF_G_Tactical_Yellow",
                "UK3CB_BAF_G_Tactical_Orange",
                "UK3CB_BAF_G_Tactical_Clear",
                "UK3CB_BAF_G_Tactical_Grey",
                "",
                };
            //nvgoggles = "UK3CB_BAF_HMNVS";
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
                LIST_12("UK3CB_BAF_556_30Rnd"),
            };

            addItemsToBackpack[] += {
                LIST_2("UK3CB_BAF_762_200Rnd_T"),
                LIST_10("UK3CB_BAF_556_30Rnd"),
                LIST_15("ACE_quikClot"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_H_Beret_PR",
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon = "UK3CB_BAF_L85A2_UGL";
            primaryWeaponUnderbarrel = "";

            vest[] = {
                "UK3CB_BAF_V_Osprey_Grenadier_A",
                "UK3CB_BAF_V_Osprey_Grenadier_B",
            };

            addItemsToVest[] += {
                LIST_7("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
            };

            addItemsToBackpack[] = {
                LIST_20("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
                LIST_5("UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell"),
                LIST_5("UK3CB_BAF_1Rnd_Smoke_Grenade_shell"),
                LIST_15("ACE_quikClot"),
                LIST_15("ACE_packingBandage"),
                LIST_2("UK3CB_BAF_SmokeShell"),
                LIST_2("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_762_200Rnd_T",
                LIST_8("UK3CB_BAF_556_30Rnd"),
                "UK3CB_BAF_H_Beret_PR",
            };
        };

        class B_soldier_exp_F: B_Soldier_F {
            backpack = "UK3CB_BAF_B_Bergen_MTP_PointMan_H_A";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
                LIST_3("ACE_M14"),
            };

            addItemsToBackpack[] = {
                LIST_5("UK3CB_BAF_12G_Pellets"),
                "ACE_Wirecutter",
                "mts_cutter_folding_saw",
                LIST_3("tsp_breach_package_mag"),
                LIST_3("tsp_breach_block_mag"),
                LIST_3("UK3CB_BAF_556_30Rnd"),
                LIST_15("ACE_quikClot"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_2("rhs_mag_m67"),
                LIST_2("ACE_M14"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_762_200Rnd_T",
                "UK3CB_BAF_H_Beret_PR",
            };
        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "UK3CB_BAF_AT4_CS_AP_Launcher";
            //secondaryWeapon = "UK3CB_BAF_NLAW_Launcher";
        };

        class B_W_RadioOperator_F: B_Soldier_F {
            vest[] = {
                "UK3CB_BAF_V_Osprey_SL_A",
                "UK3CB_BAF_V_Osprey_SL_B",
            };
            backpack = "UK3CB_BAF_B_Bergen_MTP_JTAC_H_A";

            addItemsToVest[] += {
                "ACRE_PRC148",
                "Laserbatteries",
                "ItemAndroid",
            };

            addItemsToBackpack[] = {
                "ACRE_PRC117F",
                LIST_15("UK3CB_BAF_SmokeShellPurple"),
                LIST_4("UK3CB_BAF_556_30Rnd"),
                "ace_flags_blue",
                "ACE_SpraypaintBlue",
                "UK3CB_BAF_762_200Rnd_T",
                "UK3CB_BAF_H_Beret_PR",
            };

            binoculars = "UK3CB_BAF_Soflam_Laserdesignator";

        };
        class B_soldier_AT_F: B_Soldier_F {
            secondaryWeapon = "UK3CB_BAF_Javelin_Slung_Tube";

            binoculars = "UK3CB_BAF_Javelin_CLU";
        };

        class B_soldier_AAT_F: B_Soldier_F {
            secondaryWeapon = "UK3CB_BAF_Javelin_Slung_Tube";
        };

        class B_Soldier_A_F: B_Soldier_F {

        };

        class B_soldier_UAV_F: B_Soldier_F {
            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };
            addItemsToVest[] += {
                "ACRE_PRC148",
                "ItemAndroid",
            };
            addItemsToBackpack[] = {
                "ITC_Land_B_AR2i_Packed",
                LIST_10("ACE_UAVBattery"),
                "UK3CB_BAF_H_Beret_PR",
            };
            gps = "B_UavTerminal";
            binoculars = "ACE_Vector";
        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F {
            vest = "UK3CB_BAF_V_Osprey_Marksman_A";

            primaryWeapon = "UK3CB_BAF_L129A1";
            primaryWeaponMagazine = "ACE_20Rnd_762x51_M993_AP_Mag";
            primaryWeaponOptics = "UK3CB_BAF_TA648_308";
            primaryWeaponUnderbarrel = "UK3CB_underbarrel_acc_fgrip_bipod";

            handgunWeapon = "UK3CB_BAF_L131A1";
            handgunWeaponMagazine = "UK3CB_BAF_9_17Rnd";

            addItemsToUniform[] += {
                "ACE_Rangecard",
            };

            addItemsToVest[] += {
                LIST_11("ACE_20Rnd_762x51_M993_AP_Mag"),
                "UK3CB_BAF_9_17Rnd",
            };

            addItemsToBackpack[] += {
                LIST_14("UK3CB_BAF_762_L42A1_20Rnd_T"),

                LIST_15("ACE_quikClot"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_9_17Rnd",
            };

        };

        //Autorifleman
        class B_soldier_AR_F {
            vest = "UK3CB_BAF_V_Osprey_MG_B";

            primaryWeapon = "UK3CB_BAF_L110A3";
            primaryWeaponMagazine = "UK3CB_BAF_556_200Rnd_T";
            primaryWeaponUnderbarrel = "";

            addItemsToVest[] += {
                LIST_3("UK3CB_BAF_556_200Rnd_T"),
            };

            addItemsToBackpack[] += {
                LIST_3("UK3CB_BAF_556_200Rnd_T"),
                LIST_10("UK3CB_BAF_556_30Rnd"),
                LIST_15("ACE_quikClot"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
            };

        };

        //MMG
        class B_HeavyGunner_F {
            vest = "UK3CB_BAF_V_Osprey_MG_B";

            primaryWeapon = "UK3CB_BAF_L7A2";
            primaryWeaponMagazine = "UK3CB_BAF_762_200Rnd_T";
            primaryWeaponOptics = "";
            primaryWeaponUnderbarrel = "";

            handgunWeapon = "UK3CB_BAF_L131A1";
            handgunWeaponMagazine = "UK3CB_BAF_9_17Rnd";

            addItemsToVest[] += {
                LIST_2("UK3CB_BAF_762_200Rnd_T"),
                "UK3CB_BAF_9_17Rnd",
            };

            addItemsToBackpack[] += {
                LIST_2("UK3CB_BAF_762_200Rnd_T"),
                "ACE_SpareBarrel",

                LIST_15("ACE_quikClot"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_9_17Rnd",
            };

        };

        class B_soldier_AA_F: B_Soldier_F {
            secondaryWeapon = "rhs_weap_fim92";
            secondaryWeaponMagazine = "rhs_fim92_mag";

            addItemsToBackpack[] = {
                "rhs_fim92_mag",
            };
        };

        class B_soldier_AAA_F: B_Soldier_F {
            addItemsToBackpack[] = {
                LIST_2("rhs_fim92_mag"),
            };
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {
            backpack = "UK3CB_BAF_B_Bergen_MTP_Engineer_H_A";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
            };

            addItemsToBackpack[] = {
                "mts_cutter_folding_saw",
                LIST_8("UK3CB_BAF_556_30Rnd"),

                LIST_15("ACE_quikClot"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                LIST_3("tsp_breach_package_mag"),
                LIST_3("tsp_breach_block_mag"),
            };

            goggles[] += {
                "rhsusf_oakley_goggles_blk",
                "rhsusf_oakley_goggles_clr",
                "rhsusf_oakley_goggles_ylw",
            };

            class Rank {

                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
                    vest[] = {
                        "UK3CB_BAF_V_Osprey_SL_A",
                        "UK3CB_BAF_V_Osprey_SL_B",
                    };
                    addItemsToUniform[] += {
                        "ACE_MicroDAGR",
                    };
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC148",
                    };
                    addItemsToBackpack[] += {
                        "ACE_SpraypaintGreen",
                        "ACE_SpraypaintBlack",
                        "ACE_SpraypaintRed",
                    };

                    binoculars = "ACE_Vector";
                };
            };
        };

        class B_soldier_mine_F: B_Soldier_F {
            backpack = "UK3CB_BAF_B_Bergen_MTP_Sapper_H_A";

            addItemsToBackpack[] = {
                "ACE_VMH3",
                LIST_3("DemoCharge_Remote_Mag"),
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed",
                LIST_20("ace_marker_flags_orange"),
            };

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
            };

            class Rank {
                class PRIVATE {
                };
                class CORPORAL: PRIVATE {
                };
                class SERGEANT: CORPORAL {
                    vest[] = {
                        "UK3CB_BAF_V_Osprey_SL_A",
                        "UK3CB_BAF_V_Osprey_SL_B",
                    };

                    addItemsToUniform[] += {
                        "ACE_MicroDAGR",
                    };
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC148",
                    };
                    binoculars = "ACE_Vector";
                };
            };
        };

        //Fahrzeugbesatzung
        class B_crew_F {
            primaryWeapon = "UK3CB_BAF_L22A2";
            primaryWeaponMagazine = "UK3CB_BAF_556_30Rnd";
            primaryWeaponOptics = "";
            primaryWeaponUnderbarrel = "";

            headgear[] = {
                "UK3CB_BAF_H_CrewHelmet_A",
                "UK3CB_BAF_H_CrewHelmet_B",
                //"UK3CB_BAF_H_CrewHelmet_ESS_A",
            };

            goggles[] = {
                "rhsusf_oakley_goggles_blk",
                "rhsusf_oakley_goggles_clr",
                "rhsusf_oakley_goggles_ylw",
                "rhsusf_shemagh2_gogg_grn",
                "rhsusf_shemagh2_gogg_od",
                "rhsusf_shemagh2_gogg_tan",
                };

            addItemsToVest[] += {
                LIST_3("UK3CB_BAF_556_30Rnd"),
            };

            class Rank {
                class PRIVATE {
                    backpack = "B_AssaultPack_mcamo";

                    addItemsToBackpack[] = {
                        "ToolKit",
                    };

                };
                class SERGEANT: PRIVATE {
                    addItemsToUniform[] += {
                        "ACE_MicroDAGR",
                    };
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC148",
                    };
                    binoculars = "ACE_Vector";
                };
                class LIEUTENANT: SERGEANT {
                    backpack = "UK3CB_BAF_B_Bergen_MTP_SL_L_A";

                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                    };
                };
            };
        };

        class B_sniper_F {
            handgunWeapon = "UK3CB_BAF_L131A1";
            handgunWeaponMagazine = "UK3CB_BAF_9_17Rnd";

            uniform[] += {
                "UK3CB_BAF_U_CombatUniform_MTP_Ghillie_RM",
            };
            primaryWeapon[] = {
                "UK3CB_BAF_L115A3_BL",
                "UK3CB_BAF_L115A3_BL_Ghillie",
                "UK3CB_BAF_L115A3",
                "UK3CB_BAF_L115A3_Ghillie",
                "UK3CB_BAF_L115A3_DE",
                "UK3CB_BAF_L115A3_DE_Ghillie",
            };
            primaryWeaponOptics[] = {
                "RKSL_optic_PMII_525",
                "RKSL_optic_PMII_525_des",
                "RKSL_optic_PMII_525_wdl",
            };
            primaryWeaponMagazine = "UK3CB_BAF_338_5Rnd";
            primaryWeaponUnderbarrel = "";

        };

        class B_spotter_F: B_soldier_M_F {
            primaryWeaponOptics[] = {
                "RKSL_optic_PMII_312",
                "RKSL_optic_PMII_312_des",
                "RKSL_optic_PMII_312_wdl",
            };

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
                    addItemsToUniform[] += {
                        "ACE_MicroDAGR",
                    };
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC148",
                    };
                    binoculars = "ACE_Vector";
                };
            };
        };

        //Pilots
        class B_helicrew_F {
            primaryWeapon = "";
            handgunWeapon = "UK3CB_BAF_L131A1";
            handgunWeaponMagazine = "UK3CB_BAF_9_17Rnd";

            uniform[]= {
                "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",
                "UK3CB_BAF_U_CombatUniform_MTP",
                };
            vest = "UK3CB_BAF_V_Pilot_A";
            backpack = "";

            goggles[] = {""};

            headgear = "H_CrewHelmetHeli_I_E";

            addItemsToVest[] += {
                LIST_2("UK3CB_BAF_9_17Rnd"),
                LIST_2("UK3CB_BAF_SmokeShellPurple"),
                LIST_2("ACE_HandFlare_Green"),
                "UK3CB_BAF_H_Beret_PR",
            };

        };

        class B_Helipilot_F: B_helicrew_F{
            uniform = "UK3CB_BAF_U_HeliPilotCoveralls_Army";

            backpack = "UK3CB_B_Invisible";

            headgear[] = {
                "UK3CB_BAF_H_PilotHelmetHeli_A",
                "ttt_Helmet_Buzzard",//same has ttt_Helmet_Hawk
                "ttt_Helmet_Eagle",
                "ttt_Helmet_Falcon",
            };

            addItemsToUniform[] += {
                "ACE_MicroDagr",
            };

            addItemsToBackpack[] = {
                "UK3CB_BAF_H_Beret_PR",
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
            primaryWeaponMagazine = "UK3CB_BAF_556_30Rnd_T";
            vest[] = {
                "UK3CB_BAF_V_Osprey_SL_A",
                "UK3CB_BAF_V_Osprey_SL_B",
            };

            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };
            addItemsToVest[] = {
                "ACRE_PRC148",
                LIST_13("UK3CB_BAF_556_30Rnd_T"),
            };
            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                LIST_3("UK3CB_BAF_762_200Rnd_T"),

                LIST_15("ACE_quikClot"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_H_Beret_PR",
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {

            addItemsToVest[] += {
                "ItemAndroid",
            };
            addItemsToBackpack[] = {

                "ace_flags_red",
                "ACE_SpraypaintBlack",
                "ACE_SpraypaintGreen",
                LIST_14("UK3CB_BAF_556_30Rnd_T"),
                LIST_2("UK3CB_BAF_762_200Rnd_T"),
                "UK3CB_BAF_H_Beret_PR",
            };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        //Medics
        class B_medic_F {

            class Rank {

                //Zugsanitäter
                class PRIVATE {
                    vest[] = {
                        "UK3CB_BAF_V_Osprey_Medic_A",
                        "UK3CB_BAF_V_Osprey_Medic_B",
                    };
                    backpack[] = {
                        //"B_AssaultPack_mcamo",
                        "UK3CB_BAF_B_Bergen_MTP_Medic_L_A",
                        "UK3CB_BAF_B_Bergen_MTP_Medic_L_B",
                    };

                    addItemsToVest[] += {
                        //Diagnostic
                        LIST_3("kat_Pulseoximeter"),
                        //Admin
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        LIST_3("UK3CB_BAF_SmokeShellBlue"),
                        "ACE_surgicalKit",
                        //Being a Soldier things
                        "ACRE_PRC148",
                        LIST_8("UK3CB_BAF_556_30Rnd"),
                    };
                    addItemsToBackpack[] = {
                        //M
                        LIST_45("ACE_packingBandage"),
                        LIST_45("ACE_elasticBandage"),
                        LIST_45("ACE_quikclot"),
                        LIST_12("ACE_tourniquet"),
                        //A
                        LIST_12("kat_chestSeal"),
                        LIST_12("kat_larynx"),
                        LIST_6("kat_ncdKit"),
                        //R
                        "kat_pocketBVM",
                        //C
                        LIST_4("ACE_salineIV_250"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_6("ACE_salineIV"),
                        LIST_14("kat_IV_16"),
                        "kat_AED",
                        //H
                        LIST_6("kat_Penthrox"),
                        LIST_8("kat_naloxone"),
                        LIST_12("ACE_epinephrine"),
                        LIST_6("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        LIST_5("kat_lidocaine"),
                        "UK3CB_BAF_H_Beret_PR",
                        LIST_30("ACE_Suture"),
                    };
                };
            };
        };

        class B_soldier_repair_F: B_Soldier_F {
            backpack = "B_AssaultPack_mcamo";
            addItemsToBackpack[] = {"ToolKit"};

            class Rank {

                class PRIVATE {

                };
                class SERGEANT: PRIVATE {
                    backpack = "UK3CB_BAF_B_Bergen_MTP_Radio_L_B";

                    addItemsToUniform[] += {
                        "ACE_MicroDAGR",
                    };
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC148",
                    };
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                    };
                    binoculars = "ACE_Vector";
                };
            };
        };

        //SOF
        class B_recon_F {
            primaryWeapon = "UK3CB_BAF_L119A1_RIS";
            primaryWeaponMuzzle = "UK3CB_BAF_Silencer_L85";
            primaryWeaponUnderbarrel[] += {
                "UK3CB_underbarrel_acc_afg",
                "UK3CB_underbarrel_acc_afg_d",
                "UK3CB_underbarrel_acc_afg_g",
                "UK3CB_underbarrel_acc_afg_t",
                //"UK3CB_underbarrel_acc_afg_w",
            };

            handgunWeapon = "UK3CB_BAF_L131A1";
            handgunWeaponMagazine = "UK3CB_BAF_9_17Rnd";

            uniform[] = {
            // "UK3CB_BAF_U_JumperUniform_DPMT",
            // "UK3CB_BAF_U_JumperUniform_DPMW",
            // "UK3CB_BAF_U_JumperUniform_MTP",
            // "UK3CB_BAF_U_JumperUniform_Plain",
                "UK3CB_BAF_U_CombatUniform_MTP_TShirt",
                "UK3CB_BAF_U_CombatUniform_MTP_TShirt_RM",
                "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve_RM",
                "UK3CB_BAF_U_CombatUniform_MTP_RM",
            };

            headgear[] = {
                "UK3CB_BAF_H_Mk7_Camo_A",
                "UK3CB_BAF_H_Mk7_Camo_ESS_A",
                "UK3CB_BAF_H_Mk7_Net_A",
                "UK3CB_BAF_H_Mk7_Net_ESS_A",
                "UK3CB_BAF_H_Mk7_Net_CESS_A",
                "UK3CB_BAF_H_Mk7_Scrim_C",
                "UK3CB_BAF_H_Mk7_Scrim_ESS_C",
                "UK3CB_BAF_H_Mk7_Camo_CESS_A",
            };

            goggles[] = {
                // "UK3CB_G_Tactical_Clear",
                // "UK3CB_G_Tactical_Clear_Shemagh_Green",
                // "UK3CB_G_Tactical_Clear_Shemagh_Tan",
                "UK3CB_G_Tactical_Black",
                "UK3CB_G_Tactical_Black_Shemagh_Green",
                "UK3CB_G_Tactical_Black_Shemagh_Tan",
            };
        };

        class B_recon_LAT_F: B_recon_F {
            secondaryWeapon = "BWA3_RGW90_Loaded";
        };

        class B_recon_medic_F: B_recon_F {
            class Rank {
                //Zugsanitäter
                class PRIVATE {
                    vest[] = {
                        "UK3CB_BAF_V_Osprey_Medic_A",
                        "UK3CB_BAF_V_Osprey_Medic_B",
                    };
                    backpack[] = {
                        //"B_AssaultPack_mcamo",
                        "UK3CB_BAF_B_Bergen_MTP_Medic_L_A",
                        "UK3CB_BAF_B_Bergen_MTP_Medic_L_B",
                    };

                    addItemsToVest[] += {
                        //Diagnostic
                        LIST_3("kat_Pulseoximeter"),
                        //Admin
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        LIST_3("UK3CB_BAF_SmokeShellBlue"),
                        "ACE_surgicalKit",
                        //Being a Soldier things
                        "ACRE_PRC148",
                        LIST_8("UK3CB_BAF_556_30Rnd"),
                    };
                    addItemsToBackpack[] = {
                        //M
                        LIST_45("ACE_packingBandage"),
                        LIST_45("ACE_elasticBandage"),
                        LIST_12("ACE_tourniquet"),
                        //A
                        LIST_12("kat_chestSeal"),
                        LIST_12("kat_larynx"),
                        LIST_6("kat_ncdKit"),
                        //R
                        "kat_pocketBVM",
                        //C
                        LIST_4("ACE_salineIV_250"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_6("ACE_salineIV"),
                        LIST_14("kat_IV_16"),
                        "kat_AED",
                        //H
                        LIST_6("kat_Penthrox"),
                        LIST_8("kat_naloxone"),
                        LIST_12("ACE_epinephrine"),
                        LIST_6("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        LIST_5("kat_lidocaine"),
                        "UK3CB_BAF_H_Beret_PR",
                    };
                };
                //PJ 1
                class CORPORAL: PRIVATE {
                    vest = "UK3CB_BAF_V_Osprey_Rifleman_B";
                    backpack[] = {
                        "UK3CB_BAF_B_Bergen_MTP_Medic_H_A",
                        "UK3CB_BAF_B_Bergen_MTP_Medic_H_B",
                    };

                    addItemsToVest[] = {
                        //Diagnostic
                        LIST_3("kat_Pulseoximeter"),
                        //Being a Soldier things
                        LIST_8("UK3CB_BAF_556_30Rnd"),
                        "ItemAndroid",
                        "ACE_surgicalKit",
                        LIST_2("UK3CB_BAF_9_17Rnd"),
                        LIST_3("UK3CB_BAF_SmokeShellYellow"),
                    };

                    addItemsToBackpack[] = {
                        //M
                        LIST_45("ACE_packingBandage"),
                        LIST_45("ACE_elasticBandage"),
                        LIST_16("ACE_tourniquet"),
                        //A
                        LIST_10("kat_chestSeal"),
                        LIST_10("kat_larynx"),
                        LIST_10("kat_ncdKit"),
                        //R
                        "kat_pocketBVM",
                        //C
                        LIST_6("ACE_bloodIV_250"),
                        LIST_6("ACE_bloodIV_500"),
                        LIST_16("kat_IV_16"),
                        LIST_9("ACE_bloodIV"),
                        //H
                        LIST_6("kat_Penthrox"),
                        LIST_12("kat_naloxone"),
                        LIST_12("ACE_epinephrine"),
                        LIST_6("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        LIST_5("kat_lidocaine"),
                        //Admin
                        "ACE_Bodybag",
                        "UK3CB_BAF_H_Beret_RM_Parade",
                        LIST_30("ACE_Suture"),
                    };

                };
                //PJ 2
                class SERGEANT: CORPORAL {
                    vest = "UK3CB_BAF_V_Osprey_SL_D";
                    backpack[] = {
                        "UK3CB_BAF_B_Bergen_MTP_Medic_L_A",
                        "UK3CB_BAF_B_Bergen_MTP_Medic_L_B",
                    };
                    addItemsToVest[] += {
                        "ACRE_PRC148",
                    };

                    addItemsToBackpack[] = {
                        //M
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_ElasticBandage"),
                        //A
                        LIST_12("kat_aatKit"),
                        "kat_accuvac",
                        LIST_6("kat_chestSeal"),
                        LIST_6("kat_larynx"),
                        //R
                        "kat_BVM",
                        //C
                        "ACE_salineIV_250",
                        LIST_2("ACE_bloodIV_500"),
                        LIST_8("ACE_bloodIV"),
                        LIST_2("ACE_bloodIV_250"),
                        "kat_X_AED",
                        LIST_6("kat_IV_16"),
                        LIST_5("kat_IO_FAST"),
                        //H
                        LIST_10("kat_eaca"),
                        LIST_20("kat_TXA"),
                        LIST_5("kat_amiodarone"),
                        LIST_5("kat_fentanyl"),
                        LIST_5("kat_ketamine"),
                        LIST_5("kat_atropine"),
                        LIST_6("ACE_epinephrine"),
                        LIST_5("kat_lidocaine"),
                        //Admin
                        LIST_45("ACE_Suture"),
                        "UK3CB_BAF_H_Beret_RM_Officer"
                    };
                };
                //PJ 3
                class LIEUTENANT: SERGEANT {
                    backpack[] = {
                        "UK3CB_BAF_B_Bergen_MTP_JTAC_L_A",
                        "UK3CB_BAF_B_Bergen_MTP_Radio_L_A",
                        "UK3CB_BAF_B_Bergen_MTP_Radio_L_B",
                        "UK3CB_BAF_B_Bergen_MTP_SL_L_A",
                    };

                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                        //M
                        LIST_20("ACE_packingBandage"),
                        LIST_20("ACE_ElasticBandage"),
                        //A
                        LIST_4("kat_aatKit"),
                        "kat_accuvac",
                        LIST_4("kat_chestSeal"),
                        LIST_4("kat_larynx"),
                        //R
                        "kat_BVM",
                        //C
                        "ACE_salineIV_250",
                        "kat_X_AED",
                        LIST_6("kat_IV_16"),
                        LIST_5("kat_IO_FAST"),
                        LIST_3("ACE_bloodIV"),
                        //H
                        LIST_5("kat_eaca"),
                        LIST_10("kat_TXA"),
                        LIST_5("kat_amiodarone"),
                        LIST_5("kat_fentanyl"),
                        LIST_5("kat_ketamine"),
                        LIST_5("kat_atropine"),
                        LIST_6("ACE_epinephrine"),
                        LIST_5("kat_lidocaine"),
                        //Admin
                        LIST_30("ACE_Suture"),
                        "UK3CB_BAF_H_Beret_RM_Officer",
                    };
                };
            };
        };

        class B_recon_exp_F: B_recon_F {

        };

        class B_recon_JTAC_F: B_recon_F {
            primaryWeapon = "UK3CB_BAF_L119A1_UKUGL";
            backpack[] = {
                "UK3CB_BAF_B_Bergen_MTP_JTAC_H_A",
            };
        };

        class B_recon_TL_F: B_recon_JTAC_F {

        };

        class B_recon_M_F {

        };
    };
};
