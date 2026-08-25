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
    randomizationMode = 1;
    customGear = 300;
    //customGear = "(_this select 0) distance2D (getMarkerPos 'respawn') < 50";
    customGearAllowedCategories[] = {
        "uniform",
        "headgear",
        "goggles",
        //"primaryWeaponOptics",
    };

    class Side {
        class Blufor {
        };
    };

    class Type {
        class B_Survivor_F {
            uniform[] = {
                //Desert
                // "CUP_U_B_CZ_DST_NoKneepads",
                // "CUP_U_B_CZ_DST_Kneepads_Sleeve",
                // "CUP_U_B_CZ_DST_TShirt",
                // "CUP_U_B_CZ_DST_Kneepads", //MOUT
                //Woodland
                "CUP_U_B_CZ_WDL_NoKneepads",
                "CUP_U_B_CZ_WDL_Kneepads_Gloves",
                "CUP_U_B_CZ_WDL_TShirt",
                //"CUP_U_B_CZ_WDL_Kneepads", //MOUT
                };
            vest[] = {
                //Black
                // "CUP_V_CZ_NPP2006_nk_black",
                // "CUP_V_CZ_NPP2006_vz95_black",
                // "CUP_V_CZ_NPP2006_ok_black",
                //Desert
                // "CUP_V_CZ_NPP2006_des",
                // "CUP_V_CZ_NPP2006_nk_des",
                // "CUP_V_CZ_NPP2006_ok_des",
                //Woodland
                "CUP_V_CZ_NPP2006_nk_vz95",
                "CUP_V_CZ_NPP2006_vz95",
                "CUP_V_CZ_NPP2006_ok_vz95",
            };

            backpack[] = {
                "CUP_B_ACRScout_m95",
                };

            headgear[] = {
                //Desert
                // "CUP_H_CZ_Helmet01",
                // "CUP_H_CZ_Helmet02",
                // "CFP_PASGTHelmet_ACRDesert1",
                // "CFP_PASGTHelmet_ACRDesert2",
                //Woodland
                "CUP_H_CZ_Helmet03",
                "CUP_H_CZ_Helmet04",
                "CUP_H_CZ_Helmet07",
                "CUP_H_CZ_Helmet08",
                "CUP_H_CZ_Helmet10",
                "CUP_H_CZ_Helmet09",
                //Special Forces Woodland
                // "CUP_H_CZ_Hat02",
                // "CUP_H_CZ_Hat03",
                // "CUP_H_CZ_Cap_flag",
                // "CUP_H_CZ_Cap_Headphones",
                // "CUP_H_CZ_Cap_rgr",
                //Special Forces Desert
                // "CUP_H_CZ_Booniehat_vz95_des",
                // "CUP_H_CZ_Booniehat_fold_des",
                // "CUP_H_CZ_Cap_khk",
                // "CUP_H_CZ_Cap_Headphones_des",
                // "CUP_H_CZ_Hat04",
                // "CFP_BoonieHat_ACRDesert",
                };

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                LIST_2("kat_Painkiller"),
                LIST_15("ACE_elasticBandage"),
                LIST_15("ACE_packingBandage"),
                LIST_15("ACE_quikclot"),
                LIST_4("ACE_Tourniquet"),
                LIST_2("kat_chestSeal")
            };
            addItemsToVest[] = {
                LIST_2("CUP_HandGrenade_M67"),
                LIST_2("SmokeShell"),
                "SmokeShellGreen",
            };

            primaryWeapon[] = {
                "CUP_CZ_BREN2_556_11",
                "CUP_CZ_BREN2_556_11_Grn",
                "CUP_CZ_BREN2_556_11_Tan",
                };
            primaryWeaponMagazine = "CUP_30Rnd_556x45_PMAG_BLACK";
            primaryWeaponOptics[] = {
                "CUP_optic_ZDDot",
                "CUP_optic_AIMM_ZDDOT_BLK",
                };
            primaryWeaponPointer[] = {
                "CUP_acc_Flashlight",
                "CUP_acc_Flashlight_desert",
                "CUP_acc_Flashlight_wdl",
            };
            primaryWeaponMuzzle = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";

            handgunWeapon = "";
            handgunWeaponMagazine = "";

            goggles = "";
            nvgoggles = "";

            binoculars = "Binocular";
            map = "ItemMap";
            compass = "ItemCompass";
            watch = "ItemWatch";
            gps = "";
            radio = "";
        };

        class B_Soldier_F: B_Survivor_F {
            vest[] = {
                "CUP_V_CZ_vest04", //Rifleman
                "CUP_V_CZ_vest03", //Rifleman heavy
            };

            addItemsToVest[] += {
                LIST_8("CUP_30Rnd_556x45_PMAG_BLACK"),
                "ACRE_PRC343",
            };

        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon = "CUP_launch_M136";
        };

        // Carl Gustav M4/MAAWS (launch_MRAWS_*) moved here from the LAT role - it's a reloadable, crew-served AT
        // weapon rather than a disposable light launcher, so it belongs on a dedicated AT gunner + assistant
        class B_soldier_AT_F: B_Soldier_F {
            backpack = "CUP_B_ACRPara_m95";

            secondaryWeapon = "launch_MRAWS_olive_F";
            secondaryWeaponMagazine = "MRAWS_HE_F";

            addItemsToBackpack[] = {
                LIST_2("MRAWS_HE_F"),
                "MRAWS_HEAT55_F",
            };
        };

        class B_soldier_AAT_F: B_Soldier_F {
            backpack = "CUP_B_ACRPara_m95";

            addItemsToBackpack[] = {
                LIST_3("MRAWS_HE_F"),
                LIST_2("MRAWS_HEAT55_F"),
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            vest[] = {
                "CUP_V_CZ_vest06", //Grenadier
                "CUP_V_CZ_vest05", //Grenadier heavy
            };

            primaryWeapon[] = {
                "CUP_CZ_BREN2_556_14_GL",
                "CUP_CZ_BREN2_556_14_GL_Grn",
                "CUP_CZ_BREN2_556_14_GL_Tan",
            };

            addItemsToVest[] += {
                LIST_8("CUP_1Rnd_HE_M203"),
            };

            addItemsToBackpack[] = {
                LIST_12("CUP_1Rnd_HE_M203"),
                LIST_5("CUP_1Rnd_Smoke_M203"),
                LIST_5("CUP_1Rnd_SmokeRed_M203"),
            };
        };

        class B_soldier_AR_F: B_Soldier_F {
            vest[] = {
                "CUP_V_CZ_vest12", //MG
                "CUP_V_CZ_vest11", //MG heavy
            };
            // TODO: check the inherited CUP_B_ACRScout_m95 actually has room for the extra M249 belts below
            primaryWeapon = "CUP_lmg_m249_pip3";
            primaryWeaponMagazine = "CUP_100Rnd_TE4_Red_Tracer_556x45_M249";
            primaryWeaponOptics[] = {
                "CUP_optic_Elcan_SpecterDR_black",
                "CUP_optic_Elcan_SpecterDR_coyote",
                "CUP_optic_Elcan_SpecterDR_od",
            };

            addItemsToVest[] += {
                LIST_3("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
            };

            addItemsToBackpack[] = {
                LIST_3("CUP_100Rnd_TE4_Red_Tracer_556x45_M249"),
                "ACE_SpareBarrel", //TTT-Wiki: optional for the autorifleman
            };
        };

        //Führung
        class B_Soldier_TL_F: B_Soldier_F {
            vest[] = {
                "CUP_V_CZ_vest08", //Team Leader
                "CUP_V_CZ_vest07", //Team Leader heavy
            };
            backpack = "CFP_Cutters";

            addItemsToVest[] += {
                "ACRE_PRC148",
                "ItemAndroid",
                "ace_flags_green",
                "ace_flags_red",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed",
            };

            addItemsToBackpack[] = {
                LIST_2("SmokeShellGreen"),
                LIST_2("SmokeShellOrange"),
            };

            // TTT-Wiki suggests a rangefinder paired with the ACE_microDAGR GPS for team leaders
            binoculars = "ACE_Vector";
            gps = "ACE_microDAGR";
        };

        // CUP_V_CZ_NPP2006_co_vz95 is labelled "Team Leader" in the supplied classname list, same as vest07/08 -
        // "co" reads like it's meant for command/section-leader use instead, so it's used here for SL; verify
        // in-game which vest is actually intended for TL vs SL and swap if this guess is wrong
        class B_Soldier_SL_F: B_Soldier_TL_F {
            vest = "CUP_V_CZ_NPP2006_co_vz95";

            addItemsToVest[] += {
                "ACRE_PRC152",
                "ace_flags_red",
            };

            addItemsToBackpack[] += {
                "ACE_spraypaintRed",
                "ACE_spraypaintGreen",
                "ACE_spraypaintBlack",
                LIST_3("SmokeShellYellow"),
            };
        };

        class B_officer_F: B_Soldier_SL_F {
            handgunWeapon = "CUP_hgun_Phantom";
            handgunWeaponMagazine = "CUP_18Rnd_9x19_Phantom";
            handgunWeaponPointer = "CUP_acc_CZ_M3X";
        };

        // No dedicated CZ radio backpack/vest classname was supplied. CUP_V_CZ_vest16 ("General Purpose") and the
        // factionless ttt_backpack_radio_coyote (used as the RTO backpack by several other factions in this
        // mission) are used here as placeholders - verify in-game / swap for CZ-specific gear if it exists
        class B_W_RadioOperator_F: B_Soldier_F {
            vest[] = {
                "CUP_V_CZ_vest16",
            };
            backpack = "ttt_backpack_radio_coyote";

            addItemsToVest[] += {
                "ACRE_PRC152",
            };

            addItemsToBackpack[] = {
                LIST_2("ACRE_PRC117F"),
                "ace_flags_blue",
                "ace_flags_yellow",
                //TTT-Wiki optional
                "ItemcTab",
                "ACRE_VHF30108SPIKE",
            };
        };

        //Pionier
        class B_engineer_F: B_Soldier_F {
            vest[] = {
                "CUP_V_CZ_vest18", //Engineer
            };
            backpack = "CUP_B_ACRScout_m95";

            handgunWeapon = "ACE_VMH3";
            handgunWeaponMagazine = "";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_DefusalKit",
                "mts_cutter_folding_saw",
                "iedd_item_notebook", //TTT-Wiki: only needed if IEDD-built IEDs are used in the mission
            };

            addItemsToBackpack[] = {
                LIST_3("DemoCharge_Remote_Mag"),
                LIST_3("tsp_breach_block_mag"),
                LIST_3("tsp_breach_package_mag"),
                "ACE_Wirecutter",
                "ACE_EntrenchingTool",
            };
        };

        //Sanitäter
        class B_medic_F: B_Soldier_F {
            vest[] = {
                "CUP_V_CZ_vest10", //Medic
                "CUP_V_CZ_vest09", //Medic heavy
                "CUP_V_CZ_vest13", //Medic alt
            };

            class Rank {

                class PRIVATE {
                    backpack = "ttt_backpack_medic_rgr_02";

                    addItemsToVest[] += {
                        "kat_basicDiagnostic",
                        LIST_2("kat_Pulseoximeter"),
                        "ACE_SurgicalKit",
                    };

                    addItemsToBackpack[] = {
                        //M
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        LIST_30("ACE_quikclot"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_30("ACE_Suture"),
                        //A
                        LIST_8("kat_larynx"),
                        LIST_6("kat_ncdKit"),
                        //R
                        LIST_8("kat_chestSeal"),
                        LIST_3("kat_pocketBVM"),
                        //C
                        LIST_8("kat_IV_16"),
                        LIST_8("ACE_SalineIV"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_4("ACE_SalineIV_250"),
                        LIST_16("ACE_Epinephrine"),
                        LIST_4("ACE_adenosine"),
                        //H
                        LIST_8("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        LIST_8("kat_naloxone"),
                        LIST_6("kat_Penthrox"),
                        "ACE_Bodybag",
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",

                    };
                };

                //Zugsanitäter (Medic/Doctor)
                class CORPORAL: PRIVATE {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                        "ItemAndroid",
                    };
                    addItemsToBackpack[] += {
                        //Tactical Tarps (tacticaltrainingteam.github.io/tactical-tarps/medic)
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green",
                    };
                };

                //Arzt (Doctor)
                class SERGEANT: CORPORAL {
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                    };
                };
            };
        };


        class B_soldier_M_F: B_Soldier_F {
            primaryWeapon[] = {
                "CUP_srifle_SVD",
                "CUP_srifle_SVD_des",
                "CUP_srifle_SVD_wdl"
                };
            primaryWeaponMagazine = "CUP_10Rnd_762x54_SVD_M";
            primaryWeaponOptics = "CUP_optic_PSO_1";
            primaryWeaponUnderbarrel = "";

            addItemsToVest[] += {
                "ACE_Rangecard",
                LIST_6("CUP_10Rnd_762x54_SVD_M"),
            };

            addItemsToBackpack[] = {
                LIST_4("ACE_10Rnd_762x54_Tracer_mag"),
            };

            binoculars = "ACE_Yardage450"; //TTT-Wiki: rangefinder recommended for the DM
        };

        class B_HeavyGunner_F: B_Soldier_F {
            vest[] = {
                "CUP_V_CZ_vest12", //MG (only one "MG" vest tag was supplied - shared with the 5.56 automatic rifleman)
                "CUP_V_CZ_vest11", //MG heavy
            };
            backpack = "CUP_B_ACRPara_m95";

            primaryWeapon = "CUP_lmg_PKM_B50_vfg";
            primaryWeaponMagazine = "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M";
            primaryWeaponOptics = "";
            primaryWeaponUnderbarrel = "";

            // TTT-Wiki: sidearm is the "Ideal" tier for the machine gunner
            handgunWeapon = "CUP_hgun_Phantom";
            handgunWeaponMagazine = "CUP_18Rnd_9x19_Phantom";

            addItemsToVest[] += {
                LIST_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"),
            };

            addItemsToBackpack[] = {
                "ACE_SpareBarrel",
                LIST_2("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"), 
            };
        };

        //MG-Schütze (Munitionsträger)
        class B_Soldier_A_F: B_Soldier_F {
            backpack = "CUP_B_ACRPara_m95";

            addItemsToBackpack[] = {
                LIST_4("CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Red_M"),
                "ACE_EntrenchingTool",
                "ACE_SpareBarrel",
                //TTT-Wiki optional
                LIST_2("ACE_Sandbag_empty"),
                "dzn_MG_Tripod_Universal_Carry",
            };
        };

        //UAV-Operator
        class B_soldier_UAV_F: B_Soldier_F {
            backpack = "B_Kitbag_rgr";

            addItemsToBackpack[] = {
                LIST_6("ACE_UAVBattery"),
                "ITC_Land_B_AR2i_Packed",
            };

            gps = "B_UavTerminal";
        };

        //Aufklärer (Recon)
        // Built from 5 exported arsenal loadouts. Rifleman, plain Recon and Scout are collapsed into one class
        // per request: primaryWeapon/handgunWeapon and their muzzle/pointer/optic/magazine below are index-paired
        // 3-element arrays (same array length = synced random pick, confirmed behavior for this loadout
        // framework), so a random EVO SMG pick can never end up with BREN2 ammo or vice versa. Vest/uniform
        // container contents are instead a flat union of all three sources' ammo, since addItemsToVest/Backpack
        // elsewhere in this file is never index-paired to a weapon choice - this guarantees compatible spare ammo
        // exists no matter which weapon a given soldier randomizes into.
        class B_recon_F: B_Survivor_F {
            uniform[] = {
                "CUP_U_B_CZ_WDL_Kneepads_Gloves",  //Recon
                "CUP_U_B_CZ_WDL_Kneepads",         //Scout
            };
            vest[] = {
                "CUP_V_CZ_NPP2006_ok_black", //Recon
                "CUP_V_CZ_vest10",           //Scout
            };
            backpack = "CUP_B_ACRPara_m95";

            // The "Special Forces" Woodland/Desert headgear that's been commented out in B_Survivor_F above (never
            // issued to regular soldiers) plus the standard helmets seen in the exported blueprints - reused here
            // for high variety on the role it looks like it was actually staged for
            headgear[] = {
                //Special Forces Woodland
                "CUP_H_CZ_Hat02", //Recon TL
                "CUP_H_CZ_Hat03",
                "CUP_H_CZ_Cap_flag",
                "CUP_H_CZ_Cap_Headphones",
                "CUP_H_CZ_Cap_rgr",
                //Special Forces Desert
                //"CUP_H_CZ_Booniehat_vz95_des",
                //"CUP_H_CZ_Booniehat_fold_des",
                "CUP_H_CZ_Cap_khk",
                //"CUP_H_CZ_Cap_Headphones_des", //Rifleman / Explosive Specialist
                "CUP_H_CZ_Hat04",
                //"CFP_BoonieHat_ACRDesert",
                //Standard helmets
                "CUP_H_CZ_Helmet09", //Recon
                "CUP_H_CZ_Helmet10", //Scout
            };
            // Blueprint goggles plus the same ESS/Facewrap pool already used for B_recon_exp_F in CfgLoadouts_CUP_TTT.hpp
            goggles[] = {
                "CUP_G_ESS_KHK_Scarf_Face_Tan", //Rifleman / Explosive Specialist
                "CUP_G_ESS_BLK_Scarf_White",    //Recon TL / Scout
                "CUP_FR_NeckScarf",             //Recon
                "CUP_G_ESS_BLK_Facewrap_Black",
                "CUP_G_ESS_RGR_Facewrap_Ranger",
                "CUP_G_ESS_RGR_Facewrap_Skull",
                "CUP_G_ESS_KHK_Facewrap_Tan",
                "CUP_G_ESS_RGR_Facewrap_Tropical",
                "CUP_G_ESS_BLK_Scarf_Face_Blk",
                "CUP_G_ESS_BLK_Scarf_Face_Grn",
                "",
            };

            addItemsToVest[] += {
                LIST_7("CUP_30Rnd_556x45_Stanag"),
                LIST_3("16Rnd_9x21_Mag"),
                LIST_3("CUP_1Rnd_HEDP_M203"), //for Recon TL's GL-equipped rifle below - not used by this class itself
                "SmokeShell",
                "SmokeShellRed",
                "B_IR_Grenade",
                LIST_2("CUP_HandGrenade_M67"),
            };

            // Single fixed weapon now (EVO SMG / GL-equipped BREN2 removed from the random pool) - scalars instead
            // of index-paired arrays since there's only one option left
            primaryWeapon = "CUP_CZ_BREN2_556_11_ZDDot_Laser";
            primaryWeaponMuzzle = "";
            primaryWeaponPointer = "acc_pointer_IR";
            primaryWeaponOptics = "CUP_optic_ZDDot";
            primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag";

            handgunWeapon = "CUP_hgun_Duty_M3X";
            handgunWeaponMuzzle = "";
            handgunWeaponPointer = "CUP_acc_CZ_M3X";
            handgunWeaponMagazine = "16Rnd_9x21_Mag";

            map = "ItemMap";
            gps = "ACE_microDAGR"; //exported blueprint used the vanilla ItemGPS - swapped for this file's ACE convention
            compass = "ItemCompass";
            watch = "ItemWatch";
            nvgoggles = "CUP_NVG_PVS15_Hide";
        };

        // Same fixed EVO SMG + Phantom pistol as the Rifleman blueprint - kept as a single loadout rather than
        // folded into B_recon_F's random weapon pool, since the export gave this role one specific set, not a
        // randomized one
        class B_recon_exp_F: B_recon_F {
            uniform = "CUP_U_B_CZ_WDL_Kneepads";
            vest = "CUP_V_CZ_NPP2006_vz95";

            primaryWeapon = "CUP_smg_EVO_MRad_Flashlight_Snds";
            primaryWeaponMuzzle = "muzzle_snds_L";
            primaryWeaponPointer = "CUP_acc_Flashlight";
            primaryWeaponOptics = "CUP_optic_MRad";
            primaryWeaponMagazine = "CUP_30Rnd_9x19_EVO";

            handgunWeapon = "CUP_hgun_Phantom_Flashlight_snds";
            handgunWeaponMuzzle = "muzzle_snds_L";
            handgunWeaponPointer = "CUP_acc_CZ_M3X";
            handgunWeaponMagazine = "CUP_18Rnd_9x19_Phantom";

            // Not in the exported blueprint - added to match B_engineer_F / the TTT-Wiki's EOD "Minimal" toolkit,
            // since "Explosive Specialist" is exactly that role
            addItemsToVest[] += {
                LIST_6("CUP_30Rnd_9x19_EVO"),
                LIST_3("CUP_18Rnd_9x19_Phantom"),
                "ACE_Clacker",
                "ACE_DefusalKit",
            };
            addItemsToBackpack[] += {
                "ACE_EntrenchingTool",
                "ACE_wirecutter",
                "mts_cutter_folding_saw",
                "iedd_item_notebook",
                "ACE_VMH3",
            };
        };

        class B_recon_TL_F: B_recon_F {
            uniform = "CUP_U_B_CZ_WDL_Kneepads_Gloves";
            vest = "CUP_V_CZ_NPP2006_co_vz95";
            backpack = "CUP_B_ACRScout_m95_CZ805B";

            primaryWeapon = "CUP_CZ_BREN2_556_11_GL";
            primaryWeaponMuzzle = "";
            primaryWeaponPointer = "acc_pointer_IR";
            primaryWeaponOptics = "CUP_optic_AIMM_ZDDOT_BLK";
            primaryWeaponMagazine = "CUP_30Rnd_556x45_Stanag";

            handgunWeapon = "CUP_hgun_Duty_M3X";
            handgunWeaponMuzzle = "";
            handgunWeaponPointer = "CUP_acc_CZ_M3X";
            handgunWeaponMagazine = "16Rnd_9x21_Mag";

            // Not in the exported blueprint - added to match this file's other Team Leader class
            addItemsToVest[] += {
                "ACRE_PRC148",
                "ItemAndroid",
                "ace_flags_green",
                "ace_flags_red",
                "ACE_SpraypaintGreen",
                "ACE_SpraypaintRed",
            };
            addItemsToBackpack[] += {
                LIST_6("CUP_30Rnd_556x45_PMAG_BLACK"),
                "SmokeShell",
                "SmokeShellRed",
            };
        };

        // B_soldier_M_F's SVD loadout on top of B_recon_F's uniform/vest/backpack/headgear/goggles pool. The
        // weapon-related fields are overridden back to scalars/plain arrays since B_recon_F's primaryWeapon* and
        // handgunWeapon* are index-paired 3-element arrays for a different set of weapons entirely
        class B_recon_M_F: B_recon_F {
            primaryWeapon[] = {
                "CUP_srifle_SVD",
                "CUP_srifle_SVD_des",
                "CUP_srifle_SVD_wdl",
            };
            primaryWeaponMuzzle = "";
            primaryWeaponPointer[] = {
                "CUP_acc_Flashlight",
                "CUP_acc_Flashlight_desert",
                "CUP_acc_Flashlight_wdl",
            };
            primaryWeaponOptics = "CUP_optic_PSO_1";
            primaryWeaponMagazine = "CUP_10Rnd_762x54_SVD_M";
            primaryWeaponUnderbarrel = "";

            // Not in B_soldier_M_F - recon operators carry a sidearm, so it gets the same pistol as Recon/Scout
            handgunWeapon = "CUP_hgun_Duty_M3X";
            handgunWeaponMuzzle = "";
            handgunWeaponPointer = "CUP_acc_CZ_M3X";
            handgunWeaponMagazine = "16Rnd_9x21_Mag";

            addItemsToVest[] += {
                "ACE_Rangecard",
                LIST_6("CUP_10Rnd_762x54_SVD_M"),
            };
            addItemsToBackpack[] += {
                LIST_4("ACE_10Rnd_762x54_Tracer_mag"),
            };

            binoculars = "ACE_Vector"; //TTT-Wiki: rangefinder recommended for the DM
        };

        // B_medic_F's Rank-tiered M.A.R.C.H kit on top of B_recon_F's uniform/vest/headgear/goggles pool -
        // structured exactly like B_medic_F, just nested under the recon base instead of B_Soldier_F
        class B_recon_medic_F: B_recon_F {
            // B_recon_F's own vest pool plus the "Scout/Rear echelon" medic vests that weren't used anywhere else
            vest[] = {
                //"CUP_V_CZ_NPP2006_des",      //Rifleman
                //"CUP_V_CZ_NPP2006_ok_black", //Recon
                "CUP_V_CZ_vest10",           //Scout / Medic
                "CUP_V_CZ_vest17",           //Medic
                "CUP_V_CZ_vest14",           //Medic alt
            };

            class Rank {

                class PRIVATE {
                    backpack = "ttt_backpack_medic_rgr_02";

                    addItemsToVest[] += {
                        "kat_basicDiagnostic",
                        LIST_2("kat_Pulseoximeter"),
                        "ACE_SurgicalKit",
                    };

                    addItemsToBackpack[] = {
                        //M
                        LIST_30("ACE_packingBandage"),
                        LIST_30("ACE_elasticBandage"),
                        LIST_30("ACE_quikclot"),
                        LIST_16("ACE_Tourniquet"),
                        LIST_30("ACE_Suture"),
                        //A
                        LIST_8("kat_larynx"),
                        LIST_6("kat_ncdKit"),
                        //R
                        LIST_8("kat_chestSeal"),
                        LIST_3("kat_pocketBVM"),
                        //C
                        LIST_8("kat_IV_16"),
                        LIST_8("ACE_SalineIV"),
                        LIST_4("ACE_salineIV_500"),
                        LIST_4("ACE_SalineIV_250"),
                        LIST_16("ACE_Epinephrine"),
                        LIST_4("ACE_adenosine"),
                        //H
                        LIST_8("kat_Painkiller"),
                        LIST_8("ACE_morphine"),
                        LIST_8("kat_naloxone"),
                        LIST_6("kat_Penthrox"),
                        "ACE_Bodybag",
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                    };
                };

                class CORPORAL: PRIVATE {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                        "ItemAndroid",
                    };
                    addItemsToBackpack[] += {
                        //Tactical Tarps (tacticaltrainingteam.github.io/tactical-tarps/medic)
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green",
                    };
                };

                class SERGEANT: CORPORAL {
                    addItemsToBackpack[] += {
                        "ACRE_PRC117F",
                    };
                };
            };
        };
    };
};
