/*
	author = Reimchen
	description = n.a.
*/

params ["_crate"];


private _actionLoadout = [
	"Reim_actionLoadout",
	"Loadouts",
	"\a3\ui_f\data\IGUI\Cfg\Actions\gear_ca.paa",
	{},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionLeader = [
	"Reim_actionLeader",
	"Loadout Leader",
	"",
	{
		params ["_target","_caller"];
		[1] call reim_event_fnc_equip;
		[_target,0,["ACE_MainActions","Reim_actionLoadout","Reim_actionLeader"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionMedic = [
	"Reim_actionMedic",
	"Loadout Medic",
	"",
	{
		params ["_target","_caller"];
		[2] call reim_event_fnc_equip;
		[_target,0,["ACE_MainActions","Reim_actionLoadout","Reim_actionMedic"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionTrooper = [
	"Reim_actionTrooper",
	"Loadout Trooper",
	"",
	{
		params ["_target","_caller"];
		[3] call reim_event_fnc_equip;
		[_target,0,["ACE_MainActions","Reim_actionLoadout","Reim_actionTrooper"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionGrenadier = [
	"Reim_actionGrenadier",
	"Loadout Grenadier",
	"",
	{
		params ["_target","_caller"];
		[4] call reim_event_fnc_equip;
		[_target,0,["ACE_MainActions","Reim_actionLoadout","Reim_actionGrenadier"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionBreacher = [
	"Reim_actionBreacher",
	"Loadout Breacher",
	"",
	{
		params ["_target","_caller"];
		[5] call reim_event_fnc_equip;
		private _counter = _target getVariable "varCrateCounter1";
		_target setVariable ["varCrateCounter1",(_counter +1),true];
		private _newCounter = _target getVariable "varCrateCounter1";
		if (_newCounter >= 2) then {
			[_target,0,["ACE_MainActions","Reim_actionLoadout","Reim_actionBreacher"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
		};
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionSharpshooter = [
	"Reim_actionSharpshooter",
	"Loadout Sharpshooter",
	"",
	{
		params ["_target","_caller"];
		[6] call reim_event_fnc_equip;
		private _counter = _target getVariable "varCrateCounter2";
		_target setVariable ["varCrateCounter2",(_counter +1),true];
		private _newCounter = _target getVariable "varCrateCounter2";
		if (_newCounter >= 2) then {
			[_target,0,["ACE_MainActions","Reim_actionLoadout","Reim_actionSharpshooter"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
		};
	},
	{true}
] call ace_interact_menu_fnc_createAction;


[_crate,0,["ACE_MainActions"], _actionLoadout] call ace_interact_menu_fnc_addActionToObject;
[_crate,0,["ACE_MainActions","Reim_actionLoadout"], _actionLeader] call ace_interact_menu_fnc_addActionToObject;
[_crate,0,["ACE_MainActions","Reim_actionLoadout"], _actionMedic] call ace_interact_menu_fnc_addActionToObject;
[_crate,0,["ACE_MainActions","Reim_actionLoadout"], _actionTrooper] call ace_interact_menu_fnc_addActionToObject;
[_crate,0,["ACE_MainActions","Reim_actionLoadout"], _actionGrenadier] call ace_interact_menu_fnc_addActionToObject;
[_crate,0,["ACE_MainActions","Reim_actionLoadout"], _actionBreacher] call ace_interact_menu_fnc_addActionToObject;
[_crate,0,["ACE_MainActions","Reim_actionLoadout"], _actionSharpshooter] call ace_interact_menu_fnc_addActionToObject;
