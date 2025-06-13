/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2016, 6, 25, 6, 0]; //Datum ändern

{
    if (side _x != west) then {
        _x setBehaviour "SAFE";
        _x setCombatMode "WHITE";
        _x setSpeedMode "LIMITED";

        _x setSkill ["general", 0.75];
        _x setSkill ["commanding", 0.75];
        _x setSkill ["courage", 0.75];
        _x setSkill ["aimingAccuracy", 0.65];
        _x setSkill ["aimingShake", 0.65];
        _x setSkill ["aimingSpeed", 0.65];
        _x setSkill ["reloadSpeed", 0.75];
        _x setSkill ["spotDistance", 0.85];
        _x setSkill ["spotTime", 0.85];
        _x enableAI "COVER";
        _x enableAI "AUTOCOMBAT";
    };
} forEach allUnits;

[      
    [car_01, car_02, car_03],
    [
        ["B_AssaultPack_blk", 1]
    ],
    true
] call ttt_common_fnc_crateFiller;

[      
    [ammo_01, ammo_02, ammo_03, ammo_04, ammo_05, ammo_06],
    [
        ["CUP_30Rnd_556x45_PMAG_BLACK", 30],
        ["CUP_17Rnd_9x19_glock17", 10],
        ["CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch", 12],
        ["CUP_20Rnd_TE1_Red_Tracer_762x51_HK417", 8],
        ["CUP_20Rnd_762x51_HK417", 8],
        ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10]
    ],
    true
] call ttt_common_fnc_crateFiller;

[
    [grenades_01, grenades_02, grenades_03, grenades_04, grenades_05, grenades_06],
    [
        ["SmokeShellPurple", 10],
        ["CUP_1Rnd_HE_M203", 20],
        ["CUP_1Rnd_SmokeRed_M203", 5],
        ["CUP_1Rnd_Smoke_M203", 5],
        ["CUP_HandGrenade_M67", 12],
        ["SmokeShell", 12],
        ["SmokeShellGreen", 6],
        ["ACE_M14", 5]
    ],
    true
] call ttt_common_fnc_crateFiller;

[
    [launcher_01, launcher_02, launcher_03],
    [
        ["BWA3_RGW90_Loaded", 2]
    ],
    true
] call ttt_common_fnc_crateFiller;

{
    {
        // Füllt alle schwarzen Rucksäcke in den Fhz mit einem Werkzeugkasten
        if (typeof _x == "B_AssaultPack_blk") then {
            _x addItemCargoGlobal ["ToolKit", 1];
            _x addItemCargoGlobal ["ACE_Rope6", 1];
        };
    } forEach (everyBackpack _x);
} forEach [car_01, car_02, car_03];