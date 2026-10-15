/*
    Function: ttt_cbrn_fnc_deconShowerCancel

    Description:
        Progress bar failure/abort for both building and taking down: restores the state and fuel.
*/

(_this select 0) params ["_target", "_caller"];

hint "Vorgang abgebrochen";
_caller switchMove "";

if (typeOf _target == ttt_cbrn_deconShower_class) then {
    _target setVariable ["inUse", false, true];
    private _vehicle = [_target] call ttt_cbrn_fnc_deconShowerGetVehicle;
    if (!isNull _vehicle) then {
        [_vehicle, _vehicle getVariable ["fuel", 1]] remoteExec ["setFuel", owner _vehicle, false];
    };
} else {
    _target setVariable ["hasshower", true, true];
    [_target, _target getVariable ["fuel", 1]] remoteExec ["setFuel", owner _target, false];
};
