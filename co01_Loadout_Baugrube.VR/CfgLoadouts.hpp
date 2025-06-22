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
    customGearAllowedCategories[] = {
        "uniform",
        "vest",
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "primaryWeaponPointer",
        "goggles",
        "headgear"
    };

    class Side {    
        class Blufor {
            uniform[] = {
                "BWA3_Uniform_Fleck",
                "BWA3_Uniform_sleeves_Fleck",
                //"BWA3_Uniform_Multi",
                //"BWA3_Uniform_sleeves_Multi",
                //"BWA3_Uniform_Tropen",
                //"BWA3_Uniform_sleeves_Tropen",
            };
            vest[] = {
                "BWA3_Vest_Rifleman_Fleck"
                //"BWA3_Vest_Rifleman_Tropen"
                //"BWA3_Vest_Rifleman_Multi"
            };
            backpack = "";
            headgear[] = {
                "BWA3_OpsCore_FastMT_Peltor",
                "BWA3_OpsCore_FastMT_Peltor_Fleck",
                //"BWA3_OpsCore_FastMT_Peltor_Multi",
                //"BWA3_OpsCore_FastMT_Peltor_Tropen",
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("BWA3_15Rnd_9x19_P8"),
            };
            addItemsToVest[] = {
                LIST_2("BWA3_DM25"),
                LIST_2("BWA3_DM51A1"),
                "ACRE_SEM52SL",
                "BWA3_DM32_Green",
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                "BWA3_G36A3",
                "BWA3_G36A3_green",
                "BWA3_G36A3_tan"
                };
            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30_MicroT2",
                "BWA3_optic_ZO4x30_MicroT2_brown",
                "BWA3_optic_ZO4x30_RSAS",
                "BWA3_optic_ZO4x30_RSAS_brown",
                };
            primaryWeaponPointer[] = {
                "BWA3_acc_LLM01_irlaser_tan",
                "BWA3_acc_LLM01_irlaser_green",
                "BWA3_acc_LLM01_irlaser_tan"
                };
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_AP";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon = "BWA3_P8";
            handgunWeaponMagazine = "BWA3_15Rnd_9x19_P8";

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
            addItemsToVest[] += {
                LIST_8("BWA3_30Rnd_556x45_G36_AP"),
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            vest[] = {
                "BWA3_Vest_Grenadier_Fleck";
                //"BWA3_Vest_Grenadier_Multi",
                //"BWA3_Vest_Grenadier_Tropen",
            };

            backpack[] = {
                "BWA3_AssaultPack_Fleck",
                //"BWA3_AssaultPack_Multi",
                //"BWA3_AssaultPack_Tropen"
            };

            primaryWeapon[] = {
                "BWA3_G36A3_AG40",
                "BWA3_G36A3_AG40_green",
                "BWA3_G36A3_AG40_tan",
                };
            
            addItemsToVest[] += {
                LIST_8("1Rnd_HE_Grenade_shell"),
            };

            addItemsToBackpack[] += {
                LIST_12("1Rnd_HE_Grenade_shell"),
                LIST_5("1Rnd_Smoke_Grenade_shell"),
                LIST_5("1Rnd_SmokeRed_Grenade_shell"),
                "ACE_EntrenchingTool",
            };                
        };

        class B_soldier_exp_F: B_Soldier_GL_F {
            backpack[] = {
                "BWA3_AssaultPack_Fleck",
                //"BWA3_AssaultPack_Multi",
                //"BWA3_AssaultPack_Tropen"
            }; 
        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "BWA3_PzF3_Tandem_Loaded";
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {
            backpack = "CUP_B_Kombat_Radio_Olive";
 
            addItemsToBackpack[] = {
                "ACRE_PRC117F",
                "ACRE_VHF30108SPIKE",
                LIST_10("BWA3_DM32_Purple"),
                "ACE_EntrenchingTool",
            };            

        };
        class B_soldier_AT_F: B_Soldier_F {

        };

        class B_soldier_AAT_F: B_Soldier_F {

        };

        class B_Soldier_A_F: B_Soldier_F {

        };

        class B_soldier_UAV_F: B_Soldier_F {

        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F {
            vest[] = {
                "BWA3_Vest_Marksman_Fleck",
                //"BWA3_Vest_Marksman_Multi",
                //"BWA3_Vest_Marksman_Tropen",
            };
            backpack[] = {
                "BWA3_AssaultPack_Fleck",
                //"BWA3_AssaultPack_Multi",
                //"BWA3_AssaultPack_Tropen"
            }; 
            primaryWeapon = "BWA3_G28";
            primaryWeaponOptics[] = {
                //"BWA3_optic_PMII_ShortdotCC",
                //"BWA3_optic_PMII_DMR_MicroT1_front",
                "BWA3_optic_PMII_DMR_MicroT1_rear", 
                };
            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan",
            };
            primaryWeaponMagazine = "BWA3_20Rnd_762x51_G28_Tracer";

            addItemsToVest[] += {
                LIST_7("BWA3_20Rnd_762x51_G28_Tracer"),
                "ACE_RangeCard",
            };
            addItemsToBackpack[] = {
                LIST_8("BWA3_20Rnd_762x51_G28_LR"),
            };
            binoculars = "Rangefinder";
        };

        class B_soldier_AR_F {
            vest[] = {
                "BWA3_Vest_MachineGunner_Fleck",
                //"BWA3_Vest_MachineGunner_Multi",
                //"BWA3_Vest_MachineGunner_Tropen",
            };
            backpack[] = {
                "BWA3_AssaultPack_Fleck",
                //"BWA3_AssaultPack_Multi",
                //"BWA3_AssaultPack_Tropen"
            }; 
            primaryWeapon = "BWA3_MG4";
            primaryWeaponMagazine = "BWA3_200Rnd_556x45_Tracer";

            addItemsToVest[] += {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
            };
            addItemsToBackpack[] = {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
                "ACE_EntrenchingTool",
            };

        };

        //MMG
        class B_HeavyGunner_F {

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