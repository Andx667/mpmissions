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
        "uniform",
        "vest",
        "backpack",
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "goggles",
        "headgear",
    };

    class Side {
        class Blufor {
            uniform[] = {
                // //DDPM Desert
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
                "UK3CB_BAF_H_Mk7_Camo_ESS_B",
                "UK3CB_BAF_H_Mk7_Camo_ESS_C",
                "UK3CB_BAF_H_Mk7_Camo_ESS_D",
                "UK3CB_BAF_H_Mk7_Net_B",
                "UK3CB_BAF_H_Mk7_Net_C",
                "UK3CB_BAF_H_Mk7_Net_D",
                "UK3CB_BAF_H_Mk7_Net_ESS_B",
                "UK3CB_BAF_H_Mk7_Net_ESS_C",
                "UK3CB_BAF_H_Mk7_Net_ESS_D",
                "UK3CB_BAF_H_Mk7_Net_CESS_B",
                "UK3CB_BAF_H_Mk7_Net_CESS_C",
                "UK3CB_BAF_H_Mk7_Net_CESS_D",
                "UK3CB_BAF_H_Mk7_Scrim_A",
                "UK3CB_BAF_H_Mk7_Scrim_B",
                "UK3CB_BAF_H_Mk7_Scrim_D",
                "UK3CB_BAF_H_Mk7_Scrim_E",
                "UK3CB_BAF_H_Mk7_Scrim_F",
                "UK3CB_BAF_H_Mk7_Scrim_ESS_A",
                "UK3CB_BAF_H_Mk7_Scrim_ESS_B",
                "UK3CB_BAF_H_Mk7_Camo_CESS_B",
                "UK3CB_BAF_H_Mk7_Camo_CESS_C",
                "UK3CB_BAF_H_Mk7_Camo_CESS_D",
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                "ACRE_PRC343",
                LIST_2("kat_chestSeal"),
                "kat_guedel",
                LIST_2("kat_Painkiller"),
            };
            addItemsToVest[] = {
                LIST_2("UK3CB_BAF_SmokeShell"),
                LIST_2("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                LIST_2("ACE_CableTie"),
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
            primaryWeaponPointer = "";
            primaryWeaponMagazine = "UK3CB_BAF_556_30Rnd";
            primaryWeaponUnderbarrel[] = {
                "UK3CB_underbarrel_acc_grippod",
                "UK3CB_underbarrel_acc_grippod_d",
                "UK3CB_underbarrel_acc_grippod_g",
                "UK3CB_underbarrel_acc_grippod_t",
                //"UK3CB_underbarrel_acc_grippod_w",
            };
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                };
            handgunWeaponMagazine = "";

            goggles[] = {
                "rhs_googles_black",
                "rhs_googles_clear",
                "rhs_googles_orange",
                "rhs_googles_yellow",
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
                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
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
                LIST_8("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
            };

            addItemsToBackpack[] = {
                LIST_20("UK3CB_BAF_1Rnd_HE_Grenade_Shell"),
                LIST_5("UK3CB_BAF_1Rnd_SmokeRed_Grenade_shell"),
                LIST_5("UK3CB_BAF_1Rnd_Smoke_Grenade_shell"),
                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_2("UK3CB_BAF_SmokeShell"),
                LIST_2("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_762_200Rnd_T",
                LIST_8("UK3CB_BAF_556_30Rnd"),
            };
        };

        class B_soldier_exp_F: B_Soldier_F {
            backpack = "UK3CB_BAF_B_Bergen_MTP_PointMan_H_A";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
            };

            addItemsToBackpack[] = {
                LIST_5("UK3CB_BAF_12G_Pellets"),
                "ACE_Wirecutter",
                "mts_cutter_folding_saw",
                LIST_3("tsp_breach_package_mag"),
                LIST_3("tsp_breach_block_mag"),
                LIST_3("UK3CB_BAF_556_30Rnd"),
                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_762_200Rnd_T",
            };
        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "UK3CB_BAF_AT4_CS_AP_Launcher";
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {
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
            };

            binoculars = "UK3CB_BAF_Soflam_Laserdesignator";

        };
        class B_soldier_AT_F: B_Soldier_F {

        };

        class B_soldier_AAT_F: B_Soldier_F {

        };

        class B_Soldier_A_F: B_Soldier_F {

        };

        class B_soldier_UAV_F: B_Soldier_F {

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

                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_9_17Rnd",
            };

        };

        //Autorifleman
        class B_soldier_AR_F {

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

                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                "UK3CB_BAF_9_17Rnd",
            };

        };

        class B_soldier_AA_F: B_Soldier_F {

        };

        class B_soldier_AAA_F: B_Soldier_F {
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {
            backpack = "UK3CB_BAF_B_Bergen_MTP_Engineer_H_A";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
            };

            addItemsToBackpack[] = {
                "ACE_Wirecutter",
                "mts_cutter_folding_saw",
                LIST_8("UK3CB_BAF_556_30Rnd"),

                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
                LIST_3("tsp_breach_package_mag"),
                LIST_3("tsp_breach_block_mag"),
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
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC148",
                    };
                    addItemsToBackpack[] += {
                        "ACE_SpraypaintGreen",
                        "ACE_SpraypaintBlack",
                        "ACE_SpraypaintRed",
                    };

                };
            };
        };

        class B_soldier_mine_F: B_Soldier_F {

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
            primaryWeapon = "UK3CB_BAF_L22A2";
            primaryWeaponMagazine = "UK3CB_BAF_556_30Rnd";
            primaryWeaponOptics = "";
            primaryWeaponUnderbarrel = "";

            headgear[] = {
                "UK3CB_BAF_H_CrewHelmet_A",
                "UK3CB_BAF_H_CrewHelmet_B",
                "UK3CB_BAF_H_CrewHelmet_ESS_A",
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
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC148"
                    };

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
            primaryWeapon = "";
            handgunWeapon = "UK3CB_BAF_L131A1";
            handgunWeaponMagazine = "UK3CB_BAF_9_17Rnd";

            uniform[]= {
                "UK3CB_BAF_U_CombatUniform_MTP_ShortSleeve",
                "UK3CB_BAF_U_CombatUniform_MTP",
                };
            vest = "UK3CB_BAF_V_Pilot_A";
            backpack = "";


            headgear = "H_CrewHelmetHeli_I_E";

            addItemsToVest[] += {
                LIST_2("UK3CB_BAF_9_17Rnd"),
                LIST_2("UK3CB_BAF_SmokeShellPurple"),
                LIST_2("UK3CB_BAF_SmokeShellYellow"),
                LIST_2("ACE_HandFlare_Green"),
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

            addItemsToBackpack[] = {
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
                "UK3CB_BAF_V_Osprey_SL_A",
                "UK3CB_BAF_V_Osprey_SL_B",
            };

            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };
            addItemsToVest[] = {
                "ACRE_PRC148",
                LIST_14("UK3CB_BAF_556_30Rnd_T"),
            };
            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                LIST_3("UK3CB_BAF_762_200Rnd_T"),

                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("UK3CB_BAF_SmokeShell"),
                LIST_4("rhs_mag_m67"),
                "UK3CB_BAF_SmokeShellGreen",
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
            };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class TTT_B_FO_F: B_Soldier_F {

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
                        LIST_2("kat_Pulseoximeter"),
                        //Being a Soldier things
                        "ACRE_PRC148",
                        LIST_6("UK3CB_BAF_556_30Rnd"),
                        "ACE_SurgicalKit",
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        LIST_3("UK3CB_BAF_SmokeShellBlue"),
                    };
                    addItemsToBackpack[] = {
                        //M
                        LIST_45("ACE_packingBandage"),
                        LIST_45("ACE_ElasticBandage"),
                        LIST_12("ACE_tourniquet"),
                        //A
                        LIST_10("kat_chestSeal"),
                        LIST_10("kat_larynx"),
                        LIST_10("kat_ncdKit"),
                        //R
                        "kat_pocketBVM",
                        //C
                        LIST_6("ACE_salineIV"),
                        LIST_3("ACE_salineIV_250"),
                        LIST_3("ACE_salineIV_500"),
                        LIST_10("kat_IV_16"),
                        LIST_12("ACE_epinephrine"),
                        LIST_10("kat_lidocaine"),
                        "kat_AED",
                        //H
                        LIST_10("kat_Penthrox"),
                        LIST_10("kat_naloxone"),
                        LIST_10("kat_nalbuphine"),
                        LIST_10("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        LIST_30("ACE_Suture"),
                        //Admin
                        "ACE_Bodybag",
                    };
                };
                //PJ 1
                class CORPORAL: PRIVATE {
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
                    vest = "UK3CB_BAF_V_Osprey_Rifleman_B";
                    backpack[] = {
                        "UK3CB_BAF_B_Bergen_MTP_Medic_H_A",
                        "UK3CB_BAF_B_Bergen_MTP_Medic_H_B",
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

                    primaryWeapon = "UK3CB_BAF_L85A3";
                    primaryWeaponPointer[] = {
                        "UK3CB_BAF_LLM_Flashlight_Black",
                        "UK3CB_BAF_LLM_Flashlight_Tan",
                    };
                    handgunWeapon = "UK3CB_BAF_L131A1";
                    handgunWeaponMagazine = "UK3CB_BAF_9_17Rnd";

                    addItemsToVest[] += {
                        "ItemAndroid",
                        LIST_2("UK3CB_BAF_9_17Rnd"),
                        LIST_3("UK3CB_BAF_SmokeShellYellow"),
                    };

                    addItemsToBackpack[] = {
                        //M
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_ElasticBandage"),
                        LIST_8("ACE_tourniquet"),
                        //A
                        LIST_6("kat_chestSeal"),
                        LIST_6("kat_larynx"),
                        LIST_6("kat_ncdKit"),
                        //R
                        "kat_pocketBVM",
                        //C
                        LIST_6("ACE_SalineIV"),
                        LIST_3("ACE_SalineIV_250"),
                        LIST_3("ACE_SalineIV_500"),
                        LIST_8("kat_IV_16"),
                        LIST_8("kat_lidocaine"),
                        "kat_AED",
                        //H
                        LIST_12("kat_Penthrox"),
                        LIST_12("kat_naloxone"),
                        LIST_12("kat_nalbuphine"),
                        LIST_12("ACE_epinephrine"),
                        LIST_4("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        //Admin
                        "ACE_Bodybag",
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

                    addItemsToBackpack[] = {
                        //M
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        //A
                        LIST_6("kat_aatKit"),
                        "kat_accuvac",
                        LIST_6("kat_chestSeal"),
                        LIST_6("kat_larynx"),
                        //R
                        "kat_BVM",
                        "kat_oxygenTank_150",
                        //C
                        LIST_8("ACE_BloodIV"),
                        LIST_4("ACE_BloodIV_500"),
                        LIST_4("ACE_BloodIV_250"),
                        LIST_2("ACE_salineIV_250"),
                        "kat_X_AED",
                        LIST_8("kat_IV_16"),
                        LIST_2("kat_IO_FAST"),
                        LIST_12("kat_epinephrineIV"),
                        LIST_8("kat_lidocaine"),
                        LIST_6("kat_amiodarone"),
                        //H
                        LIST_5("kat_eaca"),
                        LIST_10("kat_txa"),
                        LIST_8("kat_fentanyl"),
                        LIST_8("kat_ketamine"),
                        LIST_8("kat_atropine"),
                        //Admin
                        LIST_30("ACE_Suture"),
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
                        LIST_10("ACE_packingBandage"),
                        LIST_10("ACE_elasticBandage"),
                        //A
                        LIST_2("kat_aatKit"),
                        "kat_accuvac",
                        LIST_3("kat_chestSeal"),
                        LIST_3("kat_larynx"),
                        //R
                        "kat_BVM",
                        "kat_oxygenTank_150",
                        //C
                        LIST_5("ACE_BloodIV"),
                        LIST_3("ACE_BloodIV_500"),
                        LIST_3("ACE_BloodIV_250"),
                        "ACE_salineIV_250",
                        "kat_X_AED",
                        LIST_4("kat_IV_16"),
                        LIST_2("kat_IO_FAST"),
                        LIST_12("kat_epinephrineIV"),
                        LIST_8("kat_lidocaine"),
                        LIST_6("kat_amiodarone"),
                        //H
                        LIST_5("kat_eaca"),
                        LIST_10("kat_txa"),
                        LIST_8("kat_fentanyl"),
                        LIST_8("kat_ketamine"),
                        LIST_8("kat_atropine"),
                        //Admin
                        LIST_10("ACE_Suture"),
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
