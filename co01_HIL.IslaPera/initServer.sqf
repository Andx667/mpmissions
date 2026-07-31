/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2016, 6, 25, 11, 15]; //Datum ändern

{
    if (side _x != west) then {
        [_x] call ttt_common_fnc_setAISkill;

        _x setBehaviour "SAFE";
        _x setCombatMode "WHITE";
        _x setSpeedMode "LIMITED";

        _x enableAI "COVER";
        _x enableAI "AUTOCOMBAT";
    };
} forEach allUnits;

boxer_01 setMaxLoad 10000;

[
    [boxer_01],
    [
        // --- Bandaging ---
        ["ACE_elasticBandage",      90],
        ["ACE_packingBandage",      90],
        ["ACE_quikClot",            90],
        ["ACE_tourniquet",          45],
        ["kat_chestSeal",           36],
        // --- Medication ---
        ["kat_Painkiller",          24],
        // --- Grenades ---
        ["CUP_HandGrenade_M67",     15],
        ["SmokeShell",              15],
        ["SmokeShellGreen",          9],
        ["SmokeShellPurple",         6],
        // --- Rifle Ammo (5.56) ---
        ["CUP_30Rnd_556x45_Emag",           100],
        ["CUP_30Rnd_556x45_Emag_Tracer_Red", 40],
        // --- Pistol Ammo ---
        ["CUP_17Rnd_9x19_glock17",  15],
        // --- Marksman Ammo (7.62) ---
        ["CUP_20Rnd_762x51_B_SCAR_wdl",              30],
        ["CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR_wdl", 30],
        // --- MG Ammo ---
        ["CUP_100Rnd_TE4_Red_Tracer_556x45_M249",  30],
        // --- Grenadier Ammo ---
        ["CUP_1Rnd_HE_M203",               24],
        ["CUP_1Rnd_HEDP_M203",             12],
        ["1Rnd_Smoke_Grenade_shell",        12],
        ["1Rnd_SmokeRed_Grenade_shell",     12],
        // --- Backpack for Tools
        ["B_AssaultPack_Blk", 1]
    ],
    true
] call ttt_common_fnc_crateFiller;

{
    {
        // Füllt alle schwarzen Rucksäcke in den Fhz mit einem Werkzeugkasten
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
            _x addItemCargoGlobal ["ACE_Rope15", 1];
        };
    } forEach (everyBackpack _x);
} forEach [boxer_01];

//Mehr Munition für die Boxer
{
    _x addMagazinesTurret ["CUP_200Rnd_TE1_Red_Tracer_127x99_M", [0], 5];
    _x setVariable ["ace_rearm_scriptedLoadout", true, true];
} foreach [boxer_01, boxer_02];

[sanb_01, boxer_01, true] call ace_cargo_fnc_loadItem;
[sanb_02, boxer_01, true] call ace_cargo_fnc_loadItem;
[sanb_03, boxer_01, true] call ace_cargo_fnc_loadItem;

[sanc_01, boxer_01, true] call ace_cargo_fnc_loadItem;
[sanc_02, boxer_01, true] call ace_cargo_fnc_loadItem;