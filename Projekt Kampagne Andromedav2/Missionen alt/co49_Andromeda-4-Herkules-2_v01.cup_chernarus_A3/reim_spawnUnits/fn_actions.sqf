/*
	author = Reimchen
	description = n.a.
*/

//
private _actionWave = [
	"Reim_actionWave",
	"Wellen",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\letters\r_ca.paa",
	{},
	{(getPlayerUID ace_player == "76561198014636795") || (getPlayerUID ace_player == "76561198089921121")}
] call ace_interact_menu_fnc_createAction;

[player,1,["ACE_SelfActions"], _actionWave] call ace_interact_menu_fnc_addActionToObject;

//
private _actionStartWave1 = [
	"Reim_actionStartWave1",
	"Starte Phase 1",
	"",
	{
		[] remoteExec ["Reim_spawnUnits_fnc_Wave01",2,false];
	},
	{isNil "reimVar_startWave1"}
] call ace_interact_menu_fnc_createAction;
private _actionStopWave1 = [
	"Reim_actionStopWave1",
	"Stoppe Phase 1",
	"",
	{
		missionNamespace setVariable ["reimVar_stopWave1",true,true];
	},
	{!isNil "reimVar_startWave1" && isNil "reimVar_stopWave1"}
] call ace_interact_menu_fnc_createAction;

[player,1,["ACE_SelfActions","Reim_actionWave"], _actionStartWave1] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionWave"], _actionStopWave1] call ace_interact_menu_fnc_addActionToObject;
//
private _actionStartWave2 = [
	"Reim_actionStartWave2",
	"Starte Phase 2",
	"",
	{
		[] remoteExec ["reim_spawnUnits_fnc_Wave02",2,false];
	},
	{!isNil "reimVar_stopWave1" && isNil "reimVar_startWave2"}
] call ace_interact_menu_fnc_createAction;
private _actionStopWave2 = [
	"Reim_actionStopWave2",
	"Stoppe Phase 2",
	"",
	{
		missionNamespace setVariable ["reimVar_stopWave2",true,true];
	},
	{!isNil "reimVar_startWave2" && isNil "reimVar_stopWave2"}
] call ace_interact_menu_fnc_createAction;

[player,1,["ACE_SelfActions","Reim_actionWave"], _actionStartWave2] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionWave"], _actionStopWave2] call ace_interact_menu_fnc_addActionToObject;

//
private _actionStartWaveWest = [
	"Reim_actionStartWaveWest",
	"Spawne Wave West",
	"",
	{
		["1"] remoteExec ["reim_spawnUnits_fnc_Wave03",2,false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionStartWaveMid = [
	"Reim_actionSartWaveMid",
	"Spawne Wave Mitte",
	"",
	{
		["2"] remoteExec ["reim_spawnUnits_fnc_Wave03",2,false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionStartWaveEast = [
	"Reim_actionStartWaveEast",
	"Spawne Wave Ost",
	"",
	{
		["3"] remoteExec ["reim_spawnUnits_fnc_Wave03",2,false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionStartWaveVehicle = [
	"Reim_actionStartWaveVehicle",
	"Spawne Fahrzeuge",
	"",
	{
		["4"] remoteExec ["reim_spawnUnits_fnc_Wave03",2,false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

[player,1,["ACE_SelfActions","Reim_actionWave"], _actionStartWaveWest] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionWave"], _actionStartWaveMid] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionWave"], _actionStartWaveEast] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionWave"], _actionStartWaveVehicle] call ace_interact_menu_fnc_addActionToObject;