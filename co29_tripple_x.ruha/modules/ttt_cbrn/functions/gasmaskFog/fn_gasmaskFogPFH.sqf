/*
    Function: ttt_cbrn_fnc_gasmaskFogPFH

    Description:
        Per frame handler started by ttt_cbrn_fnc_initGasmaskFog, do not call directly.
*/

if (isGamePaused) exitWith {};

params ["_args"];
_args params ["_lastTime", "_uptime", "_fogShown", "_lastUnit"];

private _unit = call CBA_fnc_currentUnit;
private _time = CBA_missionTime;
private _delta = _time - _lastTime;

// new body (respawn, unit switch): start with a clean mask
if !(_unit isEqualTo _lastUnit) then {
    _uptime = 0;
    if (_fogShown) then {
        "ttt_cbrn_gasmaskFog" cutFadeOut 0;
        _fogShown = false;
    };
    _lastUnit = _unit;
};

private _maskOn = alive _unit && {(goggles _unit) in ttt_cbrn_gasmaskFog_masks};

if (_maskOn) then {
    private _fatigueAdditive = 0;
    if (ttt_cbrn_gasmaskFog_fatigueEnabled) then {
        _fatigueAdditive = ([_unit] call ttt_cbrn_fnc_gasmaskFogGetFatigue) * ttt_cbrn_gasmaskFog_fatigueCoef * _delta;
    };

    private _increase = _delta + _fatigueAdditive;
    if ((backpack _unit) in ttt_cbrn_gasmaskFog_conditioning) then {
        _increase = _increase * ttt_cbrn_gasmaskFog_accumulationCoef;
    };
    _uptime = _uptime + _increase;

    if (_uptime > ttt_cbrn_gasmaskFog_startTime) then {
        if (!_fogShown) then {
            "ttt_cbrn_gasmaskFog" cutRsc ["ttt_cbrn_gasmaskFog", "PLAIN", 1, false];
            _fogShown = true;
        };

        private _display = uiNamespace getVariable ["ttt_cbrn_gasmaskFog_display", displayNull];
        private _alpha = linearConversion [ttt_cbrn_gasmaskFog_startTime, ttt_cbrn_gasmaskFog_maxTime, _uptime, 0, ttt_cbrn_gasmaskFog_maxAlpha, true];
        (_display displayCtrl 1336) ctrlSetTextColor [1, 1, 1, _alpha];
    };
} else {
    _uptime = (_uptime - (_delta * ttt_cbrn_gasmaskFog_fadeCoef)) max 0;

    if (_fogShown) then {
        "ttt_cbrn_gasmaskFog" cutFadeOut 1;
        _fogShown = false;
    };

    // mask is off and the fog is gone: stop until the next time a mask is put on
    if (_uptime == 0) then {
        [_this select 1] call CBA_fnc_removePerFrameHandler;
        ttt_cbrn_gasmaskFog_pfh = -1;
    };
};

// handler was just removed, nothing left to update
if (ttt_cbrn_gasmaskFog_pfh == -1) exitWith {};

_args set [0, _time];
_args set [1, _uptime];
_args set [2, _fogShown];
_args set [3, _lastUnit];
