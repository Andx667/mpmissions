/*
	description = server side: starts one step of phase 4 (event) or phase 5 (finale), each step only once
	call: [_phase] remoteExec ["reim_event_fnc_phase",2,false];
	_phase = "eventStart", "crate", "wave1", "wave2", "wave3", "eventEnd", "finale"
*/

if !(isServer) exitWith {};

params ["_phase"];

//only once per mission, the flag also hides the orga action on all clients
private _flag = format ["reimVarPhase_%1",_phase];
if !(isNil _flag) exitWith {};
missionNamespace setVariable [_flag,true,true];

switch (_phase) do {
	//phase 4
	case "eventStart":{
		missionNamespace setVariable ["varEvent",true,true];
	};
	case "crate":{
		[eventCrate_1] call reim_event_fnc_crate;
	};
	case "wave1":{
		[] call reim_spawnUnits_fnc_units_1;
	};
	case "wave2":{
		[] call reim_spawnUnits_fnc_units_2;
	};
	case "wave3":{
		[] call reim_spawnUnits_fnc_units_3;
	};
	case "eventEnd":{
		missionNamespace setVariable ["varEvent",false,true];
		"Das Event ist vorbei, ihr könnt wieder einsteigen." remoteExec ["hint",0,false];
	};
	//phase 5
	case "finale":{
		[] remoteExec ["reim_lightShow_fnc_show",[0,-2] select isDedicated,false];
		[] spawn reim_lightShow_fnc_firework;
	};
};
