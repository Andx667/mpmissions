/*
    Function: MB_fnc_deconShowerBuild

    Description:
        Progress bar success: spawns the shower and its attached items behind the vehicle.
*/

(_this select 0) params ["_target", "_caller"];

private _position = (_target getPos [-1, getDir _target]) findEmptyPosition [2, 10, "Tank"];
if (_position isEqualTo []) exitWith {_this call MB_fnc_deconShowerCancel};

private _shower = MB_deconShower_class createVehicle _position;
_shower setDir (getDir _target + 90);
_shower setVariable ["inUse", false, true];
_shower setVariable ["BIN_deconshower_disableAction", true, true];

private _attached = [];
{
    private _item = _x createVehicle getPos _shower;
    _item attachTo [_shower, MB_deconShower_itemPositions select _forEachIndex, ""];
    _attached pushBack _item;
} forEach MB_deconShower_items;
_shower setVariable ["MB_deconShower_attached", _attached, true];

_caller switchMove "";
[_target, _target getVariable ["fuel", 1]] remoteExec ["setFuel", owner _target, false];
