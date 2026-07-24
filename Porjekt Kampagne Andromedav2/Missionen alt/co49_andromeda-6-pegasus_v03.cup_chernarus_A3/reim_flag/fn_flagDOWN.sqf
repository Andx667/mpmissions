/*
	author = Reimchen
	description = n.a.
*/

if !(isServer) exitWith {};

params ["_flag","_caller"];

_flag setVariable ["reimFlagVar","progressDOWN",true];

[_caller,"PutDown"] remoteExec ["playAction",_caller];
sleep 0.5;
[_flag, 0] call BIS_fnc_animateFlag;
