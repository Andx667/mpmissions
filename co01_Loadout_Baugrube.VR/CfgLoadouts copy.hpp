class CfgLoadouts {
    //Based on https://static.wixstatic.com/media/a137e0_68e01697dd4b48afb368921f1635a47d~mv2.png
    class CommonBlufor {
        uniform[] = {"UK3CB_BAF_U_CombatUniform_DPMW"};
        vest[] = {
            "UK3CB_BAF_V_Osprey_DPMW2",
            "UK3CB_BAF_V_Osprey_DPMW4",
            "UK3CB_BAF_V_Osprey_DPMW5",
            "UK3CB_BAF_V_Osprey_DPMW6",
            "UK3CB_BAF_V_Osprey_DPMW7",
            "UK3CB_BAF_V_Osprey_DPMW8"
            };
        backpack[] = {""};
        primary[] = {"UK3CB_BAF_L85A2","UK3CB_BAF_556_30Rnd","","UK3CB_BAF_SUSAT",""};
        secondary[] = {"","","","",""};
        launcher[] = {"","","","",""};
        magazines[] = {
            "UK3CB_BAF_SmokeShell",2,
            "UK3CB_BAF_SmokeShellGreen",
            "HandGrenade",2
            };
        items[] = {
            "ACE_fieldDressing",15,
            "ACE_packingBandage",10,
            "ACE_quikclot",10,
            "ACE_Flashlight_XL50",
            "ACE_MapTools",
            "ACE_tourniquet",4,
            "ACRE_PRC343"
            };
        binoculars[] = {""};
        compass[] = {"ItemCompass"};
        goggles[] = {""};
        gps[] = {""};
        headgear[] = {
            "UK3CB_BAF_H_Mk6_DPMW_A",
            "UK3CB_BAF_H_Mk6_DPMW_B",
            "UK3CB_BAF_H_Mk6_DPMW_C",
            "UK3CB_BAF_H_Mk6_DPMW_D",
            "UK3CB_BAF_H_Mk6_DPMW_E",
            "UK3CB_BAF_H_Mk6_DPMW_F"

            };
        map[] = {"ItemMap"};
        nvgs[] = {""};
        watch[] = {"ItemWatch"};
        insignia[] = {""};
        slingHelmet[] = {""};
        identity[] = {""};
    };

    class B_Soldier_F: CommonBlufor {
        roledescription = "Rifleman";
        magazines[] += {
            "UK3CB_BAF_556_30Rnd", 8
        };
    };

    class B_soldier_AAR_F: B_Soldier_F {
        roledescription = "LSW Gunner";
        primary[] = {"UK3CB_BAF_L86A2","UK3CB_BAF_556_30Rnd","","UK3CB_BAF_SUSAT",""};
        magazines[] += {
            "UK3CB_BAF_556_30Rnd",8
        };
    };

    class B_soldier_AR_F: B_Soldier_F {
        roledescription = "LMG Gunner";
        primary[] = {"UK3CB_BAF_L110A2","UK3CB_BAF_556_200Rnd_T","","UK3CB_BAF_SUSAT",""};
    };

    class B_Soldier_GL_F: B_Soldier_F {
        roledescription = "Grenadier";
        vest[] = {"UK3CB_BAF_V_Osprey_DPMW3"};
        backpack = {"UK3CB_BAF_B_Bergen_DPMW_Rifleman_A", "UK3CB_BAF_B_Bergen_DPMW_Rifleman_B"};
        primary[] = {"UK3CB_BAF_L85A2_UGL","UK3CB_BAF_556_30Rnd","","UK3CB_BAF_SUSAT",""};
        magazines[] += {
            "1Rnd_HE_Grenade_shell", 20,
        };
    };
    
    class B_Soldier_TL_F: B_Soldier_F {
        roledescription = "Section 2iC";
        binoculars[] = {"Binocular"};
        items[] += {
            "ace_flags_red",
        };
    };

    class B_Soldier_SL_F: B_Soldier_TL_F {
        roledescription = "Section Commander";
        backpack[] = {"UK3CB_BAF_B_Bergen_DPMT_SL_A"};
        items[] += {
            "ACRE_PRC117F"
        };
    };

    class B_officer_F: B_Soldier_SL_F {
        roledescription = "Platoon Commander";
    };

    class B_medic_F: CommonBlufor {
        roledescription = "Combat Life Saver";
    };
};