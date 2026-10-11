/*
    Gas mask fog settings. Every value can be overridden before this runs
    (e.g. in init.sqf: MB_gasmaskFog_startTime = 120;) because only variables
    that are not set yet get the default below.
*/

// master switch
MB_gasmaskFog_enabled = missionNamespace getVariable ["MB_gasmaskFog_enabled", true];

// goggles considered gas masks (vanilla + the modded ones diwako_cbrn supports)
MB_gasmaskFog_masks = missionNamespace getVariable ["MB_gasmaskFog_masks", [
    "G_AirPurifyingRespirator_01_F",
    "G_AirPurifyingRespirator_02_black_F",
    "G_AirPurifyingRespirator_02_olive_F",
    "G_AirPurifyingRespirator_02_sand_F",
    "G_RegulatorMask_F",
    "GP21_GasmaskPS",
    "GP5Filter_RaspiratorPS",
    "GP7_RaspiratorPS",
    "SE_M17",
    "Hamster_PS",
    "SE_S10",
    "USP_GP21_BLK2"
]];

// backpacks considered air conditioners; fog accumulates slower while worn
MB_gasmaskFog_conditioning = missionNamespace getVariable ["MB_gasmaskFog_conditioning", ["B_CombinationUnitRespirator_01_F"]];

// seconds of wearing the mask until it starts fogging up (default 5 min)
MB_gasmaskFog_startTime = missionNamespace getVariable ["MB_gasmaskFog_startTime", 60 * 5];
// seconds of wearing the mask until it is fully fogged up (default 10 min)
MB_gasmaskFog_maxTime = missionNamespace getVariable ["MB_gasmaskFog_maxTime", 60 * 10];
// fog accumulation coefficient while an air conditioner backpack is worn; 0 stops fogging entirely
MB_gasmaskFog_accumulationCoef = missionNamespace getVariable ["MB_gasmaskFog_accumulationCoef", 0.5];
// how fast accumulated fog fades after taking the mask off (multiplied with the time delta)
MB_gasmaskFog_fadeCoef = missionNamespace getVariable ["MB_gasmaskFog_fadeCoef", 5];
// maximum fog visibility, 0..1
MB_gasmaskFog_maxAlpha = missionNamespace getVariable ["MB_gasmaskFog_maxAlpha", 1];

// fog up faster while fatigued (uses ACE advanced fatigue when enabled, vanilla fatigue otherwise)
MB_gasmaskFog_fatigueEnabled = missionNamespace getVariable ["MB_gasmaskFog_fatigueEnabled", true];
// multiplied with the fatigue value (0..1); higher = faster fogging when tired
MB_gasmaskFog_fatigueCoef = missionNamespace getVariable ["MB_gasmaskFog_fatigueCoef", 1];
