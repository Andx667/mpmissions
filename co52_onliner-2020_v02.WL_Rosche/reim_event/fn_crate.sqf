/*
	author = Reimchen
	description = n.a.
*/

if !(isServer) exitWith {};

params ["_bigCrate"];

private _crate = "Box_Syndicate_Ammo_F" createVehicle [0,0,0];
clearBackpackCargoGlobal _crate;
clearItemCargoGlobal _crate;
clearMagazineCargoGlobal _crate;
clearWeaponCargoGlobal _crate;

_crate setVariable ["varCrateCounter1",0,true];
_crate setVariable ["varCrateCounter2",0,true];

_crate setPos (getPos _bigCrate);
[_crate, _bigCrate] call ace_cargo_fnc_loadItem;

_crate remoteExec ["reim_event_fnc_actions",0,false];
