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
    handleRadios = 1;
    resetLoadout = 1;
    randomizationMode = 3;
    customGear = 300;
    customGearAllowedCategories[] = {};//STRING

    class Side {
        class BluFor {
            uniform[] = {
                //Digital
                //"UK3CB_GAF_B_U_CombatSmock_01_DIGI", //no Flag
                "UK3CB_GAF_B_U_CombatSmock_02_DIGI",
                //"UK3CB_GAF_B_U_CombatSmock_03_DIGI", //no Flag
                "UK3CB_GAF_B_U_CombatSmock_04_DIGI",
                //Multicam 1
                //"UK3CB_GAF_B_U_SF_CombatSmock_01_MULTICAM", //no Flag
                //"UK3CB_GAF_B_U_SF_CombatSmock_01_MULTICAM_OLIVE", //no Flag
                //"UK3CB_GAF_B_U_SF_CombatSmock_01_MULTICAM_TAN", //no Flag
                "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM",
                "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_03_MULTICAM_TAN",
                //"UK3CB_GAF_B_U_SF_CombatSmock_05_MULTICAM", //no Flag
                //"UK3CB_GAF_B_U_SF_CombatSmock_05_MULTICAM_TAN", //no Flag
                //"UK3CB_GAF_B_U_SF_CombatSmock_05_MULTICAM_OLIVE", //no Flag
                "UK3CB_GAF_B_U_SF_CombatSmock_07_MULTICAM",
                "UK3CB_GAF_B_U_SF_CombatSmock_07_MULTICAM_TAN",
                "UK3CB_GAF_B_U_SF_CombatSmock_07_MULTICAM_OLIVE",
                //Multicam 2
                //"UK3CB_GAF_B_U_SF_CombatSmock_02_MULTICAM", //no Flag
                //"UK3CB_GAF_B_U_SF_CombatSmock_02_MULTICAM_OLIVE",//no Flag
                //"UK3CB_GAF_B_U_SF_CombatSmock_02_MULTICAM_TAN", //no Flag
                "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM", 
                "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_04_MULTICAM_TAN",
                //"UK3CB_GAF_B_U_SF_CombatSmock_06_MULTICAM", //no Flag
                //"UK3CB_GAF_B_U_SF_CombatSmock_06_MULTICAM_TAN", //no Flag
                //"UK3CB_GAF_B_U_SF_CombatSmock_06_MULTICAM_OLIVE", //no Flag
                "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM",
                "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM_OLIVE",
                "UK3CB_GAF_B_U_SF_CombatSmock_08_MULTICAM_TAN", 
            };
            vest[] = {
                "UK3CB_GAF_B_MBAV_RIFLEMAN_DIGI",
                "UK3CB_GAF_B_MBAV_RIFLEMAN_DIGI_OLI",
                };
            backpack[] = {
                "UK3CB_GAF_B_B_ASS_DIGI",
                //"UK3CB_GAF_B_B_ASS_MULTICAM_02",
                //"UK3CB_GAF_B_B_ASS_MULTICAM_01",

            };
            headgear[] = {
                // Standard
                "UK3CB_GAF_B_H_6b27m_DIGI",
                "UK3CB_GAF_B_H_6b27m_ESS_DIGI",
                "UK3CB_GAF_B_H_6b27m_GRN",
                "UK3CB_GAF_B_H_6b27m_ESS_GRN",
                //"UK3CB_GAF_B_H_6b27m_DIGI_NOFLAG",
                //"UK3CB_GAF_B_H_6b27m_ESS_DIGI_NOFLAG",
                // SOF
                //"UK3CB_GAF_B_H_Opscore_Mar_OLI_01",
                //"UK3CB_GAF_B_H_Opscore_Mar_OLI_02",
                //"UK3CB_GAF_B_H_Opscore_Mar_TAN_01",
                //"UK3CB_GAF_B_H_Opscore_Mar_TAN_02",
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
                "ACRE_PRC148",
                LIST_2("rhs_mag_m67"),
                LIST_2("rhs_mag_an_m8hc"),
                "rhs_mag_m18_green",
            };
            addItemsToBackpack[] = {};

            primaryWeapon = "rhs_weap_vhsd2";
            primaryWeaponMagazine = "rhsgref_30rnd_556x45_vhs2";
            primaryWeaponOptics = "rhsusf_acc_eotech_552";
            primaryWeaponUnderbarrel = "rhsusf_acc_grip2";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon = "UK3CB_CZ75";
            handgunWeaponMagazine = "UK3CB_CZ75_9_20Rnd";

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
        //Rifleman
        class B_Soldier_F {
            addItemsToVest[] += {
                LIST_8("rhsgref_30rnd_556x45_vhs2"),
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            vest[] = {
                "UK3CB_GAF_B_MBAV_GRENADIER_DIGI_OLI",
                "UK3CB_GAF_B_MBAV_GRENADIER_DIGI",
            };
            primaryWeapon = "rhs_weap_vhsd2_bg";

            addItemsToVest[] += {
                LIST_6("rhs_mag_M441_HE"),
            };

            addItemsToBackpack[] += {
                LIST_14("rhs_mag_M441_HE"),
                LIST_5("rhs_mag_m713_Red"),
                LIST_5("rhs_mag_m714_White"),
            };
        };

        //Asst. Autorifleman
        class B_soldier_AAR_F: B_Soldier_F {
        };

        //Autorifleman
        class B_soldier_AR_F {
            vest[] = {
                //"UK3CB_GAF_B_MBAV_MG_BLK_01",
                //"UK3CB_GAF_B_MBAV_MG_BLK_02",
                "UK3CB_GAF_B_MBAV_MG_DIGI_OLI_01",
                "UK3CB_GAF_B_MBAV_MG_DIGI_OLI_02",
                "UK3CB_GAF_B_MBAV_MG_DIGI_OLI_03",
                "UK3CB_GAF_B_MBAV_MG_DIGI_01",
                "UK3CB_GAF_B_MBAV_MG_DIGI_02",
                "UK3CB_GAF_B_MBAV_MG_DIGI_03",
                "UK3CB_GAF_B_MBAV_MG_OLI_01",
                "UK3CB_GAF_B_MBAV_MG_OLI_02",
                //"UK3CB_GAF_B_MBAV_MG_TAN_01",
                //"UK3CB_GAF_B_MBAV_MG_TAN_02",
            };

            primaryWeapon = "rhs_weap_minimi_para_railed";
            primaryWeaponMagazine = "rhsusf_200Rnd_556x45_mixed_soft_pouch";

            addItemsToVest[] += {
                LIST_2("rhsusf_200Rnd_556x45_mixed_soft_pouch"),
            };
            addItemsToBackpack[] = {
                LIST_2("rhsusf_200Rnd_556x45_mixed_soft_pouch"),
                "ACE_Sparebarrel",
            };
        };
        class B_soldier_M_F {
            primaryWeapon = "arifle_SPAR_03_khk_F";
            primaryWeaponMagazine = "ACE_20Rnd_762x51_M118LR_Mag";
            primaryWeaponOptics = "optic_SOS_khk_F";
            primaryWeaponUnderbarrel = "bipod_01_F_khk";
            primaryWeaponMuzzle = "rhsgref_sdn6_suppressor";

            addItemsToVest[] += {
                LIST_7("ACE_20Rnd_762x51_M118LR_Mag"),
                "ACE_Rangecard"
            };
            addItemsToBackpack[] = {
                LIST_8("ACE_20Rnd_762x51_Mag_Tracer"),
                LIST_3("rhsgref_30rnd_556x45_vhs2")
            };
        };

    };
};