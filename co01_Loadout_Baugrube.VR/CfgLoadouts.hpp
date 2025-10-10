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
        //"uniform",
        //"vest",
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "primaryWeaponPointer",
        "primaryWeaponMuzzle",
        "handgunweapon",
        "goggles",
        "backpack",
        //"headgear"
    };

    class Side {
        class Blufor {
            uniform[] = {
                "ttt_Uniform_green_BW_Flecktarn",
            };
            vest[] = {
                "ttt_Vest_Heavy_green_US_Desert",
            };
            backpack[] = {
                "B_AssaultPack_cbr",
                "B_AssaultPack_rgr",
                "B_AssaultPack_khk",
            };
            headgear[] = {
                "ttt_Beret_green",
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
            };
            addItemsToVest[] = {
                LIST_2("HandGrenade"),
                LIST_2("SmokeShell"),
                "ACRE_PRC148",
            };
            addItemsToBackpack[] = {
                "ACE_NVG_Wide_Black",
            };

            primaryWeapon[] = {
                "CUP_arifle_HK416_Black",
                "CUP_arifle_HK416_Desert",
                "CUP_arifle_HK416_Wood",
            };
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_KF_RMR_black",
                "CUP_optic_Elcan_SpecterDR_KF_RMR_coyote",
                "CUP_optic_Elcan_SpecterDR_KF_RMR_od",
                "CUP_optic_Elcan_SpecterDR_KF_RMR",
                "CUP_optic_HensoldtZO_low_RDS",
                "CUP_optic_HensoldtZO_low_RDS_coyote",
                "CUP_optic_HensoldtZO_low_RDS_desert",
                "CUP_optic_HensoldtZO_low_RDS_od",
                };
            primaryWeaponPointer[] = {
                "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_Black_L",
                "CUP_acc_ANPEQ_15_Flashlight_Tan_L",
                "CUP_acc_ANPEQ_15_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Flashlight_Black_L",
                };
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                "CUP_hgun_Glock17_tan",
                "CUP_hgun_Glock17_blk",
                "CUP_hgun_Glock17",
                };
            handgunWeaponMagazine = "CUP_17Rnd_9x19_glock17";

            goggles[] = {
                "",
                "CUP_G_Tan_Scarf_Shades",
                "CUP_G_Grn_Scarf_Shades",
                "CUP_G_Oakleys_Embr",
                "CUP_G_Oakleys_Drk",
                "CUP_G_Oakleys_Clr",
                "CFP_Neck_Wrap3",
                "CFP_Neck_Wrap2",
                "CFP_Neck_Wrap_Atacs2",
                "CFP_Neck_Wrap_Atacs",
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
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK_RPL";

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK_RPL"),

            };

        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon[] = {
                "CUP_arifle_HK416_AGL_Black",
                "CUP_arifle_HK416_AGL_Desert",
                "CUP_arifle_HK416_AGL_Wood",
                };

            addItemsToBackpack[] += {
                LIST_20("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_Smoke_M203"),
                LIST_5("CUP_1Rnd_SmokeRed_M203"),
            };

        };

        class B_soldier_exp_F: B_Soldier_F {
            goggles[] = {
                "CUP_G_ESS_BLK_Dark",
                "CUP_G_ESS_BLK_Ember",
                "CUP_G_ESS_BLK",
                "CUP_G_ESS_CBR_Dark",
                "CUP_G_ESS_CBR_Ember",
                "CUP_G_ESS_CBR",
                "CUP_G_ESS_RGR_Dark",
                "CUP_G_ESS_RGR_Ember",
                "CUP_G_ESS_RGR",
                "CUP_G_ESS_KHK_Dark",
                "CUP_G_ESS_KHK_Ember",
                "CUP_G_ESS_KHK",
                "CUP_G_ESS_BLK_Scarf_Blk",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_KHK_Scarf_Tan",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "CUP_G_ESS_KHK_Scarf_Face_Tan",
                "CFP_Oakley_Goggles_Blk",
                "CFP_Oakley_Goggles_Choc",
                "CFP_Oakley_Goggles_DTan",
                "CFP_Oakley_Goggles_Grn",
                "CFP_Oakley_Goggles_MCam",
                "CFP_Oakley_Goggles_Olv",
                ""
            };

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_Defusalkit",
                "ACE_wirecutter",
            };

            addItemsToBackpack[] = {
                LIST_3("tsp_breach_block_mag"),
                LIST_2("tsp_breach_package_mag"),
                LIST_2("ACE_M84"),
            };

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "launch_NLAW_F";
        };

        class B_soldier_AT_F: B_Soldier_F {
            secondaryWeapon[] = {
                "launch_MRAWS_green_F",
                "launch_MRAWS_olive_F",
                "launch_MRAWS_sand_F",
                };
            secondaryWeaponOptics = "";
            secondaryWeaponMagazine = "MAA_MAAWS_GMM_HEAT";

            addItemsToBackpack[] = {
                "MAA_MAAWS_GMM_HEAT",
                "MRAWS_HE_F",
            };

        };

        class B_soldier_AAT_F: B_Soldier_F {
            backpack[] = {
                "B_Kitbag_cbr",
                "B_Kitbag_rgr",
                "B_Kitbag_tan",
            };

            addItemsToBackpack[] = {
                LIST_2("MRAWS_HE_F"),
                LIST_2("MAA_MAAWS_GMM_HEAT"),
            };

        };

        class B_Soldier_A_F: B_Soldier_F {
            backpack[] = {
                "B_Kitbag_cbr",
                "B_Kitbag_rgr",
                "B_Kitbag_tan",
            };

            addItemsToBackpack[] = {
                LIST_4("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),
                "ACE_EntrenchingTool",
                "ACE_SpareBarrel",
            };
        };

        class B_soldier_UAV_F: B_Soldier_F {
            backpack[] = {
                "B_Kitbag_cbr",
                "B_Kitbag_rgr",
                "B_Kitbag_tan",
            };

            addItemsToBackpack[] = {
                LIST_6("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed",
            };
        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F {
            primaryWeapon[] = {
                "CUP_arifle_HK417_20",
                "CUP_arifle_HK417_20_Desert",
                "CUP_arifle_HK417_20_Wood",
            };
            primaryWeaponOptics[] = {
                "optic_SOS",
                "optic_SOS_khk_F",
            };

            primaryWeaponUnderbarrel[] = {
                "bipod_01_F_blk",
                "bipod_01_F_mtp",
                "bipod_01_F_snd",
                "bipod_01_F_khk",
                };

            addItemsToVest[] += {
                "ACE_RangeCard",
                LIST_6("CUP_20Rnd_762x51_HK417"),

            };

            addItemsToBackpack[] += {
                LIST_6("ACE_20Rnd_762x51_M118LR_Mag")
            };
        };

        //Autorifleman
        class B_soldier_AR_F {
            primaryWeapon[] = {
                "LMG_03_F",
                };
            primaryWeaponMagazine = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";

            addItemsToVest[] += {
                LIST_2("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),

            };

            addItemsToBackpack[] = {
                LIST_2("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
            };
        };

        //MMG
        class B_HeavyGunner_F {
            primaryWeapon[] = {
                "CUP_lmg_Mk48_wdl",
                "CUP_lmg_Mk48_tan",
                "CUP_lmg_Mk48_od",
                "CUP_lmg_Mk48_des",
                "CUP_lmg_Mk48",
                };
            primaryWeaponOptics[] += {
                "CUP_optic_ACOG_TA648_308_RDS_Black",
                "CUP_optic_ACOG_TA648_308_RDS_coyo",
                "CUP_optic_ACOG_TA648_308_RDS_Desert",
                "CUP_optic_ACOG_TA648_308_RDS_od",
                "CUP_optic_ACOG_TA648_308_RDS_Wdl",
                ""
            };
            primaryWeaponMagazine = "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M";

            addItemsToVest[] += {
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"),

            };

            addItemsToBackpack[] = {
                "ACE_sparebarrel",
                LIST_2("CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M")
            };
        };

        class B_soldier_AA_F: B_Soldier_F {
            secondaryWeapon = "BWA3_Fliegerfaust";
            secondaryWeaponMagazine = "BWA3_Fliegerfaust_Mag";

            addItemsToBackpack[] = {
                "BWA3_Fliegerfaust_Mag"
            };

        };

        class B_soldier_AAA_F: B_Soldier_F {
            backpack[] = {
                "B_Kitbag_cbr",
                "B_Kitbag_rgr",
                "B_Kitbag_tan",
            };

            addItemsToBackpack[] = {
                LIST_2("BWA3_Fliegerfaust_Mag")
            };
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {
            uniform = "ttt_Uniform_Blue_BW_Flecktarn";
            vest = "ttt_Vest_Heavy_Blue_US_Desert";
            headgear = "ttt_Beret_Blue";

            goggles[] += {
                "CUP_G_ESS_BLK_Dark",
                "CUP_G_ESS_BLK_Ember",
                "CUP_G_ESS_BLK",
                "CUP_G_ESS_CBR_Dark",
                "CUP_G_ESS_CBR_Ember",
                "CUP_G_ESS_CBR",
                "CUP_G_ESS_RGR_Dark",
                "CUP_G_ESS_RGR_Ember",
                "CUP_G_ESS_RGR",
                "CUP_G_ESS_KHK_Dark",
                "CUP_G_ESS_KHK_Ember",
                "CUP_G_ESS_KHK",
                "CUP_G_ESS_BLK_Scarf_Blk",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_KHK_Scarf_Tan",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "CUP_G_ESS_KHK_Scarf_Face_Tan",
                "CUP_G_ESS_BLK_Scarf_Face_Blk",
            };

            class Rank {

                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                        "ItemAndroid",
                    };
                };
            };
        };

        class B_soldier_mine_F: B_Soldier_F {
            uniform = "ttt_Uniform_Blue_BW_Flecktarn";
            vest = "ttt_Vest_Heavy_Blue_US_Desert";
            headgear = "ttt_Beret_Blue";

            secondaryWeapon = "ACE_VMH3";

            goggles[] += {
                "CUP_G_ESS_BLK_Dark",
                "CUP_G_ESS_BLK_Ember",
                "CUP_G_ESS_BLK",
                "CUP_G_ESS_CBR_Dark",
                "CUP_G_ESS_CBR_Ember",
                "CUP_G_ESS_CBR",
                "CUP_G_ESS_RGR_Dark",
                "CUP_G_ESS_RGR_Ember",
                "CUP_G_ESS_RGR",
                "CUP_G_ESS_KHK_Dark",
                "CUP_G_ESS_KHK_Ember",
                "CUP_G_ESS_KHK",
                "CUP_G_ESS_BLK_Scarf_Blk",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_KHK_Scarf_Tan",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "CUP_G_ESS_KHK_Scarf_Face_Tan",
            };

            class Rank {

                class PRIVATE {
                    addItemsToVest[] += {
                        "ACE_Clacker",
                        "ACE_Defusalkit",
                    };

                    addItemsToBackpack[] = {
                        LIST_3("DemoCharge_Remote_Mag"),
                        LIST_10("ace_marker_flags_orange"),
                        "ACE_SpraypaintRed",
                    };

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                        "ItemAndroid",
                    };
                };
            };
        };

        //Fahrzeugbesatzung
        class B_crew_F {
            uniform = "ttt_Uniform_Bronze_BW_Flecktarn";
            vest = "ttt_Vest_Crew_Bronze";
            headgear = "ttt_Beret_Bronze";

            primaryWeapon[] = {
                "SMG_03C_black",
                "SMG_03C_khaki",
            };
            primaryWeaponMagazine = "50Rnd_570x28_SMG_03";
            primaryWeaponPointer = "";
            primaryWeaponOptics = "";

            addItemsToVest[] += {
                LIST_2("50Rnd_570x28_SMG_03"),
            };

            addItemsToBackpack[] += {
                "ttt_Helmet_Bronze_Vehiclecrew",
            };

            goggles[] = {
                "CUP_G_ESS_BLK",
                "CUP_G_ESS_CBR",
                "CUP_G_ESS_RGR",
                "CUP_G_ESS_KHK",
                ""

            };

            class Rank {
                class PRIVATE {

                };
                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                        "ItemAndroid",
                    };
                };
                class LIEUTENANT: SERGEANT {
                    backpack = "ttt_backpack_radio_bronze_us_desert";
                };
            };
        };

        class B_sniper_F {
            primaryWeapon[] =  {
                "BWA3_G29",
            };
            primaryWeaponOptics[] = {
                "BWA3_optic_M5Xi_Tremor3_MicroT2",
                "BWA3_optic_M5Xi_MSR_MicroT2",
            };
            primaryWeaponUnderbarrel = "BWA3_bipod_Atlas";

            uniform[] = {
                "U_B_FullGhillie_ard",
                "U_B_FullGhillie_lsh",
                "U_B_FullGhillie_sard",
                "U_B_T_FullGhillie_tna_F",
            };

            addItemsToVest[] += {
                "ACRE_PRC152",
                "ItemAndroid",
            };
        };

        class B_spotter_F: B_soldier_M_F {
            uniform[] = {
                "U_B_FullGhillie_ard",
                "U_B_FullGhillie_lsh",
                "U_B_FullGhillie_sard",
                "U_B_T_FullGhillie_tna_F",
            };
        };

        //Mörser
        class B_support_AMort_F: B_Soldier_F {
            uniform = "ttt_Uniform_Orange_BW_Flecktarn";
            vest = "ttt_Vest_Lite_Orange_US_Desert";
            headgear = "ttt_Beret_Orange";
        };

        class B_support_Mort_F: B_support_AMort_F {
            class Rank {
                class PRIVATE {
                    addItemsToBackpack[] = {
                        "ACE_PlottingBoard",
                    };
                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
                    backpack = "ttt_backpack_radio_coyote";

                    addItemsToUniform[] += {
                        "ACE_microdagr",
                    };

                    addItemsToVest[] += {
                        "ItemAndroid",
                    };

                    addItemsToBackpack[] += {
                        "ACRE_PRC117F"
                    };
                };
            };
        };

        //Pilots
        class B_helicrew_F {
            uniform = "ttt_Uniform_Silver_BW_Flecktarn";
            vest = "FIR_pilot_vest";
            headgear[] = {
                "ttt_Beret_Silver",
                "ttt_Helmet_Buzzard",
                "ttt_Helmet_Eagle",
                "ttt_Helmet_Falcon",
                "ttt_Helmet_Hawk",
                "H_CrewHelmetHeli_B",
            };

            primaryWeapon = "";
        };

        class B_Helipilot_F: B_helicrew_F{
            headgear[] += {
                "H_PilotHelmetHeli_B",
            };
        };

        //Aufklärer
        class B_Patrol_Soldier_TL_F: B_soldier_M_F {
            uniform = "ttt_Uniform_Gold_BW_Flecktarn";
            vest = "ttt_Vest_Lite_Gold_US_Desert";
            headgear = "ttt_Beret_Gold";

            backpack = "ttt_backpack_radio_coyote";

            primaryWeaponMuzzle[] = {
                "CUP_muzzle_snds_socom762rc",
            };
            primaryWeaponOptics[] += {
                "CUP_optic_SB_3_12x50_PMII",
                "CUP_optic_SB_3_12x50_PMII_Tan",
            };

            addItemsToUniform[] += {
                "ACE_Microdagr",
            };

            addItemsToVest[] += {
                "ItemAndroid",
            };

            binoculars = "ACE_Vector";
        };

        class B_Patrol_Soldier_UAV_F: B_Patrol_Soldier_TL_F {
            backpack[] = {
                "B_Kitbag_cbr",
                "B_Kitbag_rgr",
                "B_Kitbag_tan",
            };

            addItemsToBackpack[] = {
                LIST_6("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed",
            };
        };

        class B_Patrol_Soldier_M_F: B_Patrol_Soldier_TL_F {
            backpack[] = {
                "CFP_Camelbak_Mule_Coy",
                "CFP_Camelbak_Mule_Drab",
                "CFP_Camelbak_Mule_Khki",
                "CFP_Camelbak_Mule_RngrGrn",
            };

        };

        //Führung
        class B_Soldier_TL_F {
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_OD_RPL_Tracer_Red";

            addItemsToUniform[] += {
                "ACE_Microdagr",
            };

            addItemsToVest[]  += {
                "ItemAndroid",
                LIST_8("CUP_30Rnd_556x45_PMAG_OD_RPL_Tracer_Red"),
                LIST_2("ACE_CableTie"),
            };

            addItemsToBackpack[] += {
                "ACE_spraypaintRed",
                "ACE_spraypaintGreen",
                "ACE_spraypaintBlack",
                LIST_5("SmokeShellGreen")
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            addItemsToBackpack[] += {
                "Ace_flags_red",
                LIST_5("SmokeShellYellow"),
            };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class B_W_RadioOperator_F: B_Soldier_F {
            backpack = "ttt_backpack_radio_green_us_desert"

            addItemsToVest[] += {
                "ItemAndroid",
            };

            addItemsToBackpack[] += {
                "ACRE_PRC117F",
                "ACRE_VHF30108SPIKE",
            };

            class Rank {

                class PRIVATE {
                    binoculars = "Binocular";
                };

                class CORPORAL: PRIVATE {
                    addItemsToUniform[] += {
                        "ACE_Microdagr",
                    };

                    binoculars = "ACE_Vector";
                };

                class SERGEANT: CORPORAL {
                   addItemsToUniform[] += {
                        "Laserbatteries",
                    };

                    binoculars = "Laserdesignator_03";

                    addItemsToBackpack[] += {
                        LIST_5("SmokeShellPurple"),
                        LIST_5("SmokeShellOrange"),
                    };

                    goggles[] += {
                        "G_Aviator",
                        "",
                        "CUP_G_Tan_Scarf_Shades",
                        "CUP_G_Grn_Scarf_Shades",
                        "CUP_G_Oakleys_Embr",
                        "CUP_G_Oakleys_Drk",
                        "CUP_G_Oakleys_Clr",
                        "CFP_Neck_Wrap3",
                        "CFP_Neck_Wrap2",
                        "CFP_Neck_Wrap_Atacs2",
                        "CFP_Neck_Wrap_Atacs",
                    };
                };
            };


        };

        //Medics
        class B_medic_F {

            class Rank {

                class PRIVATE {

                };

                class CORPORAL: PRIVATE {
                    uniform = "ttt_Uniform_Brown_BW_Flecktarn";
                    vest = "ttt_Vest_Heavy_Brown_US_Desert";
                    headgear = "ttt_Beret_Brown";

                    addItemsToVest[] = {
                        "ItemAndroid",
                        LIST_3("CUP_30Rnd_556x45_PMAG_BLACK_RPL"),
                    };

                    backpack = "ttt_backpack_medic_rgr_02";
                };

                class SERGEANT: CORPORAL {
                    uniform = "ttt_Uniform_White_BW_Flecktarn";
                    vest = "ttt_Vest_Crew_White";
                    headgear = "ttt_Beret_White";

                    primaryWeapon[] = {
                        "SMG_03C_black",
                        "SMG_03C_khaki",
                    };

                    primaryWeaponMagazine = "50Rnd_570x28_SMG_03";
                    primaryWeaponPointer = "";
                    primaryWeaponOptics = "";

                    addItemsToVest[] = {
                        LIST_2("50Rnd_570x28_SMG_03"),
                        "ItemAndroid",
                    };
                };

                class LIEUTENANT: SERGEANT {
                    backpack = "ttt_backpack_radio_white_us_desert";

                };
            };
        };

        class B_soldier_repair_F {
            uniform = "ttt_Uniform_Silver_BW_Flecktarn";
            vest = "ttt_Vest_Crew_Silver";
            headgear = "ttt_Beret_Silver";

            primaryWeapon[] = {
                "SMG_03C_black",
                "SMG_03C_khaki",
            };

            primaryWeaponMagazine = "50Rnd_570x28_SMG_03";
            primaryWeaponPointer = "";
            primaryWeaponOptics = "";

            addItemsToVest[] += {
                LIST_2("50Rnd_570x28_SMG_03"),
            };

            class Rank {

                class PRIVATE {

                };
                class SERGEANT: PRIVATE {
                    backpack = "ttt_backpack_radio_silver_us_desert";

                };
            };
        };

        //SOF
        class B_recon_F {
            uniform = "ttt_Uniform_Grey_BW_Flecktarn";
            vest = "ttt_Vest_Lite_Grey_US_Desert";
            headgear = "ttt_Beret_Grey";

            backpack[] = {
                "CFP_Camelbak_Mule_Coy",
                "CFP_Camelbak_Mule_Drab",
                "CFP_Camelbak_Mule_Khki",
                "CFP_Camelbak_Mule_RngrGrn",
            };

            primaryWeapon[] = {
                "CUP_arifle_HK416_CQB_Black",
                "CUP_arifle_HK416_CQB_Desert",
                "CUP_arifle_HK416_CQB_Wood",
            };

            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK_RPL";

            primaryWeaponMuzzle[] += {
                "CUP_muzzle_snds_M16",
                "CUP_muzzle_snds_M16_coyote",
                "CUP_muzzle_snds_M16_desert",
                "CUP_muzzle_snds_M16_camo",
            };

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK_RPL"),
                LIST_2("ACE_M84"),
                LIST_2("ACE_CableTie"),
                "SmokeShellGreen",
            };

            goggles[] += {
                "CUP_G_PMC_Facewrap_Tropical_Glasses_Ember",
                "CUP_G_PMC_Facewrap_Tropical_Glasses_Dark",
                "CUP_G_PMC_Facewrap_Tan_Glasses_Ember",
                "CUP_G_PMC_Facewrap_Tan_Glasses_Dark",
                "CUP_G_PMC_Facewrap_Black_Glasses_Ember",
                "CUP_G_PMC_Facewrap_Black_Glasses_Dark",
            };
        };

        class B_recon_LAT_F: B_recon_F {
            secondaryWeapon = "BWA3_RGW90_Loaded";
            binoculars = "ACE_MX2A";
        };

        class B_recon_medic_F: B_recon_F {
            backpack[] = {
                "ttt_backpack_medic_rgr_02",
                "ttt_backpack_medic_tan_02"
            };

            class Rank {
                class CORPORAL {

                };

                class SERGEANT: CORPORAL {

                };

                class LIEUTENANT: SERGEANT {

                };
            };
        };

        class B_recon_exp_F: B_recon_F {
            backpack[] = {
                "B_Kitbag_cbr",
                "B_Kitbag_rgr",
                "B_Kitbag_tan",
            };

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_Defusalkit",
            };

            addItemsToBackpack[] = {
                "ACE_entrenchingTool",
                "ACE_Wirecutter",
                LIST_3("DemoCharge_Remote_Mag"),
                "SatchelCharge_Remote_Mag",
                LIST_3("tsp_breach_block_mag"),
            };

            goggles[] += {
                "CUP_G_ESS_BLK_Facewrap_Black",
                "CUP_G_ESS_RGR_Facewrap_Ranger",
                "CUP_G_ESS_RGR_Facewrap_Skull",
                "CUP_G_ESS_KHK_Facewrap_Tan",
                "CUP_G_ESS_RGR_Facewrap_Tropical",
                "CUP_G_ESS_BLK_Scarf_Face_Blk",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "CUP_G_ESS_KHK_Scarf_Face_Tan",
                ""
            };
        };

        class B_recon_JTAC_F: B_recon_F {
            backpack = "ttt_backpack_radio_grey_us_desert";

            addItemsToUniform[] += {
                "Laserbatteries",
            };

            addItemsToVest[] += {
                "itc_land_tablet_rover",
            };

            addItemsToBackpack[] = {
                "ACRE_PRC117F",
                LIST_6("SmokeShellPurple"),
                LIST_6("SmokeShellOrange"),
            };

            binoculars = "Laserdesignator_03";
        };

        class B_recon_TL_F: B_recon_JTAC_F {
            binoculars = "ACE_Vector";

            addItemsToBackpack[] += {
                "ACRE_VHF30108SPIKE",
            };
        };

        class B_recon_M_F: B_recon_F {
            primaryWeapon[] = {
                "CUP_arifle_HK417_20",
                "CUP_arifle_HK417_20_Desert",
                "CUP_arifle_HK417_20_Wood",
            };
            primaryWeaponMagazine = "CUP_20Rnd_TE1_Red_Tracer_762x51_HK417";
            primaryWeaponOptics[] = {
                "optic_SOS",
                "optic_SOS_khk_F",
            };
            primaryWeaponUnderbarrel[] = {
                "bipod_01_F_blk",
                "bipod_01_F_mtp",
                "bipod_01_F_snd",
                "bipod_01_F_khk",
            };
            primaryWeaponMuzzle[] = {
                "CUP_muzzle_snds_socom762rc",
            };
            addItemsToVest[] = {
                "ACE_RangeCard",
                LIST_6("CUP_20Rnd_TE1_Red_Tracer_762x51_HK417"),
                LIST_2("ACE_M84"),
                LIST_2("ACE_CableTie"),
                "SmokeShellGreen",
            };

            addItemsToBackpack[] += {
                LIST_6("ACE_20Rnd_762x51_M118LR_Mag")
            };
            binoculars = "ACE_Vector";
        };
    };
};
