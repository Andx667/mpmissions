class CfgLoadouts {
    class CommonBlufor {
        uniform[] = {"ttt_Uniform_plain_BW_Flecktarn"};
        vest[] = {"ttt_Vest_Heavy_Black_US_Desert"};
        backpack[] = {"B_AssaultPack_rgr"};
        primary[] = {
            "arifle_SPAR_01_khk_F","","ACE_DBAL_A3_Red","optic_Hamr_khk_F","bipod_01_F_khk"
            };
        secondary[] = {
            "hgun_P07_khk_F","16Rnd_9x21_Mag","","",""
            };
        launcher[] = {"","","","",""};
        magazines[] = {
            "16Rnd_9x21_Mag",3,
            "HandGrenade",2,
            "ACE_M84",2,
            "SmokeShellGreen",
            "SmokeShell",2
            };
        items[] = {
            "ACE_fieldDressing",15,
            "ACE_packingBandage",15,
            "ACE_CableTie",2,
            "ACE_MapTools",
            "ACE_Flashlight_XL50",
            "ACE_tourniquet",4,
            "ACE_quikclot",10,
            "ACE_IR_Strobe_Item",
            "ACRE_PRC152"
            };
        binoculars[] = {"Binocular"};
        compass[] = {"ItemCompass"};
        goggles[] = {""};
        gps[] = {""};
        headgear[] = {""};
        map[] = {"ItemMap"};
        nvgs[] = {""};
        watch[] = {"ItemWatch"};
        insignia[] = {""};
        slingHelmet[] = {"","",""};
        identity[] = {""};
    };
    class B_Soldier_F: CommonBlufor {
        roledescription = "Schütze";

        magazines[] += {
            "30Rnd_556x45_Stanag_red", 9
        };

        items[] += {
            "ItemMicroDAGR",
            //"ttt_Helmet_2_BW_Flecktarn"
        };
    };

    class B_Soldier_TL_F: CommonBlufor {
        roledescription = "Truppführer 1";

        magazines[] += {
            "30Rnd_556x45_Stanag_Tracer_Red", 9
        };

        items[] = {
            "ACRE_PRC152",
            "ItemAndroid",
            "ttt_Helmet_2_BW_Flecktarn"
            };
    };

    class B_soldier_PG_F: CommonBlufor {
        roledescription = "Truppführer 2";

        magazines[] += {
            "30Rnd_556x45_Stanag_Tracer_Red", 9
            };

        items[] += {
            "ACRE_PRC152",
            "ItemAndroid",
            "ttt_Helmet_5_BW_Flecktarn"
            };
    };

    class B_Soldier_SL_F: CommonBlufor {
        roledescription = "Gruppenführer";

        magazines[] += {
            "30Rnd_556x45_Stanag_Tracer_Red", 9
            };

        items[] += {
            "ACRE_PRC152",
            "ItemAndroid",
            "ace_flags_red",
            "ttt_Helmet_1_BW_Flecktarn"
            };
    };
};