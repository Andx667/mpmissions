/*
    TTT CBRN settings. Every value can be overridden before this runs
    (e.g. in init.sqf: ttt_cbrn_deconShower_buildTime = 30;) because only
    variables that are not set yet get the default below.
*/

// ---- Decon shower ---------------------------------------------------------

// vehicle classes that carry a shower
ttt_cbrn_deconShower_vehicles = missionNamespace getVariable ["ttt_cbrn_deconShower_vehicles", ["I_E_Van_02_transport_F"]];

// the shower object itself
ttt_cbrn_deconShower_class = missionNamespace getVariable ["ttt_cbrn_deconShower_class", "DeconShower_01_F"];

// seconds to build up / take down the shower
ttt_cbrn_deconShower_buildTime = missionNamespace getVariable ["ttt_cbrn_deconShower_buildTime", 6];

// play a repair animation while building
ttt_cbrn_deconShower_useAnimation = missionNamespace getVariable ["ttt_cbrn_deconShower_useAnimation", false];
ttt_cbrn_deconShower_animation = missionNamespace getVariable ["ttt_cbrn_deconShower_animation", "Acts_carFixingWheel"];

// seconds of water per shower
ttt_cbrn_deconShower_waterTime = missionNamespace getVariable ["ttt_cbrn_deconShower_waterTime", 60 * 60];

// seconds standing under the running shower until contamination is cleared (-1: use KAT's kat_chemical_deconActionTime)
ttt_cbrn_deconShower_deconTime = missionNamespace getVariable ["ttt_cbrn_deconShower_deconTime", -1];

// objects attached to the shower and their offsets (same order)
ttt_cbrn_deconShower_items = missionNamespace getVariable ["ttt_cbrn_deconShower_items", [
    "ContainmentArea_03_yellow_F",
    "Land_ConnectorTent_01_wdl_open_F",
    "DrainageDeck_01_F",
    "Land_ClutterCutter_large_F",
    "Land_WaterBarrel_F"
]];
ttt_cbrn_deconShower_itemPositions = missionNamespace getVariable ["ttt_cbrn_deconShower_itemPositions", [
    [0, 0, -1.07],
    [0, 0, 0],
    [0, 0.04, -1.17],
    [0, 0, -1],
    [2.4, 0, -0.6]
]];

// ---- Gas mask fog ---------------------------------------------------------

// master switch
ttt_cbrn_gasmaskFog_enabled = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_enabled", true];

// goggles considered gas masks (vanilla + the modded ones diwako_cbrn supports)
ttt_cbrn_gasmaskFog_masks = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_masks", [
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
ttt_cbrn_gasmaskFog_conditioning = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_conditioning", ["B_CombinationUnitRespirator_01_F"]];

// seconds of wearing the mask until it starts fogging up (default 5 min)
ttt_cbrn_gasmaskFog_startTime = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_startTime", 60 * 5];
// seconds of wearing the mask until it is fully fogged up (default 10 min)
ttt_cbrn_gasmaskFog_maxTime = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_maxTime", 60 * 10];
// fog accumulation coefficient while an air conditioner backpack is worn; 0 stops fogging entirely
ttt_cbrn_gasmaskFog_accumulationCoef = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_accumulationCoef", 0.5];
// how fast accumulated fog fades after taking the mask off (multiplied with the time delta)
ttt_cbrn_gasmaskFog_fadeCoef = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_fadeCoef", 5];
// maximum fog visibility, 0..1
ttt_cbrn_gasmaskFog_maxAlpha = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_maxAlpha", 1];

// fog up faster while fatigued (uses ACE advanced fatigue when enabled, vanilla fatigue otherwise)
ttt_cbrn_gasmaskFog_fatigueEnabled = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_fatigueEnabled", true];
// multiplied with the fatigue value (0..1); higher = faster fogging when tired
ttt_cbrn_gasmaskFog_fatigueCoef = missionNamespace getVariable ["ttt_cbrn_gasmaskFog_fatigueCoef", 1];

// ---- Respirator backpack ----------------------------------------------------

// goggles + backpack combination that gets the hose textures (air purifying respirator + combination unit)
ttt_cbrn_respirator_goggles = missionNamespace getVariable ["ttt_cbrn_respirator_goggles", "G_AirPurifyingRespirator_01_F"];
ttt_cbrn_respirator_backpack = missionNamespace getVariable ["ttt_cbrn_respirator_backpack", "B_CombinationUnitRespirator_01_F"];

// hose texture (applied to selections 1 and 2 while the combination is worn)
ttt_cbrn_respirator_hoseTexture = missionNamespace getVariable ["ttt_cbrn_respirator_hoseTexture", "a3\supplies_f_enoch\bags\data\b_cur_01_co.paa"];

// logo on the backpack (selection 4), "" for none
ttt_cbrn_respirator_logoTexture = missionNamespace getVariable ["ttt_cbrn_respirator_logoTexture", "\z\ttt\addons\common\data\ttt_logo_blau_co.paa"];
