#include "..\script_component.hpp"
params ["_unit", "_array"];

private _face = selectRandom _array;

if (_face != "") then {[_unit, _face] remoteExec ["setFace", 0, _unit];};