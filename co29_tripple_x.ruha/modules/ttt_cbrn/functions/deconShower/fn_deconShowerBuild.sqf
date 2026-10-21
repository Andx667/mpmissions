/*
    Function: ttt_cbrn_fnc_deconShowerBuild

    Description:
        Progress bar success: spawns the shower and its attached items behind the vehicle.
*/

(_this select 0) params ["_target", "_caller"];

private _position = (_target getPos [-1, getDir _target]) findEmptyPosition [2, 10, "Tank"];
if (_position isEqualTo []) exitWith {_this call ttt_cbrn_fnc_deconShowerCancel};

private _shower = ttt_cbrn_deconShower_class createVehicle _position;
_shower setDir (getDir _target + 90);
_shower setVariable ["inUse", false, true];
_shower setVariable ["BIN_deconshower_disableAction", true, true];
// the shower can only be loaded back into the vehicle it came from
_shower setVariable ["ttt_cbrn_deconShower_vehicle", _target, true];

private _attached = [];
{
    private _item = _x createVehicle getPos _shower;
    _item attachTo [_shower, ttt_cbrn_deconShower_itemPositions select _forEachIndex, ""];
    _attached pushBack _item;
} forEach ttt_cbrn_deconShower_items;
_shower setVariable ["ttt_cbrn_deconShower_attached", _attached, true];

_caller switchMove "";
