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
                "ttt_Uniform_Black_BW_Flecktarn",
            };
            vest[] = {
                "ttt_Vest_Heavy_Black_US_Desert",
            };
            backpack = "B_AssaultPack_rgr";
            headgear[] = {
                "ttt_Beret_Black",
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
                "CUP_arifle_ACR_blk_556",
                "CUP_arifle_ACR_snw_556",
                "CUP_arifle_ACR_tan_556",
                "CUP_arifle_ACR_wdl_556",
            };
            primaryWeaponOptics[] = {
                "CUP_optic_HensoldtZO_RDS_od",
                "CUP_optic_HensoldtZO_RDS_hex",
                "CUP_optic_HensoldtZO_RDS_desert",
                "CUP_optic_HensoldtZO_RDS_coyote",
                "CUP_optic_HensoldtZO_RDS",
                };
            primaryWeaponPointer[] = {
                "CUP_acc_ANPEQ_15_Flashlight_Black_L",
                "CUP_acc_ANPEQ_15_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Flashlight_Tan_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_Black_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_OD_L",
                "CUP_acc_ANPEQ_15_Top_Flashlight_Tan_L",
                };
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK_PULL";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                "CUP_hgun_Glock17",
                "CUP_hgun_Glock17_blk",
                "CUP_hgun_Glock17_tan",
                };
            handgunWeaponMagazine = "";

            goggles[] = {
                "",
                "CUP_G_Oakleys_Clr",
                "CUP_G_Oakleys_Drk",
                "CUP_G_Oakleys_Embr",
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
                "CUP_arifle_ACR_EGLM_blk_556",
                "CUP_arifle_ACR_EGLM_snw_556",
                "CUP_arifle_ACR_EGLM_tan_556",
                "CUP_arifle_ACR_EGLM_wdl_556",
                };

        };

        class B_soldier_exp_F: B_Soldier_F {

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "CUP_launch_NLAW";
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {

        };
        class B_soldier_AT_F: B_Soldier_F {
            secondaryWeapon[] = {
                "launch_MRAWS_green_F",
                "launch_MRAWS_olive_F",
                "launch_MRAWS_sand_F",
                };
            secondaryWeaponOptics = "CUP_acc_ANPEQ_15_Black";
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
                "CUP_arifle_ACR_DMR_wdl_556",
                "CUP_arifle_ACR_DMR_tan_556",
                "CUP_arifle_ACR_DMR_snw_556",
                "CUP_arifle_ACR_DMR_blk_556",
            };
            primaryWeaponOptics[] = {
                "CUP_optic_SB_11_4x20_PM_od",
                "CUP_optic_SB_11_4x20_PM_tan",
                "CUP_optic_SB_11_4x20_PM",
            };
            primaryWeaponUnderbarrel = "CUP_bipod_Harris_1A2_L_BLK";

            addItemsToVest[] += {
                "ACE_RangeCard",
            };
        };

        //Autorifleman
        class B_soldier_AR_F {
            primaryWeapon = "CUP_lmg_m249_pip3";
            primaryWeaponMagazine = "";

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
            primaryWeaponOptics[] = {
                "CUP_optic_ACOG_TA648_308_RDS_Wdl",
                "CUP_optic_ACOG_TA648_308_RDS_od",
                "CUP_optic_ACOG_TA648_308_RDS_Desert",
                "CUP_optic_ACOG_TA648_308_RDS_coyo",
                "CUP_optic_ACOG_TA648_308_RDS_Black",
            };

        };

        class B_soldier_AA_F: B_Soldier_F {

        };

        class B_soldier_AAA_F: B_Soldier_F {
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {

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

            class Rank {
                class PRIVATE {

                };
                class SERGEANT: PRIVATE {

                };
                class LIEUTENANT: SERGEANT {
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

        };

        class B_Helipilot_F: B_helicrew_F{

        };

        //Aufklärer
        class B_Patrol_Soldier_TL_F: B_soldier_M_F {

        };

        class B_Patrol_Soldier_UAV_F: B_soldier_M_F {

        };

        class B_Patrol_Soldier_M_F: B_soldier_M_F {

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

                };

                class SERGEANT: CORPORAL {

                };

                class LIEUTENANT: SERGEANT {

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
