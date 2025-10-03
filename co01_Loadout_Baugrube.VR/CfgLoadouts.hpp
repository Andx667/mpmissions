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
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "goggles",
        "headgear"
    };

    class Side {
        class Blufor {
            uniform[] = {
                "ttt_Uniform_green_BW_Flecktarn",
            };
            vest[] = {
                "ttt_Vest_Heavy_green_US_Desert",
            };
            backpack = "B_AssaultPack_rgr";
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

            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                "arifle_MSBS65_black_F",
                "arifle_MSBS65_F",
                "arifle_MSBS65_camo_F",
                "arifle_MSBS65_sand_F",
            };
            primaryWeaponOptics[] = {
                "optic_Arco_arid_F",
                "optic_Arco_blk_F",
                "optic_Arco_lush_F",
                "optic_Arco",
                "optic_MRCO",
                "optic_Hamr",
                "optic_Hamr_khk_F",
                "optic_ERCO_blk_F",
                "optic_ERCO_khk_F",
                "optic_ERCO_snd_F",
                };
            primaryWeaponPointer[] = {
                "ACE_DBAL_A3_Red",
                };
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                "hgun_P07_khk_F",
                "hgun_P07_blk_F",
                "hgun_P07_F",
                };
            handgunWeaponMagazine = "";

            goggles[] = {
                "",
                "BWA3_G_Combat_black",
                "BWA3_G_Combat_clear",
                "BWA3_G_Combat_orange",
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

        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon[] = {
                "arifle_MSBS65_GL_F",
                "arifle_MSBS65_GL_black_F",
                "arifle_MSBS65_GL_camo_F",
                "arifle_MSBS65_GL_sand_F",
                };

        };

        class B_soldier_exp_F: B_Soldier_F {
            primaryWeapon[] = {
                "arifle_MSBS65_UBS_F",
                "arifle_MSBS65_UBS_black_F",
                "arifle_MSBS65_UBS_camo_F",
                "arifle_MSBS65_UBS_sand_F",
            };

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "launch_NLAW_F";
        };

        class B_W_RadioOperator_F: B_Soldier_F {
            backpack = "ttt_backpack_radio_green_us_desert";
            goggles[] += {
                "G_Aviator",
            };

        };
        class B_soldier_AT_F: B_Soldier_F {
            secondaryWeapon[] = {
                "launch_MRAWS_green_F",
                "launch_MRAWS_olive_F",
                "launch_MRAWS_sand_F",
                };
            secondaryWeaponOptics = "";
            secondaryWeaponMagazine = "";

        };

        class B_soldier_AAT_F: B_Soldier_F {

        };

        class B_Soldier_A_F: B_Soldier_F {

        };

        class B_soldier_UAV_F: B_Soldier_F {

        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F {
            primaryWeapon[] = {
                "arifle_MSBS65_Mark_F",
                "arifle_MSBS65_Mark_black_F",
                "arifle_MSBS65_Mark_camo_F",
                "arifle_MSBS65_Mark_sand_F",
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
            };
        };

        //Autorifleman
        class B_soldier_AR_F {
            primaryWeapon[] = {
                "LMG_03_F",
                };
            primaryWeaponMagazine = "";


        };

        //MMG
        class B_HeavyGunner_F {
            primaryWeapon[] = {
                "MMG_02_black_F",
                "MMG_02_camo_F",
                "MMG_02_sand_F",
                };
            primaryWeaponOptics[] += {
                "",
            };

        };

        class B_soldier_AA_F: B_Soldier_F {

        };

        class B_soldier_AAA_F: B_Soldier_F {
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {
            uniform = "ttt_Uniform_Blue_BW_Flecktarn";
            vest = "ttt_Vest_Heavy_Blue_US_Desert";
            headgear = "ttt_Beret_Blue";

            class Rank {

                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {

                };
            };
        };

        class B_soldier_mine_F: B_Soldier_F {
            uniform = "ttt_Uniform_Blue_BW_Flecktarn";
            vest = "ttt_Vest_Heavy_Blue_US_Desert";
            headgear = "ttt_Beret_Blue";

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
            uniform = "ttt_Uniform_Bronze_BW_Flecktarn";
            vest = "ttt_Vest_Crew_Bronze";
            headgear = "ttt_Beret_Bronze";

            primaryWeapon[] = {
                "SMG_03C_black",
                "SMG_03C_camo",
                "SMG_03C_khaki",
            };

            addItemsToBackpack[] += {
                "ttt_Helmet_Bronze_Vehiclecrew",
            };

            class Rank {
                class PRIVATE {

                };
                class SERGEANT: PRIVATE {

                };
                class LIEUTENANT: SERGEANT {
                    backpack = "ttt_backpack_radio_bronze_us_desert";
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
            uniform = "ttt_Uniform_Silver_BW_Flecktarn";
            vest = "ttt_Vest_Crew_Silver";
            headgear = "ttt_Beret_Silver";
        };

        class B_Helipilot_F: B_helicrew_F{

        };

        //Aufklärer
        class B_Patrol_Soldier_TL_F: B_soldier_M_F {
            uniform = "ttt_Uniform_Gold_BW_Flecktarn";
            vest = "ttt_Vest_Lite_Gold_US_Desert";
            headgear = "ttt_Beret_Gold";

            backpack = "ttt_backpack_radio_gold_us_desert";
        };

        class B_Patrol_Soldier_UAV_F: B_Patrol_Soldier_TL_F {

        };

        class B_Patrol_Soldier_M_F: B_Patrol_Soldier_TL_F {

        };

        //Führung
        //TF mit GL
        class B_Soldier_TL_F {

        };

        class B_Soldier_SL_F: B_Soldier_TL_F {

        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class TTT_B_FO_F: B_Soldier_F {

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

                    backpack = "ttt_backpack_medic_rgr_02";
                };

                class SERGEANT: CORPORAL {
                    uniform = "ttt_Uniform_White_BW_Flecktarn";
                    vest = "ttt_Vest_Crew_White";
                    headgear = "ttt_Beret_White";

                    primaryWeapon[] = {
                        "SMG_03C_black",
                        "SMG_03C_camo",
                        "SMG_03C_khaki",
                    };
                };

                class LIEUTENANT: SERGEANT {
                    backpack = "ttt_backpack_radio_white_us_desert";

                };
            };
        };

        class B_soldier_repair_F: B_Soldier_F {
            uniform = "ttt_Uniform_Silver_BW_Flecktarn";
            vest = "ttt_Vest_Crew_Silver";
            headgear = "ttt_Beret_Silver";

            primaryWeapon[] = {
                "SMG_03C_black",
                "SMG_03C_camo",
                "SMG_03C_khaki",
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

            primaryWeapon[] = {
                "arifle_SPAR_01_blk_F",
                "arifle_SPAR_01_khk_F",
                "arifle_SPAR_01_snd_F",
            };

            primaryWeaponMuzzle[] += {
                "muzzle_snds_M",
                "muzzle_snds_m_khk_F",
                "muzzle_snds_m_snd_F",
            };
        };

        class B_recon_LAT_F: B_recon_F {
            secondaryWeapon = "BWA3_RGW90_Loaded";
        };

        class B_recon_medic_F: B_recon_F {
            backpack = "ttt_backpack_medic_rgr_02";

        };

        class B_recon_exp_F: B_recon_F {

        };

        class B_recon_JTAC_F: B_recon_F {
            backpack = "ttt_backpack_radio_grey_us_desert";

        };

        class B_recon_TL_F: B_recon_JTAC_F {

        };

        class B_recon_M_F: B_recon_F {
            primaryWeapon[] = {
                "arifle_SPAR_03_blk_F",
                "arifle_SPAR_03_khk_F",
                "arifle_SPAR_03_snd_F",
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
            primaryWeaponMuzzle[] = {
                "muzzle_snds_B",
                "muzzle_snds_B_khk_F",
                "muzzle_snds_B_snd_F",
                "muzzle_snds_B_arid_F",
                "muzzle_snds_B_lush_F",
            };
            addItemsToVest[] += {
                "ACE_RangeCard",
            };
        };
    };
};
