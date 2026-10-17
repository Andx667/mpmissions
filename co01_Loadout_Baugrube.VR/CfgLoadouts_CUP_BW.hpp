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
    loadoutGroups[] = {"Infantry", "Crews", "Combat Support", "Logistics", "SOF"}; // Reihenfolge im Loadout-Menü
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
        class BluFor {};
    };

    // Faction: Bundeswehr (German Armed Forces) - modern day (~2010s-2020s)
    class Type {
        class B_Survivor_F {
            loadoutGroup = "Infantry";

            uniform[] = {
                BW_CAMO_ITEM(BWA3_Uniform) // sleeves-Variante handled by AWX
            };
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Rifleman)
            };
            backpack[] = {
                BW_CAMO_ITEM(BWA3_AssaultPack)
            };
            headgear[] = {
                "BWA3_OpsCore_FastMT_Peltor",
                BW_CAMO_ITEM(BWA3_OpsCore_FastMT_Peltor)
            };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "kat_Painkiller", 2,
                "ACE_elasticBandage", 10,
                "ACE_packingBandage", 10,
                "ACE_Quikclot", 10,
                "ACE_tourniquet", 4,
                "kat_chestSeal", 2,
                "BWA3_15Rnd_9x19_P8"
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
                // "BWA3_optic_ZO4x30_MicroT2",
                // "BWA3_optic_ZO4x30_MicroT2_brown",
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
                "USP_MFRAME_TAN",
                "USP_MFRAME_TAN2",
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
                "ACE_EntrenchingTool"
            };
        };

        class B_Soldier_GL_F: B_Soldier_F { //Grenadier
            primaryWeapon[] = {BW_RIFLE_GL};
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Grenadier)
            };
            addItemsToVest[] += {
                "1Rnd_HE_Grenade_shell", 8
            };
            addItemsToBackpack[] += {
                "1Rnd_HE_Grenade_shell", 12,
                "1Rnd_SmokeRed_Grenade_shell", 5,
                "1Rnd_Smoke_Grenade_shell", 5
            };
        };

        // TTT-Wiki Breacher (Minimal): ACE_wirecutter, ACE_Clacker, ACE_DefusalKit
        class B_soldier_exp_F: B_Soldier_F { //Breacher
            //Zweite Primärwaffe (KJW's Two Primary Weapons), wird ohne die Mod ignoriert
            secondPrimaryWeapon = "CUP_sgun_M1014_Entry";
            secondPrimaryWeaponMuzzle = "";
            secondPrimaryWeaponPointer = "CUP_acc_Flashlight";
            secondPrimaryWeaponOptics = "";
            secondPrimaryWeaponMagazine = "CUP_6Rnd_12Gauge_Pellets_No00_Buck";
            secondPrimaryWeaponUnderbarrel = "";
            secondPrimaryWeaponUnderbarrelMagazine = "";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit"
            };
            addItemsToBackpack[] += {
                "tsp_breach_block_mag", 3,
                "tsp_breach_package_mag", 3,
                "CUP_6Rnd_12Gauge_Pellets_No00_Buck", 3,
                "ACE_wirecutter"
            };
        };

        class B_soldier_LAT2_F: B_Soldier_F { //LAT
            secondaryWeapon = "BWA3_PzF3_Tandem_Loaded";
        };

        class B_W_RadioOperator_F: B_Soldier_F { //Radio Operator / FO /JTAC
            class Rank {
                class PRIVATE { //Funker
                    backpack = "ttt_backpacks_radio_olive";

                    addItemsToBackpack[] += {
                        "ACRE_PRC117F", // LR, kompatibel mit PRC-152
                        "ACRE_SEM70", // LR, begrenzt kompatibel mit SEM52SL
                        "BWA3_DM32_Purple", 6,
                        "ACE_flags_blue",
                        "ACE_flags_yellow"
                    };
                };

                class CORPORAL: PRIVATE { //FO
                    addItemsToUniform[] += {
                        "ACE_microDAGR",
                    };
                    addItemsToVest[] += {
                        "ACRE_PRC152"
                    };

                    binoculars = "ACE_Vector";
                };

                class SERGEANT: CORPORAL { //JTAC, Laserdesignator statt Vector
                    addItemsToBackpack[] += {
                        "Laserbatteries", 2
                    };

                    binoculars = "Laserdesignator_01_khk_F";
                };

                class LIEUTENANT: SERGEANT {};
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
                "BWA3_CarlGustav_HEDP", 2
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
                "ITC_Land_B_AR2i_Packed",
                "tt_drone_tarp_Green" // Tactical Tarps, markiert den Landeplatz
            };
            gps = "B_UavTerminal";
        };

        class B_soldier_AA_F: B_Soldier_F {
            secondaryWeapon = "BWA3_Fliegerfaust";
            secondaryWeaponMagazine = "BWA3_Fliegerfaust_Mag";
        };

        class B_soldier_AAA_F: B_Soldier_F {
            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
            };
            addItemsToBackpack[] = {
                "BWA3_Fliegerfaust_Mag", 3
            };
        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F: B_Survivor_F { //DMR / ZF
            primaryWeapon[] = {
                "BWA3_G27",
                "BWA3_G27_tan"
            };
            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30i_MicroT2",
                "BWA3_optic_ZO4x30i_MicroT2_sand",
                "BWA3_optic_ZO4x30i_RSAS",
                "BWA3_optic_ZO4x30i_RSAS_sand"
            };

            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan"
            };
            primaryWeaponMagazine = "BWA3_20Rnd_762x51_G28_AP";

            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Marksman)
            };

            addItemsToVest[] += {
                "BWA3_20Rnd_762x51_G28_AP", 7,
                "ACE_Rangecard"
            };
            addItemsToBackpack[] = {
                "BWA3_20Rnd_762x51_G28_LR", 8
            };
            binoculars = "Rangefinder";
        };

        // G28 statt G27, Basis der B_Patrol_*-Klassen
        class B_Sharpshooter_F: B_soldier_M_F { //Sharpshooter / ZF-Schütze G28
            primaryWeapon = "BWA3_G28";
            primaryWeaponOptics[] = {
                "BWA3_optic_PMII_DMR_MicroT1_front",
                "BWA3_optic_PMII_DMR_MicroT1_rear"
            };

            addItemsToVest[] += {
                "BWA3_optic_NSV600" // nur für G28, beim G27 des B_soldier_M_F nicht kompatibel
            };
        };

        class B_soldier_AR_F: B_Survivor_F { //Autorifleman / MG4
            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_MachineGunner)
            };

            primaryWeapon = "BWA3_MG4";
            primaryWeaponMagazine = "BWA3_200Rnd_556x45_Tracer";

            addItemsToVest[] += {
                "BWA3_200Rnd_556x45_Tracer", 2,
                "BWA3_optic_NSV600"
            };
            addItemsToBackpack[] = {
                "BWA3_200Rnd_556x45_Tracer", 2
            };
        };

        class B_soldier_AAR_F: B_Soldier_F { //Autorifleman Assistent / Munitionsträger MG4
            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
            };

            addItemsToBackpack[] += { // ACE_EntrenchingTool kommt vom B_Soldier_F
                "ACE_SpareBarrel",
                "BWA3_200Rnd_556x45_Tracer", &
            };
            binoculars = "Rangefinder";
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
                "BWA3_optic_ZO4x30i_sand"
            };
            addItemsToVest[] += {
                "BWA3_120Rnd_762x51_Tracer_soft", 2
            };
            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                "BWA3_120Rnd_762x51_Tracer_soft", 2
            };
        };

        //Unterstützung
        // TTT-Wiki Pionier (Minimal): ACE_VMH3, ACE_DefusalKit, ACE_EntrenchingTool (von B_Soldier_F),
        // ACE_Clacker, mts_cutter_folding_saw, ACE_wirecutter
        class B_engineer_F: B_Soldier_F { //Pionier
            loadoutGroup = "Combat Support";

            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
            };

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit"
            };
            addItemsToBackpack[] += {
                "ACE_VMH3",
                "mts_cutter_folding_saw",
                "ACE_wirecutter",
                "DemoCharge_Remote_Mag", 3
            };

            goggles[] = {
                "CUP_G_ESS_KHK_Scarf_Face_Tan",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "CUP_G_ESS_KHK_Scarf_Tan",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_BLK",
                ""
            };

            // CORPORAL/SERGEANT führen wie B_Soldier_TL_F/B_Soldier_SL_F
            class Rank {
                class PRIVATE {};

                class CORPORAL: PRIVATE { //Truppführer
                    vest[] = {
                        BW_CAMO_ITEM(BWA3_Vest_Leader)
                    };

                    addItemsToUniform[] += {
                        "ACE_microDAGR",
                        "ACE_key_west"
                    };
                    addItemsToVest[] += {
                        "ACRE_PRC152"
                    };
                    addItemsToBackpack[] += {
                        "ACE_SpraypaintRed",
                        "ACE_SpraypaintGreen",
                        "ACE_SpraypaintBlack",
                        "ACE_flags_red",
                        "ACE_flags_green",
                        "ACE_flags_purple"
                    };

                    binoculars = "ACE_Vector";
                    gps = "ItemAndroid";
                };

                class SERGEANT: CORPORAL {}; //Gruppenführer
            };
        };

        // TTT-Wiki EOD (Minimal): ACE_VMH3, ACE_DefusalKit, ACE_EntrenchingTool (von B_Soldier_F),
        // ACE_Clacker, mts_cutter_folding_saw (+ iedd_item_notebook, nur wenn IEDD-IEDs verbaut sind)
        // Ideal: rote/grüne Sprühfarbe, 5 orange Marker
        class B_soldier_mine_F: B_Soldier_F { //EOD
            loadoutGroup = "Combat Support";

            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
            };

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit"
            };
            addItemsToBackpack[] += {
                "ACE_VMH3",
                "mts_cutter_folding_saw",
                "ACE_SpraypaintRed",
                "ACE_SpraypaintGreen",
                "ace_marker_flags_orange", 5,
                "DemoCharge_Remote_Mag", 3
            };

            // CORPORAL/SERGEANT führen wie B_Soldier_TL_F/B_Soldier_SL_F, rote/grüne Sprühfarbe hat der EOD schon
            class Rank {
                class PRIVATE {};

                class CORPORAL: PRIVATE { //Truppführer
                    vest[] = {
                        BW_CAMO_ITEM(BWA3_Vest_Leader)
                    };

                    addItemsToUniform[] += {
                        "ACE_microDAGR",
                        "ACE_key_west"
                    };
                    addItemsToVest[] += {
                        "ACRE_PRC152"
                    };
                    addItemsToBackpack[] += {
                        "ACE_SpraypaintBlack",
                        "ACE_flags_red",
                        "ACE_flags_green",
                        "ACE_flags_purple"
                    };

                    binoculars = "ACE_Vector";
                    gps = "ItemAndroid";
                };

                class SERGEANT: CORPORAL {}; //Gruppenführer
            };
        };

        // Minenräumdrohne (ED-1E) statt Rucksack, Minensuche über die Drohne statt ACE_VMH3
        // Bewusste Ausnahme vom TTT-EOD-Minimum (kein ACE_VMH3, Klappspaten, Klappsäge):
        // arbeitet immer im Team mit einem EOD/Pionier, der diese Ausrüstung trägt
        class B_soldier_UGV_02_Demining_F: B_soldier_mine_F { //EOD mit Drohne
            backpack = "B_UGV_02_Demining_backpack_F";

            addItemsToVest[] += { // die Drohne hat keinen Stauraum
                "ACE_SpraypaintRed",
                "ACE_SpraypaintGreen"
            };
            addItemsToBackpack[] = {}; // kein ACE_VMH3, Klappsäge, orange Marker und ACE_EntrenchingTool

            gps = "B_UavTerminal";

            // keine Ränge: leere Klasse ersetzt die Ränge vom B_soldier_mine_F, sonst käme deren
            // Truppführer-Ausrüstung mit (ItemAndroid statt UAV-Terminal, Flaggen im Drohnenrucksack)
            class Rank {};
        };

        class B_crew_F: B_Survivor_F { //Fahrzeugbesatzung
            loadoutGroup = "Crews";
            Uniform[] = {
                BW_CAMO_ITEM(BWA3_Uniform_Crew)
            };

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
                "BWA3_30Rnd_556x45_G36_AP", 3
            };

            goggles[] = {
                "CUP_G_ESS_BLK",
                "CUP_G_ESS_BLK_Facewrap_Black",
                "CUP_G_ESS_BLK_Scarf_Grn",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                ""
            };

            class Rank {
                class PRIVATE {};

                class CORPORAL: PRIVATE {}; //MKF, Richtschütze

                // Kommandant führt wie B_Soldier_SL_F, aber ohne Markierungsmittel (Flaggen/Sprühfarbe)
                class SERGEANT: CORPORAL { //Fahrzeugkommandant
                    primaryWeapon[] = {BW_CARBINE};
                    addItemsToUniform[] += {
                        "ACE_microDAGR",
                        "ACE_key_west"
                    };
                    addItemsToVest[] += {
                        "ACRE_PRC152"
                    };

                    binoculars = "ACE_Vector";
                    gps = "ItemAndroid";
                };

                class LIEUTENANT: SERGEANT { //Zugführer
                    backpack = "ttt_backpacks_radio_olive";

                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                        "ACE_flags_purple"
                    };
                };
            };
        };

        //Mörser - kommt aus der Mission (Kiste/Fahrzeug), die Besatzung trägt nur Tabellen und Funk
        class B_support_AMort_F: B_Soldier_F { //Ladeschütze
            loadoutGroup = "Combat Support";

            addItemsToVest[] += {
                "ACE_artilleryTable",
                "ACE_PlottingBoard"
            };
        };

        class B_support_Mort_F: B_support_AMort_F {
            class Rank {
                class PRIVATE {}; //Richtschütze

                class CORPORAL: PRIVATE {}; //Geschützführer

                // führt wie B_Soldier_SL_F, zusätzlich 1 LR-Funkgerät pro Trupp
                class SERGEANT: CORPORAL { //Truppführer
                    vest[] = {
                        BW_CAMO_ITEM(BWA3_Vest_Leader)
                    };
                    backpack = "ttt_backpacks_radio_olive";

                    addItemsToUniform[] += {
                        "ACE_microDAGR",
                        "ACE_key_west"
                    };
                    addItemsToVest[] += {
                        "ACRE_PRC152"
                    };
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                        "ACRE_SEM70",
                        "ACE_SpraypaintRed",
                        "ACE_SpraypaintGreen",
                        "ACE_SpraypaintBlack",
                        "ACE_flags_red",
                        "ACE_flags_green",
                        "ACE_flags_purple"
                    };

                    binoculars = "ACE_Vector";
                    gps = "ItemAndroid";
                };
            };
        };

        //Pilots
        class B_helicrew_F: B_Survivor_F { //Crew
            loadoutGroup = "Crews";

            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest)
            };
            headgear[] = {
                "BWA3_CrewHelmet_NH90",
                "ttt_Helmet_Buzzard",
                "ttt_Helmet_Eagle",
                "ttt_Helmet_Falcon"
            };

            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle = "";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";

            addItemsToVest[] = {
                "ACRE_SEM52SL"
            };
            goggles = "";
        };

        class B_Helipilot_F: B_helicrew_F { //Pilot
            uniform = "BWA3_Uniform_Helipilot";
            vest = "FIR_pilot_vest";
            headgear[] += {
                "BWA3_TopOwl_nvg"
            };
            addItemsToUniform[] += {
                "ACE_microDAGR" // TTT-Wiki: Wegpunkte für den UH-60 Hatchet
            };
            addItemsToBackpack[] += {
                "ACRE_PRC117F"
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
                "ACE_microDAGR",
                "ACE_key_west"
            };
            addItemsToVest[] += {
                "BWA3_30Rnd_556x45_G36_Tracer", 8,
                "ACRE_PRC152",
                "BWA3_optic_NSV600"
            };
            addItemsToBackpack[] += {
                "ACE_SpraypaintRed",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintBlack",
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
                "ACE_SpraypaintRed",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintBlack",
                "ACE_flags_red",
                "ACE_flags_green",
                "ACE_flags_purple"
            };
        };

        class B_officer_F: B_Soldier_SL_F {};

        //Medics
        // erbt vom B_Survivor_F statt B_Soldier_F: kein ACE_EntrenchingTool und nur 3 Magazine,
        // Rang-Listen werden nur angehängt und können Einträge der Klasse nicht entfernen
        class B_medic_F: B_Survivor_F {
            loadoutGroup = "Logistics";

            vest[] = {
                BW_CAMO_ITEM(BWA3_Vest_Medic)
            };
            addItemsToVest[] = { // = statt +=, ohne BWA3_DM51A1 vom B_Survivor_F (Schutzstatus), nur der PRIVATE trägt sie
                "BWA3_DM25", 2,
                "ACRE_SEM52SL",
                "BWA3_DM32_Green",
                "BWA3_30Rnd_556x45_G36_AP", 3,
                "BWA3_optic_NSV600"
            };

            class Rank {
                class PRIVATE { //Squad Level Medic
                    backpack[] = {
                        BW_CAMO_ITEM_SUFFIX(BWA3_AssaultPack,Medic)
                    };
                    addItemsToVest[] += {
                        "BWA3_DM51A1", 2, // Gruppensanitäter kämpft in der Gruppe mit, ab CORPORAL entfällt das (= statt +=)
                        "BWA3_30Rnd_556x45_G36_AP", 5, // Gruppensanitäter: 8 Magazine wie der Soldat
                        //"kat_basicDiagnostic",
                        "kat_Pulseoximeter", 3,
                        "ACE_surgicalKit"
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
                        "ACE_Chemlight_IR", 2
                    };
                };

                class CORPORAL: PRIVATE { //Platoon Level Medic
                    backpack[] = {
                        BW_CAMO_ITEM_SUFFIX(BWA3_TacticalPack,Medic)
                    };

                    addItemsToVest[] = { // = statt +=, damit die 5 Zusatzmagazine und BWA3_DM51A1 des PRIVATE wegfallen
                        "kat_Pulseoximeter", 6,
                        "ACE_surgicalKit",
                        "ACE_flags_blue",
                        "ACE_SpraypaintBlue"
                    };

                    addItemsToBackpack[] += {
                        //A
                        "kat_larynx", 2,
                        "kat_ncdKit", 2,
                        //C
                        "ACE_salineIV", 5,
                        "kat_amiodarone", 6,
                        //Tactical Tarps - Triage-Markierung
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green"
                        //"kat_aed",
                        //HIGH-TECH
                        //"kat_lidocaine", 8
                    };
                };

                // SERGEANT/LIEUTENANT ersetzen die Rucksackliste. Aus Platzgründen unter dem TTT-Minimum des
                // Gruppensanitäters: nur 1 ACE_salineIV_250, kein ACE_salineIV_500, kat_BVM statt kat_pocketBVM
                class SERGEANT: CORPORAL { //Company Level Medic
                    backpack = "ttt_backpack_medic_rgr_01"; //BWA3_Kitbag_Fleck_Medic

                    addItemsToBackpack[] = {
                        //M
                        "ACE_packingBandage", 45,
                        "ACE_elasticBandage", 45,
                        "ACE_tourniquet", 12,
                        //A
                        "kat_aatKit", 6,
                        "kat_accuvac",
                        "kat_chestSeal", 8,
                        "kat_larynx", 8,
                        "kat_ncdKit", 6,
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
                        "ACE_adenosine", 4,
                        "kat_lidocaine", 10,
                        "kat_amiodarone", 6,
                        "kat_atropine", 6,
                        //H
                        "kat_eaca", 6,
                        "kat_txa", 12,
                        "kat_fentanyl", 6,
                        "kat_ketamine", 6,
                        "kat_Penthrox", 6,
                        "kat_naloxone", 8,
                        "kat_Painkiller", 4,
                        "ACE_morphine", 8,
                        "kat_nitroglycerin", 6,
                        "kat_norepinephrine", 6,
                        "kat_phenylephrine", 6,
                        //Admin
                        "ACE_suture", 30,
                        //Tactical Tarps - Triage-Markierung
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green"
                    };
                };

                // TTT Arzt: Blue-Force-Tracking, LR-Funk entfällt aus Platzgründen (Ausnahme vom Minimum)
                class LIEUTENANT: SERGEANT { //Battalion Level Medic
                    addItemsToVest[] += { // zusätzliches SR, Flagge und Sprühfarbe kommen schon vom CORPORAL
                        "ACRE_PRC152"
                    };

                    addItemsToBackpack[] = {
                        //M
                        "ACE_packingBandage", 30,
                        "ACE_elasticBandage", 30,
                        "ACE_tourniquet", 12,
                        //A
                        "kat_aatKit", 6,
                        "kat_accuvac",
                        "kat_chestSeal", 8,
                        "kat_larynx", 8,
                        "kat_ncdKit", 6,
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
                        "ACE_adenosine", 4,
                        "kat_lidocaine", 10,
                        "kat_amiodarone", 6,
                        "kat_atropine", 6,
                        //H
                        "kat_eaca", 6,
                        "kat_txa", 12,
                        "kat_fentanyl", 6,
                        "kat_ketamine", 6,
                        "kat_Penthrox", 6,
                        "kat_naloxone", 8,
                        "kat_Painkiller", 4,
                        "ACE_morphine", 8,
                        "kat_nitroglycerin", 6,
                        "kat_norepinephrine", 6,
                        "kat_phenylephrine", 6,
                        //Admin
                        "ACE_suture", 30,
                        //Tactical Tarps - Triage-Markierung
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green"
                    };

                    gps = "ItemAndroid";
                };
            };
        };

        class B_soldier_repair_F: B_Soldier_F { //Instandsetzer
            loadoutGroup = "Logistics";

            backpack[] = {
                BW_CAMO_ITEM(BWA3_PatrolPack)
            };

            addItemsToBackpack[] += {
                "ToolKit",
                "tt_repair_tarp_Black" // Tactical Tarps, nur in Schwarz
            };

            class Rank {
                class PRIVATE {}; //Instandsetzer

                // führt wie B_Soldier_SL_F, zusätzlich LR-Funk zu den Fahrzeugkommandanten
                class SERGEANT: PRIVATE { //Instandsetzungstruppführer
                    vest[] = {
                        BW_CAMO_ITEM(BWA3_Vest_Leader)
                    };
                    backpack = "ttt_backpacks_radio_olive";

                    addItemsToUniform[] += {
                        "ACE_microDAGR",
                        "ACE_key_west"
                    };
                    addItemsToVest[] += {
                        "ACRE_PRC152"
                    };
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                        "ACE_SpraypaintRed",
                        "ACE_SpraypaintGreen",
                        "ACE_SpraypaintBlack",
                        "ACE_flags_red",
                        "ACE_flags_green",
                        "ACE_flags_purple"
                    };

                    binoculars = "ACE_Vector";
                    gps = "ItemAndroid";
                };
            };
        };

        //Aufklärer
        // G28, Waffe und Ausrüstung kommen vom B_Sharpshooter_F
        class B_Patrol_Soldier_M_F: B_Sharpshooter_F {
            loadoutGroup = "Combat Support";

            primaryWeaponMuzzle = "BWA3_muzzle_snds_Rotex_IIA"; // der reguläre B_Sharpshooter_F hat keinen

            addItemsToBackpack[] += { // Unterschall für leise Einsätze, zusätzlich zu den LR-Magazinen
                "BWA3_20Rnd_762x51_G28_SD", 4
            };
        };

        // Patrol-Rollen außer _M_: Ausrüstung und Ränge vom regulären Gegenstück, dessen Gewehr (BW_RIFLE)
        // mit QDSS-Schalldämpfer und SD-Munition. Die Westen-Liste ersetzt jeweils die Magazine der Klasse.
        class B_Patrol_Soldier_UAV_F: B_soldier_UAV_F { //Drohnenbediener
            loadoutGroup = "Combat Support";

            primaryWeaponMuzzle[] = {
                "BWA3_muzzle_snds_QDSS_green",
                "BWA3_muzzle_snds_QDSS_tan",
                "BWA3_muzzle_snds_QDSS"
            };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_SD";

            addItemsToVest[] = { // = statt +=, SD- statt AP-Magazine
                "BWA3_DM25", 2,
                "BWA3_DM51A1", 2,
                "ACRE_SEM52SL",
                "BWA3_DM32_Green",
                "BWA3_30Rnd_556x45_G36_SD", 8,
                "BWA3_optic_NSV600"
            };
        };

        class B_Patrol_Soldier_TL_F: B_Soldier_SL_F { //Truppführer, Ausrüstung wie B_Soldier_SL_F
            loadoutGroup = "Combat Support";

            primaryWeapon[] = {BW_RIFLE};
            primaryWeaponMuzzle[] = {
                "BWA3_muzzle_snds_QDSS_green",
                "BWA3_muzzle_snds_QDSS_tan",
                "BWA3_muzzle_snds_QDSS"
            };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_SD";

            addItemsToVest[] = { // = statt +=, SD- statt Leuchtspur-Magazine
                "BWA3_DM25", 2,
                "BWA3_DM51A1", 2,
                "ACRE_SEM52SL",
                "BWA3_DM32_Green",
                "BWA3_30Rnd_556x45_G36_SD", 8,
                "ACRE_PRC152",
                "BWA3_optic_NSV600"
            };
        };

        class B_sniper_F: B_Survivor_F {
            loadoutGroup = "Combat Support";

            primaryWeapon = "BWA3_G29";
            primaryWeaponOptics[] = {
                "BWA3_optic_M5Xi_Tremor3_MicroT2",
                "BWA3_optic_M5Xi_MSR_MicroT2"
            };
            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan"
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
                "BWA3_10Rnd_86x70_G29", 7,
                "ACE_Rangecard"
            };
            addItemsToBackpack[] = {
                "BWA3_10Rnd_86x70_G29", 8
            };
            binoculars = "Rangefinder";
        };

        class B_spotter_F: B_Patrol_Soldier_M_F {
            uniform[] = {
                BW_CAMO_ITEM(BWA3_Uniform_Ghillie)
            };
            binoculars = "ACE_Vector";
        };

        class B_Patrol_Soldier_AT_F: B_soldier_AT_F { //AT mit RGW90 statt Carl Gustav
            loadoutGroup = "Combat Support";

            primaryWeaponMuzzle[] = {
                "BWA3_muzzle_snds_QDSS_green",
                "BWA3_muzzle_snds_QDSS_tan",
                "BWA3_muzzle_snds_QDSS"
            };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_SD";

            secondaryWeapon = "BWA3_RGW90_Loaded";
            secondaryWeaponOptics = "";
            secondaryWeaponMagazine = "";

            addItemsToVest[] = { // = statt +=, SD- statt AP-Magazine
                "BWA3_DM25", 2,
                "BWA3_DM51A1", 2,
                "ACRE_SEM52SL",
                "BWA3_DM32_Green",
                "BWA3_30Rnd_556x45_G36_SD", 8,
                "BWA3_optic_NSV600"
            };
            addItemsToBackpack[] = { // = statt +=, keine Carl-Gustav-Munition
                "ACE_EntrenchingTool"
            };
        };

        class B_Patrol_Engineer_F: B_engineer_F { //Pionier, Ränge wie B_engineer_F
            primaryWeaponMuzzle[] = {
                "BWA3_muzzle_snds_QDSS_green",
                "BWA3_muzzle_snds_QDSS_tan",
                "BWA3_muzzle_snds_QDSS"
            };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_SD";

            addItemsToVest[] = { // = statt +=, SD- statt AP-Magazine
                "BWA3_DM25", 2,
                "BWA3_DM51A1", 2,
                "ACRE_SEM52SL",
                "BWA3_DM32_Green",
                "BWA3_30Rnd_556x45_G36_SD", 8,
                "BWA3_optic_NSV600",
                "ACE_Clacker",
                "ACE_DefusalKit"
            };
        };

        // immer Zugsanitäter (B_medic_F CORPORAL), ohne Ränge, damit keine Kompanie-/Bataillonslisten
        // (kat_X_AED, kat_accuvac usw.) durchkommen
        class B_Patrol_Medic_F: B_medic_F { //Sanitäter
            loadoutGroup = "Combat Support";

            primaryWeaponMuzzle[] = {
                "BWA3_muzzle_snds_QDSS_green",
                "BWA3_muzzle_snds_QDSS_tan",
                "BWA3_muzzle_snds_QDSS"
            };
            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_SD";

            backpack[] = {
                BW_CAMO_ITEM_SUFFIX(BWA3_TacticalPack,Medic)
            };

            addItemsToVest[] = { // = statt +=, SD- statt AP-Magazine, wie Zugsanitäter keine BWA3_DM51A1
                "BWA3_DM25", 2,
                "ACRE_SEM52SL",
                "BWA3_DM32_Green",
                "BWA3_30Rnd_556x45_G36_SD", 3,
                "BWA3_optic_NSV600",
                "kat_Pulseoximeter", 6,
                "ACE_surgicalKit",
                "ACE_flags_blue",
                "ACE_SpraypaintBlue"
            };

            addItemsToBackpack[] = { // B_medic_F PRIVATE + CORPORAL zusammengefasst
                //M
                "ACE_packingBandage", 45,
                "ACE_elasticBandage", 45,
                "ACE_tourniquet", 12,
                //A
                "kat_chestSeal", 8,
                "kat_larynx", 10,
                "kat_ncdKit", 8,
                //R
                "kat_pocketBVM", 3,
                //C
                "ACE_salineIV_250", 4,
                "ACE_salineIV_500", 4,
                "ACE_salineIV", 5,
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
                //Tactical Tarps - Triage-Markierung
                "tt_medic_tarp_Red",
                "tt_medic_tarp_Yellow",
                "tt_medic_tarp_Green"
            };

            class Rank {};
        };

        //SOF - immer Multitarn, unabhängig von BW_CAMO
        class B_recon_F: B_Survivor_F {
            loadoutGroup = "SOF";

            uniform[] = {
                "USP_G3C_MTN",
                "USP_G3C_RS_MTN",
                "USP_G3C_RS2_MTN"
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
                "BWA3_Vest_JPC_Rifleman_Multi"
            };
            backpack[] = {
                "BWA3_AssaultPack_Multi"
            };
            headgear[] = {
                "BWA3_OpsCore_FastMT_SOF_Multi"
            };

            addItemsToVest[] += {
                "BWA3_30Rnd_556x45_G36_AP", 8,
                "BWA3_optic_NSV600"
            };
        };

        class B_recon_LAT_F: B_recon_F {
            secondaryWeapon = "BWA3_RGW90_Loaded";
        };

        // Ränge wie B_medic_F, aber eine Stufe höher: CORPORAL = Gruppe, SERGEANT = Zug, LIEUTENANT = Kompanie,
        // CAPTAIN = Bataillon. Kein PRIVATE: ein Private bekäme nur die Grundausrüstung ohne Sanitätsmaterial.
        // Listen sind Kopien der B_medic_F-Ränge, Änderungen dort hier nachziehen.
        class B_recon_medic_F: B_recon_F {
            addItemsToVest[] = { // = statt +=, nur 3 Magazine statt 8 vom B_recon_F (wie B_medic_F)
                "BWA3_DM25", 2,
                "BWA3_DM51A1", 2,
                "ACRE_SEM52SL",
                "BWA3_DM32_Green",
                "BWA3_30Rnd_556x45_G36_AP", 3,
                "BWA3_optic_NSV600"
            };

            class Rank {
                class CORPORAL { //Squad Level Medic, wie B_medic_F PRIVATE
                    backpack = "BWA3_AssaultPack_Multi_Medic";

                    addItemsToVest[] += {
                        "BWA3_30Rnd_556x45_G36_AP", 5, // Gruppensanitäter: 8 Magazine wie der Soldat
                        "kat_Pulseoximeter", 3,
                        "ACE_surgicalKit"
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
                        "ACE_Chemlight_IR", 2
                    };
                };

                class PRIVATE: CORPORAL {}; //Squad Level Medic, wie B_medic_F PRIVATE - Fallback

                class SERGEANT: CORPORAL { //Platoon Level Medic, wie B_medic_F CORPORAL
                    backpack = "BWA3_TacticalPack_Multi_Medic";

                    addItemsToVest[] = { // = statt +=, damit die 5 Zusatzmagazine des CORPORAL wegfallen
                        "kat_Pulseoximeter", 6,
                        "ACE_surgicalKit",
                        "ACE_flags_blue",
                        "ACE_SpraypaintBlue"
                    };

                    addItemsToBackpack[] += {
                        //A
                        "kat_larynx", 2,
                        "kat_ncdKit", 2,
                        //C
                        "ACE_salineIV", 5,
                        "kat_amiodarone", 6,
                        //Tactical Tarps - Triage-Markierung
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green"
                    };
                };

                // LIEUTENANT/CAPTAIN ersetzen die Rucksackliste. Aus Platzgründen unter dem TTT-Minimum des
                // Gruppensanitäters: nur 1 ACE_salineIV_250, kein ACE_salineIV_500, kat_BVM statt kat_pocketBVM
                class LIEUTENANT: SERGEANT { //Company Level Medic, wie B_medic_F SERGEANT
                    backpack = "ttt_backpack_medic_rgr_01";

                    addItemsToBackpack[] = {
                        //M
                        "ACE_packingBandage", 45,
                        "ACE_elasticBandage", 45,
                        "ACE_tourniquet", 12,
                        //A
                        "kat_aatKit", 6,
                        "kat_chestSeal", 8,
                        "kat_larynx", 8,
                        "kat_ncdKit", 6,
                        //R
                        "kat_BVM", 3,
                        "kat_oxygenTank_150",
                        //C
                        "ACE_BloodIV", 8,
                        "ACE_BloodIV_500", 3,
                        "ACE_BloodIV_250", 3,
                        "ACE_salineIV_250",
                        "kat_IV_16", 10,
                        "kat_IO_FAST", 2,
                        "kat_epinephrineIV", 12,
                        "ACE_epinephrine", 12,
                        "ACE_adenosine", 4,
                        "kat_atropine", 6,
                        //H
                        "kat_eaca", 6,
                        "kat_txa", 12,
                        "kat_fentanyl", 6,
                        "kat_ketamine", 6,
                        "kat_Penthrox", 6,
                        "kat_naloxone", 8,
                        "kat_Painkiller", 4,
                        "ACE_morphine", 8,
                        "kat_nitroglycerin", 6,
                        "kat_norepinephrine", 6,
                        "kat_phenylephrine", 6,
                        //Admin
                        "ACE_suture", 30,
                        //Tactical Tarps - Triage-Markierung
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green"
                    };
                };

                // TTT Arzt: Blue-Force-Tracking, LR-Funk entfällt aus Platzgründen (Ausnahme vom Minimum)
                class CAPTAIN: LIEUTENANT { //Battalion Level Medic, wie B_medic_F LIEUTENANT
                    addItemsToVest[] += { // zusätzliches SR, Flagge und Sprühfarbe kommen schon vom SERGEANT
                        "ACRE_PRC152"
                    };

                    addItemsToBackpack[] = {
                        //M
                        "ACE_packingBandage", 30,
                        "ACE_elasticBandage", 30,
                        "ACE_tourniquet", 12,
                        //A
                        "kat_aatKit", 6,
                        "kat_accuvac",
                        "kat_chestSeal", 8,
                        "kat_larynx", 8,
                        "kat_ncdKit", 6,
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
                        "ACE_adenosine", 4,
                        "kat_lidocaine", 10,
                        "kat_amiodarone", 6,
                        "kat_atropine", 6,
                        //H
                        "kat_eaca", 6,
                        "kat_txa", 12,
                        "kat_fentanyl", 6,
                        "kat_ketamine", 6,
                        "kat_Penthrox", 6,
                        "kat_naloxone", 8,
                        "kat_Painkiller", 4,
                        "ACE_morphine", 8,
                        "kat_nitroglycerin", 6,
                        "kat_norepinephrine", 6,
                        "kat_phenylephrine", 6,
                        //Admin
                        "ACE_suture", 30,
                        //Tactical Tarps - Triage-Markierung
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green"
                    };

                    gps = "ItemAndroid";
                };
            };
        };

        class B_recon_exp_F: B_recon_F { //Breacher, wie B_soldier_exp_F
            //Zweite Primärwaffe (KJW's Two Primary Weapons), wird ohne die Mod ignoriert
            secondPrimaryWeapon = "CUP_sgun_M1014_Entry";
            secondPrimaryWeaponMuzzle = "";
            secondPrimaryWeaponPointer = "CUP_acc_Flashlight";
            secondPrimaryWeaponOptics = "";
            secondPrimaryWeaponMagazine = "CUP_6Rnd_12Gauge_Pellets_No00_Buck";
            secondPrimaryWeaponUnderbarrel = "";
            secondPrimaryWeaponUnderbarrelMagazine = "";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit"
            };
            addItemsToBackpack[] += { // B_recon_F erbt nicht von B_Soldier_F, daher Wirecutter hier
                "ACE_wirecutter",
                "tsp_breach_block_mag", 3,
                "tsp_breach_package_mag", 3,
                "CUP_6Rnd_12Gauge_Pellets_No00_Buck", 3
            };
        };

        class B_recon_JTAC_F: B_recon_F { //JTAC, wie beim B_W_RadioOperator_F SERGEANT
            vest[] = {
                "BWA3_Vest_JPC_Radioman_Multi"
            };
            goggles[] += {
                "G_Aviator"
            };

            addItemsToUniform[] += {
                "ACE_microDAGR"
            };
            addItemsToVest[] += {
                "ACRE_PRC152" // zusätzliches SR
            };
            addItemsToBackpack[] += {
                "Laserbatteries", 2
            };

            binoculars = "Laserdesignator_01_khk_F";
        };

        // führt wie B_Soldier_TL_F, microDAGR/PRC-152 kommen vom B_recon_JTAC_F
        class B_recon_TL_F: B_recon_JTAC_F { //Truppführer
            vest[] = {
                "BWA3_Vest_JPC_Leader_Multi"
            };

            addItemsToUniform[] += {
                "ACE_key_west"
            };
            addItemsToBackpack[] = { // = statt +=, keine Laserbatterien vom B_recon_JTAC_F
                "ACE_SpraypaintRed",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintBlack",
                "ACE_flags_red",
                "ACE_flags_green",
                "ACE_flags_purple"
            };

            binoculars = "ACE_Vector";
            gps = "ItemAndroid";
        };

        // G27 wie B_soldier_M_F, das G28 trägt der B_Recon_Sharpshooter_F
        class B_recon_M_F: B_recon_F {
            primaryWeapon[] = {
                "BWA3_G27",
                "BWA3_G27_tan"
            };
            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30i_MicroT2",
                "BWA3_optic_ZO4x30i_MicroT2_sand",
                "BWA3_optic_ZO4x30i_RSAS",
                "BWA3_optic_ZO4x30i_RSAS_sand"
            };

            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                "BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan"
            };
            primaryWeaponMuzzle[] = {
                "BWA3_muzzle_snds_Rotex_IIA",
                "CUP_muzzle_snds_socom762rc"
            };
            primaryWeaponMagazine = "BWA3_20Rnd_762x51_G28_AP";

            headgear[] += {
                "BWA3_Booniehat_Multi"
            };

            addItemsToVest[] = { // = statt +=, damit keine G36-Magazine vom B_recon_F kommen
                "BWA3_20Rnd_762x51_G28_AP", 7,
                "ACE_Rangecard",
                "BWA3_DM25", 2,
                "BWA3_DM51A1", 2,
                "BWA3_DM32_Green",
                "ACRE_SEM52SL"
            };
            addItemsToBackpack[] = {
                "BWA3_20Rnd_762x51_G28_LR", 8
            };
            binoculars = "Rangefinder"; // wie B_soldier_M_F
        };

        // G28 statt G27, wie B_Sharpshooter_F
        class B_Recon_Sharpshooter_F: B_recon_M_F { //Sharpshooter / ZF-Schütze G28
            primaryWeapon = "BWA3_G28";
            primaryWeaponOptics[] = {
                "BWA3_optic_PMII_DMR_MicroT1_front",
                "BWA3_optic_PMII_DMR_MicroT1_rear"
            };

            addItemsToVest[] += {
                "BWA3_optic_NSV600" // nur für G28, beim G27 des B_recon_M_F nicht kompatibel
            };
        };
    };
};
