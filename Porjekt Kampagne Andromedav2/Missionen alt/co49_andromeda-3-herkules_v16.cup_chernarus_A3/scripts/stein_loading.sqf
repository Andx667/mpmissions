/*
	author: [TTT] EinStein
	description: adds a ACE-AddAction to specific vehicles to load specific objects physicaly instead of ACE-Cargo
	usage (initPlayerLocal.sqf): [] call compile preprocessFileLineNumbers "scripts\stein_loading.sqf";
	last updated: 12.06.2020 by [TTT] EinStein
*/

stein_loading_loadTime = 2;
stein_loading_useAnimation = true;
stein_loading_animation = "Acts_NavigatingChopper_Loop";
stein_loading_supportedVehicleClasses = [
	["rhsusf_M1084A1P2_B_M2_D_fmtv_usarmy", [[0, 0.7, -0.4],[0, -0.8, -0.4],[0, -2.3, -0.4]]],
	["rhsusf_M1084A1P2_D_fmtv_usarmy", [[0, 0.7, 0.3],[0, -0.8, 0.3],[0, -2.3, 0.3]]],
	["rhsgref_cdf_gaz66o_flat", [[0, 0.2, 0.1],[0, -1.4, 0.2]]]
];
stein_loading_supportedObjects = ["CargoNet_01_box_F","Land_WaterBottle_01_stack_F","jbad_Misc_palletsfoiled","Land_WaterBottle_01_stack_F","Land_FoodSacks_01_large_white_idap_F","Land_ConcreteHedgehog_01_palette_F"];

stein_canLoad = {
	params ["_target","_caller","_arguments"];
	private _bool = false;
	private _vehicleType = typeOf _target;
	private _loaded = _target getVariable ["loaded", []];
	private _inUse = _target getVariable ["inUse", false];
	private _objects = nearestObjects [(_target getRelPos [8, 180]), stein_loading_supportedObjects, 4];
	{
		if ((_vehicleType == (_x select 0)) && ((count _loaded) < (count (_x select 1))) && (count _objects > 0) && !(_inUse)) then {
			_bool = true;
		};
	} forEach stein_loading_supportedVehicleClasses;
	_bool;
};

stein_canUnload = {
	params ["_target","_caller","_arguments"];
	private _bool = false;
	private _vehicleType = typeOf _target;
	private _loaded = _target getVariable ["loaded", []];
	private _inUse = _target getVariable ["inUse", false];
	{
		if ((_vehicleType == (_x select 0)) && ((count _loaded) > 0) && !(_inUse)) then {
			_bool = true;
		};
	} forEach stein_loading_supportedVehicleClasses;
	_bool;
};

stein_loadingCancel = {
	(_this select 0) params ["_target","_caller","_arguments"];
	_arguments params ["_variable", "_value"];
	hint "Vorgang abgebrochen";
	_target setVariable ["inUse", false, true];
	[_target, (_target getVariable "fuel")] remoteExec ["setFuel", (owner _target), false];
	if (stein_loading_useAnimation) then {_caller switchMove "Acts_Accessing_Computer_Out_Short";};
};

stein_load = {
	(_this select 0) params ["_target","_caller","_arguments"];
	_arguments params [];
	private ["_loadPos"];
	private _vehicleType = typeOf _target;
	private _object = ((nearestObjects [(_target getRelPos [8, 180]), stein_loading_supportedObjects, 4]) select 0);
	private _loaded = _target getVariable ["loaded", []];
	{
		if (_vehicleType == (_x select 0)) then {
			_loadPos = (_x select 1) select (count _loaded);
		};
	} forEach stein_loading_supportedVehicleClasses;
	_object attachto [_target, _loadPos];
	_loaded pushBack _object;
	_target setVariable ["loaded", _loaded, true];
	_target setVariable ["inUse", false, true];
	[_target, (_target getVariable "fuel")] remoteExec ["setFuel", (owner _target), false];
	if (stein_loading_useAnimation) then {_caller switchMove "Acts_Accessing_Computer_Out_Short";};
};

stein_unload = {
	(_this select 0) params ["_target","_caller","_arguments"];
	_arguments params [];
	private _loaded = _target getVariable ["loaded", []];
	private _object = _loaded select ((count _loaded) -1);
	_loaded deleteAt ((count _loaded) -1);
	_target setVariable ["loaded", _loaded, true];
	_target setVariable ["inUse", false, true];
	[_target, (_target getVariable "fuel")] remoteExec ["setFuel", (owner _target), false];
	private _position = (_target getRelPos [6, 180]) findEmptyPosition [0, 6];
	if (_position isEqualTo []) then {
		hint "Etwas ist in den Gefahrenbereich getreten und die ladung ist vom Kran gestürzt!";
		_position = _target getRelPos [6, 180];
	};
	detach _object;
	_object setPos _position;
	[_object, true, [0, 2.5, 0], 0] remoteExecCall ["ace_dragging_fnc_setDraggable", 0, true];
	if (stein_loading_useAnimation) then {_caller switchMove "Acts_Accessing_Computer_Out_Short";};
};

stein_loadProgressbar = {
	params ["_target","_caller","_arguments"];
	_arguments params [];
	private _object = ((nearestObjects [(_target getRelPos [8, 180]), stein_loading_supportedObjects, 4]) select 0);
	private _displayMessage = [(_object getVariable ["ace_cargo_displayName", (getText (configFile >> "cfgVehicles" >> typeOf _object >> "displayName"))]), "wird aufgeladen"] joinString " ";
	_target setVariable ["inUse", true, true];
	_target setVariable ["fuel", (fuel _target), true];
	[_target, 0] remoteExec ["setFuel", (owner _target), false];
	[_target, [0, 0, 0]] remoteExec ["setVelocity", (owner _target), false];
	if (stein_loading_useAnimation) then {_caller switchMove "Acts_Accessing_Computer_in"; _caller playMove "Acts_Accessing_Computer_Loop";};
	[stein_loading_loadTime, _this, stein_load, stein_loadingCancel, _displayMessage] call ace_common_fnc_progressBar;
};

stein_unloadProgressbar = {
	params ["_target","_caller","_arguments"];
	_arguments params [];
	private _loaded = _target getVariable ["loaded", []];
	private _object = _loaded select ((count _loaded) -1);
	private _displayMessage = [(_object getVariable ["ace_cargo_displayName", (getText (configFile >> "cfgVehicles" >> typeOf _object >> "displayName"))]), "wird abgeladen"] joinString " ";
	private _position = (_target getRelPos [6, 180]) findEmptyPosition [0, 6];
	_target setVariable ["inUse", true, true];
	if (_position isEqualTo []) exitWith {
		hint "Nicht genug Platz zum Abladen vorhanden.\nZunächst Bereich räumen um Unfälle zu vermeiden";
		_target setVariable ["inUse", false, true];
	};
	_target setVariable ["fuel", (fuel _target), true];
	[_target, 0] remoteExec ["setFuel", (owner _target), false];
	[_target, [0, 0, 0]] remoteExec ["setVelocity", (owner _target), false];
	if (stein_loading_useAnimation) then {_caller switchMove "Acts_Accessing_Computer_in"; _caller playMove "Acts_Accessing_Computer_Loop";};
	[stein_loading_loadTime, _this, stein_unload, stein_loadingCancel, _displayMessage] call ace_common_fnc_progressBar;
};

private _useLoadingSystem = [
	"useLoadingSystem",
	"Verwende den Hubwagen",
	"",
	{},
	{true}
] call ace_interact_menu_fnc_createAction;

private _loadObject = [
	"loadObject",
	"Aufladen",
	"",
	stein_loadProgressbar,
	stein_canLoad
] call ace_interact_menu_fnc_createAction;

private _unloadObject = [
	"unloadObject",
	"Abladen",
	"",
	stein_unloadProgressbar,
	stein_canUnload
] call ace_interact_menu_fnc_createAction;

{
	[(_x select 0), 0, ["ACE_MainActions"], _useLoadingSystem] call ace_interact_menu_fnc_AddActionToClass;
	[(_x select 0), 0, ["ACE_MainActions", "useLoadingSystem"], _loadObject] call ace_interact_menu_fnc_AddActionToClass;
	[(_x select 0), 0, ["ACE_MainActions", "useLoadingSystem"], _unloadObject] call ace_interact_menu_fnc_AddActionToClass;
} forEach stein_loading_supportedVehicleClasses;