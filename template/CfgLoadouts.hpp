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

    class Type {
        class B_Survivor_F {
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
                LIST_2("kat_Painkiller"),
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
        //Rifleman
        class B_Soldier_F: B_Survivor_F {
            addItemsToVest[] = {
                LIST_8(""),
                "", //Optional: passendes SR Funkgerät
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
        class B_soldier_M_F: B_Survivor_F {
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

        //Radio Operator / FO /JTAC
        class B_W_RadioOperator_F: B_Soldier_F {
            class Rank {
                class PRIVATE {
                    backpack = "";

                    addItemsToVest[] += {
                        "", //Minimal: passendes SR Funkgerät
                    };
                    addItemsToBackpack[] += {
                        LIST_2(""), //Minimal: passendes LR Funkgerät
                        LIST_10(""), //Purple Smoke
                        "ACE_flags_blue",
                        "ACE_flags_yellow",
                        //Optional
                        "ItemcTab",
                        "ACRE_VHF30108SPIKE",
                        //Tactical Tarps (tacticaltrainingteam.github.io/tactical-tarps/signal) - marks a helicopter LZ
                        "tt_signal_tarp_Red",
                        "tt_signal_tarp_Yellow",
                    };
                };
               //FO
                class CORPORAL: PRIVATE {
                    backpack = "";

                    addItemsToUniform[] += {
                        "ACE_microdagr",
                    };

                    addItemsToBackpack[] += {
                        "", //Funkgerät
                    };

                    binoculars = "ACE_Vector";
                };
                //JTAC
                class SERGEANT: CORPORAL {

                };
                class LIEUTENANT: SERGEANT {

                };
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
        class B_HeavyGunner_F: B_Survivor_F {
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
                "ACE_SpareBarrel",
            };
        };

        //MMG Assistant
        class B_Soldier_A_F: B_Soldier_F {
            backpack = "";
            secondaryWeapon = "dzn_MG_Tripod_Universal_Carry"; //optional

            addItemsToBackpack[] += {
                "ACE_SpareBarrel",
                "ACE_EntrenchingTool",
                //Optional
                LIST_2("ACE_Sandbag_empty")
            };
        };

        //Drohnenbediener
        class B_soldier_UAV_F: B_Soldier_F {
            backpack = "";

            addItemsToBackpack[] = {
                LIST_10("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed",
                //Tactical Tarps (tacticaltrainingteam.github.io/tactical-tarps/drone) - marks a drone landing spot
                //"tt_drone_tarp_Black",
                "tt_drone_tarp_Green",
                //"tt_drone_tarp_Red",
                //"tt_drone_tarp_Yellow",
            };

            gps = "B_UavTerminal";
        };

        //Autorifleman
        class B_soldier_AR_F: B_Survivor_F {
            primaryWeapon[] = {
            };
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";

            handgunWeapon[] = {
                };
            handgunWeaponMagazine = "";

            addItemsToBackpack[] += {
                "ACE_SpareBarrel", //Optional
            };
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
            handgunWeapon = "ACE_VMH3";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
                "mts_cutter_folding_saw",
                "iedd_item_notebook", //nur falls IEDD-IEDs verbaut sind
            };
            addItemsToBackpack[] += {
                "ACE_wirecutter",
                "ACE_EntrenchingTool",
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

        //EOD
        class B_soldier_mine_F: B_Soldier_F {
            handgunWeapon = "ACE_VMH3";

            addItemsToVest[] += {
                "ACE_DefusalKit",
                "ACE_Clacker",
                "mts_cutter_folding_saw",
                "iedd_item_notebook", //nur falls IEDD-IEDs verbaut sind
            };
            addItemsToBackpack[] += {
                "ACE_EntrenchingTool",
                //Ideal
                "ACE_SpraypaintRed",
                "ACE_SpraypaintGreen",
                LIST_5("ace_marker_flags_orange"),
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
        class B_crew_F: B_Survivor_F {
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
                "ACE_artilleryTable",
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

                    addItemsToBackpack[] += {
                        "", //LR Radio
                    };
                };
            };
        };

        //Pilots
        class B_helicrew_F: B_Survivor_F {
            addItemsToVest[] += {
                "", //Minimal: passendes LR Funkgerät
                "ACE_microDAGR"
            };
        };

        class B_Helipilot_F: B_helicrew_F{

        };

        //Aufklärer
        class B_sniper_F: B_Survivor_F {
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

            binoculars = "ACE_Vector";
        };

        class B_Patrol_Soldier_UAV_F: B_soldier_M_F {
            backpack = "";

            addItemsToBackpack[] += {
                LIST_10("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed",
                //Tactical Tarps (tacticaltrainingteam.github.io/tactical-tarps/drone) - marks a drone landing spot
                //"tt_drone_tarp_Black",
                "tt_drone_tarp_Green",
                //"tt_drone_tarp_Red",
                //"tt_drone_tarp_Yellow",
            };

            gps = "B_UavTerminal";

        };

        class B_Patrol_Soldier_M_F: B_soldier_M_F {

        };

        //Führung
        class B_Soldier_TL_F: B_Survivor_F {
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
                "ACE_flags_green",
                "ACE_SpraypaintBlack",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed",
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {

        };

        class B_officer_F: B_Soldier_SL_F {

        };

        //Medics
        class B_medic_F: B_Survivor_F {
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
                        "kat_basicDiagnostic", //Optional
                    };

                    addItemsToBackpack[] += {
                        //M
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        LIST_12("ACE_Tourniquet"),
                        LIST_30("ACE_Suture"),
                        //A
                        LIST_8("kat_larynx"),
                        LIST_6("kat_ncdKit"),
                        //R
                        LIST_8("kat_chestSeal"),
                        LIST_3("kat_pocketBVM"),
                        //C
                        LIST_8("kat_IV_16"),
                        LIST_4("ACE_salineIV_250"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_12("ACE_epinephrine"),
                        LIST_4("ACE_adenosine"),
                        //H
                        LIST_4("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        LIST_8("kat_naloxone"),
                        LIST_6("kat_Penthrox"),
                        //Tactical Tarps (tacticaltrainingteam.github.io/tactical-tarps/medic)
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green",
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
                        //Optional
                        "ItemAndroid",
                        "", //weiteres SR Funkgerät
                    };
                    addItemsToBackpack[] += {
                        //nothing new at this tier - inherits PRIVATE's M/A/R/C/H kit above
                    };
                };

                //Zugsanitäter (Doctor) - identisch zu Zugsanitäter (Medic) laut Wiki, daher keine eigene
                //addItemsToVest[]/addItemsToBackpack[]-Überschreibung nötig
                class SERGEANT: CORPORAL {
                    backpack = "";

                    addItemsToBackpack[] += {
                        //M
                        //A
                        //R
                        //C
                        //H
                    };
                };

                //Arzt (Doctor) - hier sind LR Funkgerät und Blue-Force-Tracking laut Wiki nicht mehr optional,
                //sondern Minimal
                class LIEUTENANT: SERGEANT {
                    backpack = "";

                    addItemsToBackpack[] += {
                        "", //Minimal: passendes LR Funkgerät
                        //Tactical Tarps (tacticaltrainingteam.github.io/tactical-tarps/signal) - marks the LZ for
                        //an inbound medevac helicopter
                        "tt_signal_tarp_Red",
                        "tt_signal_tarp_Yellow",
                    };
                };
            };
        };

        //Logistik
        class B_soldier_repair_F: B_Soldier_F {
            //Tactical Tarps (tacticaltrainingteam.github.io/tactical-tarps/repair) - spawns tool props on deploy;
            //only available in black, unlike the other tarps
            addItemsToBackpack[] += {
                "tt_repair_tarp_Black",
            };

            class Rank {

                class PRIVATE {

                };
                class SERGEANT: PRIVATE {

                };
            };
        };

        //SOF
        class B_recon_F: B_Survivor_F {
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
                LIST_15("ACE_fieldDressing"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2(""),
                LIST_2(""),
            };
            addItemsToVest[] = {
                "", //Optional: passendes SR Funkgerät
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
                "kat_basicDiagnostic", //Optional
            };
            addItemsToBackpack[] += {
                //M
                LIST_30("ACE_packingBandage"),
                LIST_30("ACE_elasticBandage"),
                LIST_12("ACE_Tourniquet"),
                LIST_30("ACE_Suture"),
                //A
                LIST_8("kat_larynx"),
                LIST_6("kat_ncdKit"),
                //R
                LIST_8("kat_chestSeal"),
                LIST_3("kat_pocketBVM"),
                //C
                LIST_8("kat_IV_16"),
                LIST_4("ACE_salineIV_250"),
                LIST_4("ACE_salineIV_500"),
                LIST_12("ACE_epinephrine"),
                LIST_4("ACE_adenosine"),
                //H
                LIST_4("kat_Painkiller"),
                LIST_8("ACE_morphine"),
                LIST_8("kat_naloxone"),
                LIST_6("kat_Penthrox"),
                //Tactical Tarps (tacticaltrainingteam.github.io/tactical-tarps/medic)
                "tt_medic_tarp_Red",
                "tt_medic_tarp_Yellow",
                "tt_medic_tarp_Green",
            };
        };

        class B_recon_exp_F: B_recon_F {
            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
            };

            addItemsToBackpack[] += {
                "ACE_wirecutter",
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

        class B_recon_M_F: B_Survivor_F {
            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle = "";
            primaryWeaponOptics = "";
            primaryWeaponUnderbarrel = "";

            addItemsToUniform[] += {
                "ACE_Rangecard",
            };

            binoculars = "ACE_Yardage450"; //Optional: Entfernungsmesser
        };
    };
};
