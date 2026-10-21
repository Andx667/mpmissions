/*
    Function: ttt_cbrn_fnc_swapUniformVest

    Description:
        Changes a unit's uniform and vest to a different set while keeping
        everything that is currently stored inside the old uniform/vest
        (items, magazines with their ammo count, weapons with their attachments
        and loaded magazines). If the new uniform/vest is too small to
        hold everything, the leftover items are dropped into a ground weapon
        holder next to the unit instead of being deleted.

        Meant to be called as the "statement" of an ACE interaction action,
        but works fine as a plain function call too.

    Parameters:
        0: _unit         <OBJECT> - unit whose uniform/vest should be changed
        1: _uniformClass <STRING> - classname of the new uniform
        2: _vestClass    <STRING> - classname of the new vest
                                    An empty uniform or vest classname leaves that piece untouched
                                    (at least one of the two is required).
        3: _isRevert     <BOOL>   - (optional) true when called by ttt_cbrn_fnc_revertUniformVest. Skips
                                    saving the current outfit as "original" and treats empty
                                    classnames as "unit had no uniform/vest before" (= remove it).
                                    Default false
        4: _revertPieces <ARRAY>  - (optional, revert only) [uniform <BOOL>, vest <BOOL>]: which pieces
                                    to change back. Pieces that were never swapped are left untouched.
                                    Default [true, true]

    Returns:
        BOOL - true if the swap was initiated (actual cargo restore happens a
        moment later, via CBA_fnc_waitUntilAndExecute)

    Example:
        [player, "U_I_C_Soldier_Bandit_1_F", "V_TacVest_oli"] call ttt_cbrn_fnc_swapUniformVest;
*/

params [
    ["_unit", objNull, [objNull]],
    ["_uniformClass", "", [""]],
    ["_vestClass", "", [""]],
    ["_isRevert", false, [false]],
    ["_revertPieces", [true, true], [[]], 2]
];

if (isNull _unit) exitWith {false};

// Outside of a revert an empty classname means "leave this piece as it is",
// during a revert only the pieces in _revertPieces are changed back
private _keepUniform = [_uniformClass == "", !(_revertPieces select 0)] select _isRevert;
private _keepVest = [_vestClass == "", !(_revertPieces select 1)] select _isRevert;

if (_keepUniform && {_keepVest}) exitWith {
    diag_log text "[ttt_cbrn_uniformSwap] swapUniformVest: nothing to change (missing uniform/vest classname).";
    false
};

if (_uniformClass != "" && {!isClass (configFile >> "CfgWeapons" >> _uniformClass)}) exitWith {
    diag_log text format ["[ttt_cbrn_uniformSwap] Unknown uniform class: %1", _uniformClass];
    false
};

if (_vestClass != "" && {!isClass (configFile >> "CfgWeapons" >> _vestClass)}) exitWith {
    diag_log text format ["[ttt_cbrn_uniformSwap] Unknown vest class: %1", _vestClass];
    false
};

// --- Pull everything currently stored in a container ---
// [items [[classes], [counts]], magazines [[class, ammo], ...], weapons [weaponsItems array, ...]]
private _fnc_getCargo = {
    params ["_container"];
    if (isNull _container) exitWith {[[[], []], [], []]};
    [getItemCargo _container, magazinesAmmoCargo _container, weaponsItemsCargo _container]
};

private _oldUniformCargo = [[uniformContainer _unit] call _fnc_getCargo, [[[], []], [], []]] select _keepUniform;
private _oldVestCargo = [[vestContainer _unit] call _fnc_getCargo, [[[], []], [], []]] select _keepVest;

// Remember what the unit wore before the first swap, so it can be swapped back
// later (ttt_cbrn_fnc_revertUniformVest). Stored as [uniformEntry, vestEntry], an entry
// is [classname] once that piece was swapped and [] if it was kept. Swapping again
// while already swapped keeps the true original.
if (!_isRevert) then {
    private _original = +(_unit getVariable ["ttt_cbrn_uniformSwap_original", [[], []]]);
    if (!_keepUniform && {(_original select 0) isEqualTo []}) then {_original set [0, [uniform _unit]]};
    if (!_keepVest && {(_original select 1) isEqualTo []}) then {_original set [1, [vest _unit]]};
    _unit setVariable ["ttt_cbrn_uniformSwap_original", _original];
};

// --- Swap the uniform and vest (the old ones and their cargo are discarded, --- //
// --- the content was already saved above and gets restored afterwards)      --- //
if (!_keepUniform) then {
    if (_uniformClass == "") then {removeUniform _unit} else {_unit forceAddUniform _uniformClass};
};
if (!_keepVest) then {
    if (_vestClass == "") then {removeVest _unit} else {_unit addVest _vestClass};
};

// The new uniform/vest container objects (needed to restore the cargo into)
// are not guaranteed to exist within the same frame the item was added, so the
// rest of the logic is deferred until they do (CBA per-frame wait, unscheduled).
[
    {
        params ["_unit", "", "", "_uniformClass", "_vestClass"];
        !(alive _unit) || {
            (_uniformClass == "" || {!isNull (uniformContainer _unit)}) &&
            {_vestClass == "" || {!isNull (vestContainer _unit)}}
        }
    },
    {
    params ["_unit", "_oldUniformCargo", "_oldVestCargo"];

    if (!alive _unit) exitWith {};

    // --- Push the saved cargo back in, dropping anything that no longer fits ---
    private _overflowHolder = objNull;
    private _fnc_getOverflowHolder = {
        if (isNull _overflowHolder) then {
            _overflowHolder = createVehicle ["GroundWeaponHolder", getPosATL _unit, [], 0, "CAN_COLLIDE"];
            _overflowHolder setPosATL (getPosATL _unit);
        };
        _overflowHolder
    };

    // Picks the container if the item still fits, otherwise the overflow holder
    private _fnc_target = {
        params ["_container", "_classname"];
        if (!isNull _container && {_container canAdd _classname}) then {_container} else {call _fnc_getOverflowHolder}
    };

    private _fnc_restoreCargo = {
        params ["_container", "_cargo"];
        _cargo params ["_items", "_magazines", "_weapons"];
        _items params ["_classnames", "_counts"];

        {
            private _classname = _x;
            for "_i" from 1 to (_counts select _forEachIndex) do {
                ([_container, _classname] call _fnc_target) addItemCargoGlobal [_classname, 1];
            };
        } forEach _classnames;

        // keeps the ammo count of partly used magazines
        {
            _x params ["_classname", "_ammo"];
            ([_container, _classname] call _fnc_target) addMagazineAmmoCargo [_classname, 1, _ammo];
        } forEach _magazines;

        // keeps attachments and loaded magazines
        {
            ([_container, _x select 0] call _fnc_target) addWeaponWithAttachmentsCargoGlobal [_x, 1];
        } forEach _weapons;
    };

    [uniformContainer _unit, _oldUniformCargo] call _fnc_restoreCargo;
    [vestContainer _unit, _oldVestCargo] call _fnc_restoreCargo;

    if !(isNull _overflowHolder) then {
        systemChat "Deine neue Uniform/Weste hatte nicht genug Platz - einige Gegenstände liegen neben dir am Boden.";
    };
    },
    [_unit, _oldUniformCargo, _oldVestCargo, _uniformClass, _vestClass],
    5,
    {
        diag_log text format ["[ttt_cbrn_uniformSwap] Timed out waiting for new uniform/vest containers of %1 - cargo not restored.", _this select 0];
    }
] call CBA_fnc_waitUntilAndExecute;

true
