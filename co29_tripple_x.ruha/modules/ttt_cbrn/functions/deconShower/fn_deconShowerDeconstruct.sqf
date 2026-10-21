/*
    Function: ttt_cbrn_fnc_deconShowerDeconstruct

    Description:
        Progress bar success: asks the server to remove the shower and its items and to load it
        into the vehicle again (ttt_cbrn_deconShower_requestRemove, see ttt_cbrn_fnc_initDeconShower).
*/

(_this select 0) params ["_target", "_caller"];

private _vehicle = [_target] call ttt_cbrn_fnc_deconShowerGetVehicle;
if (isNull _vehicle) exitWith {_this call ttt_cbrn_fnc_deconShowerCancel};

hint format ["Die Dusche wurde in das Fahrzeug geladen.\nRichtung: %1 Grad\nEntfernung: %2 Meter",
    round (getPos _target getDir getPos _vehicle), round (getPos _target distance getPos _vehicle)];

["ttt_cbrn_deconShower_requestRemove", [_target, _vehicle]] call CBA_fnc_serverEvent;
_caller switchMove "";
