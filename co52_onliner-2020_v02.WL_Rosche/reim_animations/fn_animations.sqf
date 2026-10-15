/*
	author = Reimchen
	description = n.a.
*/

params ["_index","_caller"];

switch (_index) do {
	case 0:{
		[_caller, ""] remoteExec ["switchMove",0,false];
		reimVarDance = nil;
		reimVarPee = nil;
	};
	case 1:{
		player playMove "Acts_Ambient_Approximate";
	};
	case 2:{
		player playMove "Acts_Ambient_Facepalm_2";
	};
	case 3:{
		[_caller] spawn reim_animations_fnc_dance;
	};
	case 4:{
		_caller remoteExec ["reim_animations_fnc_peeSquat",0,false];
	};
	case 5:{
		_caller remoteExec ["reim_animations_fnc_peeStand",0,false];
	};
};
