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

// Nachschubkisten passend zu den Loadouts beladen
{
    clearWeaponCargoGlobal _x;
    clearMagazineCargoGlobal _x;
    clearItemCargoGlobal _x;
    clearBackpackCargoGlobal _x;

    _x addMagazineCargoGlobal ["CUP_30Rnd_556x45_PMAG_BLACK", 40];
    _x addMagazineCargoGlobal ["CUP_30Rnd_556x45_PMAG_BLACK_Tracer_Red", 16];
    _x addMagazineCargoGlobal ["CUP_200Rnd_TE1_Red_Tracer_556x45_M249_Pouch", 8];
    _x addMagazineCargoGlobal ["CUP_17Rnd_9x19_glock17", 8];
} forEach ([ammo_01, ammo_02, ammo_03, ammo_04, ammo_05, ammo_06] select {!isNull _x});

{
    clearWeaponCargoGlobal _x;
    clearMagazineCargoGlobal _x;
    clearItemCargoGlobal _x;
    clearBackpackCargoGlobal _x;

    _x addMagazineCargoGlobal ["CUP_HandGrenade_M67", 16];
    _x addMagazineCargoGlobal ["SmokeShell", 16];
    _x addMagazineCargoGlobal ["SmokeShellGreen", 8];
    _x addMagazineCargoGlobal ["CUP_1Rnd_HE_M203", 30];
    _x addMagazineCargoGlobal ["CUP_1Rnd_Smoke_M203", 10];
    _x addMagazineCargoGlobal ["CUP_1Rnd_SmokeRed_M203", 10];
} forEach ([grenades_01, grenades_02, grenades_03, grenades_04, grenades_05, grenades_06] select {!isNull _x});
