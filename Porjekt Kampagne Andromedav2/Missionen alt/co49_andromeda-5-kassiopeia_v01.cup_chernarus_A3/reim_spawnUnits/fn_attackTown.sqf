/*
	author = Reimchen
	description = n.a.
*/

params ["_index"];

switch (_index) do {
	case 1 : {
		[
			east,
			"UK3CB_CHD_O_TL",
			getMarkerPos "marker_0",
			markerDir "marker_0",
			[
				"UK3CB_CHD_O_RIF_1",
				"UK3CB_CHD_O_RIF_1",
				"UK3CB_CHD_O_RIF_2",
				"UK3CB_CHD_O_LAT",
				"UK3CB_CHD_O_RIF_2"
			],
			[
				[(getMarkerPos "marker_6"),1,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "marker_7"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "marker_5"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
			]
		] call Reim_spawnUnits_fnc_spawnUnits;			
		
		[
			east,
			"UK3CB_CHD_O_TL",
			getMarkerPos "marker_2",
			markerDir "marker_2",
			[
				"UK3CB_CHD_O_RIF_2",
				"UK3CB_CHD_O_RIF_2"
			],
			[
				[(getMarkerPos "marker_8"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
				[(getMarkerPos "marker_4"),2,"RED","NORMAL","MOVE","SAFE",["true",""]],
				[(getMarkerPos "marker_5"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
			],
			false,
			true,
			"UK3CB_CHD_O_Hilux_Pkm"
		] call Reim_spawnUnits_fnc_spawnUnits;
		
		sleep 12;
		[
			east,
			"UK3CB_CHD_O_TL",
			getMarkerPos "marker_2",
			markerDir "marker_2",
			[
				"UK3CB_CHD_O_RIF_1",
				"UK3CB_CHD_O_RIF_1",
				"UK3CB_CHD_O_RIF_2",
				"UK3CB_CHD_O_LAT",
				"UK3CB_CHD_O_RIF_2",
				"UK3CB_CHD_O_RIF_1",
				"UK3CB_CHD_O_RIF_1"
			],
			[
				[(getMarkerPos "marker_8"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
				[(getMarkerPos "marker_4"),2,"RED","NORMAL","GETOUT","SAFE",["true",""]],
				[(getMarkerPos "marker_5"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
			],
			false,
			true,
			"UK3CB_CHD_O_Hilux_Open"
		] call Reim_spawnUnits_fnc_spawnUnits;
		};
	case 2 : {
		[
			east,
			"UK3CB_CHD_O_TL",
			getMarkerPos "marker_0",
			markerDir "marker_0",
			[
				"UK3CB_CHD_O_RIF_1",
				"UK3CB_CHD_O_RIF_1",
				"UK3CB_CHD_O_RIF_2",
				"UK3CB_CHD_O_LAT",
				"UK3CB_CHD_O_RIF_2",
				"UK3CB_CHD_O_RIF_1",
				"UK3CB_CHD_O_RIF_1"
			],
			[
				[(getMarkerPos "marker_2"),1,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "marker_8"),2,"RED","NORMAL","SAD","COMBAT",["true",""]]
			]
		] call Reim_spawnUnits_fnc_spawnUnits;	
	};
};
