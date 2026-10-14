/*
    Decon shower settings. Every value can be overridden before this runs
    (e.g. in init.sqf: MB_deconShower_buildTime = 30;) because only variables
    that are not set yet get the default below.
*/

// vehicle classes that carry a shower
MB_deconShower_vehicles = missionNamespace getVariable ["MB_deconShower_vehicles", ["I_E_Van_02_transport_F"]];

// the shower object itself
MB_deconShower_class = missionNamespace getVariable ["MB_deconShower_class", "DeconShower_01_F"];

// seconds to build up / take down the shower
MB_deconShower_buildTime = missionNamespace getVariable ["MB_deconShower_buildTime", 6];

// play a repair animation while building
MB_deconShower_useAnimation = missionNamespace getVariable ["MB_deconShower_useAnimation", false];
MB_deconShower_animation = missionNamespace getVariable ["MB_deconShower_animation", "Acts_carFixingWheel"];

// seconds of water per shower
MB_deconShower_waterTime = missionNamespace getVariable ["MB_deconShower_waterTime", 60 * 60];

// seconds standing under the running shower until contamination is cleared (-1: use KAT's kat_chemical_deconActionTime)
MB_deconShower_deconTime = missionNamespace getVariable ["MB_deconShower_deconTime", -1];

// objects attached to the shower and their offsets (same order)
MB_deconShower_items = missionNamespace getVariable ["MB_deconShower_items", [
    "ContainmentArea_03_yellow_F",
    "Land_ConnectorTent_01_wdl_open_F",
    "DrainageDeck_01_F",
    "Land_ClutterCutter_large_F",
    "Land_WaterBarrel_F"
]];
MB_deconShower_itemPositions = missionNamespace getVariable ["MB_deconShower_itemPositions", [
    [0, 0, -1.07],
    [0, 0, 0],
    [0, 0.04, -1.17],
    [0, 0, -1],
    [2.4, 0, -0.6]
]];
