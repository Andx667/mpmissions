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
    baseDelay = 10;
    perPlayerDelay = 1;
    handleRadios = 1;
    resetLoadout = 1;
    randomizationMode = 2;
    customGear = 300;
    //
    customGearAllowedCategories[] = {};

    class AllUnits {
        uniform[] = {
            "CUP_U_B_BAF_MTP_UBACSLONG",
            "CUP_U_B_BAF_MTP_UBACSLONG_Gloves",
            "CUP_U_B_BAF_MTP_UBACSLONGKNEE",
            "CUP_U_B_BAF_MTP_UBACSLONGKNEE_Gloves",

            // "CUP_U_B_BAF_MTP_UBACSROLLED",
            // "CUP_U_B_BAF_MTP_UBACSROLLED_Gloves",
            // "CUP_U_B_BAF_MTP_UBACSROLLEDKNEE",

            // "CUP_U_B_BAF_MTP_UBACSTSHIRT",
            // "CUP_U_B_BAF_MTP_UBACSTSHIRT_Gloves",
            // "CUP_U_B_BAF_MTP_UBACSTSHIRTKNEE",
            };
        vest = "CUP_V_B_BAF_MTP_Osprey_Mk4_Rifleman";
        backpack = "CUP_B_Bergen_BAF";
        headgear[] = {
            "CUP_H_BAF_MTP_Mk6_EMPTY_PRR",
            "CUP_H_BAF_MTP_Mk7_PRR",
            "CUP_H_BAF_MTP_Mk6_GLASS_PRR",
            "CUP_H_BAF_MTP_Mk6_GOGGLES_PRR",
            "CUP_H_BAF_MTP_Mk6_NETTING_PRR",
            };

        addItemsToUniform[] = {
            "ACE_MapTools",
            "ItemMicroDAGR",
            "ACE_Flashlight_XL50",
            "acex_intelitems_notepad",
            "ACE_Painkillers",
            LIST_15("ACE_fieldDressing"),
            LIST_15("ACE_packingBandage"),
            LIST_4("ACE_Tourniquet"),
        };
        addItemsToVest[] = {
            LIST_8("CUP_30Rnd_556x45_Stanag_L85"),
            LIST_2("CUP_HandGrenade_L109A2_HE"),
            LIST_2("SmokeShell"),
            "SmokeShellGreen",
        };
        addItemsToBackpack[] = {
            "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
        };

        primaryWeapon = "CUP_arifle_L85A2_G";
        primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag_L85";
        primaryWeaponOptics[] = {
            "CUP_optic_Elcan_reflex_OD",
            "CUP_optic_Elcan_reflex_coyote",
            "CUP_optic_Elcan_reflex",
            };
        primaryWeaponUnderbarrel = "";
        primaryWeaponUnderbarrelMagazine = "";
        secondaryWeapon = "";
        secondaryWeaponMagazine = "";
        handgunWeapon = "";
        handgunWeaponMagazine = "";

        goggles = "";
        nvgoggles = "";

        binoculars = "Binocular";
        map = "ItemMap";
        compass = "ItemCompass";
        watch = "ItemWatch";
        gps = "";
        radio = "";
    };

    class Type {
        //Rifleman
        class B_Soldier_F {
        };

        class B_soldier_M_F: B_Soldier_F{
            primaryWeapon = "CUP_srifle_L129A1_HG";
            primaryWeaponMagazine = "CUP_20Rnd_762x51_L129_M";
            primaryWeaponOptics[] = {
                "CUP_optic_ACOG_TA648_308_RDS_Black",
                "CUP_optic_ACOG_TA648_308_RDS_coyo",
                "CUP_optic_ACOG_TA648_308_RDS_od",
                "CUP_optic_ACOG_TA648_308_RDS_Desert",
                };
            primaryWeaponUnderbarrel = "";

            handgunWeapon = "CUP_hgun_Glock17_blk";
            handgunWeaponMagazine = "CUP_17Rnd_9x19_glock17";

            addItemsToVest[] = {
                LIST_8("CUP_20Rnd_762x51_L129_M"),
                LIST_2("CUP_HandGrenade_L109A2_HE"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                "ACE_Rangecard",
                LIST_2("CUP_17Rnd_9x19_glock17"),
            };

            addItemsToBackpack[] = {
                LIST_8("CUP_20Rnd_762x51_L129_M"),
                "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M",
            };
        };
    };
};