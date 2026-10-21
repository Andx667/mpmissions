/*
    Function: ttt_cbrn_fnc_deconShowerDeconPFH

    Description:
        Per second while a shower runs: a contaminated player standing within 1.5 m for the decon time
        gets cleared via kat_chemical_fnc_clearContamination (same as a KAT decon kit).

        Every running shower has its own PFH, so the player's decon timer remembers which shower
        it belongs to (ttt_cbrn_deconShower_timeShower). Only that shower may count it up or reset it,
        otherwise other running showers would reset it every second.

    Parameters (CBA PFH):
        0: [Shower <OBJECT>]
*/

params ["_args", "_handle"];
_args params ["_shower"];

// shower is gone without this client getting the turn off event
if (isNull _shower) exitWith {[_handle] call CBA_fnc_removePerFrameHandler};

private _player = ace_player;
private _owner = _player getVariable ["ttt_cbrn_deconShower_timeShower", objNull];

if (
    alive _player
    && {(_player distance2D _shower) < 1.5}
    && {!((_player getVariable ["kat_chemical_chemicalContamination", ""]) in ["", false])}
) then {
    // Already being timed by another running shower the player is standing under: let that one count
    if (
        !isNull _owner && {_owner isNotEqualTo _shower}
        && {(_owner getVariable ["ttt_cbrn_deconShower_pfh", -1]) >= 0}
        && {(_player distance2D _owner) < 1.5}
    ) exitWith {};

    private _needed = [ttt_cbrn_deconShower_deconTime, missionNamespace getVariable ["kat_chemical_deconActionTime", 8]] select (ttt_cbrn_deconShower_deconTime < 0);
    private _time = 1;
    if (_owner isEqualTo _shower) then {
        _time = (_player getVariable ["ttt_cbrn_deconShower_time", 0]) + 1;
    };

    if (_time >= _needed) then {
        [_player, _player] call kat_chemical_fnc_clearContamination;
        hint "Dekontamination erfolgreich abgeschlossen.";
        _time = 0;
    };
    _player setVariable ["ttt_cbrn_deconShower_time", _time];
    _player setVariable ["ttt_cbrn_deconShower_timeShower", _shower];
} else {
    if (_owner isEqualTo _shower) then {
        _player setVariable ["ttt_cbrn_deconShower_time", 0];
        _player setVariable ["ttt_cbrn_deconShower_timeShower", objNull];
    };
};
