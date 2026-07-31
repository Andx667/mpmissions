/*
	author = Reimchen
	description = n.a.
*/

if !(isServer) exitWith {};

params ["_flag","_caller"];

_flag setVariable ["reimFlagVar","progressUP",true];
_flag setFlagTexture "\ttt_a3\ttt_signs\data\ttt_logo_sign_co.paa";

[_caller,"PutDown"] remoteExec ["playAction",_caller];
sleep 0.5;
[_flag, 1] call BIS_fnc_animateFlag;
