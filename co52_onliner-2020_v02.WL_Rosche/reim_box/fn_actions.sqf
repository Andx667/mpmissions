/*
	author = Reimchen
	description = n.a.
*/

private _actionObjects = [
	"Reim_actionObjects",
	"Objekte",
	"",
	{},
	{_player getVariable ["reimVarOrga",false]}
] call ace_interact_menu_fnc_createAction;

private _actionChairs = [
	"Reim_actionChairs",
	"Sitzmöglichkeiten",
	"",
	{},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionChair1 = [
	"Reim_actionChair1",
	"Nehme Plastikstuhl",
	"",
	{
		params ["_target","_caller"];
		[1,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionChair2 = [
	"Reim_actionChair2",
	"Nehme Rattanstuhl",
	"",
	{
		params ["_target","_caller"];
		[2,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionChair3 = [
	"Reim_actionChair3",
	"Nehme Klappstuhl",
	"",
	{
		params ["_target","_caller"];
		[3,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionChair4 = [
	"Reim_actionChair4",
	"Nehme Holzbank",
	"",
	{
		params ["_target","_caller"];
		[4,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionTables = [
	"Reim_actionTables",
	"Tische",
	"",
	{},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionTable1 = [
	"Reim_actionTable1",
	"Nehme Gartentisch",
	"",
	{
		params ["_target","_caller"];
		[5,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionTable2 = [
	"Reim_actionTable2",
	"Nehme Holztisch",
	"",
	{
		params ["_target","_caller"];
		[6,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionTable3 = [
	"Reim_actionTable3",
	"Nehme Klapptisch",
	"",
	{
		params ["_target","_caller"];
		[7,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDrinks = [
	"Reim_actionDrinks",
	"Getränke",
	"",
	{},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDrink1 = [
	"Reim_actionDrink1",
	"Nehme Bier",
	"",
	{
		params ["_target","_caller"];
		[8,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDrink2 = [
	"Reim_actionDrink2",
	"Nehme Hochprozentiges",
	"",
	{
		params ["_target","_caller"];
		[9,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDrink3 = [
	"Reim_actionDrink3",
	"Nehme Alkoholfreies",
	"",
	{
		params ["_target","_caller"];
		[10,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDeko = [
	"Reim_actionDeko",
	"Dekoration",
	"",
	{},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDeko1 = [
	"Reim_actionDeko1",
	"Nehme Zusammenstellung Grill",
	"",
	{
		params ["_target","_caller"];
		[11,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDeko2 = [
	"Reim_actionDeko2",
	"Nehme Zusammenstellung Tisch 1",
	"",
	{
		params ["_target","_caller"];
		[12,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDeko3 = [
	"Reim_actionDeko3",
	"Nehme Zusammenstellung Tisch 2",
	"",
	{
		params ["_target","_caller"];
		[13,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDeko4 = [
	"Reim_actionDeko4",
	"Nehme Zusammenstellung Shisha",
	"",
	{
		params ["_target","_caller"];
		[14,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

private _actionDeko5 = [
	"Reim_actionDeko5",
	"Nehme Campinglaterne",
	"",
	{
		params ["_target","_caller"];
		[15,_target] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;

[objectBox_1,0,["ACE_MainActions"], _actionObjects] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects"], _actionChairs] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects"], _actionTables] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects"], _actionDrinks] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects"], _actionDeko] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionChairs"], _actionChair1] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionChairs"], _actionChair2] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionChairs"], _actionChair3] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionChairs"], _actionChair4] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionTables"], _actionTable1] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionTables"], _actionTable2] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionTables"], _actionTable3] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionDrinks"], _actionDrink1] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionDrinks"], _actionDrink2] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionDrinks"], _actionDrink3] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionDeko"], _actionDeko1] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionDeko"], _actionDeko2] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionDeko"], _actionDeko3] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionDeko"], _actionDeko4] call ace_interact_menu_fnc_addActionToObject;
[objectBox_1,0,["ACE_MainActions","Reim_actionObjects","Reim_actionDeko"], _actionDeko5] call ace_interact_menu_fnc_addActionToObject;


private _actionAxe = [
	"Reim_actionAxe",
	"Hacke Holz",
	"",
	{
		params ["_target","_caller"];
		[16,_target,_caller] call reim_box_fnc_objects;
	},
	{true}
] call ace_interact_menu_fnc_createAction;
[axe_1,0,["ACE_MainActions"], _actionAxe] call ace_interact_menu_fnc_addActionToObject;
