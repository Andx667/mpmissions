/*
	author = Reimchen
	description = n.a.
*/

if !(isServer) exitWith {};

params ["_unit","_target"];

[_unit,_target] spawn {
	params ["_unit","_target"];

	while {alive _unit} do {
		_target setPosATL [(_unit getPos [300 * sqrt random 1, random 360]) select 0, (_unit getPos [300 * sqrt random 1, random 360]) select 1, 200];
		sleep (selectRandom [6,7,8,9,10]) + (selectRandom [0,1,2,3,4,5,6]);

		_unit doSuppressiveFire _target;
	};
};
private _reloaded = _unit addEventHandler ["Reloaded", {
	params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
	_unit setVehicleAmmo 1;
}];
