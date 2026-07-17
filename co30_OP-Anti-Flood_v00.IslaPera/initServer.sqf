/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2026, 6, 5, 18, 10]; //Datum ändern

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

{
    [_x, "Land_BagBunker_01_small_green_F", 1] call grad_fortifications_fnc_addFort;
    [_x, "Land_BagFence_01_corner_green_F", 10] call grad_fortifications_fnc_addFort;
    [_x, "Land_BagFence_01_long_green_F", 10] call grad_fortifications_fnc_addFort;
    [_x, "Land_Razorwire_F", 3] call grad_fortifications_fnc_addFort;
} forEach [dingo_01, dingo_02, dingo_03, dingo_04, dingo_05];

[
    [dingo_01, dingo_02, dingo_03, dingo_04, dingo_05, eagle_01, eagle_02],
    [
        ["B_AssaultPack_blk", 1]
    ]
] call ttt_common_fnc_crateFiller;

[
    [ammo_01, ammo_02, ammo_03, ammo_04],
    [
        ["BWA3_30Rnd_556x45_G36_AP", 50],
        ["BWA3_20Rnd_762x51_G28_AP", 10],
        ["BWA3_20Rnd_762x51_G28_LR", 10]
    ]
] call ttt_common_fnc_crateFiller;

[
    [mg_01, mg_02, mg_03, mg_04],
    [
        ["BWA3_120Rnd_762x51_Tracer_soft", 16],
        ["ACE_SpareBarrel", 1]
    ]
] call ttt_common_fnc_crateFiller;

[
    [gren_01, gren_02, gren_03, gren_04],
    [
        ["BWA3_DM32_Green", 10],
        ["BWA3_DM25", 20],
        ["BWA3_DM51A1", 20],
        ["1Rnd_HE_Grenade_shell", 20],
        ["1Rnd_SmokeRed_Grenade_shell", 10],
        ["1Rnd_Smoke_Grenade_shell", 10]
    ]
] call ttt_common_fnc_crateFiller;

[
    [mines_01],
    [
        ["ACE_FlareTripMine_Mag_Red", 10],
        ["ACE_FlareTripMine_Mag_Green", 10],
        ["ACE_FlareTripMine_Mag", 10],
        ["ACE_DefusalKit", 1]
    ]
] call ttt_common_fnc_crateFiller;

{
    {
        // Füllt alle schwarzen Rucksäcke in den Fhz mit einem Werkzeugkasten
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
        };
    } forEach (everyBackpack _x);
} forEach [dingo_01, dingo_02, dingo_03, dingo_04, dingo_05, eagle_01, eagle_02];

[ammo_01, dingo_01, true] call ace_cargo_fnc_loadItem;
[gren_01, dingo_01, true] call ace_cargo_fnc_loadItem;
[sana_01, dingo_01, true] call ace_cargo_fnc_loadItem;
[mg_01, dingo_01, true] call ace_cargo_fnc_loadItem;
[sanb_01, dingo_01, true] call ace_cargo_fnc_loadItem;

[ammo_02, dingo_02, true] call ace_cargo_fnc_loadItem;
[gren_02, dingo_02, true] call ace_cargo_fnc_loadItem;
[sana_02, dingo_02, true] call ace_cargo_fnc_loadItem;
[mg_02, dingo_02, true] call ace_cargo_fnc_loadItem;
[sanb_02, dingo_02, true] call ace_cargo_fnc_loadItem;

[ammo_03, dingo_03, true] call ace_cargo_fnc_loadItem;
[gren_03, dingo_03, true] call ace_cargo_fnc_loadItem;
[sana_03, dingo_03, true] call ace_cargo_fnc_loadItem;
[mg_03, dingo_03, true] call ace_cargo_fnc_loadItem;
[sanb_03, dingo_03, true] call ace_cargo_fnc_loadItem;

[ammo_04, dingo_04, true] call ace_cargo_fnc_loadItem;
[gren_04, dingo_04, true] call ace_cargo_fnc_loadItem;
[sana_04, dingo_04, true] call ace_cargo_fnc_loadItem;
[mg_04, dingo_04, true] call ace_cargo_fnc_loadItem;
[mines_01, dingo_04, true] call ace_cargo_fnc_loadItem;

[sanc_01, eagle_01, true] call ace_cargo_fnc_loadItem;
[sanc_02, eagle_01, true] call ace_cargo_fnc_loadItem;

{
    _x removeMagazineTurret ["BWA3_120Rnd_762x51_soft", [0]];
    _x removeMagazineTurret ["BWA3_120Rnd_762x51_soft", [0]];
    _x removeMagazineTurret ["BWA3_120Rnd_762x51_soft", [0]];
} foreach [dingo_01, dingo_02, dingo_03, dingo_04, dingo_05]