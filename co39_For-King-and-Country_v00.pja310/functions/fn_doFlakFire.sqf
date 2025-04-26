/*
	author = Reimchen, improved by Andx
	description = n.a.
*/

params ["_unit","_target"];

if !(isServer) exitWith {};

_handle = [
		{
			(_this select 0) params ["_unit", "_target"];

			if (alive _unit) then {
				_unit doSuppressiveFire _target;
				_target setPosATL [(_unit getPos [300 * sqrt random 1, random 360]) select 0, (_unit getPos [300 * sqrt random 1, random 360]) select 1, 200];
			};
		},
		(selectRandom [6,7,8,9,10]) + (selectRandom [0,1,2,3,4,5,6]),
		[_unit,_target]
	] call CBA_fnc_addPerFrameHandler;

private _reloaded = _unit addEventHandler ["Reloaded", {
	params ["_unit", "_weapon", "_muzzle", "_newMagazine", "_oldMagazine"];
	_unit setVehicleAmmo 1;
}];

//return
_handle;