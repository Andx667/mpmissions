/*
    author: [TTT] EinStein modfied by [TTT] Andx
    first usage: Smart John
    description: adds an ACE-AddAction to a backpack, which can be used to build a signaling plane.

    Usage (initPlayerLocal.sqf):
    [] call compile preprocessFileLineNumbers "scripts\stein_Plane.sqf";

*/

stein_mop_plane_useAnimation = true;
stein_mop_plane_buildAnimation = "Acts_carFixingWheel";
stein_mop_plane_buildTime = 5;
stein_mop_plane_object = "Tarp_01_Large_Red_F";
stein_mop_plane_backpack = ["TTT_backpack_radio_base_coyote"];

stein_mop_plane_canBuild = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _bool = false;
    {
        if ((backpack _caller == _x) && (player getVariable ["hasTent", true])) then {
            _bool = true;
        };
    } forEach stein_mop_plane_backpack;

    _bool;
}; //return bool

stein_mop_plane_canZip = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _bool = false;
    private _used = _target getVariable "inUse";
    if (!_used) then {_bool = true};
    _bool;
}; //return bool

stein_mop_plane_cancel = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    hint "Vorgang abgebrochen";
    _caller switchMove "";
    if (typeOf _target == stein_mop_plane_object) then {
        _target setVariable ["inUse", false, true];
    };
}; //return code

stein_mop_plane_zip = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    private _posBP = getPos _target;

    deleteVehicle _target;
    _caller setVariable ["hasTent", true];
}; //return code

stein_mop_plane_zip_progressBar = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _target setVariable ["inUse", true, true];
    if (stein_mop_plane_useAnimation) then {_caller playMove stein_mop_plane_buildAnimation;};
    [stein_mop_plane_buildTime, _this, stein_mop_plane_zip, stein_mop_plane_cancel, "Lege Plane zusammen"] call ace_common_fnc_progressBar;
}; //return code

stein_mop_plane_build = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2, "Tank"];
    _mop_plane = stein_mop_plane_object createVehicle _position;
    _mop_plane setVariable ["inUse", false, true];
    _caller setVariable ["hasTent", false];
    _caller switchMove "";
}; //return code

stein_mop_plane_build_progressBar = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2];
    if (_position isEqualTo []) exitWith {
        hint "Kein Platz für die Signalplane.";
    };
    if (stein_mop_plane_useAnimation) then {_caller playMove stein_mop_plane_buildAnimation;};
    [stein_mop_plane_buildTime, _this, stein_mop_plane_build, stein_mop_plane_cancel, "Lege Plane aus"] call ace_common_fnc_progressBar;
}; //return code

_buildmop_plane = ["stein_mop_plane_build", "Signalplane auslegen", "",
    stein_mop_plane_build_progressBar, stein_mop_plane_canBuild
] call ace_interact_menu_fnc_createAction;

_zipmop_plane = ["stein_mop_plane_zip", "Signalplane einsammeln", "",
    stein_mop_plane_zip_progressBar, stein_mop_plane_canZip
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _buildmop_plane] call ace_interact_menu_fnc_AddActionToObject;

[stein_mop_plane_object, 0, ["ACE_MainActions"], _zipmop_plane] call ace_interact_menu_fnc_AddActionToClass;