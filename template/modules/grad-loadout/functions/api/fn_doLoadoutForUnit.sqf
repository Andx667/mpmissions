#include "component.hpp"

params [["_unit", objNull], ["_type", ""], ["_rank", ""]];

private _configPath = missionConfigFile >> "Loadouts";

if (GVAR(Chosen_Prefix) != "") then {
    _configPath = _configPath >> GVAR(Chosen_Prefix);
};

TRACE_2("applying loadout from mission config file %1 to %2 ...", _configPath, _unit);

// remember the override (cleared by a plain call, e.g. on respawn) for customGear lookups
_unit setVariable [QGVAR(overrideType), _type];
_unit setVariable [QGVAR(overrideRank), _rank];

private _loadoutHash = [_unit, _configPath, _type, _rank] call FUNC(GetUnitLoadoutFromConfig);
// _type and _rank optionally override typeOf and rank of _unit, e.g. to turn a rifleman into a medic
[_loadoutHash, _unit] call FUNC(randomizeLoadout);
_loadoutHash = [_loadoutHash, _unit] call FUNC(ApplyRevivers);

if (([_loadoutHash] call CBA_fnc_hashSize) > 0) then {
    [_loadoutHash, _unit] call FUNC(DoLoadout);
} else {
    TRACE_1("no loadout entries found for %1, skipping unit", _unit);
};
