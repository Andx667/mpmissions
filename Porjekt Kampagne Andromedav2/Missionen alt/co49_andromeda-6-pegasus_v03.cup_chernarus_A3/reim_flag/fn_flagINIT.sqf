/*
	author = Reimchen
	description = n.a.
*/

if !(isServer) exitWith {};

params ["_flag"];

_flag setVariable ["reimFlagVar","UP",true];

[_flag, [
	"Flagge einholen",
	{
		params ["_target","_caller"];
		[_target,_caller] remoteExec ["reim_flag_fnc_flagDOWN",2];
	},
	nil,
	10,
	true,
	true,
	"",
	"_target getVariable 'reimFlagVar' == 'UP'", 
	3
]] remoteExec ["addAction",0,true];

[_flag, [
	"Flagge hissen",
	{
		params ["_target","_caller"];
		[_target,_caller] remoteExec ["reim_flag_fnc_flagUP",2];
	},
	nil,
	10,
	true,
	true,
	"",
	"_target getVariable 'reimFlagVar' == 'DOWN'", 
	3
]] remoteExec ["addAction",0,true];

[
	_flag,
	"FlagAnimationDone",
  	{
		params ["_flag", "_phaseEnd"];
		if (_flag getVariable 'reimFlagVar' == 'progressDOWN') then {
			_flag setVariable ["reimFlagVar","DOWN",true];
			_flag setFlagTexture "";
		};
		if (_flag getVariable 'reimFlagVar' == 'progressUP') then {
			_flag setVariable ["reimFlagVar","default",true];
		};
	 }
] call BIS_fnc_addScriptedEventHandler;
