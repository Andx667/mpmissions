/*
    Function: ttt_cbrn_fnc_deconShowerDeconstruct

    Description:
        Progress bar success: removes the shower and its items and loads it into the vehicle again.
*/

(_this select 0) params ["_target", "_caller"];

private _vehicle = [_target] call ttt_cbrn_fnc_deconShowerGetVehicle;

{
    deleteVehicle _x;
} forEach (_target getVariable ["ttt_cbrn_deconShower_attached", []]);

if (!isNull _vehicle) then {
    hint format ["Die Dusche wurde in das Fahrzeug geladen.\nRichtung: %1 Grad\nEntfernung: %2 Meter",
        round (getPos _target getDir getPos _vehicle), round (getPos _target distance getPos _vehicle)];
    _vehicle setVariable ["hasshower", true, true];
    [_vehicle, _vehicle getVariable ["fuel", 1]] remoteExec ["setFuel", owner _vehicle, false];
};

["ttt_cbrn_deconShower_turnOff", [_target]] call CBA_fnc_globalEvent;
deleteVehicle _target;
_caller switchMove "";
