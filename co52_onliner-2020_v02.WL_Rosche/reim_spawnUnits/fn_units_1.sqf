/*
	author = Reimchen
	description = n.a.
*/

if !(isServer) exitWith {};

[
	resistance,
	"I_L_Looter_SMG_F",
	getPos spawnUnits_1,
	0,
	[
		"I_L_Looter_SG_F",
		"I_L_Criminal_SG_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F"
	],
	[
		[getMarkerPos "wpUnits_1",1,"RED","NORMAL","MOVE","AWARE",["true",""]],
		[getMarkerPos "wpUnits_6",2,"RED","SAD","MOVE","COMBAT",["true",""]]
	]
] call reim_spawnUnits_fnc_spawnUnits;

[
	resistance,
	"I_L_Looter_SMG_F",
	getPos spawnUnits_2,
	0,
	[
		"I_L_Looter_SG_F",
		"I_L_Criminal_SG_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F"
	],
	[
		[getMarkerPos "wpUnits_2",1,"RED","NORMAL","MOVE","AWARE",["true",""]],
		[getMarkerPos "wpUnits_6",2,"RED","SAD","MOVE","COMBAT",["true",""]]
	]
] call reim_spawnUnits_fnc_spawnUnits;

[
	resistance,
	"I_L_Looter_SMG_F",
	getPos spawnUnits_3,
	0,
	[
		"I_L_Looter_SG_F",
		"I_L_Criminal_SG_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F"
	],
	[
		[getMarkerPos "wpUnits_3",1,"RED","NORMAL","MOVE","AWARE",["true",""]],
		[getMarkerPos "wpUnits_6",2,"RED","SAD","MOVE","COMBAT",["true",""]]
	]
] call reim_spawnUnits_fnc_spawnUnits;

[
	resistance,
	"I_L_Looter_SMG_F",
	getPos spawnUnits_4,
	0,
	[
		"I_L_Looter_SG_F",
		"I_L_Criminal_SG_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F"
	],
	[
		[getMarkerPos "wpUnits_4",1,"RED","NORMAL","MOVE","AWARE",["true",""]],
		[getMarkerPos "wpUnits_6",2,"RED","SAD","MOVE","COMBAT",["true",""]]
	]
] call reim_spawnUnits_fnc_spawnUnits;

[
	resistance,
	"I_L_Looter_SMG_F",
	getPos spawnUnits_5,
	0,
	[
		"I_L_Looter_SG_F",
		"I_L_Criminal_SG_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F",
		"I_L_Looter_Pistol_F"
	],
	[
		[getMarkerPos "wpUnits_5",1,"RED","NORMAL","MOVE","AWARE",["true",""]],
		[getMarkerPos "wpUnits_6",2,"RED","SAD","MOVE","COMBAT",["true",""]]
	]
] call reim_spawnUnits_fnc_spawnUnits;
