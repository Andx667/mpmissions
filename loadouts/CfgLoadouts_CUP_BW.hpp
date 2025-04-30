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
        "goggles",
        "primaryWeaponOptics"
    };

    class Side {
        class Blufor {
            uniform[] = {
                "BWA3_Uniform2_Fleck",
                "BWA3_Uniform2_sleeves_Fleck",
                };

            vest = "BWA3_Vest_Rifleman_Fleck";

            backpack = "BWA3_AssaultPack_Fleck";

            headgear = "BWA3_OpsCore_FastMT_Peltor_Fleck";

            addItemsToUniform[] = {
                "ACRE_SEM52SL",
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_Painkillers",
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet")
            };
            addItemsToVest[] = {
                LIST_2("BWA3_DM51A1"),
                LIST_2("BWA3_DM25"),
                "BWA3_DM32_Green",
            };

            primaryWeapon[] = {
                "BWA3_G36A3",
                "BWA3_G36A3_green",
                //"BWA3_G36A3_tan",
                };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_AP";
            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30_RSAS",
                "BWA3_optic_ZO4x30_RSAS_brown",
                "BWA3_optic_ZO4x30_MicroT2",
                "BWA3_optic_ZO4x30_MicroT2_brown",
                };
            primaryWeaponPointer[] = {
                "BWA3_acc_VarioRay_irlaser_black",
                "BWA3_acc_VarioRay_irlaser",
            };
            primaryWeaponMuzzle[] = {
            };
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";

            handgunWeapon = "";
            handgunWeaponMagazine = "";

            goggles[] = {
                "BWA3_G_Combat_black",
                "BWA3_G_Combat_clear",
                "BWA3_G_Combat_orange",
                "",
                };
            nvgoggles[] = {
                };

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
                LIST_8("BWA3_30Rnd_556x45_G36_AP"),
            };

            addItemsToBackpack[] = {
                "BWA3_optic_NSV600"
            };

        };

        class B_Soldier_GL_F: B_Soldier_F {
            vest = "BWA3_Vest_Grenadier_Fleck";

            primaryWeapon[] = {
                "BWA3_G36A3_AG40",
                "BWA3_G36A3_AG40_green",
                "BWA3_G36A3_AG40_tan",
            };

            primaryWeaponUnderbarrelMagazine = "1Rnd_HE_Grenade_shell";

            addItemsToBackpack[] += {
                LIST_20("1Rnd_HE_Grenade_shell");
                LIST_5("1Rnd_SmokeRed_Grenade_shell"),
                LIST_5("1Rnd_Smoke_Grenade_shell"),
            };

        };

        class B_soldier_AR_F: B_Soldier_F {
            vest = "BWA3_Vest_MachineGunner_Fleck";

            primaryWeapon = "BWA3_MG4";
            primaryWeaponMagazine = "BWA3_200Rnd_556x45_Tracer";

            handgunWeapon = "BWA3_P8";
            handgunWeaponMagazine = "BWA3_15Rnd_9x19_P8";

            addItemsToVest[] = {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
                LIST_2("BWA3_15Rnd_9x19_P8"),
                LIST_2("BWA3_DM51A1"),
                LIST_2("BWA3_DM25"),
                "BWA3_DM32_Green",
            };

            addItemsToBackpack[] = {
                LIST_2("BWA3_200Rnd_556x45_Tracer"),
            };
        };



        class B_soldier_M_F: B_Soldier_F {
            vest = "BWA3_Vest_Marksman_Fleck";

            primaryWeapon = "BWA3_G28";
            primaryWeaponMagazine = "BWA3_20Rnd_762x51_G28_Tracer";
            primaryWeaponOptics[] = {
                "BWA3_optic_PMII_DMR_MicroT1_front",
                "BWA3_optic_PMII_DMR_MicroT1_rear",
                };
            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan",
                };

            handgunWeapon = "BWA3_P8";
            handgunWeaponMagazine = "BWA3_15Rnd_9x19_P8";

            addItemsToVest[] = {
                LIST_6("BWA3_20Rnd_762x51_G28_Tracer"),
                LIST_2("BWA3_15Rnd_9x19_P8"),
                LIST_2("BWA3_DM51A1"),
                LIST_2("BWA3_DM25"),
                "BWA3_DM32_Green",
                "ACE_Rangecard",
            };

            addItemsToBackpack[] = {
                LIST_6("BWA3_20Rnd_762x51_G28_LR"),
            };

            binoculars = "ACE_Yardage450";

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "BWA3_PzF3_Tandem_Loaded";

            addItemsToBackpack[] += {
                "BWA3_optic_NSA80"
            };

        };

        class B_HeavyGunner_F: B_Soldier_F {
            vest = "BWA3_Vest_MachineGunner_Fleck"; 

            primaryWeapon[] = {
                "BWA3_MG5",
                "BWA3_MG5_tan",
                };

            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30i_RSAS",
                "BWA3_optic_ZO4x30i_RSAS_sand",
                "BWA3_optic_ZO4x30i_MicroT2",
                "BWA3_optic_ZO4x30i_MicroT2_sand",
                };

            addItemsToVest[] = {
                LIST_2("BWA3_120Rnd_762x51_Tracer_soft"),
                LIST_2("BWA3_15Rnd_9x19_P8"),
            };

            addItemsToBackpack[] = {
                "BWA3_120Rnd_762x51_Tracer_soft",
                "ACE_Sparebarrel"
            };
        };

        class B_Soldier_A_F: B_Soldier_F {
            backpack = "BWA3_PatrolPack_Fleck";

            addItemsToBackpack[] = {
                LIST_7("BWA3_120Rnd_762x51_Tracer_soft"),
                "ACE_EntrenchingTool"
            };
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {
            backpack = "CUP_B_Kombat_Radio_Olive";
            
            addItemsToBackpack[] += {
                //LIST_2("ACRE_PRC117F"),
                LIST_2("ACRE_SEM70"),
                LIST_5("BWA3_DM32_Purple"),
            };

        };

        class B_soldier_AT_F: B_Soldier_F {
            backpack = "BWA3_MELLS_Weapon_Bag";
        };

        class B_soldier_AAT_F: B_Soldier_F {
            backpack = "BWA3_MELLS_Tripod_Bag";
        };


        //Führung
        class B_Soldier_TL_F {
            vest = "BWA3_Vest_Leader_Fleck";
            
            addItemsToVest[] += {
                LIST_8("BWA3_30Rnd_556x45_G36_Tracer"),
                LIST_2("BWA3_DM51A1"),
                LIST_2("BWA3_DM25"),
                "BWA3_DM32_Green",
                "ACRE_PRC152",
            };
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            addItemsToVest[] += {
                "ItemAndroid",
            };

            addItemsToBackpack[] += {
                "ace_flags_red",
            };

        };

        class B_officer_F: B_Soldier_SL_F {

        };

        //Sani
        class B_medic_F {
            vest = "BWA3_Vest_Medic_Fleck";
            backpack = "BWA3_Kitbag_Fleck_Medic";

            class Rank {
                class PRIVATE {
                    addItemsToVest[] += {
                        LIST_4("BWA3_30Rnd_556x45_G36_AP"),
                        "ACE_SurgicalKit",
                    };

                    addItemsToBackpack[] = {
                        LIST_30("ACE_Suture"),
                        LIST_30("ACE_Suture"),

                        LIST_16("ACE_Tourniquet"),

                        LIST_30("ACE_packingBandage"),
                        LIST_10("ACE_packingBandage"),

                        LIST_30("ACE_elasticBandage"),
                        LIST_30("ACE_elasticBandage"),

                        LIST_20("ACE_quikclot"),

                        LIST_16("ACE_Epinephrine"),
                        LIST_8("ACE_Painkillers"),
                        LIST_8("ACE_morphine"),

                        LIST_4("ACE_SalineIV"),
                        LIST_2("ACE_salineIV_500"),
                        LIST_2("ACE_SalineIV_250"),

                        "ACE_Bodybag",
                    };
                };

                class CORPORAL: PRIVATE {
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC152",
                        "ACE_PersonalAidkit",
                    };

                    addItemsToBackpack[] += {
                        LIST_4("ACE_SalineIV"),
                        LIST_2("ACE_salineIV_500"),
                        LIST_2("ACE_SalineIV_250"),

                    };
                };

                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                    };
                };

                class LIEUTENANT: SERGEANT {

                };
            };
        };

        class B_engineer_F {
            backpack = "BWA3_PatrolPack_Fleck";

            class Rank {
                class PRIVATE {
                    addItemsToVest[] += {
                    };

                    addItemsToBackpack[] = {

                    };
                };

                class CORPORAL: PRIVATE {

                };

                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ItemAndroid",
                        "ACRE_PRC152",
                    };

                };

                class LIEUTENANT: SERGEANT {

                };
            };
        };
    }; 
};