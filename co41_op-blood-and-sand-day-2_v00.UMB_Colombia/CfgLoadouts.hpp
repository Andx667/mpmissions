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
    customGear = 300;
    customGearAllowedCategories[] = {};//STRING

    //USMC2014
    class Side {
        //class BluforPlayers {
        class BluFor {
            uniform[] = {
                //FROG MARPAT
                //"CUP_U_B_USMC_FROG1_WMARPAT",
                //"CUP_U_B_USMC_FROG2_WMARPAT",
                //"CUP_U_B_USMC_FROG3_WMARPAT",
                //"CUP_U_B_USMC_FROG4_WMARPAT",
                //MCCUU MARPAT
                "CUP_U_B_USMC_MCCUU",
                "CUP_U_B_USMC_MCCUU_gloves",
                "CUP_U_B_USMC_MCCUU_pads",
                "CUP_U_B_USMC_MCCUU_pads_gloves",
                //"CUP_U_B_USMC_MCCUU_roll",
                //"CUP_U_B_USMC_MCCUU_roll_gloves",
                //"CUP_U_B_USMC_MCCUU_roll_pads",
                //"CUP_U_B_USMC_MCCUU_roll_pads_gloves",
                "CUP_U_B_USMC_MCCUU_roll_2",
                "CUP_U_B_USMC_MCCUU_roll_2_gloves",
                "CUP_U_B_USMC_MCCUU_roll_2_pads",
                "CUP_U_B_USMC_MCCUU_roll_2_pads_gloves",
                //FROG DESERT
                //DESERT
            };
            vest = "CUP_V_B_Eagle_SPC_Rifleman";
            backpack = "CFP_AssaultPack_Marpat";
            headgear[] = {
                "CUP_H_LWHv2_MARPAT",
                "CUP_H_LWHv2_MARPAT_NVG_gog2_cov2",
                "CUP_H_LWHv2_MARPAT_cov_fr",
                };

            addItemsToUniform[] = {
                "ACRE_PRC343",
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
                };
            addItemsToBackpack[] = {};

            primaryWeapon = "CUP_arifle_M16A4_Grip";
            primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag";
            primaryWeaponOptics = "CUP_optic_ACOG_TA31_KF";
            primaryWeaponPointer = "CUP_acc_ANPEQ_15_Flashlight_Tan_L";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon = "";
            handgunWeaponMagazine = "";

            goggles = "";
            nvgoggles = "";

            binoculars = "";
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
            vest = "CUP_V_B_Eagle_SPC_Rifleman";
            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_Stanag"),
            };
        };

        class B_soldier_AR_F {
            vest = "CUP_V_B_Eagle_SPC_AR";
            backpack = "";

            primaryWeapon = "CUP_lmg_M249_E2";
            primaryWeaponMagazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249";

            addItemsToVest[] += {
                LIST_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
                "ACE_SpareBarrel",
                "ACE_EntrenchingTool",
            };
        };

        class B_soldier_AAR_F: B_Soldier_F {
            backpack = "CUP_B_USMC_MOLLE";

            addItemsToBackpack[] = {
                LIST_4("CUP_200Rnd_TE4_Red_Tracer_556x45_M249"),
                "ACE_SpareBarrel",
            };

            binoculars = "Binocular";
        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon[] = {
                "CUP_launch_M72A6",
                "CUP_launch_M72A6_Special",
                };
        };

        class B_soldier_AT_F: B_Soldier_F {
            vest = "CUP_V_B_Eagle_SPC_AR";
            backpack = "CFP_AssaultPack_Marpat";

            secondaryWeapon[] = {"CUP_launch_Mk153Mod0_blk","CUP_launch_Mk153Mod0"};
            secondaryWeaponMagazine = "CUP_SMAW_HEDP_M";
            secondaryWeaponOptics = "CUP_optic_SMAW_Scope";

            addItemsToBackpack[] = {
                LIST_5("CUP_SMAW_Spotting"),
                "CUP_SMAW_HEDP_M"
            };
        };

        class B_soldier_AAT_F: B_Soldier_F {
            backpack = "CUP_B_USMC_MOLLE";

            addItemsToBackpack[] = {
                LIST_2("CUP_SMAW_HEAA_M"),
                "CUP_SMAW_HEDP_M",
                "CUP_SMAW_Spotting",
            };

            binoculars = "Binocular";
        };

        class B_HeavyGunner_F {
            primaryWeapon = "CUP_lmg_M240_norail";
            primaryWeaponMagazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";

            secondaryWeapon = "dzn_MG_Tripod_M122A1_M240Mount_Carry";

            handgunWeapon = "CUP_hgun_Colt1911";
            handgunWeaponMagazine = "CUP_7Rnd_45ACP_1911";

            vest = "CUP_V_B_Eagle_SPC_MG";

            addItemsToVest[] += {
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
                LIST_2("CUP_7Rnd_45ACP_1911")
            };

            addItemsToBackpack[] += {
                "ACE_SpareBarrel",
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
            };
        };

        class B_Soldier_A_F: B_Soldier_F {
            backpack = "CUP_B_USMC_MOLLE";

            addItemsToVest[] += {
                "ACE_EntrenchingTool",
            };
            addItemsToBackpack[] += {
                LIST_6("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
                "ACE_SpareBarrel",
            };

            binoculars = "Binocular";

        };

        class B_soldier_M_F {
            vest = "CUP_V_B_Eagle_SPC_DMR";
            backpack = "CFP_AssaultPack_Marpat";

            primaryWeapon = "CUP_srifle_M14_DMR";
            primaryWeaponMagazine = "ACE_20Rnd_762x51_Mag_Tracer";
            primaryWeaponOptics = "CUP_optic_LeupoldMk4";
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";
            primaryWeaponPointer = "";

            handgunWeapon = "CUP_hgun_Colt1911";
            handgunWeaponMagazine = "CUP_7Rnd_45ACP_1911";

            addItemsToVest[] += {
                LIST_7("ACE_20Rnd_762x51_Mag_Tracer"),
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                LIST_8("ACE_20Rnd_762x51_M118LR_Mag"),
                LIST_2("CUP_7Rnd_45ACP_1911"),
            };
            binoculars = "Binocular";
        };

        class B_W_RadioOperator_F: B_Soldier_F {
            vests = "CUP_V_B_Eagle_SPC_RTO";
            backpack = "CUP_B_Kombat_Radio_Olive";

            addItemsToVest[] += {
                "ACRE_PRC152",
            };

            addItemsToBackpack[] = {
                LIST_2("ACRE_PRC117F"),
                "ace_flags_blue",
                "ace_flags_yellow",
            };
        };

        //Crew
        class B_crew_F {

            class Rank {

                class Private {
                    uniform[] = {
                        //FROG MARPAT
                        "CUP_U_B_USMC_FROG1_WMARPAT",
                        "CUP_U_B_USMC_FROG2_WMARPAT",
                        "CUP_U_B_USMC_FROG3_WMARPAT",
                        "CUP_U_B_USMC_FROG4_WMARPAT",
                    };

                    vest = "CUP_V_B_Eagle_SPC_Crew";

                    primaryWeapon = "";

                    handgunWeapon = "CUP_hgun_Colt1911";
                    handgunWeaponMagazine = "CUP_7Rnd_45ACP_1911";

                    addItemsToVest[] += {
                        LIST_2("CUP_7Rnd_45ACP_1911"),
                    };
                };

                class Corporal: Private {

                };

                class Sergeant: Corporal {
                    addItemsToVest[] += {
                            "ACRE_PRC152"
                        };
                    binoculars = "Binocular";
                };

                class Lieutenant: Sergeant {

                };
            };
        };

        //Führung
        class B_Soldier_TL_F {
            vest = "CUP_V_B_Eagle_SPC_TL";
            backpack = "CFP_AssaultPack_Marpat";
            headgear[] = {
                "CUP_H_LWHv2_MARPAT_comms",
                "CUP_H_LWHv2_MARPAT_NVG_gog_cov2",
                "CUP_H_LWHv2_MARPAT_comms_cov_fr",
            };

            primaryWeapon = "CUP_arifle_M16A4_GL";
            primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag_Tracer_Red";

            addItemsToVest[] += {
                LIST_6("CUP_30Rnd_556x45_Stanag_Tracer_Red");
                "ACRE_PRC148",
            };

            addItemsToBackpack[] = {
                LIST_15("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_HEDP_M203"),
                LIST_5("CUP_1Rnd_SmokeRed_M203"),
                LIST_5("CUP_1Rnd_Smoke_M203"),
                "ACE_spraypaintRed",
                "ACE_spraypaintGreen",
            };

            binoculars = "Binocular";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            vest = "CUP_V_B_Eagle_SPC_SL";

            primaryWeapon = "CUP_arifle_M16A4_Grip";

            addItemsToVest[] += {
                "ACRE_PRC152",
                "ace_flags_red",
            };

            addItemsToBackpack[] = {
                "ACE_spraypaintRed",
                "ACE_spraypaintGreen",
                "ACE_SpraypaintBlack",
                LIST_3("SmokeShellGreen"),
                LIST_3("SmokeShellOrange"),
                LIST_3("ace_flags_purple"),
            };
        };

        class B_officer_F: B_Soldier_SL_F {
            handgunWeapon = "CUP_hgun_Colt1911";
            handgunWeaponMagazine = "CUP_7Rnd_45ACP_1911";

            vest = "CUP_V_B_Eagle_SPC_Officer";

            addItemsToBackpack[] += {
                LIST_3("SmokeShellBlue"),
            };
        };


        class B_soldier_exp_F: B_Soldier_F {
            uniform[] = {
                //FROG MARPAT
                "CUP_U_B_USMC_FROG1_WMARPAT",
                "CUP_U_B_USMC_FROG2_WMARPAT",
                "CUP_U_B_USMC_FROG3_WMARPAT",
                "CUP_U_B_USMC_FROG4_WMARPAT",
            };
            backpack = "CUP_B_USMC_MOLLE";

            handgunWeapon = "ACE_VMH3";

            addItemsToVest[] += {
                "ACE_DefusalKit",
                "ACE_Clacker",
                LIST_4("ACE_M84"),
            };

            addItemsToBackpack[] = {
                LIST_3("DemoCharge_Remote_Mag"),
                "SatchelCharge_Remote_Mag",
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
                "ACE_wirecutter",
                "ACE_EntrenchingTool",
                "mts_cutter_folding_saw",
                LIST_3("CUP_1Rnd_12Gauge_Pellets_No00_Buck"),
            };

            class Rank {
                class SERGEANT {
                    vest = "CUP_V_B_Eagle_SPC_SL";

                    headgear[] = {
                        "CUP_H_LWHv2_MARPAT_comms",
                        "CUP_H_LWHv2_MARPAT_NVG_gog_cov2",
                        "CUP_H_LWHv2_MARPAT_comms_cov_fr",
                    };
                    addItemsToVest[] += {
                        "ACE_M26_Clacker",
                        "ACRE_PRC152",
                    };

                    addItemsToBackpack[] += {
                        "ACE_SpraypaintRed",
                        "ACE_SpraypaintGreen",
                    };
                    binoculars = "Binocular";
                };
            };
        };


        //Medics
        class B_medic_F {

            class Rank {

                class PRIVATE {
                    vest = "CUP_V_B_Eagle_SPC_Corpsman";
                    backpack = "CUP_B_Raid_bag_SSO_Ataka_2_Rug_Swamp";

                    addItemsToVest[] = {
                            LIST_3("CUP_30Rnd_556x45_Stanag_Tracer_Red"),
                            "ACE_SurgicalKit",
                        };

                    addItemsToBackpack[] = {
                            LIST_30("ACE_Suture"),
                            LIST_16("ACE_Tourniquet"),
                            LIST_30("ACE_packingBandage"),
                            LIST_30("ACE_elasticBandage"),
                            LIST_30("ACE_elasticBandage"),
                            LIST_20("ACE_quikclot"),

                            LIST_16("ACE_Epinephrine"),
                            LIST_8("ACE_Painkillers"),
                            LIST_8("ACE_morphine"),

                            LIST_8("ACE_SalineIV"),
                            LIST_4("ACE_salineIV_500"),
                            LIST_4("ACE_SalineIV_250"),

                            "ACE_Bodybag",
                    };
                };

                class CORPORAL: PRIVATE {
                    headgear[] = {
                        "CUP_H_LWHv2_MARPAT_comms",
                        "CUP_H_LWHv2_MARPAT_NVG_gog_cov2",
                        "CUP_H_LWHv2_MARPAT_comms_cov_fr",
                    };

                    addItemsToVest[] += {
                        "ACE_SpraypaintBlue",
                        "ace_flags_blue",
                        "ACRE_PRC152",
                    };
                };

                class SERGEANT: CORPORAL {
                    addItemsToBackpack[] = {
                            LIST_30("ACE_Suture"),
                            LIST_12("ACE_Tourniquet"),
                            LIST_30("ACE_packingBandage"),
                            LIST_30("ACE_elasticBandage"),
                            LIST_20("ACE_quikclot"),

                            LIST_10("ACE_Epinephrine"),
                            LIST_6("ACE_Painkillers"),
                            LIST_6("ACE_morphine"),

                            LIST_6("ACE_SalineIV"),
                            LIST_3("ACE_salineIV_500"),
                            LIST_3("ACE_SalineIV_250"),

                            "ACE_Bodybag",
                            "ACRE_PRC117F"
                    };
                };
            };
        };

        class B_soldier_repair_F: B_Soldier_F {
            uniform[] = {
                //FROG MARPAT
                "CUP_U_B_USMC_FROG1_WMARPAT",
                "CUP_U_B_USMC_FROG2_WMARPAT",
                "CUP_U_B_USMC_FROG3_WMARPAT",
                "CUP_U_B_USMC_FROG4_WMARPAT",
            };
            addItemsToVest[] = {
                LIST_3("CUP_30Rnd_556x45_Stanag"),
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
            };

            class Rank {
                class SERGEANT {
                    vest = "CUP_V_B_Eagle_SPC_SL";

                    headgear[] = {
                        "CUP_H_LWHv2_MARPAT_comms",
                        "CUP_H_LWHv2_MARPAT_NVG_gog_cov2",
                        "CUP_H_LWHv2_MARPAT_comms_cov_fr",
                    };
                    addItemsToVest[] += {
                        "ace_flags_yellow",
                        "ACRE_PRC152",
                    };
                    binoculars = "Binocular";
                };
            };
        };

        class B_Helipilot_F {
            uniform = "U_B_HeliPilotCoveralls";
            vest = "FIR_pilot_vest";
            backpack = "B_AssaultPack_blk";

            headgear = "ttt_Helmet_Buzzard";


            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";

            handgunWeapon = "CUP_hgun_Colt1911";
            handgunWeaponMagazine = "CUP_7Rnd_45ACP_1911";

            addItemsToVest[] += {
                LIST_2("CUP_7Rnd_45ACP_1911"),
                LIST_2("SmokeShellPurple"),
                LIST_2("ACE_HandFlare_Green"),
                "ACRE_PRC152",
                "ACE_Microdagr",
            };

            addItemsToBackpack[] += {
                "ACRE_PRC117F"
            };
        };
    };
};
