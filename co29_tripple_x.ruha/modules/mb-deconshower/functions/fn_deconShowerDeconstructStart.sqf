/*
    Function: MB_fnc_deconShowerDeconstructStart

    Description:
        ACE action statement on the shower: freezes the vehicle and starts the progress bar.
*/

params ["_target", "_caller"];

private _vehicle = [_target] call MB_fnc_deconShowerGetVehicle;
if (isNull _vehicle) exitWith {};

_target setVariable ["inUse", true, true];
_vehicle setVariable ["fuel", fuel _vehicle, true];
[_vehicle, 0] remoteExec ["setFuel", owner _vehicle, false];
[_vehicle, [0, 0, 0]] remoteExec ["setVelocity", owner _vehicle, false];
if (MB_deconShower_useAnimation) then {_caller playMove MB_deconShower_animation;};

[MB_deconShower_buildTime, _this, MB_fnc_deconShowerDeconstruct, MB_fnc_deconShowerCancel, "Baue Dekon-Dusche ab"] call ace_common_fnc_progressBar;
