#include "..\script_component.hpp"
params ["_unit", "_array"];

private _headgear = selectRandom _array;
if (_headgear != [_unit] call GRAD_slingHelmet_fnc_getSlungHelmet) then {
    [_unit] call GRAD_slingHelmet_fnc_removeSlungHelmet;
    if (_headgear != "") then {
        [_unit, _headgear] call GRAD_slingHelmet_fnc_addSlungHelmet;
    };
};
