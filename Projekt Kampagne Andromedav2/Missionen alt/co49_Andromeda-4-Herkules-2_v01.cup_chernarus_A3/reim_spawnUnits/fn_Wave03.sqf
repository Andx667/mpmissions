/*
	author = Andx
	description = n.a.
*/

params ["_waveType"];

switch (_waveType) do {
	case "1": {
		[
			east,
			"UK3CB_KDF_O_SL",
			getMarkerPos "spawn_01",
			0,
					[
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_LAT",
						"UK3CB_KDF_O_AR",
						"UK3CB_KDF_O_MD",
						"UK3CB_KDF_O_MK	"
					],
			[
				[(getMarkerPos "wp_01"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
				[(getMarkerPos "wp_02"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_03"),3,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_15"),4,"RED","NORMAL","SAD","COMBAT",["true",""]]
			]
		] call Reim_spawnUnits_fnc_spawnUnits;
	 }; //West
	case "2": {
				[
			east,
			"UK3CB_KDF_O_SL",
			getMarkerPos "spawn_02",
			0,
					[
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_LAT",
						"UK3CB_KDF_O_AR",
						"UK3CB_KDF_O_MD",
						"UK3CB_KDF_O_MK	"
					],
			[
				[(getMarkerPos "wp_13"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
				[(getMarkerPos "wp_14"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_15"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
			]
		] call Reim_spawnUnits_fnc_spawnUnits;
	 }; //Mid
	case "3": {
						[
			east,
			"UK3CB_KDF_O_SL",
			getMarkerPos "spawn_04",
			0,
					[
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_LAT",
						"UK3CB_KDF_O_AR",
						"UK3CB_KDF_O_MD",
						"UK3CB_KDF_O_MK	"
					],
			[
				[(getMarkerPos "wp_05"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
				[(getMarkerPos "wp_06"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_07"),3,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_15"),4,"RED","NORMAL","SAD","COMBAT",["true",""]]
			]
		] call Reim_spawnUnits_fnc_spawnUnits;
	 }; //East
	case "4": {
		[
			east,
			"UK3CB_KDF_O_CREW_COMM",
			getMarkerPos "spawn_02",
			0,
			[
				"UK3CB_KDF_O_CREW",
				"UK3CB_KDF_O_CREW"
			],
			[
				[(getMarkerPos "wp_13"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
				[(getMarkerPos "wp_14"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_15"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
			],
			false,
			true,
			"UK3CB_KDF_O_BTR40_MG"
		] call Reim_spawnUnits_fnc_spawnUnits;
	 }; //Veh
	default {
								[
			east,
			"UK3CB_KDF_O_SL",
			getMarkerPos "spawn_04",
			0,
					[
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_LAT",
						"UK3CB_KDF_O_AR",
						"UK3CB_KDF_O_MD",
						"UK3CB_KDF_O_MK	"
					],
			[
				[(getMarkerPos "wp_05"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
				[(getMarkerPos "wp_06"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_07"),3,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_15"),4,"RED","NORMAL","SAD","COMBAT",["true",""]]
			]
		] call Reim_spawnUnits_fnc_spawnUnits;
	};
};
