class Loadouts {
    baseDelay = 10;
    perPlayerDelay = 1;
    handleRadios = 1;
    resetLoadout = 1;
    randomizationMode = 2;
    customGear = 300;
    //
    customGearAllowedCategories[] = {};//STRING

    class AllPlayable {
        uniform = "";
        vest = "";
        backpack = "";
        headgear = "";

        addItemsToUniform[] = {};
        addItemsToVest[] = {};
        addItemsToBackpack[] = {};

        primaryWeapon = "";
        primaryWeaponMagazine = "";
        primaryWeaponOptics = "";
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

    class Type {
        //Rifleman
        class Soldier_F {
        };

        //Asst. Autorifleman
        class soldier_AAR_F: Soldier_F {
        };

        //Autorifleman
        class soldier_AR_F: Soldier_F {
        };

    };
};