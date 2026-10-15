/*
	author = Reimchen
	description = n.a.
*/

//Linie Organe
private _actionBus1 = [
	"Reim_actionBus1",
	"Busactions",
	"",
	{},
	{(driver (vehicle _player)) isEqualTo _player}
] call ace_interact_menu_fnc_createAction;

private _actionNextStop1 = [
	"Reim_actionNextStop1",
	"Nächste Station",
	"",
	{
		params ["_target","_caller"];
		private _var = _target getVariable "reimVarBus1";
		_var = _var + 1;
		if (_var > 11) then {_var = 0;};
		_target setVariable ["reimVarBus1",_var,true];
		[1,_var,1] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionCurrentStop1 = [
	"Reim_actionCurrentStop1",
	"Momentane Station",
	"",
	{
		params ["_target","_caller"];
		private _var = _target getVariable "reimVarBus1";
		[1,_var,0] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionPreviousStop1 = [
	"Reim_actionPreviousStop1",
	"Vorherige Station",
	"",
	{
		params ["_target","_caller"];
		private _var = _target getVariable "reimVarBus1";
		_var = _var - 1;
		if (_var < 0) then {_var = 11;};
		_target setVariable ["reimVarBus1",_var,true];
		[1,_var,1] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

[bus_1,1,["ACE_SelfActions"], _actionBus1] call ace_interact_menu_fnc_addActionToObject;
[bus_1,1,["ACE_SelfActions","Reim_actionBus1"], _actionNextStop1] call ace_interact_menu_fnc_addActionToObject;
[bus_1,1,["ACE_SelfActions","Reim_actionBus1"], _actionCurrentStop1] call ace_interact_menu_fnc_addActionToObject;
[bus_1,1,["ACE_SelfActions","Reim_actionBus1"], _actionPreviousStop1] call ace_interact_menu_fnc_addActionToObject;

bus_1 addAction ["",{
	params ["_target","_caller"];
	private _var = _target getVariable "reimVarBus1";
	_var = _var + 1;
	if (_var > 11) then {_var = 0;};
	_target setVariable ["reimVarBus1",_var,true];
	[1,_var,1] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
},[],-100,false,true,"User1","(driver (_target)) isEqualTo _this"];

bus_1 addAction ["",{
	params ["_target","_caller"];
	private _var = _target getVariable "reimVarBus1";
	[1,_var,0] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
},[],-100,false,true,"User2","(driver (_target)) isEqualTo _this"];

bus_1 addAction ["",{
	params ["_target","_caller"];
	private _var = _target getVariable "reimVarBus1";
	_var = _var - 1;
	if (_var < 0) then {_var = 11;};
	_target setVariable ["reimVarBus1",_var,true];
	[1,_var,1] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
},[],-100,false,true,"User3","(driver (_target)) isEqualTo _this"];


//Linie Grün
private _actionBus2 = [
	"Reim_actionBus2",
	"Busactions",
	"",
	{},
	{(driver (vehicle _player)) isEqualTo _player}
] call ace_interact_menu_fnc_createAction;

private _actionNextStop2 = [
	"Reim_actionNextStop2",
	"Nächste Station",
	"",
	{
		params ["_target","_caller"];
		private _var = _target getVariable "reimVarBus2";
		_var = _var + 1;
		if (_var > 9) then {_var = 0;};
		_target setVariable ["reimVarBus2",_var,true];
		[2,_var,1] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionCurrentStop2 = [
	"Reim_actionCurrentStop2",
	"Momentane Station",
	"",
	{
		params ["_target","_caller"];
		private _var = _target getVariable "reimVarBus2";
		[2,_var,0] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionPreviousStop2 = [
	"Reim_actionPreviousStop2",
	"Vorherige Station",
	"",
	{
		params ["_target","_caller"];
		private _var = _target getVariable "reimVarBus2";
		_var = _var - 1;
		if (_var < 0) then {_var = 9;};
		_target setVariable ["reimVarBus2",_var,true];
		[2,_var,1] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

[bus_2,1,["ACE_SelfActions"], _actionBus2] call ace_interact_menu_fnc_addActionToObject;
[bus_2,1,["ACE_SelfActions","Reim_actionBus2"], _actionNextStop2] call ace_interact_menu_fnc_addActionToObject;
[bus_2,1,["ACE_SelfActions","Reim_actionBus2"], _actionCurrentStop2] call ace_interact_menu_fnc_addActionToObject;
[bus_2,1,["ACE_SelfActions","Reim_actionBus2"], _actionPreviousStop2] call ace_interact_menu_fnc_addActionToObject;

bus_2 addAction ["",{
	params ["_target","_caller"];
	private _var = _target getVariable "reimVarBus2";
	_var = _var + 1;
	if (_var > 9) then {_var = 0;};
	_target setVariable ["reimVarBus2",_var,true];
	[2,_var,1] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
},[],-100,false,true,"User1","(driver (_target)) isEqualTo _this"];

bus_2 addAction ["",{
	params ["_target","_caller"];
	private _var = _target getVariable "reimVarBus2";
	[2,_var,0] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
},[],-100,false,true,"User2","(driver (_target)) isEqualTo _this"];

bus_2 addAction ["",{
	params ["_target","_caller"];
	private _var = _target getVariable "reimVarBus2";
	_var = _var - 1;
	if (_var < 0) then {_var = 9;};
	_target setVariable ["reimVarBus2",_var,true];
	[2,_var,1] remoteExec ["reim_bus_fnc_sounds",(crew _target),false];
},[],-100,false,true,"User3","(driver (_target)) isEqualTo _this"];
