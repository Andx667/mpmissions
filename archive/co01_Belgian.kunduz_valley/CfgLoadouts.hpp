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
    randomizationMode = 2;
    customGear = 300;
    //customGear = "(_this select 0) distance2D (getMarkerPos 'respawn') < 50";
    customGearAllowedCategories[] = {
        "primaryWeaponOptics",
        "primaryWeapon",
    };

    class Side {
        class Blufor {
            uniform[] = {"CUP_U_CRYE_G3C_MC_V3", "CUP_U_CRYE_G3C_MC_V2"};
            vest = "CUP_V_B_Ciras_MCam";
            backpack = "CFP_AssaultPack_Multicam";

            addItemsToUniform[] = {
                "ACRE_PRC152",
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
            addItemsToBackpack[] = {

                };

            primaryWeapon[] = {
                //"CUP_arifle_Mk16_STD",
                //"CUP_arifle_Mk16_STD_black",
                //"CUP_arifle_Mk16_STD_woodland",

                "CUP_arifle_Mk16_STD_FG",
                "CUP_arifle_Mk16_STD_FG_black",
                "CUP_arifle_Mk16_STD_FG_woodland",

                //"CUP_arifle_Mk16_STD_AFG",
                //"CUP_arifle_Mk16_STD_AFG_black",
                //"CUP_arifle_Mk16_STD_AFG_woodland",

                //"CUP_arifle_Mk16_STD_SFG",
                //"CUP_arifle_Mk16_STD_SFG_black",
                //"CUP_arifle_Mk16_STD_SFG_woodland",
                };
            primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag_Mk16";
            primaryWeaponMuzzle[] = {
                "CUP_muzzle_mfsup_SCAR_L",
                };
            primaryWeaponOptics[] = {
                "CUP_optic_MicroT1",
                };
            primaryWeaponPointer[] = {
                "CUP_acc_ANPEQ_15_Black",
                "CUP_acc_ANPEQ_15_OD",
                "CUP_acc_ANPEQ_15",
                };
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            secondaryWeaponMuzzle = "";
            secondaryWeaponOptics = "";
            secondaryWeaponPointer = "";
            secondaryWeaponUnderbarrel = "";

            handgunWeapon = "";
            handgunWeaponMagazine = "";
            handgunWeaponMuzzle = "";
            handgunWeaponOptics = "";
            handgunWeaponPointer = "";
            handgunWeaponUnderbarrel = "";

            headgear = "CUP_H_OpsCore_Covered_MCAM";
            goggles = "";
            nvgoggles = "";
            binoculars = "Binocular";
            map = "ItemMap";
            gps = "";
            compass = "ItemCompass";
            watch = "ItemWatch";
            radio = "";
        };

    };

    class Type {
        class B_W_Soldier_F {
            addItemsToVest[] = {
                LIST_8("CUP_30Rnd_556x45_Stanag_Mk16"),
                LIST_2("ACE_CableTie"),
                };
        };

        class B_Soldier_GL_F: B_W_Soldier_F {
            primaryWeapon[] = {
                "CUP_arifle_Mk16_STD_EGLM_black",
                "CUP_arifle_Mk16_STD_EGLM",
                "CUP_arifle_Mk16_STD_EGLM_woodland",
                };
            primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag_Mk16";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "CUP_1Rnd_HE_M203";

            addItemsToVest[] += {
                LIST_8("CUP_1Rnd_HE_M203"),
            };
            addItemsToBackpack[] = {
                LIST_8("CUP_1Rnd_HE_M203"),
                LIST_8("CUP_1Rnd_HEDP_M203"),
                LIST_5("1Rnd_Smoke_Grenade_shell"),
                LIST_5("1Rnd_SmokeRed_Grenade_shell"),
            };
        };

        class B_soldier_AR_F: B_W_Soldier_F {
            primaryWeapon[] = {"CUP_lmg_minimi_railed"};
            primaryWeaponMagazine = "CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch";
            primaryWeaponMuzzle[] = {
                "",
                };
            primaryWeaponOptics[] = {
                "CUP_optic_ACOG",
                "CUP_optic_ACOG_Reflex_Wood",
                "CUP_optic_ACOG_Reflex_Desert",
                };

            addItemsToVest[] = {
                LIST_2("ACE_CableTie"),
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                LIST_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch"),
            };

            addItemsToBackpack[] = {
                LIST_2("CUP_200Rnd_TE4_Red_Tracer_556x45_M249_Pouch"),
            };
        };

        class B_soldier_M_F: B_W_Soldier_F {
            primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag_Mk16_Tracer_Red";
            primaryWeaponOptics[] = {
                "CUP_optic_ACOG",
                "CUP_optic_ACOG_Reflex_Wood",
                "CUP_optic_ACOG_Reflex_Desert",
                };

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_Stanag_Mk16_Tracer_Red"),
            };
        };

        class B_W_RadioOperator_F: B_W_Soldier_F {
            backpack = "CUP_B_Kombat_Radio_Olive";

            addItemsToVest[] += {
                "ACRE_PRC152",
            };

            addItemsToBackpack[] = {
                LIST_2("ACRE_PRC117F"),
                LIST_5("SmokeShellPurple"),
                "ace_flags_yellow",
                "ace_flags_blue",
            };
        };


        class B_Soldier_TL_F {
            primaryWeaponOptics[] = {
                "CUP_optic_ACOG",
                "CUP_optic_ACOG_Reflex_Wood",
                "CUP_optic_ACOG_Reflex_Desert",
                };

            addItemsToUniform[] += {
                "ACE_Microdagr",
                };

            addItemsToVest[] = {
                LIST_2("ACE_CableTie"),
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                LIST_8("CUP_30Rnd_556x45_Stanag_Mk16_Tracer_Red"),
                "ItemAndroid",
                "ACRE_PRC152",
                };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            primaryWeaponOptics[] = {
                "CUP_optic_MicroT1",
                };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class B_crew_F: B_W_Soldier_F {
            vest = "CUP_V_B_Ciras_Mcam4";
            headgear = "H_HelmetCrew_B";

            class Rank {

                class PRIVATE {

                };

                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                    };
                };

                class LIEUTENANT: SERGEANT {

                };
            };
        };

        class B_medic_F {
            backpack = "CFP_Carryall_Multicam";

            class Rank {

                class PRIVATE {
                    addItemsToVest[] += {
                        LIST_3("CUP_30Rnd_556x45_Stanag_Mk16"),
                        "ACE_SurgicalKit",
                    };

                    addItemsToBackpack[] = {
                        LIST_30("ACE_Suture"),
                        LIST_30("ACE_Suture"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        LIST_10("ACE_elasticBandage"),
                        LIST_20("ACE_quikclot"),

                        LIST_16("ACE_Epinephrine"),
                        LIST_8("ACE_Painkillers"),
                        LIST_8("ACE_morphine"),

                        LIST_10("ACE_SalineIV"),
                        LIST_5("ACE_salineIV_500"),
                        LIST_5("ACE_SalineIV_250"),

                        "ACE_Bodybag",
                    };
                };

                class COPRORAL: PRIVATE {
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC152",
                        "ace_flags_blue",
                    };
                };

                class SERGEANT: COPRORAL {

                };

                class LIEUTENANT: SERGEANT {

                };
            };
        };
    };
};
