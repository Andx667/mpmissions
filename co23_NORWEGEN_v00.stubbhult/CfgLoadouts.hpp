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
    customGearAllowedCategories[] = {};

    class Side {    
        class Blufor { //BluforPlayers
            uniform[] = {
                //Regular Uniform
                //"NOR_Combat_Uniform",
                //"NOR_Combat_Uniform_Gloves",
                //"NOR_Combat_Uniform_Gloves_Rolled",
                //"NOR_Combat_Uniform_Rolled",
                //Gorka
                "NOR_Gorka_Uniform",
                "NOR_Gorka_Uniform_Pads",
                //Winter
                //"NOR_Gorka_Winter_Uniform",
                //"NOR_Gorka_Winter_Uniform_Pads",
                //Winter mixed
                //"NOR_Gorka_Mixed_Uniform",
                //"NOR_Gorka_Mixed_Uniform_Pads",
                //"NOR_Gorka_Mixed_Alt_Uniform",
                //"NOR_Gorka_Mixed_Alt_Uniform_Pads",
                //Grey
                //"NOR_Gorka_Grey_Uniform",
                // "NOR_Gorka_Grey_Uniform_Pads",
                };
            vest = "CFP_RAV_operator_OGA_OD";
            backpack = "B_AssaultPack_rgr";
            headgear[] = {
                //Regular
                "NOR_Helmet_Comms",
                "NOR_Helmet_Comms_cov",
                //"NOR_Helmet_Winter_Comms",
                //"NOR_Helmet_Winter_Comms_cov",
                //OPSCORE
                //"NOR_Opscore",
                //"NOR_Opscore_Tan",
                //"NOR_Opscore_Multi",
                //"NOR_Opscore_Winter",
                //SF
                //"NOR_Opscore_SF",
                //"NOR_Opscore_Tan_SF",
                //"NOR_Opscore_Winter_SF",
                };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("CUP_17Rnd_9x19_glock17"),
            };
            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                "ACRE_PRC152",
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                "CUP_arifle_HK416_Black",
                //"CUP_arifle_HK416_Desert",
                "CUP_arifle_HK416_Wood",
                };
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK";
            primaryWeaponOptics = "CUP_optic_CompM4";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                "CUP_hgun_Glock17",
                "CUP_hgun_Glock17_blk",
                "CUP_hgun_Glock17_tan",
                };
            handgunWeaponMagazine = "CUP_17Rnd_9x19_glock17";

            goggles[] = {
                "",
                "CUP_G_Oakleys_Clr",
                "CUP_G_Oakleys_Drk",
                "CUP_G_Oakleys_Embr",
                "CUP_G_PMC_Facewrap_Tan_Glasses_Dark",
                "CUP_G_PMC_Facewrap_Tan_Glasses_Ember",
                //"CUP_G_PMC_Facewrap_Winter_Glasses_Dark",
                //"CUP_G_PMC_Facewrap_Winter_Glasses_Ember",
                "CUP_G_Grn_Scarf_Shades_GPSCombo_Beard",
                "CUP_G_Grn_Scarf_Shades_GPSCombo_Beard_Blonde",
                "CUP_G_Tan_Scarf_Shades_GPSCombo_Beard",
                "CUP_G_Tan_Scarf_Shades_GPSCombo_Beard_Blonde",
                //"CUP_G_White_Scarf_Shades_GPSCombo_Beard",
                //"CUP_G_White_Scarf_Shades_GPSCombo_Beard_Blonde",
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
            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK"),
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon[] = {
                "CUP_arifle_HK416_AGL_Black",
                //"CUP_arifle_HK416_AGL_Desert",
                "CUP_arifle_HK416_AGL_Wood",
                };
            primaryWeaponUnderbarrelMagazine = "CUP_1Rnd_HE_M203";

            addItemsToVest[] += {
                LIST_8("CUP_1Rnd_HE_M203"),
             };

            addItemsToBackpack[] += {
                LIST_12("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_SmokeRed_M203"),
                LIST_5("CUP_1Rnd_Smoke_M203"),
            };
        };

        class B_soldier_exp_F: B_Soldier_GL_F {
            backpack = "NOR_Predator_Backpack";
            addItemsToVest[] += {
                "ACE_DefusalKit",
                "ACE_Clacker",
            };

            addItemsToBackpack[] += {
                LIST_8("CUP_6Rnd_12Gauge_Pellets_No00_Buck"),
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
            };
        };

        //Asst. Autorifleman
        class B_soldier_AAR_F: B_Soldier_F {
        };

        //Autorifleman
        class B_soldier_AR_F {
            vest = "CFP_RAV_MG_OGA_OD";

            primaryWeapon = "CUP_lmg_m249_pip2";
            primaryWeaponMagazine = "CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch";
            primaryWeaponOptics = "CUP_optic_Eotech553_Black";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            addItemsToVest[] += {
                LIST_2("CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch"),
            };
            addItemsToBackpack[] = {
                LIST_2("CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch"),
            };
        };

        class B_soldier_M_F {
            primaryWeapon[] = {
                "CUP_arifle_HK417_20",
                //"CUP_arifle_HK417_20_Desert",
                "CUP_arifle_HK417_20_Wood"
                };
            primaryWeaponMagazine = "CUP_20Rnd_TE1_Red_Tracer_762x51_HK417";
            primaryWeaponOptics[] = {
                "CUP_optic_SB_11_4x20_PM",
                "CUP_optic_SB_11_4x20_PM_tan",
                "CUP_optic_SB_11_4x20_PM_od",
                };

            addItemsToVest[] += {
                LIST_8("CUP_20Rnd_TE1_Red_Tracer_762x51_HK417"),
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                LIST_8("CUP_20Rnd_762x51_HK417"),
            };
            binoculars = "ACE_Yardage450";
        };

        class B_soldier_LAT2_F: B_soldier_M_F {
            secondaryWeapon = "BWA3_RGW90_Loaded";
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {
            backpack = "NOR_Predator_Radio_Backpack";

            addItemsToBackpack[] = {
                LIST_2("ACRE_PRC117F"),
                LIST_8("SmokeShellPurple"),
            };
        };

        //Pilots
        class B_helicrew_F {
            uniform = "NOR_Combat_Uniform_Gloves";
            vest = "FIR_pilot_vest";
            backpack = "";

            primaryWeapon = "CUP_smg_MP7";
            primaryWeaponMagazine = "CUP_20Rnd_46x30_MP7";
            primaryWeaponOptics = "";

            headgear = "H_CrewHelmetHeli_B";

            addItemsToVest[] = {
                LIST_2("SmokeShellPurple"),
                LIST_2("ACE_Chemlight_UltraHiOrange"),
                LIST_2("CUP_20Rnd_46x30_MP7"),
                "ItemAndroid",
            };

            goggles = "";
        };

        class B_Helipilot_F: B_helicrew_F{
            backpack = "NOR_Predator_Radio_Backpack";

            headgear = "H_PilotHelmetHeli_B";

            addItemsToBackpack[] = {
                "ACRE_PRC117F",
            };


        };

        //Führung
        class B_Soldier_TL_F: B_Soldier_GL_F {
            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };

            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
                "ACRE_PRC152",
                "ItemAndroid",
                LIST_8("CUP_1Rnd_HE_M203"),
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red"),
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F {
            backpack = "";

            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red"),
                "ace_flags_red",
                "ACRE_PRC152",
                "ItemAndroid",
            };

            binoculars = "ACE_Vector";
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        //Medics
        class B_medic_F {
            vest = "CUP_V_JPC_medicalbelt_rngr";
            backpack = "NOR_Predator_Backpack";
            
            class Rank {

                class PRIVATE {
                    addItemsToVest[] = {
                        LIST_3("CUP_30Rnd_556x45_Emag"),
                        "ACE_flags_blue",
                        "ACE_SpraypaintBlue",
                        "ACRE_PRC152",
                    };

                    addItemsToBackpack[] = {
                        LIST_30("ACE_Suture"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_10("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        LIST_20("ACE_quikclot"),

                        LIST_16("ACE_Epinephrine"),
                        LIST_8("ACE_Painkillers"),
                        LIST_8("ACE_morphine"),

                        LIST_8("ACE_SalineIV"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_4("ACE_SalineIV_250"),
                        "ACE_SurgicalKit",  
                        "ACE_Bodybag",
                    };
                };

                class CORPORAL: PRIVATE {

                };

                class SERGEANT: CORPORAL {

                };

                class LIEUTENANT: SERGEANT {
                    backpack = "NOR_Predator_Radio_Backpack";

                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                        "ACE_Bodybag",
                        LIST_30("ACE_Suture"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_30("ACE_elasticBandage"),

                        LIST_12("ACE_Epinephrine"),
                        LIST_6("ACE_Painkillers"),
                        LIST_6("ACE_morphine"),

                        LIST_8("ACE_SalineIV"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_4("ACE_SalineIV_250"),
                    };

                };
            };
        };
    };
};