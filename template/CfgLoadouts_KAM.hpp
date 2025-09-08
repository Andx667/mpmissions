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
        "backpack",
        "headgear",
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "primaryWeaponMuzzle",
        "goggles"
    };

    class Side {
        class Blufor {
            uniform[] = {
            };
            vest[] = {
            };
            backpack = "";
            headgear[] = {
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "kat_Painkiller",
                LIST_15("ACE_elasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("kat_chestseal"),
                LIST_2(""), //Frag Grenade
                LIST_2(""), //White Smoke Grenade
            };
            addItemsToVest[] = {
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
            };
            primaryWeaponOptics[] = {
                "",
            };
            primaryWeaponPointer = "";
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
            };
            handgunWeaponMagazine = "";

            goggles[] = {
                "",
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
            addItemsToVest[] = {
                LIST_8(""),
            };
            addItemsToBackpack[] = {

            };
        };

        //Grenadier
        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon[] = {
            };
            primaryWeaponUnderbarrelMagazine = "";

            addItemsToVest[] = {

            };
            addItemsToBackpack[] = {

            };
        };

        //Marksman
        class B_soldier_M_F {
            primaryWeapon[] = {
            };
            primaryWeaponOptics = "";
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";

            handgunWeapon[] = {

                };
            handgunWeaponMagazine = "";

            addItemsToUniform[] += {
                "ACE_Rangecard",
            };

            binoculars = "ACE_Yardage450";
        };

        //Breacher
        class B_soldier_exp_F: B_Soldier_GL_F {
            addItemsToVest[] = {
                "ACE_Clacker",
                "ACE_DefusalKit",
            };

            addItemsToBackpack[] = {
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
                "ACE_wirecutter",
            };
        };

        //Light Anti Tank
        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "";
        };

        //Radio Operator
        class TTT_B_RadioOperator_F: B_Soldier_F {
            backpack = "";

            addItemsToBackpack[] += {
                LIST_2(""), //LR Radio
                LIST_10(""), //Purple Smoke
                "ACE_flags_blue",
                "ACE_flags_yellow",
            };
        };

        //Anti Tank
        class B_soldier_AT_F: B_Soldier_F {
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";

            addItemsToBackpack[] = {

            };
        };

        //Anti Tank Assistent
        class B_soldier_AAT_F: B_Soldier_F {
            backpack = "";

            addItemsToBackpack[] = {

            };
        };

        //MMG
        class B_HeavyGunner_F {
            primaryWeapon[] = {

            };
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            vest = "";
            addItemsToVest[] += {

            };
            addItemsToBackpack[] += {
                "ACE_Sparebarrel",
            };
        };

        //MMG Assistent
        class B_Soldier_A_F: B_Soldier_F {
            backpack = "";

            addItemsToBackpack[] += {
                "ACE_Sparebarrel",
                "ACE_EntrenchingTool",
            };
        };

        //Drohnenbediener
        class B_soldier_UAV_F: B_Soldier_F {
            backpack = "";

            addItemsToBackpack[] = {
                LIST_10("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed",
            };

            gps = "B_UavTerminal";
        };

        //Autorifleman
        class B_soldier_AR_F {
            primaryWeapon[] = {
            };
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";

            handgunWeapon[] = {
                };
            handgunWeaponMagazine = "";
        };

        //Anti Air
        class B_soldier_AA_F: B_Soldier_F {
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";

            addItemsToBackpack[] = {

            };
        };

        class B_soldier_AAA_F: B_Soldier_F {
            addItemsToBackpack[] = {

            };
        };

        //Unterstützung
        //Pionier
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

        //EOD
        class B_soldier_mine_F: B_Soldier_F {
            handgunWeapon = "ACE_VMH3";

            addItemsToVest[] += {
                "ACE_DefusalKit",
                "ACE_Clacker",
            };

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
            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";

            uniform = "";
            vest = "";

            class Rank {
                class PRIVATE {

                };
                class SERGEANT: PRIVATE {
                    addItemsToVest[] += {
                        "", //Radio
                    };
                };
                class LIEUTENANT: SERGEANT {
                    backpack = "";

                    addItemsToBackpack[] += {
                        "", //LR Radio
                    };
                };
            };
        };

        //Mörser
        class B_support_AMort_F: B_Soldier_F {
            backpack = "";

            addItemsToVest[] += {
                "ACE_PlottingBoard",
            };

        };

        class B_support_Mort_F: B_support_AMort_F {
            class Rank {
                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
                    backpack = "";

                    addItemsToBackpack[] + {
                        "", //LR Radio
                    };
                };
            };
        };

        //Pilots
        class B_helicrew_F {

        };

        class B_Helipilot_F: B_helicrew_F{

        };

        //Aufklärer
        class B_sniper_F {
            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";

            uniform = ""; //ghillie
            vest = "";
            backpack = "";

            addItemsToUniform[] += {

            };

            addItemsToVest[] += {

            };

            addItemsToBackpack[] += {
                "ACE_Tripod",
            };

            binoculars = "ACE_Vector";

        };

        class B_spotter_F: B_soldier_M_F {
            primaryWeaponOptics = "";
            primaryWeaponMuzzle = "";

            uniform = ""; //ghillie
            vest = "";
            backpack = "";

            addItemsToUniform[] += {
                "ACE_microdagr",
            };

            addItemsToVest[] += {
                "ACE_Kestrel4500",
                "ACE_ATragMX",
                "ACE_DefusalKit",
                "ACE_Clacker",
            };

            addItemsToBackpack[] += {
                "ACE_SpottingScope",
                "ACE_EntrenchingTool",
                "", //LR Radio
            };

            binoculars = "ACE_Vector";
        };

        class B_Patrol_Soldier_TL_F: B_soldier_M_F {
            addItemsToUniform[] += {
                "ACE_microdagr",
            };

            addItemsToVest[] += {
                "", //BFT
            };

            addItemsToBackpack[] += {
                "", //LR Radio
            };

            binoculars = "ACE_VEctor";
        };

        class B_Patrol_Soldier_UAV_F: B_soldier_M_F {
            backpack = "";

            addItemsToBackpack[] += {
                LIST_10("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed",
            };

            gps = "B_UavTerminal";

        };

        class B_Patrol_Soldier_M_F: B_soldier_M_F {

        };

        //Führung
        class B_Soldier_TL_F {
            primaryWeaponMagazine = ""; //Tracer instead of regular ball

            addItemsToUniform[] += {
                "ACE_Microdagr",
            };

            addItemsToVest[] += {
                "", //Radio
                "", //Android
                "", // Smoke Green
            };
            addItemsToBackpack[] += {
                "ACE_flags_red",
                "ACE_SpraypaintBlack",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed"
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {

        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class TTT_B_FO_F: B_Soldier_F {
            backpack = "";

            addItemsToUniform[] += {
                "ACE_microdagr",
            };

            addItemsToBackpack[] += {
                "", //Funkgerät
            };

            binoculars = "ACE_Vector";

        };

        //Medics
        class B_medic_F {
            vest = "";

            class Rank {

                class PRIVATE {
                    backpack = "";
                    addItemsToVest[] += {
                        //Soldier Items
                        LIST_8(""), //Primary Weapon Magazine
                        LIST_2(""), //Frag Grenade
                        LIST_2(""), //White Smoke Grenade
                        //Medic Items
                        "ACE_SurgicalKit",
                    };

                    addItemsToBackpack[] += {
                        //M
                        //A
                        //R
                        //C
                        //H
                    };
                };

                class CORPORAL: PRIVATE {
                    primaryWeapon = ""; //Kurze Waffe?
                    primaryWeaponMagazine = "";
                    primaryWeaponOptics = "";
                    primaryWeaponPointer = "";
                    primaryWeaponMuzzle = "";

                    backpack = "";

                    addItemsToVest[] = {
                        //Soldier Items
                        LIST_3(""), //Primary Weapon Magazine
                        LIST_2(""), //Frag Grenade
                        LIST_2(""), //White Smoke Grenade
                        //Medic Items
                        "ACE_SurgicalKit",
                        "ACE_SpraypaintBlue",
                        "ace_flags_blue",
                    };
                    addItemsToBackpack[] = {
                        //M
                        //A
                        //R
                        //C
                        //H
                    };
                };

                class SERGEANT: CORPORAL {
                    backpack = "";

                    addItemsToVest[] = {

                    };
                    addItemsToBackpack[] = {
                        //M
                        //A
                        //R
                        //C
                        //H
                    };
                };

                class LIEUTENANT: SERGEANT {
                    backpack = "";
                    addItemsToVest[] = {

                    };
                    addItemsToBackpack[] = {
                        //M
                        //A
                        //R
                        //C
                        //H
                        "",
                    };
                };
            };
        };

        //Logistik
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
            uniform[] = {
            };
            vest[] = {
            };
            backpack = "";
            headgear[] = {
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
                LIST_2(""),
            };
            addItemsToVest[] = {
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
            };
            primaryWeaponOptics[] = {
                "",
            };
            primaryWeaponPointer = "";
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {
                };
            handgunWeaponMagazine = "";

            goggles[] = {
                "",
            };
        };

        class B_recon_LAT_F: B_recon_F {
            secondaryWeapon = "";
        };

        class B_recon_medic_F: B_recon_F {
            vest = "";

            addItemsToVest[] += {
                "ACE_SurgicalKit",
            };
            addItemsToBackpack[] += {
                //M
                //A
                //R
                //C
                //H
            };
        };

        class B_recon_exp_F: B_recon_F {
            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
            };

            addItemsToBackpack[] += {

            };
        };

        class B_recon_JTAC_F: B_recon_F {
            backpack = "";


            addItemsToVest[] += {
                "", //BFT
                "", //SR Radio
            };

            addItemsToBackpack[] += {
                "Laserbatteries",
            };

            binoculars = "Laserdesignator_03";
        };

        class B_recon_TL_F: B_recon_JTAC_F {

        };

        class B_recon_M_F {
            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle = "";
            primaryWeaponOptics = "";
            primaryWeaponUnderbarrel = "";

            addItemsToUniform[] += {
                "ACE_Rangecard",
            };
        };
    };
};
