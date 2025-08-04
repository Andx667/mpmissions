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
        "primaryWeapon",
        "primaryWeaponOptics",
        "primaryWeaponUnderbarrel",
        "goggles",
        "headgear"
    };

    class Side {
        class Blufor {
            uniform[] = {
                "gm_ge_uniform_soldier_90_flk",
                "gm_ge_uniform_soldier_rolled_90_flk",
                //"gm_ge_uniform_soldier_tshirt_90_flk",
            };
            vest[] = {
                "gm_ge_vest_armor_90_rifleman_flk",
            };
            backpack = "";
            headgear[] = {
                "gm_ge_headgear_m92_flk",
            };

            addItemsToUniform[] = {
               "ACE_MapTools",
                "ACE_Flashlight_KSF1",
                "acex_intelitems_notepad",
                LIST_15("ACE_ElasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("kat_chestSeal"),
                LIST_2("kat_Painkiller"),
            };
            addItemsToVest[] = {
                LIST_2("gm_handgrenade_frag_dm51a1"),
                LIST_2("gm_smokeshell_wht_dm25"),
                "gm_ge_facewear_m65",
            };
            addItemsToBackpack[] = {};

            primaryWeapon[] = {
                "gm_g36a1_blk",
            };
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";
            primaryWeaponMagazine = "gm_30Rnd_556x45mm_B_DM11_g36_blk";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";
            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            handgunWeapon[] = {};
            handgunWeaponMagazine = "";

            goggles[] = {
                //"gm_headgear_foliage_summer_forest_01",
                //"gm_headgear_foliage_summer_forest_02",
                //"gm_headgear_foliage_summer_forest_03",
                //"gm_headgear_foliage_summer_forest_04",
                //"gm_headgear_foliage_summer_grass_01",
                //"gm_headgear_foliage_summer_grass_02",
                //"gm_headgear_foliage_summer_grass_03",
                //"gm_headgear_foliage_summer_grass_04"
                };
            nvgoggles = "";

            binoculars = "gm_ferod16_oli";
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
                LIST_7("gm_30Rnd_556x45mm_B_DM11_g36_blk"),
                "ACE_EntrenchingTool",
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            backpack = "gm_ge_army_backpack_90_flk";

            addItemsToBackpack[] += {
                LIST_20("gm_1rnd_40x46mm_he_dm91"),
                LIST_5("gm_1rnd_40x46mm_smoke_dm35"),
                "ACE_wirecutter",
                "mts_cutter_folding_saw",
            };
        };

        class B_soldier_exp_F: B_Soldier_F {
            backpack = "gm_ge_army_backpack_90_flk";
            vest = "gm_ge_vest_armor_90_demolition_flk";

            addItemsToVest[] += {
                "ACE_DefusalKit",
                "ACE_Clacker",
            };
            addItemsToBackpack[] += {
                "ACE_wirecutter",
                "mts_cutter_folding_saw",
                LIST_6("gm_explosive_petn_charge"),
            };
        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "gm_pzf3_blk";
            secondaryWeaponMagazine = "gm_1Rnd_60mm_heat_dm22_pzf3";
        };

        class TTT_B_RadioOperator_F: B_Soldier_F {
            backpack = "gm_ge_backpack_sem35_oli";

            addItemsToVest[] += {
                "ACRE_SEM70",
            };
        };
        class B_soldier_AT_F: B_Soldier_F {
        };

        class B_soldier_AAT_F: B_Soldier_F {
            //backpack = "gm_milan_launcher_weaponBag";
        };

        class B_soldier_AAR_F: B_Soldier_F {
            backpack = "gm_ge_army_backpack_90_flk";

            addItemsToBackpack[] += {
                "ACE_Sparebarrel",
                "ACE_EntrenchingTool",
                LIST_5("gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn"),
            };
        };

        class B_Soldier_A_F: B_Soldier_F {

        };

        class B_soldier_UAV_F: B_Soldier_F {

        };

        // These dont inherit from the basic rifleman
        class B_soldier_M_F {
            primaryWeapon = "gm_g3sg1_oli";
            primaryWeaponMagazine = "gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk";
            primaryWeaponOptics = "gm_diavari_da_stanagClaw_oli";
            primaryWeaponUnderbarrel = "gm_g3_bipod_blk";

            addItemsToVest[] += {
                LIST_7("gm_20Rnd_762x51mm_B_T_DM21A2_g3_blk"),
                "ACE_Rangecard",
            };

        };

        //Autorifleman
        class B_soldier_AR_F {
            primaryWeapon = "gm_mg3_blk";
            primaryWeaponMagazine = "gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn";

            vest = "gm_ge_vest_armor_90_machinegunner_flk";

            addItemsToVest[] += {
                "ACE_Sparebarrel",
                LIST_2("gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn"),
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
        class B_Soldier_TL_F {
            addItemsToVest[] += {
                "ACE_Flags_red",
            };
        };

        class B_Soldier_SL_F: B_Soldier_TL_F {
           vest = "gm_ge_vest_armor_90_leader_flk";

           //secondaryWeapon = "gm_p2a1_blk";

            addItemsToVest[] += {
                "ACRE_SEM52SL",
                "gm_smokeshell_grn_dm21",
                LIST_7("gm_30Rnd_556x45mm_B_T_DM21_g36_blk"),
                "mts_whistle_FOX40",
            };
        };

        class B_officer_F: B_Soldier_SL_F {

        };

        class TTT_B_FO_F: B_Soldier_F {

        };

        //Medics
        class B_medic_F {

            class Rank {

                class PRIVATE {
                    vest = "gm_ge_vest_armor_90_crew_flk";
                    //backpack = "gm_ge_backpack_satchel_80_san";

                    addItemsToVest[] += {

                    };
                };

                class CORPORAL: PRIVATE {
                    vest = "gm_ge_vest_armor_90_medic_flk";
                    backpack = "gm_ge_army_backpack_90_flk";
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
