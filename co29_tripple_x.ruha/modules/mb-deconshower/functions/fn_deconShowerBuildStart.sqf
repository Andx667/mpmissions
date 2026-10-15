/*
    Function: MB_fnc_deconShowerBuildStart

    Description:
        ACE action statement on the vehicle: checks space, freezes the vehicle and starts the progress bar.
*/

params ["_target", "_caller"];

private _position = (_target getPos [-1, getDir _target]) findEmptyPosition [2, 10, "Tank"];
if (_position isEqualTo []) exitWith {
    hint "Nicht genug Platz zum Aufbau der Dusche vorhanden.";
};

_target setVariable ["hasshower", false, true];
_target setVariable ["fuel", fuel _target, true];
[_target, 0] remoteExec ["setFuel", owner _target, false];
[_target, [0, 0, 0]] remoteExec ["setVelocity", owner _target, false];
if (MB_deconShower_useAnimation) then {_caller playMove MB_deconShower_animation;};

[MB_deconShower_buildTime, _this, MB_fnc_deconShowerBuild, MB_fnc_deconShowerCancel, "Baue Dekon-Dusche auf"] call ace_common_fnc_progressBar;
