/*
	author = Reimchen
	description = n.a.
*/

params [
	["_groupSide",objNull,[]],
	["_unitTlType","",[""]],
	["_spawnPoint",[],[[]]],
	["_spawnDirection",0,[0]],
	["_unitTypeArray",[],[[]]],
	["_waypointArray",[],[[]]],
	["_occupy",false,[true]],
	["_vehiclePresence",false,[true]],
	["_vehicleType","",[""]],
	["_skill",true,[true]]
];
private ["_group", "_unitTl", "_unit", "_vehicle"];

_group = createGroup _groupSide;
_unitTl = _group createUnit [_unitTlType, _spawnPoint, [], 0, "NONE"];
_unitTl setDir _spawnDirection;

{_unit = _group createUnit [_x, (getPos _unitTl), [], 0, "NONE"]; _unit setDir _spawnDirection;} forEach _unitTypeArray;

switch (_vehiclePresence) do {
	case true:{
		_vehicle = createVehicle [_vehicleType, (getPos _unitTl), [], 0, "NONE"];
		_vehicle setDir _spawnDirection;
		{
			_x moveInAny _vehicle;
		} forEach (units group _unitTl);
	};
};

switch (_skill) do {
	case true:{
		{
			_x setSkill ["general", 0.75];
			_x setSkill ["commanding", 0.75];
			_x setSkill ["courage", 0.75];
			_x setSkill ["aimingAccuracy", 0.3];
			_x setSkill ["aimingShake", 0.35];
			_x setSkill ["aimingSpeed", 0.5];
			_x setSkill ["reloadSpeed", 0.75];
			_x setSkill ["spotDistance", 1];
			_x setSkill ["spotTime", 1];
		} forEach (units group _unitTl);
	};
};

switch (_occupy) do {
	case false:{
		{
			_x params ["_position","_index","_combatMode","_speed","_type","_behaviour","_statements"];
			private _waypoint = _group addWaypoint [_position,0,_index];
			[_group, _index] setWaypointCombatMode _combatMode;
			[_group, _index] setWaypointSpeed _speed;
			[_group, _index] setWaypointType _type;
			[_group, _index] setWaypointBehaviour _behaviour;
			[_group, _index] setWaypointStatements _statements;
		} forEach _waypointArray;
	};
	case true:{
		[getPos _unitTl, units group _unitTl, -1, false, false] remoteExec ["Ares_fnc_ZenOccupyHouse",_unitTl,false];
	};
};
