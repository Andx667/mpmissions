/*
    Function: ttt_cbrn_fnc_deconShowerBuildStart

    Description:
        ACE action statement on the vehicle: checks space and asks the server to start the build.
        The server only lets one player build per vehicle, stops the vehicle and then starts
        the progress bar on the caller (ttt_cbrn_deconShower_buildApproved, see ttt_cbrn_fnc_initDeconShower).
*/

params ["_target", "_caller"];

private _position = (_target getPos [-1, getDir _target]) findEmptyPosition [2, 10, "Tank"];
if (_position isEqualTo []) exitWith {
    hint "Nicht genug Platz zum Aufbau der Dusche vorhanden.";
};

["ttt_cbrn_deconShower_requestBuild", [_target, _caller]] call CBA_fnc_serverEvent;
