/*
    Die initServer.sqf ist serverseitige Äquivalent zur initPlayerLocal.sqf.
    Sie wird einmal bei Missionstart auf dem Server ausgeführt, was man
    beispielsweise zum Setzen von eigenen Texturen, zum Spawnen von Objekten
    oder auch zum Beladen von Kisten verwenden kann.
 */

setDate [2022, 5, 25, 3, 45]; //Datum ändern

{
    if (side _x != west) then {
        _x setBehaviour "SAFE";
        _x setCombatMode "YELLOW";
        _x setSpeedMode "NORMAL";

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

// Kisten befüllen
// Fhz Basis
[
    [quad_01, mtvr_01, mtvr_02, mtvr_03, plane_01, plane_02],
    [
        ["Toolkit", 1],
        ["B_AssaultPack_blk" ,1]
    ],
    true
] call ttt_common_fnc_crateFiller;

// Kisten
// Inf Mun
[
    [ammo_01, ammo_02, ammo_03, ammo_04, ammo_05, ammo_06, ammo_07],
    [
        ["CUP_30Rnd_556x45_Stanag_L85", 30],
        ["CUP_30Rnd_556x45_Stanag_L85_T", 15],
        ["CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", 10],
        ["CUP_20Rnd_762x51_L129_M", 15],
        ["CUP_17Rnd_9x19_glock17", 5]
    ],
    true
] call ttt_common_fnc_crateFiller;

// Granaten
[
    [gren_01, gren_02, gren_03, gren_04, gren_05, gren_06, gren_07],
    [
        ["CUP_1Rnd_HE_M203", 40],
        ["CUP_1Rnd_HEDP_M203", 10],
        ["CUP_HandGrenade_L109A2_HE", 16],
        ["SmokeShell", 16],
        ["SmokeShellGreen", 8]
    ],
    true
] call ttt_common_fnc_crateFiller;

// Launcher
[
    [launcher_01, launcher_02, launcher_03, launcher_04],
    [
        ["CUP_launch_NLAW", 2]
    ],
    true
] call ttt_common_fnc_crateFiller;

//VBT, VBA, Spreng, Fallschirme über TTT-Standardkisten

// grad-fortifications
[equip_01, "PortableHelipadLight_01_green_F", 10] call grad_fortifications_fnc_addFort;
[equip_01, "PortableHelipadLight_01_red_F", 10] call grad_fortifications_fnc_addFort;

//Map Marker aus Plan Ops
private _data = [[[809844,16024.793104465583,2217.0873277642017,"mil_end","ColorBlack","DZ VICTORIA",0,1],[809849,16060.881594144403,1762.9734939299426,"mil_end","ColorBlack","DZ ELIZABETH",0,1],[809853,15997.726737206469,1476.9104237228287,"mil_dot","ColorBlack","100 Km/h",0,1],[809855,15996.22305013652,1428.7902697460486,"mil_dot","ColorBlack","400 AGL",0,1],[809856,13870.541490624586,1492.8693213149393,"mil_join","ColorBlack","WP CHARLES",0,1],[809857,17086.39617585084,1967.4653161042868,"mil_destroy","ColorBlack","SZ GEORGE",0,1],[809859,17583.333333333332,1557.5305204877782,"mil_destroy","ColorBlack","SZ EDWARD",0,1],[809879,17722.222222222223,2434.3055919437807,"mil_triangle","colorCivilian","Tower",0,1],[809880,17847.222222222223,2377.7554253988023,"mil_triangle","colorCivilian","Pumpe",0,1],[809881,17806.54761904762,2214.0575748738675,"mil_triangle","colorCivilian","Kaserne",0,1],[809882,17773.809523809523,2176.357463843881,"mil_triangle","colorCivilian","Halle",0,1],[809883,17757.93650793651,2221.0023321688623,"mil_triangle","colorCivilian","2er",0,1],[809884,17843.25396825397,2278.5446068988417,"mil_triangle","colorCivilian","3er",0,1],[809885,17921.626984126982,2310.292068818828,"mil_triangle","colorCivilian","6er",0,1],[809886,17868.055555555555,2241.8366040538563,"mil_triangle","colorCivilian","Dach",0,1],[809887,17983.134920634922,2363.86591080881,"mil_triangle","colorCivilian","Camp",0,1],[809888,18270.833333333332,2236.884376014976,"mil_triangle","colorCivilian","Ostwald",0,1],[809889,17811.507936507936,2005.7231689100674,"mil_triangle","colorCivilian","Südwald",0,1],[809890,18073.4126984127,2078.373015873016,"mil_triangle","colorCivilian","APE",0,1],[809891,17364.0873015873,2507.9539381815976,"mil_triangle","colorCivilian","Thames",0,1],[809892,18515.873015873014,1688.2512312863582,"mil_triangle","colorCivilian","SW Feld",0,1],[809893,18776.785714285714,1659.4800939213685,"mil_triangle","colorCivilian","SE Feld",0,1],[809894,18658.73015873016,1894.609733766275,"mil_triangle","colorCivilian","Mittelfeld",0,1],[809895,18455.35714285714,1898.5781665062766,"mil_triangle","colorCivilian","NW Feld",0,1],[809896,18910.714285714286,1782.5015088613197,"mil_triangle","colorCivilian","NE Feld",0,1],[809897,18891.98544557623,3921.083059684323,"mil_triangle","colorCivilian","Ostwald",0,1],[809898,18248.746280922805,3141.51226496364,"mil_triangle","colorCivilian","Tower Bridge",0,1],[809899,18226.469731966834,4464.442282146572,"mil_triangle","colorCivilian","London Bridge",0,1],[809900,17861.803587523333,4257.029068850527,"mil_triangle","colorCivilian","Millenium Bridge",0,1],[809901,17383.179272941234,4035.940259073428,"mil_triangle","colorCivilian","Westminster Bridge",0,1],[809902,18559.22758877153,3922.0608425040145,"mil_triangle","colorCivilian","Heathrow",0,1],[809903,18392.84866036918,3591.567260878452,"mil_triangle","colorCivilian","Gatwick",0,1],[809904,18518.849206349205,3866.890950664179,"mil_triangle","colorCivilian","City",0,1],[809974,15494.047619047618,2211.309389730714,"mil_dot","ColorBlack","POLAR-1",0,1],[809975,15509.920634920634,2188.3069186847674,"mil_dot","ColorBlack","Charlie 1,3,5",0,1],[809976,15508.92857142857,2169.456863169772,"mil_dot","ColorBlack","Charlie-1",0,1],[809977,15510.912698412698,2146.6383749147826,"mil_dot","ColorBlack","Charlie-3",0,1],[809978,15496.031746031746,1804.5647881586406,"mil_dot","ColorBlack","POLAR-2",0,1],[809979,15516.86507936508,1774.597805539925,"mil_dot","ColorBlack","Charlie 2,4",0,1],[809980,15516.86507936508,1753.7635336549347,"mil_dot","ColorBlack","Charlie-2",0,1],[809981,15517.857142857143,1727.968720844945,"mil_dot","ColorBlack","Grizzly",0,1],[809982,15517.857142857143,1704.3652134438892,"mil_dot","ColorBlack","Panda",0,1],[809983,15508.92857142857,2121.835670289791,"mil_dot","ColorBlack","19 PAX",0,1],[809984,15518.849206349207,1674.3948788549633,"mil_dot","ColorBlack","16 PAX",0,1],[813378,17631.944444444445,2466.0317710289787,"mil_pickup","ColorPink","LZ Manchester",0,1],[813379,17907.738095238095,2161.556692475173,"mil_pickup","ColorPink","LZ Birmingham",0,1],[813380,19035.714285714286,3874.625581214079,"mil_pickup","ColorPink","LZ Liverpool",0,1],[813381,18521.825396825396,3990.644103709432,"mil_pickup","ColorPink","LZ Leeds",0,1],[813382,18414.68253968254,3469.8952780680856,"mil_pickup","ColorPink","LZ Sheffield",0,1],[813383,18220.238095238095,4777.418272113972,"mil_pickup","ColorPink","LZ Newcastle",0,1]],[[809848,[15998.093883429963,2388.3680443008566,16002.23779841632,1559.966458856739,16994.671264583845,1528.386727165767,16998.190661502296,2397.0048476938764,15996.36660056628,2393.5501263366687],"ColorBlack"],[809860,[529.2978486226785,1691.0586666731072,6126.984126984127,712.4452246209063,11158.730158730159,775.9401484608826,14422.811911751262,2025.2325582394383,15991.184751975232,2387.978300746324],"colorCivilian"],[809861,[345.4565727365572,330.09930746126366,6093.853943072869,-374.6638494092564,11469.158214853698,-98.28614083258323,14734.126984126984,1423.7165388587368,16003.968253968254,1550.706386538686],"colorCivilian"],[809907,[17721.23015873016,1771.5945758373812,17742.06349206349,1765.6419267273843,17859.126984126982,1830.1289587523584,17856.150793650795,1850.9632306373526],"colorBLUFOR"],[809908,[17748.015873015873,1684.2890555574177,17752.97619047619,1707.1075438124071,17900.79365079365,1786.476198612375,17920.634920634922,1785.4840904273772],"colorBLUFOR"]],[[809862,17673.61111111111,1574.1684436856021,"blu",false,1,0,0,3,"Charlie-1",1],[809863,17570.43650793651,1677.3476949255642,"blu",false,1,0,0,3,"Charlie-2",1],[809864,17497.02380952381,1571.1921191306055,"blu",false,1,0,0,3,"Charlie-3",1],[809865,17565.47619047619,1586.0737419055993,"blu",false,0,0,0,2,"Grizzly",1],[809866,17564.484126984127,1536.468332655619,"blu",false,0,0,0,2,"Panda",1]]];

_data params ['_icons', '_poly', '_metis'];

if (!isNil 'gtd_map_allMarkers') then {
  {
    deleteMarker _x;
  } forEach gtd_map_allMarkers;
};

if (!isNil 'gtd_map_allMetisMarkers') then {
  {
    [_x] call mts_markers_fnc_deleteMarker
  } forEach gtd_map_allMetisMarkers;
};

gtd_map_allMarkers = [];
gtd_map_allMetisMarkers = [];

{
  _x params ['_id', '_points', '_color'];
  _points params ['_x', '_y'];
  private _marker = createMarker [ format ['_USER_DEFINED #%1/planops%2/3', clientOwner, _id], [_x, _y], 3];
  _marker setMarkerShapeLocal 'polyline';
  _marker setMarkerPolylineLocal _points;
  _marker setMarkerColor _color; 
  gtd_map_allMarkers pushBack _marker;
} forEach _poly;

{
  _x params ['_id', '_x', '_y', '_icon', '_color', '_text', '_rotate',['_scale',1]];
  private _marker = createMarker [ format ['_USER_DEFINED #%1/planops%2/3', clientOwner, _id], [_x, _y], 3];
  _marker setMarkerShapeLocal 'ICON';
  _marker setMarkerDirLocal _rotate;
  _marker setMarkerColorLocal _color; 
  _marker setMarkerTextLocal _text;
  _marker setMarkerTypeLocal _icon;
  _marker setMarkerSize [_scale,_scale];
  gtd_map_allMarkers pushBack _marker;
} forEach _icons;

{
  _x params ['_id', '_x', '_y', '_sideid', '_dashed', '_icon', '_mod1', '_mod2', '_size', '_designation',['_scale',1]];
  private _marker = [[_x,_y], 3, true, [[_sideid, _dashed], [_icon, _mod1, _mod2], [_size, false, false], [], _designation], _scale * 1.3] call mts_markers_fnc_createMarker;
  gtd_map_allMetisMarkers pushBack _marker;
} forEach _metis;

publicVariable 'gtd_map_allMarkers';
publicVariable 'gtd_map_allMetisMarkers';