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
    //customGear = 300;
    customGear = "(_this select 0) distance2D (getMarkerPos 'armory') < 10";
    customGearAllowedCategories[] = {
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponPointer",
        "primaryWeaponUnderbarrel",
        "headgear"
    };

    class Allplayable { //class Allplayable
            uniform = "BWA3_Uniform_Crye_G3_Fleck";
            vest = "BWA3_Vest_Rifleman_Fleck";
            backpack = "";

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                "ACRE_SEM52SL",
                LIST_2("BWA3_15Rnd_9x19_P8"),
                LIST_4("ACE_Chemlight_IR"),
                "ACE_IR_Strobe_Item",
                };
            addItemsToVest[] = {
                LIST_2("BWA3_DM25"),
                LIST_2("BWA3_DM51A1"),
                LIST_2("ACE_M84"),
                
                };
            addItemsToBackpack[] = {

                };

            primaryWeapon[] = {""};
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle[] = {"" };
            primaryWeaponOptics[] = {""};
            primaryWeaponPointer[] = {""};
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            secondaryWeaponMuzzle = "";
            secondaryWeaponOptics = "";
            secondaryWeaponPointer = "";
            secondaryWeaponUnderbarrel = "";

            handgunWeapon[] ={
                "BWA3_P8",
                };
            handgunWeaponMagazine = "BWA3_15Rnd_9x19_P8";
            handgunWeaponMuzzle = "";
            handgunWeaponOptics = "";
            handgunWeaponPointer = "";
            handgunWeaponUnderbarrel = "";

            headgear[] = {"BWA3_OpsCore_FastMT_SOF_Fleck", "BWA3_OpsCore_FastMT_SOF"};
            goggles = "BWA3_G_Combat_clear";
            nvgoggles = "ACE_NVG_Wide_Green";
            binoculars = "Binocular";
            map = "ItemMap";
            gps = "";
            compass = "ItemCompass";
            watch = "ACE_Altimeter";
            radio = "";
        };

    class Type {

        class B_Soldier_F {
          
            primaryWeapon[] = {
                "BWA3_G36KA3",
                "BWA3_G36KA3_green",
                "BWA3_G36KA3_tan",
                };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_AP";
            primaryWeaponMuzzle[] = {
                "",
                };
            primaryWeaponOptics[] = {
                "BWA3_optic_EOTech_sand_Mag_Off",
                "BWA3_optic_EOTech_Mag_Off",
                };
            primaryWeaponPointer[] = {
                "BWA3_acc_LLM01_irlaser_tan",
                "BWA3_acc_LLM01_irlaser_green",
                "BWA3_acc_LLM01_irlaser",
                };
            addItemsToVest[] += {
                LIST_8("BWA3_30Rnd_556x45_G36_AP"),
                LIST_2("ACE_Cabletie"),
            };
        };
        
        class B_soldier_AR_F  {
            vest = "BWA3_Vest_MachineGunner_Fleck";
            backpack = "BWA3_AssaultPack_Fleck";
            primaryWeapon = "BWA3_MG4";
            primaryWeaponMagazine = "BWA3_200Rnd_556x45_Tracer";
            primaryWeaponOptics[] = {
                "BWA3_optic_EOTech_sand_Mag_Off",
                "BWA3_optic_EOTech_Mag_Off",
                };

            addItemsToVest[] += {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
            };
            addItemsToBackpack[] += {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
            };

        };

        class B_soldier_M_F {
            vest = "BWA3_Vest_Marksman_Fleck";
            backpack = "BWA3_AssaultPack_Fleck";
            primaryWeapon = "BWA3_G28";
            primaryWeaponMagazine = "BWA3_20Rnd_762x51_G28_Tracer";
            primaryWeaponOptics[] = {
                "BWA3_optic_PMII_DMR_MicroT1_rear",
                "BWA3_optic_PMII_DMR_MicroT1_front",
                };
            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan"
                };

            addItemsToUniform[] += {
                "ACE_Rangecard",
            };

            addItemsToVest[] += {
                LIST_7("BWA3_20Rnd_762x51_G28_Tracer"),
                
            };
            addItemsToBackpack[] += {
                LIST_8("BWA3_20Rnd_762x51_G28_LR"),
                "BWA3_optic_NSV600",
            };
            binoculars = "ACE_Yardage450";

        };

        class B_Soldier_GL_F: B_Soldier_F {
            vest = "BWA3_Vest_Grenadier_Fleck";
            backpack = "BWA3_AssaultPack_Fleck";
            primaryWeapon[] ={
                "BWA3_G36A3_AG40",
                "BWA3_G36A3_AG40_green",
                "BWA3_G36A3_AG40_tan",
                };
            primaryWeaponUnderbarrelMagazine = "";

            addItemsToVest[] += {
                LIST_8("1Rnd_HE_Grenade_shell"),
            };

            addItemsToBackpack[] += {
                LIST_12("1Rnd_HE_Grenade_shell"),
                LIST_5("1Rnd_Smoke_Grenade_shell"),
                LIST_5("1Rnd_SmokeRed_Grenade_shell"),
            };

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "BWA3_PzF3_Tandem_Loaded";
            addItemsToVest[] += {
                "BWA3_optic_NSA80",
            };
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {
            backpack = "ttt_backpack_radio_olive";

            addItemsToBackpack[] += {
                "ACRE_PRC117F",
                LIST_10("BWA3_DM32_Purple"),
                "itc_land_tablet_fdc",
            };

        };

//Führung
        class B_Soldier_TL_F {
            vest = "BWA3_Vest_Leader_Fleck";
            backpack = "CFP_Cutters";

            primaryWeapon[] = {
                "BWA3_G36KA3",
                "BWA3_G36KA3_green",
                "BWA3_G36KA3_tan",
                };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_Tracer";
            primaryWeaponMuzzle[] = {
                "",
                };
            primaryWeaponOptics[] = {
                "BWA3_optic_EOTech_sand_Mag_Off",
                "BWA3_optic_EOTech_Mag_Off",
                };
            primaryWeaponPointer[] = {
                "BWA3_acc_LLM01_irlaser_tan",
                "BWA3_acc_LLM01_irlaser_green",
                "BWA3_acc_LLM01_irlaser",
                };

            addItemsToUniform[] += {
                "ACE_microdagr"
            };

            addItemsToVest[] = {
                LIST_8("BWA3_30Rnd_556x45_G36_Tracer"),
                "ItemAndroid",
                "ACRE_PRC152",
                };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F:  B_Soldier_TL_F{
            backpack = "";

            addItemsToVest[] += {
                "ACE_flags_red",
            };

        };

        class B_officer_F: B_Soldier_SL_F {
            addItemsToVest[] += {
                "ACRE_PRC152",
                "itc_land_tablet_fdc",
                };
        };
// San
        class B_Medic_F {
            vest = "BWA3_Vest_Medic_Fleck";

            primaryWeapon[] = {
                "BWA3_G36KA3",
                "BWA3_G36KA3_green",
                "BWA3_G36KA3_tan",
                };
            primaryWeaponOptics[] = {
                "BWA3_optic_EOTech_sand_Mag_Off",
                "BWA3_optic_EOTech_Mag_Off",
                };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_AP";
            primaryWeaponMuzzle[] = {
                "",
                };
            primaryWeaponPointer[] = {
                "BWA3_acc_LLM01_irlaser_tan",
                "BWA3_acc_LLM01_irlaser_green",
                "BWA3_acc_LLM01_irlaser",
                };

            addItemsToVest[] += {
                LIST_4("BWA3_30Rnd_556x45_G36_AP"),
                };

            class Rank {

                //Ersthelfer B
                class PRIVATE {
                    backpack = "BWA3_AssaultPack_Fleck_Medic";

                    addItemsToVest[] += {
                        LIST_4("BWA3_30Rnd_556x45_G36_AP"),
                    };

                    addItemsToBackpack[] = {
                        LIST_10("ACE_Tourniquet"),
                        LIST_30("ACE_packingBandage"),
                        LIST_10("ACE_elasticBandage"),
                        LIST_30("ACE_quikclot"),

                        LIST_4("ACE_Painkillers"),

                        LIST_7("ACE_SalineIV"),
                        LIST_3("ACE_salineIV_500"),
                        LIST_3("ACE_SalineIV_250"),
                        };
                    };

                //Zugsani 1
                class CORPORAL: PRIVATE {
                    backpack = "BWA3_Kitbag_Fleck_Medic";
                    primaryWeaponOptics[] = {
                        "BWA3_optic_EOTech552",
                        "BWA3_optic_EOTech552_green",
                        "BWA3_optic_EOTech552_tan",
                        };

                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ace_flags_blue",
                        "ACE_SurgicalKit",
                        "ACRE_PRC152"
                    };

                    addItemsToBackpack[] += {
                        LIST_30("ACE_Suture"),

                        LIST_30("ACE_elasticBandage"),
                        LIST_30("ACE_elasticBandage"),

                        LIST_20("ACE_Epinephrine"),
                        LIST_4("ACE_Painkillers"),
                        LIST_8("ACE_morphine"),

                        LIST_3("ACE_SalineIV"),
                        LIST_3("ACE_salineIV_500"),
                        LIST_3("ACE_SalineIV_250"),
                    };
                  
                };

                //Zugsani 2
                class SERGEANT: CORPORAL {

                };
            };
        };

        //Piloten
        class B_helicrew_F {
            uniform = "BWA3_Uniform_Helipilot";
            vest = "FIR_pilot_vest";
            backpack = "";
            
            primaryWeapon = "";
            handgunWeapon[] ={
                "BWA3_P8",
                };

            addItemsToVest[] = {
                LIST_2("BWA3_15Rnd_9x19_P8"),
                "BWA3_DM32_Yellow",
                "ACE_HandFlare_Yellow",
            };


            headgear = "H_CrewHelmetHeli_B";
        };

        class B_Helipilot_F: B_helicrew_F {
            backpack = "B_AssaultPack_blk";

            addItemsToBackpack[] = {
                "ACRE_PRC117f",

            };
            headgear = "BWA3_TopOwl_nvg";
            nvgoggles = "";

        };
    };
};