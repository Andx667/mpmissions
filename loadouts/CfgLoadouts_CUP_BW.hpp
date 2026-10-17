// ---------------------------------------------------------------------------
// Varianten - in der description.ext VOR dem #include setzen:
//   #define BW_CAMO Tropen
//   #define BW_G36
// BW_CAMO: Fleck | Tropen | Multi (Standard: Multi)
// BW_G36:  G36-Familie statt G38  (Standard: G38)
// ACHTUNG: Kein Kommentar und keine Leerzeichen hinter dem Wert von BW_CAMO -
// Arma behält die Leerzeichen, daraus wird dann "BWA3_Uniform_Fleck      ".
// ---------------------------------------------------------------------------
#ifndef BW_CAMO
    #define BW_CAMO Multi
#endif

// BW_CAMO_ITEM(BWA3_Vest_Rifleman) -> "BWA3_Vest_Rifleman_Multi"
// BW_CAMO_ITEM_SUFFIX(BWA3_AssaultPack,Medic) -> "BWA3_AssaultPack_Multi_Medic"
// Erst zusammenkleben, dann in Anführungszeichen setzen (wie CBA QUOTE(DOUBLES(...))).
// Keine Leerzeichen in den Argumenten, sonst landen sie im Klassennamen!
#define BW_STR(x) #x
#define BW_JOIN2(a,b) a##_##b
#define BW_JOIN3(a,b,c) a##_##b##_##c
#define BW_CAMO_ITEM(base) BW_STR(BW_JOIN2(base,BW_CAMO))
#define BW_CAMO_ITEM_SUFFIX(base,suffix) BW_STR(BW_JOIN3(base,BW_CAMO,suffix))

#ifdef BW_G36
    #define BW_RIFLE      "BWA3_G36A3", "BWA3_G36A3_green", "BWA3_G36A3_tan"
    #define BW_RIFLE_GL   "BWA3_G36A3_AG40", "BWA3_G36A3_AG40_green", "BWA3_G36A3_AG40_tan"
    #define BW_CARBINE    "BWA3_G36KA3", "BWA3_G36KA3_green", "BWA3_G36KA3_tan"
    #define BW_CARBINE_GL BW_RIFLE_GL // kein G36K mit AG40, Truppführer nimmt das G36A3 AG40
#else
    #define BW_RIFLE      "BWA3_G38", "BWA3_G38_tan"
    #define BW_RIFLE_GL   "BWA3_G38_AG40", "BWA3_G38_AG40_tan"
    #define BW_CARBINE    "BWA3_G38K", "BWA3_G38K_tan"
    #define BW_CARBINE_GL "BWA3_G38K_AG40", "BWA3_G38K_AG40_tan"
#endif

class Loadouts {
    baseDelay = 1;
    perPlayerDelay = 1;
    handleRadios = 1;
    resetLoadout = 1;
    randomizationMode = 1;
    customGear = 300;
    customGearAllowedCategories[] = {
        //"uniform",
        "vest",
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "primaryWeaponPointer",
        "goggles",
        "headgear"
    };

    class Side {
        //class BluforPlayers {//
        class BluFor {

        };
    };
    // Faction: Bundeswehr (German Armed Forces) - modern day (~2010s-2020s)
    class Type {

        class B_Survivor_F {
            uniform[] = {
                BW_CAMO_ITEM(BWA3_Uniform), // sleeves-Variante handled by AWX
            };
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Rifleman)
            };
            backpack[] = {
                BW_CAMO_ITEM(BWA3_AssaultPack)
                };
            headgear[] = {
                "BWA3_OpsCore_FastMT_Peltor",
                BW_CAMO_ITEM(BWA3_OpsCore_FastMT_Peltor),
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "KAT_Painkiller", 2,
                "ACE_elasticBandage", 10,
                "ACE_packingBandage", 10,
                "ACE_Quikclot", 10,
                "ACE_Tourniquet", 4,
                "KAT_chestSeal", 2,
                "BWA3_15Rnd_9x19_P8",
            };
            addItemsToVest[] = {
                "BWA3_DM25", 2,
                "BWA3_DM51A1", 2,
                "ACRE_SEM52SL",
                "BWA3_DM32_Green"
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {BW_RIFLE};
            primaryWeaponOptics[] = {
                //"BWA3_optic_ZO4x30_MicroT2",
                //"BWA3_optic_ZO4x30_MicroT2_brown",
                "BWA3_optic_ZO4x30_RSAS",
                "BWA3_optic_ZO4x30_RSAS_brown"
                };
            primaryWeaponPointer[] = {
                "CUP_acc_LLM",
                "CUP_acc_LLM_black",
                "CUP_acc_LLM_od"
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
                // "BWA3_G_Combat_black",
                // "BWA3_G_Combat_clear",
                // "BWA3_G_Combat_orange"
                "USP_MFRAME_BLK",
                "USP_MFRAME_BLK2",
                "USP_MFRAME_BLK3",
                "USP_MFRAME_TAN",
                "USP_MFRAME_TAN2",
                "USP_MFRAME_TAN3",
                "USP_MFRAME_SMG1_BLK",
                "USP_MFRAME_SMG1_BLK2",
                "USP_MFRAME_SMG1_TAN",
                "USP_MFRAME_SMG1_TAN2",
                "USP_MFRAME_SMG2_BLK",
                "USP_MFRAME_SMG2_BLK2",
                "USP_MFRAME_SMG2_TAN",
                "USP_MFRAME_SMG2_TAN2",
                "USP_MFRAME_SMG3_BLK",
                "USP_MFRAME_SMG3_BLK2",
                "USP_MFRAME_SMG3_TAN",
                "USP_MFRAME_SMG3_TAN2"
                };
            nvgoggles = "ACE_NVG_Wide_Black";

            binoculars = "";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "";
        };
        
        class B_Soldier_F: B_Survivor_F { //Rifleman
            addItemsToVest[] += {
                "BWA3_30Rnd_556x45_G36_AP", 8,
                "BWA3_optic_NSV600"
            };
            addItemsToBackpack[] = {
                "ACE_EntrenchingTool",
                "ACE_Wirecutter",
                "mts_cutter_folding_saw"
            };
        };

        class B_Soldier_GL_F: B_Soldier_F { //Grenadier
            primaryWeapon[] = {BW_RIFLE_GL};
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Grenadier)
                };
            addItemsToVest[] += {
                "1Rnd_HE_Grenade_shell", 8,
            };
            addItemsToBackpack[] += {
                "1Rnd_HE_Grenade_shell", 12,
                "1Rnd_SmokeRed_Grenade_shell", 5,
                "1Rnd_Smoke_Grenade_shell", 5,
            };
        };

        // TTT-Wiki Breacher (Minimal) verlangt zusätzlich ACE_wirecutter, ACE_Clacker, ACE_DefusalKit sowie
        // Breaching Block/Packaged Charge - trägt hier nur die Grenadier-Ausrüstung ohne jegliches Breacher-Werkzeug
        class B_soldier_exp_F: B_Soldier_GL_F { //Breacher

        };

        class B_soldier_LAT2_F: B_Soldier_F { //LAT
            secondaryWeapon = "BWA3_PzF3_Tandem_Loaded";
            backpack = "";
        };

        class B_W_RadioOperator_F: B_Soldier_F { //Radio Operator / FO /JTAC
            class Rank {
                class PRIVATE { //Funker
                    backpack = "";

                    addItemsToBackpack[] += {
                        "", 2, //LR Radio
                        "", 10, //Purple Smoke
                        "ACE_flags_blue",
                        "ACE_flags_yellow",
                    };
                };

                class CORPORAL: PRIVATE { //FO
                    backpack = "";

                    addItemsToUniform[] += {
                        "ACE_microdagr",
                    };

                    addItemsToBackpack[] += {
                        "", //Funkgerät
                    };

                    binoculars = "ACE_Vector";
                };

                class SERGEANT: CORPORAL { //JTAC

                };
                class LIEUTENANT: SERGEANT {

                };
            };

        };
        class B_soldier_AT_F: B_Soldier_F { //AT
            secondaryWeapon = "BWA3_CarlGustav";
            secondaryWeaponOptics = "BWA3_optic_CarlGustav";
            secondaryWeaponMagazine = "BWA3_CarlGustav_HEAT";

            //backpack = "";
            addItemsToBackpack[] = {
                "BWA3_CarlGustav_HEAT",
                "BWA3_CarlGustav_HEDP"
             };
        };

        class B_soldier_AAT_F: B_Soldier_F { //AT Assistent
            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
                };

            addItemsToBackpack[] = {
                "BWA3_CarlGustav_HEAT", 2,
                "BWA3_CarlGustav_HEDP", 2,
            };

        };

        class B_Soldier_A_F: B_Soldier_F { //MMG Assistent
            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
                };

            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                "BWA3_120Rnd_762x51_Tracer_soft", 6,
                "ACE_EntrenchingTool",
                "ACE_Sandbag_empty", 3
            };
            binoculars = "Rangefinder";
        };

        class B_soldier_UAV_F: B_Soldier_F { //Drohnenbediener
            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
                };

            addItemsToBackpack[] = {
                "ACE_UAVBattery", 10,
                "ITC_Land_B_AR2i_Packed"
            };
            gps = "B_UavTerminal";
        };

        class B_soldier_AA_F: B_Soldier_F {
            secondaryWeapon = "BWA3_Fliegerfaust";
            secondaryWeaponMagazine = "BWA3_Fliegerfaust_Mag";
            backpack = "";

        };

        class B_soldier_AAA_F: B_Soldier_F {
            backpack[] = {  
                BW_CAMO_ITEM(BWA3_PatrolPack)
                };
            addItemsToBackpack[] = {
                "BWA3_Fliegerfaust_Mag", 3,
            };
        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F: B_Survivor_F { //DMR / ZF
            //primaryWeapon = "BWA3_G28";
            primaryWeapon[] = {
                "BWA3_G27",
                "BWA3_G27_tan"
            };
            primaryWeaponOptics[] = {
                // "BWA3_optic_PMII_DMR_MicroT1_front",
                // "BWA3_optic_PMII_DMR_MicroT1_rear",
                "BWA3_optic_ZO4x30i_MicroT2",
                "BWA3_optic_ZO4x30i_MicroT2_sand",
                "BWA3_optic_ZO4x30i_RSAS",
                "BWA3_optic_ZO4x30i_RSAS_sand"
                };

            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan",
                };
            primaryWeaponMuzzle = "BWA3_muzzle_snds_Rotex_IIA";

            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Marksman)
                };

            addItemsToVest[] += {
                "BWA3_20Rnd_762x51_G28_AP", 7,
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                "BWA3_20Rnd_762x51_G28_LR", 8,
            };
            binoculars = "ACE_Yardage450";
        };

        class B_soldier_AR_F: B_Survivor_F { //Autorifleman / MG4
            vest[] ={
                BW_CAMO_ITEM(BWA3_Vest_MachineGunner)
                };

            primaryWeapon = "BWA3_MG4";
            primaryWeaponMagazine = "BWA3_200Rnd_556x45_Tracer";

            addItemsToVest[] += {
                "BWA3_200Rnd_556x45_Tracer", 2,
                "BWA3_optic_NSV600"
            };
            addItemsToBackpack[] = {
                "BWA3_200Rnd_556x45_Tracer", 2,
            };
        };


        class B_HeavyGunner_F: B_Survivor_F { //MMG / MG5
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_MachineGunner)
                };

            primaryWeapon[] = {
                "BWA3_MG5",
                "BWA3_MG5_tan"
                };
            primaryWeaponMagazine = "BWA3_120Rnd_762x51_Tracer_soft";
            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30i",
                //"BWA3_optic_ZO4x30i_MicroT2",
                //"BWA3_optic_ZO4x30i_MicroT2_sand",
                //"BWA3_optic_ZO4x30i_RSAS",
                //"BWA3_optic_ZO4x30i_RSAS_sand",
                "BWA3_optic_ZO4x30i_sand",
            };
            addItemsToVest[] += {
                "BWA3_120Rnd_762x51_Tracer_soft", 2,
            };
            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                "BWA3_120Rnd_762x51_Tracer_soft", 2,
            };
        };

        //Unterstützung
        // TTT-Wiki Pionier (Minimal) verlangt ACE_VMH3 (Minendetektor), ACE_DefusalKit, ACE_Clacker,
        // ACE_EntrenchingTool, Klappsäge, Drahtschneider und Sprengmittel - hier trägt der Pionier gar keine
        // Sonderausrüstung (kein addItemsToVest/Backpack in dieser Klasse)
        class B_engineer_F: B_Soldier_F { //Pionier
            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
                };

            goggles[] = {
                "CUP_G_ESS_KHK_Scarf_Face_Tan",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "CUP_G_ESS_KHK_Scarf_Tan",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_BLK",
                ""
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

        // TTT-Wiki EOD (Minimal) verlangt ACE_VMH3 (Minendetektor), ACE_DefusalKit, ACE_Clacker,
        // ACE_EntrenchingTool, Klappsäge und Sprengmittel - hier trägt EOD gar keine Sonderausrüstung
        class B_soldier_mine_F: B_Soldier_F { //EOD
            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
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

        class B_crew_F: B_Survivor_F {         //Fahrzeugbesatzung
            //uniform = "BWA3_Uniform_Crew_Fleck";
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest)
                };
            backpack = "";
            headgear = "BWA3_CrewmanKSK_Fleck_Headset";

            // primaryWeapon = "BWA3_MP7";
            // primaryWeaponMagazine = "BWA3_20Rnd_46x30_MP7";
            // primaryWeaponOptics[] = {
            //     "BWA3_optic_RSAS_riser",
            //     "BWA3_optic_RSAS_sand",
            //     "BWA3_optic_RSAS_tan",
            //     "",
            // };
            primaryWeaponPointer = "";

            addItemsToVest[] += {
                //"BWA3_20Rnd_46x30_MP7", 3,
                "BWA3_30Rnd_556x45_G36_AP", 3,
            };

            goggles[] = {
                "CUP_G_ESS_BLK",
                "CUP_G_ESS_BLK_Facewrap_Black",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "",
            };

            class Rank {
                class PRIVATE {

                };

                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                    };

                    gps = "ItemAndroid";
                };
                class LIEUTENANT: SERGEANT {
                    backpack = "CUP_B_Kombat_Radio_Olive";
                    
                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                        "ACE_flags_purple"
                    };
                };
            };
        };

        //Mörser
        class B_support_AMort_F: B_Soldier_F { //Ladeschütze

        };

        class B_support_Mort_F: B_support_AMort_F {
            class Rank {
                class PRIVATE { //Richtschütze

                };
                class CORPORAL: PRIVATE { 

                };
                class SERGEANT: CORPORAL { //Truppführer

                };
            };
        };

        //Pilots
        class B_helicrew_F: B_Survivor_F { //Crew
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest)
                };
            headgear[] = {
                "BWA3_CrewHelmet_NH90",
                "ttt_Helmet_Buzzard",
                "ttt_Helmet_Eagle",
                "ttt_Helmet_Falcon",
            };

            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle = "";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";

            addItemsToVest[] = {
                "ACRE_SEM52SL",
            };
            goggles = "";

        };

        class B_Helipilot_F: B_helicrew_F{ //Pilot
            uniform = "BWA3_Uniform_Helipilot";
            vest = "FIR_pilot_vest";
            headgear[] += {
                "BWA3_TopOwl_nvg",
            };
            addItemsToBackpack[] += {
                "ACRE_PRC117F",
            };
        };

        //Aufklärer
        class B_Patrol_Soldier_M_F: B_soldier_M_F {
            primaryWeapon = "BWA3_G28";
            primaryWeaponOptics[] = {
                "BWA3_optic_PMII_DMR_MicroT1_front",
                "BWA3_optic_PMII_DMR_MicroT1_rear",
                };

            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan",
                };
            primaryWeaponMuzzle = "BWA3_muzzle_snds_Rotex_IIA";
        };

        class B_Patrol_Soldier_UAV_F: B_Patrol_Soldier_M_F {

        };

        class B_Patrol_Soldier_TL_F: B_Patrol_Soldier_M_F {

        };

        class B_sniper_F: B_Survivor_F {
            primaryWeapon = "BWA3_G29";
            primaryWeaponOptics[] = {
                "BWA3_optic_M5Xi_Tremor3_MicroT2",
                "BWA3_optic_M5Xi_MSR_MicroT2",
                };
            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan",
                };
            primaryWeaponMuzzle = "BWA3_muzzle_snds_Rotex_Monoblock";
            primaryWeaponMagazine = "BWA3_10Rnd_86x70_G29";

            uniform[] = {
                BW_CAMO_ITEM(BWA3_Uniform_Ghillie)
            };

            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Marksman)
                };

            addItemsToVest[] += {
                "BWA3_20Rnd_762x51_G28_AP", 7,
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                "BWA3_20Rnd_762x51_G28_LR", 8,
            };
            binoculars = "ACE_Yardage450";

        };

        class B_spotter_F: B_Patrol_Soldier_M_F {
            uniform[] = {
                BW_CAMO_ITEM(BWA3_Uniform_Ghillie)
            };
        };
        //Führung
        class B_Soldier_TL_F: B_Survivor_F {
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Leader)
                };
            //In mot.-mech. Units TF usually have a GL and shorter Rifles.
            primaryWeapon[] = {BW_CARBINE_GL};

            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_Tracer";

            addItemsToUniform[] += {
                "ACE_MicroDAGR",
                "ACE_key_west"
            };
            addItemsToVest[] += {
                "BWA3_30Rnd_556x45_G36_Tracer", 8,
                "ACRE_PRC152",
                "BWA3_optic_NSV600"
            };
            addItemsToBackpack[] += {
                "ACE_SprayPaintRed",
                "ACE_SprayPaintGreen",
                "ACE_SprayPaintBlack",
                "ACE_flags_red",
                "ACE_flags_green",
                "ACE_flags_purple",
                "1Rnd_HE_Grenade_shell", 15,
                "1Rnd_SmokeRed_Grenade_shell", 5,
                "1Rnd_Smoke_Grenade_shell", 5
            };

            binoculars = "ACE_Vector";
            gps = "ItemAndroid";

        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
            primaryWeapon[] = {BW_CARBINE};

            addItemsToBackpack[] = {
                "ACE_SprayPaintRed",
                "ACE_SprayPaintGreen",
                "ACE_SprayPaintBlack",
                "ace_flags_red",
                "ACE_flags_green",
                "ACE_flags_purple"
            };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        //Medics
        class B_medic_F: B_Soldier_F {
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Medic)
                };

            class Rank {

                class PRIVATE { //Squad Level Medic
                    backpack[] = {
                        BW_CAMO_ITEM_SUFFIX(BWA3_AssaultPack,Medic)
                        };
                    addItemsToVest[] += {
                        //"kat_basicDiagnostic",
                        "kat_Pulseoximeter", 3,
                        "ACE_surgicalKit",
                        "BWA3_optic_NSV600"
                    };

                    addItemsToBackpack[] = {
                        //M
                        "ACE_packingBandage", 30,
                        "ACE_elasticBandage", 30,
                        "ACE_tourniquet", 12,
                        //A
                        "kat_chestSeal", 8,
                        "kat_larynx", 8,
                        "kat_ncdKit", 6,
                        //R
                        "kat_pocketBVM", 3,
                        //C
                        "ACE_salineIV_250", 4,
                        "ACE_salineIV_500", 4,
                        "kat_IV_16", 8,
                        "ACE_epinephrine", 12,
                        "ACE_adenosine", 4,
                        //H
                        "kat_Penthrox", 6,
                        "kat_naloxone", 8,
                        "kat_Painkiller", 4,
                        "ACE_morphine", 8,
                        "ACE_suture", 45,
                        //Admin
                        "ACE_Chemlight_IR", 2,
                    };
                };

                class CORPORAL: PRIVATE { //Platoon Level Medic
                    backpack[] = {
                        BW_CAMO_ITEM_SUFFIX(BWA3_TacticalPack,Medic)
                        };

                    addItemsToVest[] += {
                        "kat_Pulseoximeter", 3,
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                    };

                    addItemsToBackpack[] += {
                        //A
                        "kat_larynx", 2,
                        "kat_ncdKit", 2,
                        //C
                        "ACE_salineIV", 5,
                        "kat_amiodarone", 9,
                        "kat_aed",
                        //HIGH-TECH
                        "kat_lidocaine", 8,
                    };
                };

                class SERGEANT: CORPORAL { //Company Level Medic
                    backpack = "ttt_backpack_medic_rgr_01";//BWA3_Kitbag_Fleck_Medic

                    addItemsToVest[] += {
                    };

                    addItemsToBackpack[] = {
                        //M
                        "ACE_packingBandage", 45,
                        "ACE_elasticBandage", 45,
                        //A
                        "kat_aatKit", 6,
                        "kat_accuvac",
                        "kat_chestSeal", 6,
                        "kat_larynx", 5,
                        //R
                        "kat_BVM", 3,
                        "kat_oxygenTank_150",
                        //C
                        "ACE_BloodIV", 8,
                        "ACE_BloodIV_500", 3,
                        "ACE_BloodIV_250", 3,
                        "ACE_salineIV_250",
                        "kat_X_AED",
                        "kat_IV_16", 10,
                        "kat_IO_FAST", 2,
                        "kat_epinephrineIV", 12,
                        "ACE_epinephrine", 12,
                        "kat_lidocaine", 10,
                        "kat_amiodarone", 6,
                        "kat_atropine", 6,
                        //H
                        "kat_eaca", 6,
                        "kat_txa", 12,
                        "kat_fentanyl", 6,
                        "kat_ketamine", 6,
                        "kat_naloxone", 6,
                        "kat_nitroglycerin", 6,
                        "kat_norepinephrine", 6,
                        "kat_phenylephrine", 6,
                        //Admin
                        "ACE_suture", 45,
                        "ACE_PersonalAidKit"
                    };
                };

                class LIEUTENANT: SERGEANT { //Battalion Level Medic

                    addItemsToVest[] += {
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        "kat_Pulseoximeter",
                    };

                    addItemsToBackpack[] = {
                        //M
                        "ACE_packingBandage", 30,
                        "ACE_elasticBandage", 30,
                        //A
                        "kat_aatKit", 6,
                        "kat_accuvac",
                        "kat_chestSeal", 6,
                        "kat_larynx", 5,
                        //R
                        "kat_BVM", 3,
                        "kat_oxygenTank_150",
                        //C
                        "ACE_BloodIV", 8,
                        "ACE_BloodIV_500", 4,
                        "ACE_BloodIV_250", 4,
                        "ACE_salineIV_250",
                        "kat_X_AED",
                        "kat_IV_16", 10,
                        "kat_IO_FAST", 2,
                        "kat_epinephrineIV", 12,
                        "ACE_epinephrine", 12,
                        "kat_lidocaine", 10,
                        "kat_amiodarone", 6,
                        "kat_atropine", 6,
                        //H
                        "kat_eaca", 6,
                        "kat_txa", 12,
                        "kat_fentanyl", 6,
                        "kat_ketamine", 6,
                        "kat_naloxone", 6,
                        "kat_nitroglycerin", 6,
                        "kat_norepinephrine", 6,
                        "kat_phenylephrine", 6,
                        //Admin
                        "ACE_suture", 45,
                    };
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
        class B_recon_F: B_Survivor_F {
            uniform[] = {
                "USP_G3C_MTN",
                "USP_G3C_RS_MTN",
                "USP_G3C_RS2_MTN",
                //"USP_G3C_IST_MTN"
                };
            primaryWeapon[] = {
                "BWA3_G38C",
                "BWA3_G38C_tan"
            };
            primaryWeaponMuzzle[] = {
                "BWA3_muzzle_snds_QDSS_tan",
                "BWA3_muzzle_snds_QDSS",
                "BWA3_muzzle_snds_QDSS_green",
                "BWA3_muzzle_snds_Rotex_IIIC",
                "BWA3_muzzle_snds_Rotex_IIIC_green",
                "BWA3_muzzle_snds_Rotex_IIIC_tan"
            };
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_JPC_Rifleman)
            };
            headgear[] = {
                BW_CAMO_ITEM(BWA3_OpsCore_FastMT_SOF)
            };


        };

        class B_recon_LAT_F: B_recon_F {
        };

        class B_recon_medic_F: B_recon_F {
            backpack = "ttt_backpack_medic_rgr_01";

            class Rank {

                class PRIVATE {

                };
                class CORPORAL: PRIVATE {

                };
                class SERGEANT: CORPORAL {

                };
            };
        };

        class B_recon_exp_F: B_recon_F {

        };

        class B_recon_JTAC_F: B_recon_F {
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_JPC_Radioman)
            };
            goggles[] += {
                "G_Aviator"
            };

        };

        class B_recon_TL_F: B_recon_JTAC_F {
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_JPC_Leader)
            };
        };

        class B_recon_M_F: B_recon_F {
            primaryWeapon = "BWA3_G28";
            primaryWeaponOptics[] = {
                "BWA3_optic_PMII_DMR_MicroT1_front",
                "BWA3_optic_PMII_DMR_MicroT1_rear",
                };

            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan",
                };
            primaryWeaponMuzzle[] = {
                "BWA3_muzzle_snds_Rotex_IIA",
                "CUP_muzzle_snds_socom762rc"
            };
            
            headgear[] += {
                BW_CAMO_ITEM(BWA3_Booniehat)
            };

            addItemsToVest[] = {
                "BWA3_20Rnd_762x51_G28_AP", 7,
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                "BWA3_20Rnd_762x51_G28_LR", 8,
            };
        };
    };
};
