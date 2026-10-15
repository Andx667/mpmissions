/*
	author = Reimchen
	description = n.a.
*/

//
private _actionAnimation = [
	"Reim_actionAnimation",
	"Animations",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\letters\a_ca.paa",
	{},
	{true}
] call ace_interact_menu_fnc_createAction;

//
private _actionStopAnimation = [
	"Reim_actionStopAnimation",
	"Stoppe/Reset Animation",
	"",
	{
		params ["_target","_caller"];
		[0,_caller] call reim_animations_fnc_animations;
	},
	{(isNil "reimVarPee")}
] call ace_interact_menu_fnc_createAction;

//Acts_Ambient_Approximate
private _actionApproximate = [
	"Reim_actionApproximate",
	"Mir egal",
	"",
	{
		params ["_target","_caller"];
		[1] call reim_animations_fnc_animations;
	},
	{(currentWeapon player == primaryWeapon player) && (primaryWeapon player != "") && ((isNil "reimVarDance") && (isNil "reimVarPee"))}
] call ace_interact_menu_fnc_createAction;

//Acts_Ambient_Facepalm_2
private _actionFacepalm = [
	"Reim_actionFacepalm",
	"Facepalm",
	"",
	{
		params ["_target","_caller"];
		[2] call reim_animations_fnc_animations;
	},
	{(currentWeapon player == primaryWeapon player) && (primaryWeapon player != "") && ((isNil "reimVarDance") && (isNil "reimVarPee"))}
] call ace_interact_menu_fnc_createAction;

//Acts_Dance_01 25.062; Acts_Dance_02 20.833
private _actionDance = [
	"Reim_actionDance",
	"Tanzen",
	"",
	{
		params ["_target","_caller"];
		[3,_caller] call reim_animations_fnc_animations;
	},
	{(isNil "reimVarDance") && (isNil "reimVarPee")}
] call ace_interact_menu_fnc_createAction;

//Acts_Executioner_Squat 10.033; Acts_Executioner_Squat_End 5.466
private _actionPeeingSquat = [
	"Reim_actionPeeingSquat",
	"Pinkeln Hocken",
	"",
	{
		params ["_target","_caller"];
		if (isNil "reimVarPeeTimer") then {
			if (Reim_Var_Trinken >= 10) then {
				Reim_Var_Trinken = Reim_Var_Trinken -2;
				[4,_caller] call reim_animations_fnc_animations;
			} else {
				if (Reim_Var_Trinken >= 2) then {
					Reim_Var_Trinken -1;
					[4,_caller] call reim_animations_fnc_animations;
				} else {
					hint "Die Blase drückt gerade nicht, vllt trinke ich einfach etwas mehr.";
				};
			};
		} else {
			hint "Ich war doch gerade erst pinkeln, noch drückt es nicht.";
		};
	},
	{(isNil "reimVarDance") && (isNil "reimVarPee")}
] call ace_interact_menu_fnc_createAction;

//
private _actionPeeingStand = [
	"Reim_actionPeeingStand",
	"Pinkeln Stehen",
	"",
	{
		params ["_target","_caller"];
		if (isNil "reimVarPeeTimer") then {
			if (Reim_Var_Trinken >= 10) then {
				Reim_Var_Trinken = Reim_Var_Trinken -2;
				[5,_caller] call reim_animations_fnc_animations;
			} else {
				if (Reim_Var_Trinken >= 2) then {
					Reim_Var_Trinken -1;
					[5,_caller] call reim_animations_fnc_animations;
				} else {
					hint "Die Blase drückt gerade nicht, vllt trinke ich einfach etwas mehr.";
				};
			};
		} else {
			hint "Ich war doch gerade erst pinkeln, noch drückt es nicht.";
		};
	},
	{(isNil "reimVarDance") && (isNil "reimVarPee")}
] call ace_interact_menu_fnc_createAction;


[player,1,["ACE_SelfActions"], _actionAnimation] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionAnimation"], _actionStopAnimation] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionAnimation"], _actionApproximate] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionAnimation"], _actionFacepalm] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionAnimation"], _actionDance] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionAnimation"], _actionPeeingSquat] call ace_interact_menu_fnc_addActionToObject;
[player,1,["ACE_SelfActions","Reim_actionAnimation"], _actionPeeingStand] call ace_interact_menu_fnc_addActionToObject;
