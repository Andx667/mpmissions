class Loadouts {
    baseDelay = 1;
    perPlayerDelay = 1;
    handleRadios = 1;
    resetLoadout = 1;
    randomizationMode = 1;
    customGear = 300;
    customGearAllowedCategories[] = {
        //"uniform",
        // "vest",
        // "primaryWeapon",
        // "primaryWeaponOptics",
        // "primaryWeaponUnderbarrel",
        // "primaryWeaponPointer",
        // "goggles",
        // "headgear"
    };

    class Type {
        class B_Survivor_F {
            uniform[] = {
                "BWA3_Uniform_Fleck",
                //"BWA3_Uniform_sleeves_Fleck", //handled by AWX
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
            backpack = "BWA3_AssaultPack_Fleck";
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
                "BWA3_DM32_Green",
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                "BWA3_G36A3",
                "BWA3_G36A3_green",
                "BWA3_G36A3_tan"
                };
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
                "BWA3_G_Combat_black",
                "BWA3_G_Combat_clear",
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
            nvgoggles = "";

            binoculars = "";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "";
        };

        //Rifleman
        class B_Soldier_F: B_Survivor_F {
            addItemsToVest[] += {
                "BWA3_30Rnd_556x45_G36_AP", 8,
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon[] = {
                "BWA3_G36A3_AG40",
                "BWA3_G36A3_AG40_green",
                "BWA3_G36A3_AG40_tan",
                };
            vest = "BWA3_Vest_Grenadier_Fleck";
            addItemsToVest[] += {
                "1Rnd_HE_Grenade_shell", 8,
            };
            addItemsToBackpack[] += {
                "1Rnd_HE_Grenade_shell", 12,
                "1Rnd_SmokeRed_Grenade_shell", 5,
                "1Rnd_Smoke_Grenade_shell", 5,
            };
        };

        class B_soldier_exp_F: B_Soldier_GL_F {

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "BWA3_PzF3_Tandem_Loaded";
            backpack = "";
        };

        //Radio Operator / FO /JTAC
        class B_W_RadioOperator_F: B_Soldier_F {
            class Rank {
                class PRIVATE {
                    backpack = "";

                    addItemsToBackpack[] += {
                        "", 2, //LR Radio
                        "", 10, //Purple Smoke
                        "ACE_flags_blue",
                        "ACE_flags_yellow",
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
        class B_soldier_AT_F: B_Soldier_F {
            secondaryWeapon = "BWA3_CarlGustav";
            secondaryWeaponOptics = "BWA3_optic_CarlGustav";
            secondaryWeaponMagazine = "BWA3_CarlGustav_HEAT";

            backpack = "";
        };

        class B_soldier_AAT_F: B_Soldier_F {
            backpack = "BWA3_PatrolPack_Fleck";

            addItemsToBackpack[] = {
                "BWA3_CarlGustav_HEAT", 2,
                "BWA3_CarlGustav_HEDP", 2,
            };

        };

        class B_Soldier_A_F: B_Soldier_F {
            backpack = "BWA3_PatrolPack_Fleck";

            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                "BWA3_120Rnd_762x51_Tracer_soft", 6,
                "ACE_EntrenchingTool",
            };
            binoculars = "Binocular";
        };

        class B_soldier_UAV_F: B_Soldier_F {
            backpack = "CUP_B_GER_Pack_Flecktarn";

            addItemsToVest[] += {
                "AN_PRC152",
                "ItemAndroid",
            };

            gps = "B_UavTerminal";

            class RANK {
                class PRIVATE {
                };
                class CORPORAL: PRIVATE {
                    addItemsToBackpack[] = {
                        "UA_Item_PG7VL_AT", 2,
                    };
                };
                class SERGEANT: CORPORAL {
                    addItemsToBackpack[] = {
                        "ACE_UAVBattery", 10,
                        "ITC_Land_B_AR2i_Packed"
                    };
                };
            }
        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F: B_Survivor_F {
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

            vest = "BWA3_Vest_Marksman_Fleck";

            addItemsToVest[] += {
                "BWA3_20Rnd_762x51_G28_AP", 7,
                "ACE_Rangecard",
            };
            addItemsToBackpack[] = {
                "BWA3_20Rnd_762x51_G28_LR", 8,
            };
            binoculars = "ACE_Yardage450";
        };

        //Autorifleman
        class B_soldier_AR_F: B_Survivor_F {
            vest = "BWA3_Vest_MachineGunner_Fleck";

            primaryWeapon = "BWA3_MG4";
            primaryWeaponMagazine = "BWA3_200Rnd_556x45_Tracer";

            addItemsToVest[] += {
                "BWA3_200Rnd_556x45_Tracer", 2,
            };
            addItemsToBackpack[] = {
                "BWA3_200Rnd_556x45_Tracer", 2,
            };
        };

        //MMG
        class B_HeavyGunner_F: B_Survivor_F {
            vest = "BWA3_Vest_MachineGunner_Fleck";

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

        class B_soldier_AA_F: B_Soldier_F {
            secondaryWeapon = "BWA3_Fliegerfaust";
            secondaryWeaponMagazine = "BWA3_Fliegerfaust_Mag";
            backpack = "";

        };

        class B_soldier_AAA_F: B_Soldier_F {
            backpack = "BWA3_PatrolPack_Fleck";
            addItemsToBackpack[] = {
                "BWA3_Fliegerfaust_Mag", 3,
            };
        };

        //Unterstützung
        class B_engineer_F: B_Soldier_F {
            backpack = "BWA3_PatrolPack_Fleck";

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

        class B_soldier_mine_F: B_Soldier_F {
            backpack = "BWA3_PatrolPack_Fleck";

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
            //uniform = "BWA3_Uniform_Crew_Fleck";
            vest = "BWA3_Vest_Fleck";
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
                    addItemsToUniform[] += {
                        "ACE_MicroDagr",
                    };
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                    };
                    binoculars = "ACE_Vector";

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

        class B_sniper_F: B_Survivor_F {

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
            uniform = "BWA3_Uniform2_Fleck";
            vest = "BWA3_Vest_Fleck";
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

        class B_Helipilot_F: B_helicrew_F{
            uniform = "BWA3_Uniform_Helipilot";
            headgear[] += {
                "BWA3_TopOwl_nvg",
            };
            addItemsToBackpack[] += {
                "ACRE_PRC117F",
            };
        };

        //Aufklärer
        class B_Patrol_Soldier_TL_F: B_soldier_M_F {

        };

        class B_Patrol_Soldier_UAV_F: B_soldier_M_F {

        };

        class B_Patrol_Soldier_M_F: B_soldier_M_F {

        };

        //Führung
        class B_Soldier_TL_F: B_Survivor_F {
            vest = "BWA3_Vest_Leader_Fleck";
            primaryWeapon[] = {
                //"BWA3_G36KA3",
                //"BWA3_G36KA3_green",
                //"BWA3_G36KA3_tan",
                "BWA3_G36A3_AG40",
                "BWA3_G36A3_AG40_green",
                "BWA3_G36A3_AG40_tan"
            };

            primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_Tracer";

            addItemsToUniform[] += {
                "ACE_MicroDAGR",
                "ACE_key_west"
            };
            addItemsToVest[] += {
                "BWA3_30Rnd_556x45_G36_Tracer", 8,
                "ACRE_PRC152"
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
            primaryWeapon[] = {
                "BWA3_G36KA3",
                "BWA3_G36KA3_green",
                "BWA3_G36KA3_tan",
                "BWA3_G36KA4",
                "BWA3_G36KA4_green",
                "BWA3_G36KA4_tan"
                };

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
            handgunWeapon = "BWA3_P2A1";
            handgunWeaponMagazine = "BWA3_1Rnd_Flare_Multistar_Green";

            addItemsToBackpack[] += {
                "BWA3_1Rnd_Flare_Multistar_Green", 10,
                "BWA3_1Rnd_Flare_Multistar_Red", 10
            };
        };

        //Medics
        class B_medic_F: B_Soldier_F {
            vest = "BWA3_Vest_Medic_Fleck"; 

            class Rank {

                class PRIVATE { //Squad Level Medic
                    backpack = "BWA3_AssaultPack_Fleck_Medic";
                    addItemsToVest[] += {
                        //"kat_basicDiagnostic",
                        "kat_Pulseoximeter", 3,
                        "ACE_surgicalKit",
                    };

                    addItemsToBackpack[] += {
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
                    backpack = "BWA3_TacticalPack_Fleck_Medic";

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
                    addItemsToBackpack[] = {
                        "Toolkit",
                        "ace_flags_yellow",
                        "ace_spraypaintYellow",
                    };
                };
                class SERGEANT: PRIVATE {
                    backpack = "CUP_B_Kombat_Radio_Olive";
                    addItemsToVest[] += {
                        "ItemAndroid",
                    };
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                    };

                };
            };
        };

        //SOF
        class B_recon_F {
            uniform = "BWA3_Uniform_Crye_G3_Fleck";
            vest = "BWA3_Vest_JPC_Rifleman_Fleck";
            headgear = "BWA3_Booniehat_Fleck";

            primaryWeapon[] = {
                "BWA3_G38K",
                "BWA3_G38K_tan"
            };
            primaryWeaponMagazine = "";
            primaryWeaponOptics[] = {
                "BWA3_optic_ZO4x30_MicroT2",
                "BWA3_optic_ZO4x30_MicroT2_brown",
                "BWA3_optic_ZO4x30_RSAS",
                "BWA3_optic_ZO4x30_RSAS_brown",
            };
            primaryWeaponPointer[] = {
                "BWA3_acc_LLM01_irlaser",
                "BWA3_acc_LLM01_irlaser_green",
                "BWA3_acc_LLM01_irlaser_tan",
            };
            primaryWeaponMuzzle[] += {
                "BWA3_muzzle_snds_Rotex_IIIC_tan",
                "BWA3_muzzle_snds_Rotex_IIIC_green",
                "BWA3_muzzle_snds_Rotex_IIIC",
                "BWA3_muzzle_snds_QDSS_tan",
                "BWA3_muzzle_snds_QDSS_green",
                "BWA3_muzzle_snds_QDSS",
            };
            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };
            addItemsToVest[] += {
                "BWA3_30Rnd_556x45_G36_AP", 8,
                "ItemAndroid",
            };
            addItemsToBackpack[] += {
                "BWA3_OpsCore_FastMT_SOF_Fleck",
            };
            binoculars = "ACE_Vector";

        };

        class B_recon_LAT_F: B_recon_F {
            secondaryWeapon = "BWA3_RGW90_Loaded";
        };

        class B_recon_medic_F: B_recon_F {
            backpack = "BWA3_Kitbag_Fleck_Medic";
            primaryWeapon[] = {"BWA3_G38C","BWA3_G38C_tan"};
            //ToDo
            addItemsToVest[] += {
                "ACE_surgicalKit",
            };
            addItemsToBackpack[] += {
                //M
                "ACE_packingBandage", 45,
                "ACE_elasticBandage", 45,
                //A
                "kat_aatKit", 6,
                "kat_chestSeal", 6,
                "kat_larynx", 6,
                //R
                "kat_pocketBVM",
                //C
                "ACE_SalineIV", 8,
                "ACE_SalineIV_500", 4,
                "ACE_SalineIV_250", 4,
                "kat_IV_16", 8,
                "kat_IO_FAST", 2,
                "kat_epinephrineIV", 12,
                //H
                "kat_eaca", 5,
                "kat_txa", 10,
                "kat_fentanyl", 8,
                "kat_ketamine", 8,
                "kat_atropine", 8,
                //Admin
                "ACE_Suture", 45,
            };

        };

        class B_recon_exp_F: B_recon_F {
            backpack = "BWA3_PatrolPack_Fleck";
            goggles[] = {
                "CUP_G_ESS_BLK_Scarf_Face_Blk",
                "CUP_G_ESS_BLK_Scarf_Blk",
                "CUP_G_ESS_BLK_Scarf_Blk_Beard",
                "CUP_G_ESS_BLK_Scarf_Blk_Beard_Blonde",
                "CUP_G_ESS_BLK_Dark",
                ""
                };
            //ToDo
        };

        class B_recon_JTAC_F: B_recon_F {
            vest = "BWA3_Vest_JPC_Radioman_Fleck";
            backpack = "CUP_B_Kombat_Radio_Olive";

            addItemsToBackpack[] = {
                "ACRE_PRC117F",
                "Laserbatteries",
                "ACE_Vector",
            };
            binoculars = "Laserdesignator_03";
        };

        class B_recon_TL_F: B_recon_JTAC_F {
            primaryWeapon[] = {
                "BWA3_G38K_AG40",
                "BWA3_G38K_AG40_tan",
            };
            vest = "BWA3_Vest_JPC_Leader_Fleck";

            addItemsToBackpack[] += {
                "1Rnd_HE_Grenade_shell", 15,
                "1Rnd_SmokeRed_Grenade_shell", 5,
                "1Rnd_Smoke_Grenade_shell", 5,
            };
        };

        class B_recon_M_F {
            headgear = "BWA3_Booniehat_Fleck";
            primaryWeapon = "BWA3_G28";
            primaryWeaponMagazine = "BWA3_20Rnd_762x51_G28_AP";
            primaryWeaponOptics[] = {
                "BWA3_optic_PMII_DMR_MicroT1_front",
                "BWA3_optic_PMII_DMR_MicroT1_rear",
            };

            primaryWeaponUnderbarrel[] = {
                "BWA3_bipod_Harris",
                //"BWA3_bipod_Harris_green",
                "BWA3_bipod_Harris_tan",
            };
            primaryWeaponMuzzle = "BWA3_muzzle_snds_Rotex_IIA";
            addItemsToUniform[] += {
                "ACE_MicroDAGR",
            };
            addItemsToVest[] += {
                "BWA3_20Rnd_762x51_G28_AP", 7,
                "ACE_Rangecard",
                "ItemAndroid",
            };
            addItemsToBackpack[] = {
                "BWA3_20Rnd_762x51_G28_LR", 8,
                "BWA3_OpsCore_FastMT_SOF_Fleck",
            };
        };
    };
};
