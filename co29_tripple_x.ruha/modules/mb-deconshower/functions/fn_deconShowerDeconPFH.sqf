/*
    Function: MB_fnc_deconShowerDeconPFH

    Description:
        Per second while a shower runs: a contaminated player standing within 1.5 m for the decon time
        gets cleared via kat_chemical_fnc_clearContamination (same as a KAT decon kit).

    Parameters (CBA PFH):
        0: [Shower <OBJECT>]
*/

params ["_args"];
_args params ["_shower"];

private _player = ace_player;

if (
    alive _player
    && {(_player distance2D _shower) < 1.5}
    && {!((_player getVariable ["kat_chemical_chemicalContamination", ""]) in ["", false])}
) then {
    private _needed = [MB_deconShower_deconTime, missionNamespace getVariable ["kat_chemical_deconActionTime", 8]] select (MB_deconShower_deconTime < 0);
    private _time = (_player getVariable ["MB_deconShower_time", 0]) + 1;

    if (_time >= _needed) then {
        [_player, _player] call kat_chemical_fnc_clearContamination;
        hint "Dekontamination erfolgreich abgeschlossen.";
        _time = 0;
    };
    _player setVariable ["MB_deconShower_time", _time];
} else {
    _player setVariable ["MB_deconShower_time", 0];
};
