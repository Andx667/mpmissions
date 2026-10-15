#include "component.hpp"

params ["_unit", ["_type", ""]];

if (_type == "") then {_type = typeOf _unit};

private _defactionedClassname = "";
{
    _defactionedClassname = [_unit, _type] call _x;
    if (_defactionedClassname != "") exitWith {true};
} forEach [FUNC(VanillaMilitaryDefactionizer), FUNC(VanillaCivDefactionizer)];

if (_defactionedClassname == "") then {
    WARNING_1("type name of unit %1 cannot be defactionized :( defaulting to classname", _unit);
    _defactionedClassname = _type;
};

TRACE_2("unit class %1 defactionized to %2", _type, _defactionedClassname);

_defactionedClassname
