/*
    Function: MB_fnc_gasmaskFogGetFatigue

    Parameters:
        0: _unit <OBJECT>

    Returns:
        NUMBER - fatigue from 0 (fresh) to 1 (exhausted); ACE advanced fatigue when enabled
*/

params ["_unit"];

if (missionNamespace getVariable ["ace_advanced_fatigue_enabled", false]) exitWith {
    (1 - (ace_advanced_fatigue_anReserve / 2300)) max 0 min 1
};

getFatigue _unit
