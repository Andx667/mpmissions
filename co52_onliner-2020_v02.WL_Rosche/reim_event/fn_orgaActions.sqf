/*
	description = ACE self actions for Orga units: start the steps of phase 4 (event) and phase 5 (finale)
	every step asks for confirmation and can only be triggered once (see reim_event_fnc_phase)
*/

if (!hasInterface) exitWith {};

//[actionName, displayName, question, phase, requiredPhase] -> ace action
private _fnc_phaseAction = {
	params ["_actionName","_displayName","_question","_phase",["_requires",""]];
	[
		_actionName,
		_displayName,
		"",
		{
			params ["_target","_player","_params"];
			_params spawn {
				params ["_question","_phase"];
				private _confirmed = [parseText _question,"Bestätigung","Ja, starten","Abbrechen"] call BIS_fnc_guiMessage;
				if (!_confirmed) exitWith {};
				if !(isNil format ["reimVarPhase_%1",_phase]) exitWith {hint "Wurde bereits ausgelöst.";};
				[_phase] remoteExec ["reim_event_fnc_phase",2,false];
				hint "Ausgelöst.";
			};
		},
		{
			params ["_target","_player","_params"];
			_params params ["_question","_phase","_requires"];
			(isNil format ["reimVarPhase_%1",_phase]) && {(_requires == "") || {!(isNil format ["reimVarPhase_%1",_requires])}}
		},
		{},
		[_question,_phase,_requires]
	] call ace_interact_menu_fnc_createAction
};

private _actionOrga = [
	"Reim_actionOrga",
	"Orga: Ablauf",
	"\a3\ui_f\data\IGUI\Cfg\simpleTasks\letters\o_ca.paa",
	{},
	{_player getVariable ["reimVarOrga",false]}
] call ace_interact_menu_fnc_createAction;

private _actionPhase4 = ["Reim_actionPhase4","Phase 4: Event","",{},{true}] call ace_interact_menu_fnc_createAction;
private _actionPhase5 = ["Reim_actionPhase5","Phase 5: Finale","",{},{true}] call ace_interact_menu_fnc_createAction;

private _actionsPhase4 = [
	["Reim_actionEventStart","Event starten (Respawn sperren)","Event starten?<br/>Tote und neu verbundene Spieler müssen ab jetzt zuschauen.","eventStart"],
	["Reim_actionEventCrate","Event-Kiste bereitstellen","Event-Kiste jetzt in die Holzkiste laden?","crate","eventStart"],
	["Reim_actionWave1","Gegnerwelle 1 starten","Gegnerwelle 1 (40 Plünderer) jetzt spawnen?","wave1","eventStart"],
	["Reim_actionWave2","Gegnerwelle 2 starten","Gegnerwelle 2 (40 Plünderer) jetzt spawnen?","wave2","eventStart"],
	["Reim_actionWave3","Gegnerwelle 3 starten","Gegnerwelle 3 (40 Plünderer) jetzt spawnen?","wave3","eventStart"],
	["Reim_actionEventEnd","Event beenden (Respawn freigeben)","Event beenden?<br/>Alle bekommen den Hinweis, dass sie wieder einsteigen können.","eventEnd","eventStart"]
];

private _actionsPhase5 = [
	["Reim_actionFinale","Lichtershow + Feuerwerk starten","Lichtershow mit Musik starten?<br/>Das Feuerwerk beginnt 70 Sekunden später.","finale"]
];

//class based, so the actions survive respawn
["CAManBase",1,["ACE_SelfActions"], _actionOrga, true] call ace_interact_menu_fnc_addActionToClass;
["CAManBase",1,["ACE_SelfActions","Reim_actionOrga"], _actionPhase4, true] call ace_interact_menu_fnc_addActionToClass;
["CAManBase",1,["ACE_SelfActions","Reim_actionOrga"], _actionPhase5, true] call ace_interact_menu_fnc_addActionToClass;
{
	["CAManBase",1,["ACE_SelfActions","Reim_actionOrga","Reim_actionPhase4"], _x call _fnc_phaseAction, true] call ace_interact_menu_fnc_addActionToClass;
} forEach _actionsPhase4;
{
	["CAManBase",1,["ACE_SelfActions","Reim_actionOrga","Reim_actionPhase5"], _x call _fnc_phaseAction, true] call ace_interact_menu_fnc_addActionToClass;
} forEach _actionsPhase5;
