/*
 * Für weitere Informationen, wie genau Vererbung in einer Config funktioniert, wird der folgende BiWiki Eintrag empfohlen:
 *                              https://community.bistudio.com/wiki/Class_Inheritance
 *
 */

class CfgLoadouts {
    
    /* Grundklassen */
    class CommonBlufor { //Die Grundklasse für alle Blufor Einheiten. Sie stellt die unterste Ebene aller Blufor Loadouts dar, die aus ihr erben.
        //LTM Settings
        roledescription = "Default Loadout"; //Unter diesem Namen wir das Loadout im LTM-Menü angezeigt
        isplayerloadout = false; //Definiert, ob das Loadout im LTM-Menü angezeigt wird.
        
        //Clothing
        uniform[] = {"U_B_CTRG_1", "U_B_CTRG_3"};
        backpack[] = {""};
        vest[] = {"V_PlateCarrier2_blk"};
        headgear[] = {"H_Cap_tan_specops_US", "H_Cap_oli_hs", "H_Booniehat_mcamo"};
        goggles[] = {""};
        
        //Weapons
        primary[] = {
            {"arifle_SPAR_01_blk_F", "optic_Holosight_blk_F", "muzzle_snds_M","",""},
            {"arifle_SPAR_01_snd_F", "optic_Holosight_blk_F", "muzzle_snds_M","",""}
        };
        secondary[] = {"hgun_ACPC2_F","","",""};
        launcher[] = {"","","","",""};
        binoculars[] = {""};
        
        //Mags + Items
        magazines[] = {
            "30Rnd_556x45_Stanag", 6,
            "30Rnd_556x45_Stanag_Tracer_Red", 2,
            "9Rnd_45ACP_Mag", 2,
            "HandGrenade", 2,
            "SmokeShell", 2,
            "SmokeShellRed",
            "SmokeShellGreen"
        };
        items[] = {
            "ACE_fieldDressing", 4,
            "ACE_packingBandage", 4,
            "ACE_elasticBandage", 4,
            "ACE_quikclot", 4,
            "ACE_morphine",
            "ACE_earplugs"
        };
        
        //misc
        map[] = {"ItemMap"};
        gps[] = {"ItemGps"};
        nvgs[] = {""};
        compass[] = {"ItemCompass"};
        watch[] = {"ItemWatch"};
        
        //Scripted
        insignia[] = {"CTRG"};
        slingHelmet[] = {"H_HelmetB_light", "H_HelmetB_light_black", "H_HelmetB_light_snakeskin"};
        identity[] = {""};
        preLoadout = "";
        postLoadout = "";
    };
    

    /* Spielerloadouts */
};