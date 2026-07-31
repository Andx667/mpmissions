/*
	author = Reimchen
	description = n.a.
*/

missionNamespace setVariable ["reimVar_startWave2",true,true];
varCounterWave_2 = 0;

while {true} do {
	if (!isNil "reimVar_stopWave2") exitWith {};
	varCounterWave_2 = varCounterWave_2 + 1;

	private _spawnArray_1 = [
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
						"UK3CB_KDF_O_AR",
						"UK3CB_KDF_O_MD",
						"UK3CB_KDF_O_MK	"
					],
					[
						[(getMarkerPos "wp_01"),1,"RED","NORMAL","MOVE","AWARE",["true",""]],
						[(getMarkerPos "wp_02"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
						[(getMarkerPos "wp_03"),3,"RED","NORMAL","MOVE","AWARE",["true",""]],
						[(getMarkerPos "wp_04"),4,"RED","NORMAL","SAD","COMBAT",["true",""]]
					]
				],
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
						"UK3CB_KDF_O_AR",
						"UK3CB_KDF_O_MD",
						"UK3CB_KDF_O_MK	"
					],
					[
						[(getMarkerPos "wp_13"),1,"RED","NORMAL","MOVE","AWARE",["true",""]],
						[(getMarkerPos "wp_14"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
						[(getMarkerPos "wp_15"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
					]
				]
			];	
			
	private _spawnArray_2 = [
		[
			east,
			"UK3CB_KDF_O_SL",
			getMarkerPos "spawn_03",
			0,
					[
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_RIF_1",
						"UK3CB_KDF_O_LAT",
						"UK3CB_KDF_O_AR",
						"UK3CB_KDF_O_AR",
						"UK3CB_KDF_O_MD",
						"UK3CB_KDF_O_MK	"
					],
			[
				[(getMarkerPos "wp_09"),1,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_11"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_12"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
			]
		],
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
						"UK3CB_KDF_O_AR",
						"UK3CB_KDF_O_MD",
						"UK3CB_KDF_O_MK	"
					],
			[
				[(getMarkerPos "wp_05"),1,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_06"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
				[(getMarkerPos "wp_07"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
			]
		]
	];
	

	switch (varCounterWave_1) do {
		case 1:{
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_1;
			
			sleep 10;
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
					[(getMarkerPos "wp_14"),1,"RED","NORMAL","MOVE","AWARE",["true",""]],
					[(getMarkerPos "wp_15"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
				],
				false,
				true,
				"UK3CB_KDF_O_BTR40_MG"
			] call Reim_spawnUnits_fnc_spawnUnits;
			[
				east,
				"UK3CB_KDF_O_CREW_COMM",
				getMarkerPos "spawn_03",
				0,
				[
					"UK3CB_KDF_O_CREW",
					"UK3CB_KDF_O_CREW"
				],
				[
					[(getMarkerPos "wp_09"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
					[(getMarkerPos "wp_10"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
					[(getMarkerPos "wp_15"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
				],
				false,
				true,
				"UK3CB_KDF_O_MTLB_PKT"
			] call Reim_spawnUnits_fnc_spawnUnits;
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
					[(getMarkerPos "wp_14"),1,"RED","NORMAL","MOVE","AWARE",["true",""]],
					[(getMarkerPos "wp_15"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
				],
				false,
				true,
				"UK3CB_KDF_O_MTLB_PKT"
			] call Reim_spawnUnits_fnc_spawnUnits;
		};

		case 2:{
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_2;
			
			sleep 15;
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_2;
		};
		case 3:{
			[
				east,
				"UK3CB_KDF_O_CREW_COMM",
				getMarkerPos "spawn_03",
				270,
				[
					"UK3CB_KDF_O_CREW",
					"UK3CB_KDF_O_CREW"
				],
				[
					[(getMarkerPos "wp_09"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
					[(getMarkerPos "wp_10"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
					[(getMarkerPos "wp_15"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
				],
				false,
				true,
				"UK3CB_KDF_O_BTR60"
			] call Reim_spawnUnits_fnc_spawnUnits;
			
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_2;
			
			sleep 15;
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_2;
			
			sleep 15;
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_2;
		};
		default{
			[
				east,
				"UK3CB_KDF_O_CREW_COMM",
				getMarkerPos "spawn_03",
				270,
				[
					"UK3CB_KDF_O_CREW",
					"UK3CB_KDF_O_CREW"
				],
				[
					[(getMarkerPos "wp_09"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
					[(getMarkerPos "wp_10"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
					[(getMarkerPos "wp_15"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
				],
				false,
				true,
				"UK3CB_KDF_O_BTR60"
			] call Reim_spawnUnits_fnc_spawnUnits;
			
			sleep 10;
			[
				east,
				"UK3CB_KDF_O_CREW_COMM",
				getMarkerPos "spawn_03",
				270,
				[
					"UK3CB_KDF_O_CREW",
					"UK3CB_KDF_O_CREW"
				],
				[
					[(getMarkerPos "wp_09"),1,"RED","NORMAL","MOVE","SAFE",["true",""]],
					[(getMarkerPos "wp_10"),2,"RED","NORMAL","MOVE","AWARE",["true",""]],
					[(getMarkerPos "wp_15"),3,"RED","NORMAL","SAD","COMBAT",["true",""]]
				],
				false,
				true,
				"UK3CB_KDF_O_BTR60"
			] call Reim_spawnUnits_fnc_spawnUnits;
			
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_2;
			
			sleep 15;
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_2;
			
			sleep 15;
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_2;
			
			sleep 15;
			{
				_x call Reim_spawnUnits_fnc_spawnUnits;
			} forEach _spawnArray_2;
		};
	};
	sleep 750;
};
