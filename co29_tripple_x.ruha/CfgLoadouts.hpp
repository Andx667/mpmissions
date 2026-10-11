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
        "primaryWeapon",
        "primaryWeaponOptics",
        "goggles",
    };

    class Type {

        class B_Survivor_F {
            uniform = "U_I_E_Uniform_01_F";
            vest = "V_CarrierRigKBT_01_heavy_EAF_F";
            backpack = "B_AssaultPack_eaf_F";

            addItemsToUniform[] = {
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "acex_intelitems_notepad",
                "ACE_elasticBandage", 10,
                "ACE_packingBandage", 10,
                "ACE_quikClot", 10,
                "kat_chestSeal", 2,
                "ACE_tourniquet", 4,
                "kat_Painkiller", 2,
            };

            addItemsToVest[] = {
                "HandGrenade", 2,
                "SmokeShell", 2,
                "SmokeShellGreen",
                "11Rnd_45ACP_Mag",
                "ACRE_PRC148",
                "ACE_CableTie", 2,
            };

            addItemsToBackpack[] = {
                "G_AirPurifyingRespirator_01_F",
            };

            primaryWeapon[] = {
                "arifle_MSBS65_camo_F",
                "arifle_MSBS65_black_F",
                "arifle_MSBS65_F"
            };

            primaryWeaponMagazine = "30Rnd_65x39_caseless_msbs_mag";
            primaryWeaponMuzzle = "";

            primaryWeaponOptics[] = {
                "optic_ico_01_f",
                "optic_ico_01_black_f",
                "optic_ico_01_camo_f"
            };

            primaryWeaponPointer = "";

            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            secondaryWeaponMuzzle = "";
            secondaryWeaponOptics = "";
            secondaryWeaponPointer = "";
            secondaryWeaponUnderbarrel = "";

            handgunWeapon = "hgun_Pistol_heavy_01_green_F";
            handgunWeaponMagazine = "11Rnd_45ACP_Mag";
            handgunWeaponMuzzle = "";
            handgunWeaponOptics = "";
            handgunWeaponPointer = "";
            handgunWeaponUnderbarrel = "";

            headgear = "H_HelmetHBK_headset_F";

            goggles[] = {
                "USP_RAID_BLK",
                "USP_RAID_BLK2",
                //"USP_RAID_BLK3", red tint is not liked
                "USP_RAID_SMG3_BLK",
                "USP_RAID_SMG3_BLK2",
                "USP_MFRAME_BLK",
                "USP_MFRAME_BLK2",
                //"USP_MFRAME_BLK3",
                "USP_MFRAME_TAN",
                "USP_MFRAME_TAN2",
                //"USP_MFRAME_TAN3",
                "USP_MFRAME_SMG3_BLK",
                "USP_MFRAME_SMG3_BLK2",
                "USP_MFRAME_SMG3_TAN",
                "USP_MFRAME_SMG3_TAN2",
                "USP_CROSSBOW_BLK",
                "USP_CROSSBOW_BLK2",
                "USP_CROSSBOW_TAN",
                "USP_CROSSBOW_TAN2",
                ""
            };

            nvgoggles = "";
            binoculars = "Binocular";
            map = "ItemMap";
            gps = "";
            compass = "ItemCompass";
            watch = "ItemWatch";
            radio = "";
        };

        class B_Soldier_F: B_Survivor_F {
            addItemsToVest[] += {
                "30Rnd_65x39_caseless_msbs_mag", 8,
            };
        };

        class B_Soldier_GL_F: B_Soldier_F {
            primaryWeapon[] = {
            };

            addItemsToVest[] += {
            };

            addItemsToBackpack[] = {
                "1Rnd_Smoke_Grenade_shell", 5,
                "1Rnd_SmokeRed_Grenade_shell", 5,
            };
        };

        class B_soldier_LAT2_F: B_Soldier_F {
            secondaryWeapon[] = {
            };
        };

        class B_W_RadioOperator_F: B_Soldier_F {
            backpack = "B_RadioBag_01_eaf_F";

            addItemsToBackpack[] = {
                "ACRE_PRC117F",
                "SmokeShellPurple", 10,
                "ACE_flags_blue",
                "ACE_flags_yellow",
                "ItemcTab",
            };
        };

        class B_soldier_exp_F: B_Soldier_F {
            primaryWeapon[] = {
                "arifle_MSBS65_UBS_camo_F",
                "arifle_MSBS65_UBS_black_F",
                "arifle_MSBS65_UBS_F"
            };
            headgear = "H_HelmetHBK_chops_F";
            backpack = "B_Carryall_eaf_F";

            addItemsToVest[] += {
                "ACE_Clacker",
                "ACE_Defusalkit",
            };

            addItemsToBackpack[] = {
                "Democharge_Remote_Mag", 4,
                "tsp_breach_block_mag", 3,
                "tsp_breach_package_mag", 3,
                "ACE_Wirecutter",
            };
        };

        class B_soldier_M_F: B_Survivor_F {
            primaryWeapon[] = {
                "arifle_MSBS65_Mark_F",
                "arifle_MSBS65_Mark_black_F",
                "arifle_MSBS65_Mark_camo_F",
                "arifle_MSBS65_Mark_sand_F"
            };
            primaryWeaponMagazine = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponOptics[] = {
                "optic_SOS",
                "optic_SOS_khk_F"
            };
            handgunWeapon = "";
            handgunWeaponMagazine = "";

            addItemsToVest[] += {
                "30Rnd_65x39_caseless_msbs_mag_Tracer", 6,
                "ACE_Rangecard",
                "", 2,
            };
            addItemsToBackpack[] = {
                "30Rnd_65x39_caseless_msbs_mag", 8,
            };

            binoculars = "ACE_Yardage450";
        };

        class B_Soldier_AR_F: B_Survivor_F {
            primaryWeapon[] = {
                "LMG_Mk200_black_F",
                "LMG_Mk200_F"
            };
            primaryWeaponMagazine = "200Rnd_65x39_cased_Box_Red";
            primaryWeaponOptics[] = {
                "optic_Aco",
                "optic_ACO_grn",
            };

            addItemsToVest[] += {
                "200Rnd_65x39_cased_Box_Red", 3,
            };
            addItemsToBackpack[] = {
                "200Rnd_65x39_cased_Box_Red", 3,
            };
        };

        class B_HeavyGunner_F: B_Survivor_F {
            vest[] = {
                "",
                "",
                "",
                "",
            };
            backpack = "";

            primaryWeapon[] = {
                "",
                "",
                ""
            };
            primaryWeaponMagazine = "";
            primaryWeaponOptics[] = {
                "",
                "",
                "",
                "",
                ""
            };
            //secondaryWeapon= "dzn_MG_Tripod_M122A1_M240Mount_Carry";

            addItemsToVest[] += {
                "", 4,
                "ACE_SpareBarrel"
            };
        };

        class B_Soldier_A_F: B_Soldier_F {
          
            addItemsToBackpack[] = {
                "", 8,
                "ACE_SpareBarrel",
                "ACE_Sandbag_empty", 3,
                "ACE_EntrenchingTool"
            };
        };

        class B_soldier_UAV_F: B_Soldier_F {
            addItemsToBackpack[] = {
                "ITC_Land_B_AR2i_Packed",
                "ACE_UAVBattery", 10,
                "tt_drone_tarp_Yellow"
            };
        };

        //Führung
        class B_Soldier_TL_F: B_Survivor_F {

            primaryWeaponMagazine = "30Rnd_65x39_caseless_msbs_mag_Tracer";

            addItemsToVest[] += {
                "30Rnd_65x39_caseless_msbs_mag_Tracer", 8,
            };
            addItemsToBackpack[] = {
                "1Rnd_Smoke_Grenade_shell", 5,
                "1Rnd_SmokeRed_Grenade_shell", 5,
                "ACE_SpraypaintRed",
                "ACE_SpraypaintGreen",
                "ACE_Flags_red",
                "ACE_Flags_green",
            };

            binoculars = "ACE_Vector";
        };

        class B_Soldier_SL_F: B_Survivor_F {
            primaryWeaponMagazine = "30Rnd_65x39_caseless_msbs_mag_Tracer";

            addItemsToVest[] += {
                "ACRE_PRC152",
                "30Rnd_65x39_caseless_msbs_mag_Tracer", 8,
            };

            addItemsToBackpack[] = {
                "ACE_SpraypaintRed",
                "ACE_SpraypaintBlack",
                "ACE_SpraypaintGreen",
                "ACE_Flags_red",
                "ACE_Flags_green",
            };

            binoculars = "ACE_Vector";
            gps = "ItemAndroid";
        };

        class B_officer_F: B_Soldier_SL_F {
            uniform = "U_I_E_Uniform_01_officer_F";
        };

        class B_crew_F: B_Survivor_F {
            addItemsToVest[] += {
                "30Rnd_65x39_caseless_msbs_mag", 3,
            };
            backpack = "";
            headgear = "ttt_Helmet_Bronze_Vehiclecrew";
            goggles[] = {
            };

            class Rank {
                class PRIVATE {};
                class CORPORAL: PRIVATE {};
                class SERGEANT: CORPORAL {
                    addItemsToVest[] += {
                        "ACRE_PRC152",
                    };
                    gps = "ItemAndroid";
                };
                class LIEUTENANT: SERGEANT {
                    backpack = "B_RadioBag_01_eaf_F";
                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                    };

                };
            };
        };

        class B_W_Soldier_CBRN_F: B_Survivor_F {
        };

        //Sani
        //Medics
        class B_medic_F: B_Soldier_F {
            vest = "V_CarrierRigKBT_01_light_EAF_F";
            addItemsToBackpack[] = {};

            class Rank {

                class PRIVATE { //Squad Level Medic
                    backpack = "ttt_backpacks_medic_rgr_02";

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
                        "ACE_salineIV_500", 8,
                        "kat_IV_16", 8,
                        "ACE_epinephrine", 12,
                        "ACE_adenosine", 4,
                        //H
                        "kat_Penthrox", 6,
                        "kat_naloxone", 8,
                        "kat_Painkiller", 4,
                        "ACE_morphine", 8,
                        "ACE_suture", 60,
                        //Admin
                        "ACE_surgicalKit",
                        "kat_Pulseoximeter", 3,
                        "ACE_suture", 30,
                    };
                };

                class CORPORAL: PRIVATE { //Platoon Level Medic
                    addItemsToVest[] = {
                        "kat_Pulseoximeter", 3,
                        "ace_flags_blue",
                        "ACE_SpraypaintBlue",
                        "ACE_surgicalKit",
                        "30Rnd_65x39_caseless_msbs_mag", 3,
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
                        "ACE_suture", 30,
                    };
                };

                class SERGEANT: CORPORAL { //Company Level Medic

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
                        "ACE_suture", 30,
                        "ACE_suture", 30,
                        "ACE_PersonalAidKit",
                        "tt_medic_tarp_Red",
                        "tt_medic_tarp_Yellow",
                        "tt_medic_tarp_Green"
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

        class B_helicrew_F: B_Survivor_F {
            vest = "V_CarrierRigKBT_01_EAF_F";
            backpack = "";

            primaryWeapon = "";

            handgunWeapon = "hgun_Pistol_heavy_01_green_F";
            handgunWeaponMagazine = "11Rnd_45ACP_Mag";

            addItemsToVest[] = {
                "11Rnd_45ACP_Mag", 2,
                "SmokeShellPurple", 3,
                "SmokeShellYellow", 3,
                "ACE_HandFlare_Green",
            };

            headgear = "H_CrewHelmetHeli_I_E";
        };

        class B_Helipilot_F: B_helicrew_F  {
            backpack = "B_AssaultPack_blk";

            addItemsToBackpack[] = {
                "ACRE_PRC117F",

            };

            headgear[] = {
                "H_PilotHelmetHeli_I_E",
                "ttt_helmet_falcon",
            };
            gps = "ItemAndroid";
        };
    };
};
