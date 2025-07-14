
/*
 * Authors: You
 * Description.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_C:\Users\andyb\Documents\Arma 3 - Other Profiles\Andx\mpmissions\template\functions\AI_fn_setAIskill
 *
 * Public: No
 */

params [
    "_unit",
    ["_general",        0.75, [0.0]],
    ["_courage",        0.75, [0.0]],
    ["_aimingAccuracy", 0.65, [0.0]],
    ["_aimingShake",    0.65, [0.0]],
    ["_aimingSpeed",    0.65, [0.0]],
    ["_commanding",     0.75, [0.0]],
    ["_endurance",      0.75, [0.0]],
    ["_spotDistance",   0.85, [0.0]],
    ["_spotTime",       0.85, [0.0]],
    ["_reloadSpeed",    0.75, [0.0]]
    ];

// https://community.bistudio.com/wiki/setSkill
// Approximate ranges are:
// Novice < 0.25
// Rookie >= 0.25 and <= 0.45
// Recruit > 0.45 and <= 0.65
// Veteran > 0.65 and <= 0.85
// Expert > 0.85

_unit setSkill ["general", _general];
_unit setSkill ["courage", _courage];
_unit setSkill ["aimingAccuracy", _aimingAccuracy];
_unit setSkill ["aimingShake", _aimingShake];
_unit setSkill ["aimingSpeed", _aimingSpeed];
_unit setSkill ["commanding", _commanding];
_unit setSkill ["endurance", _endurance];
_unit setSkill ["spotDistance", _spotDistance];
_unit setSkill ["spotTime", spotTime];
_unit setSkill ["reloadSpeed", _reloadSpeed];

true
