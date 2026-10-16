#include "component.hpp"

// normalize magazines in content. a plain string immediately followed by a
// number is treated as an item/count shorthand pair instead of two separate entries.
// input: ["stanag_foo", "stanag_blub", "handgrenade", "something_else", 3]
// output: [["stanag_foo", 2], ["handgrenade", 1], ["something_else", 3]]

params ["_contentFromConfig"];

private _fnc_hashIncr = {
    params ["_hash", "_key", ["_amount", 1]];

    private _value = _amount;
    if ([_hash, _key] call CBA_fnc_hashHasKey) then {
        _value = _value + ([_hash, _key] call CBA_fnc_hashGet);
    };
    [_hash, _key, _value] call CBA_fnc_hashSet;
};

private _magazines = [] call CBA_fnc_hashCreate;
private _contentForLoadout = [];

private _index = 0;
private _contentCount = count _contentFromConfig;
while {_index < _contentCount} do {
    private _entry = _contentFromConfig select _index;

    if ((typeName _entry) == "ARRAY") then {
        if (isClass (configFile >> "CfgWeapons" >> (_entry select 0))) then {
            _entry params ["_weapon", "_muzzle", "_pointer", "_optics", "_magazine", "_underbarrelMagazine", "_underbarrel"];

            if (!(_magazine isEqualTo "") && isNumber (configFile >> "CfgMagazines" >> _magazine >> "count")) then {
                _magazine = [_magazine, (getNumber (configFile >> "CfgMagazines" >> _magazine >> "count"))];
            };
            if (!(_underbarrelMagazine isEqualTo "") && isNumber (configFile >> "CfgMagazines" >> _underbarrelMagazine >> "count")) then {
                _underbarrelMagazine = [_underbarrelMagazine, (getNumber (configFile >> "CfgMagazines" >> _underbarrelMagazine >> "count"))];
            };
            _contentForLoadout pushBack [[_weapon, _muzzle, _pointer, _optics, _magazine, _underbarrelMagazine, _underbarrel],1];
        };
    } else {
        if ((typeName _entry) == "STRING") then {
            private _amount = 1;
            private _nextIndex = _index + 1;
            if (_nextIndex < _contentCount) then {
                private _nextEntry = _contentFromConfig select _nextIndex;
                if ((typeName _nextEntry) == "SCALAR") then {
                    _amount = (floor _nextEntry) max 1;
                    _index = _nextIndex;
                };
            };
            [_magazines, _entry, _amount] call _fnc_hashIncr;
        };
    };

    _index = _index + 1;
};

[
    _magazines,
    {
        private _className = _key;

        if (_className isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then {
            _contentForLoadout pushBack [_key, _value, 1];
        } else {
            _contentForLoadout pushBack [_key, _value];
        };
    }
] call CBA_fnc_hashEachPair;

_contentForLoadout
