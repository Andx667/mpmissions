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
    randomizationMode = 1;
    customGear = 300;
    //
    customGearAllowedCategories[] = {};//STRING

    //USMC2014
    class Side {
        //class BluforPlayers {
        class BluFor {
            uniform[] = {
                "CUP_U_B_AFU_ACU_Gloves_M14",
                "CUP_U_B_AFU_ACU_Kneepad_Gloves_M14",
                "CUP_U_B_AFU_ACU_Kneepad_M14",
                "CUP_U_B_AFU_ACU_Kneepad_Rolled_Gloves_M14",
                "CUP_U_B_AFU_ACU_Kneepad_Rolled_M14",
                "CUP_U_B_AFU_ACU_M14",
                "CUP_U_B_AFU_ACU_Rolled_Gloves_M14",
                "CUP_U_B_AFU_ACU_Rolled_M14",
            };
            vest = "CUP_V_B_IOTV_MM14_Rifleman_USArmy";
            backpack = "CUP_B_AFU_Assault_MM14";
            headgear[] = {
                "CUP_H_AFU_HelmetACH_MM_14",
                "CUP_H_AFU_HelmetACH_ESS_MM_14",
                "CUP_H_AFU_HelmetACH_GCOVERED_MM_14",

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

            primaryWeapon[] = {
                "CUP_arifle_AK74M",
                "CUP_arifle_AK74M_desert",
                "CUP_arifle_AK74M_camo",
                };
            primaryWeaponMagazine = "30Rnd_545x39_Mag_F";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";
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
        //CUP_lmg_PKM_B50_vfg
        //CUP_srifle_SVD
        //CUP_srifle_SVD_des
        //CUP_srifle_SVD_wdl
        //CUP_arifle_RPK74M
        //CUP_arifle_AK74M_GL_desert
        //CUP_arifle_AK74M_GL_camo
        //CUP_arifle_AK74M_GL


        //Rifleman
        class B_Soldier_F {
        };

        class B_soldier_AR_F {
        };

        class B_soldier_AAR_F: B_Soldier_F {
        };

        class B_soldier_AT_F: B_Soldier_F {
        };

        class B_soldier_AAT_F: B_Soldier_F {
        };

        class B_soldier_M_F {
        };

        //Führung
        class B_Soldier_TL_F {
            vest = "";
            backpack = "";
            headgear[] = {
                "CUP_H_AFU_HelmetACH_Headset_MM_14",
                "CUP_H_AFU_HelmetACH_ESS_Headset_MM_14",
                "CUP_H_AFU_HelmetACH_GCOVERED_Headset_MM_14",
            };

            primaryWeapon = "";
            primaryWeaponMagazine = "";

            addItemsToVest[] += {
                LIST_8("");
                "ACRE_PRC148",
            };

            addItemsToBackpack[] = {
                LIST_20(""),
                LIST_5(""),
                LIST_5(""),
                LIST_5(""),
            };

            binoculars = "Binocular";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            vest = "";
            backpack = "";

            primaryWeapon = "";

            addItemsToVest[] += {
                "ACRE_PRC152",
                "ace_flags_red",

            };

            addItemsToBackpack[] = {};
        };

        class B_officer_F: B_Soldier_SL_F {
            handgunWeapon = "";
            handgunWeaponMagazine = "";

            vest = "";
            
        };
        
        //Medics
        class B_medic_F {

            class Rank {

                class Private {
                    vest = "";
                    backpack = "";

                    addItemsToVest[] = {
                            LIST_3(""),
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

                class Corporal: Private {
                    headgear[] = {
                        "CUP_H_AFU_HelmetACH_Headset_MM_14",
                        "CUP_H_AFU_HelmetACH_ESS_Headset_MM_14",
                        "CUP_H_AFU_HelmetACH_GCOVERED_Headset_MM_14",
                    };

                    addItemsToVest[] = {
                        "ACE_SpraypaintBlue",
                        "ace_flags_blue",
                        "ACRE_PR152",
                    };
                };

                class Sergeant: Corporal {

                    addItemsToVest[] = {
        
                    };

                };
            };
        };
    };
};