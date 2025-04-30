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
    randomizationMode = 2;
    customGear = 300;
    //customGear = "(_this select 0) distance2D (getMarkerPos 'respawn') < 50";
    customGearAllowedCategories[] = {

    };

    class Side {
        class Blufor {
            uniform = "";
            vest = "";
            backpack = "";

            addItemsToUniform[] = {
                };
            addItemsToVest[] = {

                };
            addItemsToBackpack[] = {

                };

            primaryWeapon = "";
            primaryWeaponMagazine = "";
            primaryWeaponMuzzle = "";
            primaryWeaponOptics = "";
            primaryWeaponPointer = "";
            primaryWeaponUnderbarrel = "";
            primaryWeaponUnderbarrelMagazine = "";

            secondaryWeapon = "";
            secondaryWeaponMagazine = "";
            secondaryWeaponMuzzle = "";
            secondaryWeaponOptics = "";
            secondaryWeaponPointer = "";
            secondaryWeaponUnderbarrel = "";

            handgunWeapon = "";
            handgunWeaponMagazine = "";
            handgunWeaponMuzzle = "";
            handgunWeaponOptics = "";
            handgunWeaponPointer = "";
            handgunWeaponUnderbarrel = "";

            headgear = "";
            goggles = "";
            nvgoggles = "";
            binoculars = "";
            map = "";
            gps = "";
            compass = "";
            watch = "";
            radio = "";
        };

    };
    class Type {
        class B_W_Soldier_F {
                uniform = "BWA3_Uniform_Crye_G3_Fleck";
                vest = "BWA3_Vest_JPC_Rifleman_Fleck";
                backpack = "BWA3_PatrolPack_Fleck";

                addItemsToUniform[] = {
                    "ACRE_SEM52SL",
                    "ACE_MapTools",
                    "ACE_Flashlight_XL50",
                    "acex_intelitems_notepad",
                    "ACE_Painkillers",
                    LIST_15("ACE_fieldDressing"),
                    LIST_15("ACE_packingBandage"),
                    LIST_4("ACE_Tourniquet")
                    };
                addItemsToVest[] = {
                    LIST_6("BWA3_30Rnd_556x45_G36_SD"),
                    LIST_2("BWA3_15Rnd_9x19_P8"),
                    LIST_2("BWA3_DM51A1"),
                    LIST_2("BWA3_DM25"),
                    "BWA3_DM32_Green",
                    "ItemAndroid",
                    };
                addItemsToBackpack[] = {

                    };

                primaryWeapon[] = {
                    "BWA3_G38C",
                    "BWA3_G38C_tan",
                    };
                primaryWeaponMagazine = "BWA3_30Rnd_556x45_G36_SD";
                primaryWeaponMuzzle[] = {
                    "BWA3_muzzle_snds_Rotex_IIIC",
                    "BWA3_muzzle_snds_Rotex_IIIC_green",
                    //"BWA3_muzzle_snds_Rotex_IIIC_tan",
                    };
                primaryWeaponOptics[] = {
                    //"BWA3_optic_EOTech_sand_Mag_Off",
                    "BWA3_optic_EOTech_Mag_Off",
                    };
                primaryWeaponPointer[] = {
                    "BWA3_acc_VarioRay_irlaser_black",
                    "BWA3_acc_VarioRay_irlaser",
                    };
                primaryWeaponUnderbarrel = "";
                primaryWeaponUnderbarrelMagazine = "";

                secondaryWeapon = "";
                secondaryWeaponMagazine = "";
                secondaryWeaponMuzzle = "";
                secondaryWeaponOptics = "";
                secondaryWeaponPointer = "";
                secondaryWeaponUnderbarrel = "";

                handgunWeapon = "BWA3_P8";
                handgunWeaponMagazine = "BWA3_15Rnd_9x19_P8";
                handgunWeaponMuzzle = "";
                handgunWeaponOptics = "";
                handgunWeaponPointer = "";
                handgunWeaponUnderbarrel = "";

                headgear = "BWA3_Booniehat_Fleck";
                goggles[] = {
                    //"BWA3_G_Combat_orange",
                    "BWA3_G_Combat_clear",
                    "BWA3_G_Combat_black",
                    };
                nvgoggles = "";
                binoculars = "Binocular";
                map = "ItemMap";
                gps = "";
                compass = "ItemCompass";
                watch = "ItemWatch";

            };

            class B_W_RadioOperator_F: B_W_Soldier_F {
                vest = "BWA3_Vest_JPC_Radioman_Fleck";
                backpack = "B_RadioBag_01_wdl_F";

                addItemsToBackpack[] += {
                    "ACRE_PRC117F",
                    "Laserbatteries",
                    "ACRE_VHF30108SPIKE",
                    };

                binoculars = "Laserdesignator_01_khk_F";
            };

            class B_W_Medic_F: B_W_Soldier_F {
                backpack = "BWA3_Kitbag_Fleck";

                addItemsToVest[] += {
                    "ACE_SurgicalKit",
                    };

                addItemsToBackpack[] += {
                    LIST_30("ACE_ElasticBandage"),
                    LIST_30("ACE_ElasticBandage"),
                    LIST_16("ACE_Tourniquet"),
                    LIST_16("ACE_Epinephrine"),
                    LIST_4("ACE_Painkillers"),
                    LIST_8("ACE_morphine"),
                    LIST_12("ACE_SalineIV"),
                    LIST_6("ACE_salineIV_500"),
                    LIST_6("ACE_SalineIV_250"),
                    };
            };

            class B_W_Soldier_UAV_F: B_W_Soldier_F {

                addItemsToBackpack[] += {
                    "ITC_Land_B_AR2i_Packed",
                    LIST_10("ACE_UAVBattery"),
                    };
                gps = "B_UavTerminal";
            };

            class B_W_Soldier_TL_F: B_W_Soldier_F {
                vest = "BWA3_Vest_JPC_Leader_Fleck";

                addItemsToUniform[] += {
                    "ACE_Microdagr",
                    };

                addItemsToBackpack[] += {
                    LIST_12("1Rnd_HE_Grenade_shell"),
                    LIST_5("1Rnd_Smoke_Grenade_shell"),
                    LIST_5("ACE_40mm_Pike"),
                    };

                primaryWeapon[] = {
                    "BWA3_G38K_AG40",
                    "BWA3_G38K_AG40_tan",
                    };

                binoculars = "ACE_Vector";
            };

            class TTT_B_Executive_Officer_F {
                    uniform = "SP_0000_Standard_PulloverUniform_Grey";
                    vest = "V_DeckCrew_blue_F";
                    backpack = "B_RadioBag_01_black_F";

                    addItemsToUniform[] = {
                        "acex_intelitems_notepad",
                    };

                    addItemsToVest[] = {
                        "ACE_MapTools",
                        "ACRE_PRC152",
                    };

                    addItemsToBackpack[] = {
                        "ACRE_PRC117F",
                        "ACE_Plottingboard",
                    };

                    headgear = "H_Beret_02";
                    binoculars = "Binocular";
                    gps = "B_UavTerminal";

            };

            class TTT_B_Commanding_Officer_F: TTT_B_Executive_Officer_F {

            };
    };
};