class Loadouts {
    baseDelay = 1;
    perPlayerDelay = 1;
    handleRadios = 1;
    resetLoadout = 1;
    randomizationMode = 2;
    customGear = 300;
    //
    customGearAllowedCategories[] = {};//STRING

    class Side {
        class BluforPlayers {
            uniform = "ttt_Uniform_plain_BW_Flecktarn";
            vest = "";
            backpack = "";
            headgear = "";

            addItemsToUniform[] = {};
            addItemsToVest[] = {};
            addItemsToBackpack[] = {};

            primaryWeapon = "CUP_arifle_ACRC_wdl_68";
            primaryWeaponMagazine = "CUP_30Rnd_680x43_Stanag";
            primaryWeaponOptics = "CUP_optic_MicroT1_OD";
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
    };

    class Type {
        //Rifleman
        class B_Soldier_F {
            
        };

        class B_soldier_AT_F: B_Soldier_F {
            uniform = "ttt_Uniform_Blue_BW_Flecktarn";
            vest = "ttt_Vest_Heavy_Blue_US_Desert";
            backpack = "B_Kitbag_rgr";

            secondaryWeapon = "CUP_launch_Mk153Mod0_blk";
            secondaryWeaponMagazine = "CUP_SMAW_HEDP_M";

            headgear = "ttt_Beret_Blue";
        };
    };
};