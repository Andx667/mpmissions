/*
    Function: ttt_cbrn_fnc_revertUniformVest

    Description:
        Swaps a unit back to the uniform/vest it wore before it was changed by
        ttt_cbrn_fnc_swapUniformVest, keeping everything currently stored inside
        (same cargo handling as the swap: overflow drops next to the unit).

        Does nothing if the unit was never swapped.

    Parameters:
        0: _unit <OBJECT> - unit to change back

    Returns:
        BOOL - true if the swap back was initiated

    Example:
        [player] call ttt_cbrn_fnc_revertUniformVest;
*/

params [["_unit", objNull, [objNull]]];

if (isNull _unit) exitWith {false};

private _original = _unit getVariable ["ttt_cbrn_uniformSwap_original", []];
if (_original isEqualTo []) exitWith {false};

_original params ["_uniformClass", "_vestClass"];

// only forget the original outfit once the swap back was really started
private _result = [_unit, _uniformClass, _vestClass, true] call ttt_cbrn_fnc_swapUniformVest;
if (_result) then {
    _unit setVariable ["ttt_cbrn_uniformSwap_original", nil];
};

_result
