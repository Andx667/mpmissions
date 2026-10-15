/*
    Function: ttt_cbrn_fnc_deconShowerDeconstructStart

    Description:
        ACE action statement on the shower: freezes the vehicle and starts the progress bar.
*/

params ["_target", "_caller"];

private _vehicle = [_target] call ttt_cbrn_fnc_deconShowerGetVehicle;
if (isNull _vehicle) exitWith {};

_target setVariable ["inUse", true, true];
_vehicle setVariable ["fuel", fuel _vehicle, true];
[_vehicle, 0] remoteExec ["setFuel", owner _vehicle, false];
[_vehicle, [0, 0, 0]] remoteExec ["setVelocity", owner _vehicle, false];
if (ttt_cbrn_deconShower_useAnimation) then {_caller playMove ttt_cbrn_deconShower_animation;};

[ttt_cbrn_deconShower_buildTime, _this, ttt_cbrn_fnc_deconShowerDeconstruct, ttt_cbrn_fnc_deconShowerCancel, "Baue Dekon-Dusche ab"] call ace_common_fnc_progressBar;
