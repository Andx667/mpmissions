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
        "goggles",
        //"primaryWeaponOptics",
    };

    class Side {
        class Blufor {
            uniform[] = {
                //Desert
                // "CUP_U_B_CZ_DST_NoKneepads",
                // "CUP_U_B_CZ_DST_Kneepads_Sleeve",
                // "CUP_U_B_CZ_DST_TShirt",
                // "CUP_U_B_CZ_DST_Kneepads", //MOUT
                //Woodland
                "CUP_U_B_CZ_WDL_NoKneepads",
                "CUP_U_B_CZ_WDL_Kneepads_Gloves",
                "CUP_U_B_CZ_WDL_TShirt",
                //"CUP_U_B_CZ_WDL_Kneepads", //MOUT
                };
            vest[] = {
                //Black
                // "CUP_V_CZ_NPP2006_nk_black",
                // "CUP_V_CZ_NPP2006_vz95_black",
                // "CUP_V_CZ_NPP2006_ok_black",
                //Desert
                // "CUP_V_CZ_NPP2006_des",
                // "CUP_V_CZ_NPP2006_nk_des",
                // "CUP_V_CZ_NPP2006_ok_des",
                //Woodland
                "CUP_V_CZ_NPP2006_nk_vz95",
                "CUP_V_CZ_NPP2006_vz95",
                "CUP_V_CZ_NPP2006_ok_vz95",
            };

            backpack[] = {
                "CUP_B_ACRScout_m95",
                };

            headgear[] = {
                //Desert
                // "CUP_H_CZ_Helmet01",
                // "CUP_H_CZ_Helmet02",
                // "CFP_PASGTHelmet_ACRDesert1",
                // "CFP_PASGTHelmet_ACRDesert2",
                //Woodland
                "CUP_H_CZ_Helmet03",
                "CUP_H_CZ_Helmet04",
                "CUP_H_CZ_Helmet07",
                "CUP_H_CZ_Helmet08",
                "CUP_H_CZ_Helmet10",
                "CUP_H_CZ_Helmet09",
                //Special Forces Woodland
                // "CUP_H_CZ_Hat02",
                // "CUP_H_CZ_Hat03",
                // "CUP_H_CZ_Cap_flag",
                // "CUP_H_CZ_Cap_Headphones",
                // "CUP_H_CZ_Cap_rgr",
                //Special Forces Desert
                // "CUP_H_CZ_Booniehat_vz95_des",
                // "CUP_H_CZ_Booniehat_fold_des",
                // "CUP_H_CZ_Cap_khk",
                // "CUP_H_CZ_Cap_Headphones_des",
                // "CUP_H_CZ_Hat04",
                // "CFP_BoonieHat_ACRDesert",
                };

            addItemsToUniform[] = {
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
                "SmokeShellGreen",
            };

            primaryWeapon[] = {
                "CUP_CZ_BREN2_556_11",
                "CUP_CZ_BREN2_556_11_Grn",
                "CUP_CZ_BREN2_556_11_Tan",
                };
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK";
            primaryWeaponOptics[] = {
                "CUP_optic_ZDDot",
                "CUP_optic_AIMM_ZDDOT_BLK",
                };
            primaryWeaponPointer[] = {
                "CUP_acc_Flashlight",
                "CUP_acc_Flashlight_desert",
                "CUP_acc_Flashlight_wdl",
            };
            primaryWeaponMuzzle = "";
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
    };

    class Type {

        class B_Soldier_F {

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK"),
                "ACRE_PRC343",
            };

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "CUP_launch_RPG7V";
            secondaryWeaponMagazine = "CUP_OG7_M";

            addItemsToBackpack[] = {
                LIST_2("CUP_OG7_M"),
                "CUP_PG7VL_M",
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon[] = {
                "CUP_CZ_BREN2_556_14_GL",
                "CUP_CZ_BREN2_556_14_GL_Grn",
                "CUP_CZ_BREN2_556_14_GL_Tan",
            };

            addItemsToVest[] += {
                LIST_8("CUP_1Rnd_HE_M203"),
            };

            addItemsToBackpack[] = {
                LIST_12("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_Smoke_M203"),
                LIST_5("CUP_1Rnd_SmokeRed_M203"),
            };
        };

        class B_soldier_AR_F: B_Soldier_F {
            primaryWeapon = "CUP_lmg_m249_pip3";
            primaryWeaponMagazine = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_black",
                "CUP_optic_Elcan_SpecterDR_coyote",
                "CUP_optic_Elcan_SpecterDR_od",
            };

            addItemsToVest[] += {
                LIST_3("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
            };

            addItemsToBackpack[] = {
                LIST_3("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
            };
        };

        class B_soldier_AT_F: B_Soldier_F {
            backpack = "CFP_RPGPack_Khaki";

            secondaryWeapon = "CUP_launch_RPG7V";
            secondaryWeaponMagazine = "CUP_OG7_M";

            addItemsToBackpack[] = {
                LIST_2("CUP_OG7_M"),
                "CUP_PG7VM_M",
            };
        };

        class B_soldier_AAT_F: B_Soldier_F {
            backpack = "CFP_RPGPack_Khaki";

            addItemsToBackpack[] = {
                LIST_2("CUP_PG7VM_M"),
                "CUP_OG7_M",
            };
        };

        class B_HeavyGunner_F {
            vest = "CUP_V_CZ_vest12";
            backpack = "CUP_B_ACRPara_m95";

            primaryWeapon = "CUP_lmg_PKM_front_rail_B50_vfg";
            primaryWeaponMagazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
            primaryWeaponOptics = "";

            addItemsToVest[] = {
                LIST_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"),
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                "ACRE_PRC343",
            };
            addItemsToBackpack[] = {
                LIST_5("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"),
            };

        };
    };
};