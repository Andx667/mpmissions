#include "component.hpp"

params ["_unit"];

private _faction = faction _unit;
private _type = typeOf _unit;

if (_faction != "CIV_F") exitWith {""};

private _result = "";
if ((_type find "C_") == 0) then {
    _result = _type select [2];
};

_result
