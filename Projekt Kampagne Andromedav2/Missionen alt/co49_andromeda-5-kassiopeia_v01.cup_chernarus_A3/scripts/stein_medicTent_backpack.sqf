/*
    author: [TTT] EinStein
    description: adds an ACE-Self-AddAction to a player, who will be able to assemble a tent as a medical facitlity.
    note: it's not possible to transfer a tent to an other player via switching backpacks.

    usage (initPlayerLocal.sqf):
    [] call compile preprocessFileLineNumbers "scripts\stein_medicTent_backpack.sqf";

*/

stein_mop_useAnimation = true; //'bool' should an animation be used while constructiong
stein_mop_buildAnimation = "Acts_carFixingWheel"; //'string' animation-name from animation-config
stein_mop_buildTime = 8; //'integer' time in seconds to construct the tent
stein_mop_object = "Land_MedicalTent_01_floor_dark_F"; //'string' classname for the tent to be build
stein_mop_items = ["Land_Camping_Light_F", "Land_FirstAidKit_01_open_F"]; //'array (string)' classnames for every item that should be created in/on/near the tent
stein_mop_backpack = ["B_Kitbag_cbr"]; //'array (string)' classnames for every backpack that should be able to carry a tent

stein_mop_canBuild = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _bool = false;
    if ((stein_mop_backpack find (backpack _caller) != -1) && (player getVariable ["hasTent", true])) then {_bool = true;};
    _bool;
};

stein_mop_canZip = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _bool = false;
    if (!(_target getVariable ["inUse", false]) && !(player getVariable ["hasTent", true]) && (stein_mop_backpack find (backpack _caller) != -1)) then {_bool = true};
    _bool;
};

stein_mop_cancel = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    hint "Vorgang abgebrochen";
    _caller switchMove "";
    if (typeOf _target == stein_mop_object) then {
        _target setVariable ["inUse", false, true];
    };
};

stein_mop_zip = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    private _posBP = getPos _target;
    private _arrayItems = nearestObjects [(getPos _target), stein_mop_items, 10];
    {
        deleteVehicle _x;
    } forEach _arrayItems;
    deleteVehicle _target;
    _caller setVariable ["hasTent", true];
};

stein_mop_zip_progressBar = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    _target setVariable ["inUse", true, true];
    if (stein_mop_useAnimation) then {_caller playMove stein_mop_buildAnimation;};
    [stein_mop_buildTime, _this, stein_mop_zip, stein_mop_cancel, "Baue mobilen Operationsbereich ab"] call ace_common_fnc_progressBar;
};

stein_mop_build = {
    (_this select 0) params ["_target","_caller","_arguments"];
    _arguments params [];
    private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2, "Tank"];
    _mop = stein_mop_object createVehicle _position;
    _mop setVariable ["ace_medical_isMedicalFacility", true, true];
    _mop setVariable ["inUse", false, true];
    _caller setVariable ["hasTent", false];
    {
        private _posItem = (getPos _mop) findEmptyPosition [1, 3, "Tank"];
        _x createVehicle _posItem;
    } forEach stein_mop_items;
    _caller switchMove "";
};

stein_mop_build_progressBar = {
    params ["_target","_caller","_arguments"];
    _arguments params [];
    private _position = (_target getPos [8, getDir _target]) findEmptyPosition [1, 2, "Tank"];
    if (_position isEqualTo []) exitWith {
        hint "Nicht genug Platz zum Aufbau der MOP vorhanden.";
    };
    if (stein_mop_useAnimation) then {_caller playMove stein_mop_buildAnimation;};
    [stein_mop_buildTime, _this, stein_mop_build, stein_mop_cancel, "Richte mobilen Operationsbereich ein"] call ace_common_fnc_progressBar;
};

_buildMOP = ["stein_mop_build", "Errichte mobilen Operationsbereich", "",
    stein_mop_build_progressBar, stein_mop_canBuild
] call ace_interact_menu_fnc_createAction;

_zipMOP = ["stein_mop_zip", "Baue mobilen Operationsbereich ab", "",
    stein_mop_zip_progressBar, stein_mop_canZip
] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "ACE_Equipment"], _buildMOP] call ace_interact_menu_fnc_AddActionToObject;

[stein_mop_object, 0, ["ACE_MainActions"], _zipMOP] call ace_interact_menu_fnc_AddActionToClass;