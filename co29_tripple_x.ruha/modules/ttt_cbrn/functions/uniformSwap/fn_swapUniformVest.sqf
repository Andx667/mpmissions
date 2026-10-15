/*
    Function: ttt_cbrn_fnc_swapUniformVest

    Description:
        Changes a unit's uniform and vest to a different set while keeping
        everything that is currently stored inside the old uniform/vest
        (items, magazines, weapons). If the new uniform/vest is too small to
        hold everything, the leftover items are dropped into a ground weapon
        holder next to the unit instead of being deleted.

        Meant to be called as the "statement" of an ACE interaction action,
        but works fine as a plain function call too.

    Parameters:
        0: _unit         <OBJECT> - unit whose uniform/vest should be changed
        1: _uniformClass <STRING> - classname of the new uniform
        2: _vestClass    <STRING> - classname of the new vest
        3: _isRevert     <BOOL>   - (optional) true when called by ttt_cbrn_fnc_revertUniformVest. Skips
                                    saving the current outfit as "original" and allows empty
                                    classnames (= unit had no uniform/vest before). Default false

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
    ["_isRevert", false, [false]]
];

if (isNull _unit) exitWith {false};

if (!_isRevert && {_uniformClass == "" || {_vestClass == ""}}) exitWith {
    diag_log text "[ttt_cbrn] swapUniformVest: missing uniform/vest classname.";
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

// --- Pull everything currently stored in a container (items/magazines/weapons) ---
private _fnc_getCargo = {
    params ["_container"];
    if (isNull _container) exitWith {[[[], []], [[], []], [[], []]]};
    [getItemCargo _container, getMagazineCargo _container, getWeaponCargo _container]
};

private _oldUniformCargo = [uniformContainer _unit] call _fnc_getCargo;
private _oldVestCargo = [vestContainer _unit] call _fnc_getCargo;

// Remember what the unit wore before the first swap, so it can be swapped back
// later (ttt_cbrn_fnc_revertUniformVest). Swapping again while already swapped keeps
// the true original.
if (!_isRevert && {isNil {_unit getVariable "ttt_cbrn_uniformSwap_original"}}) then {
    _unit setVariable ["ttt_cbrn_uniformSwap_original", [uniform _unit, vest _unit]];
};

// --- Swap the uniform and vest (the old ones and their cargo are discarded, --- //
// --- the content was already saved above and gets restored afterwards)      --- //
if (_uniformClass == "") then {removeUniform _unit} else {_unit forceAddUniform _uniformClass};
if (_vestClass == "") then {removeVest _unit} else {_unit addVest _vestClass};

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

    private _fnc_restoreCargo = {
        params ["_container", "_cargo", "_addFnc"];
        _cargo params ["_classnames", "_counts"];

        {
            private _classname = _x;
            private _count = _counts select _forEachIndex;
            for "_i" from 1 to _count do {
                if (!isNull _container && {_container canAdd _classname}) then {
                    [_container, [_classname, 1]] call _addFnc;
                } else {
                    [(call _fnc_getOverflowHolder), [_classname, 1]] call _addFnc;
                };
            };
        } forEach _classnames;
    };

    private _newUniformContainer = uniformContainer _unit;
    private _newVestContainer = vestContainer _unit;

    [_newUniformContainer, _oldUniformCargo select 0, {(_this select 0) addItemCargoGlobal (_this select 1)}] call _fnc_restoreCargo;
    [_newUniformContainer, _oldUniformCargo select 1, {(_this select 0) addMagazineCargoGlobal (_this select 1)}] call _fnc_restoreCargo;
    [_newUniformContainer, _oldUniformCargo select 2, {(_this select 0) addWeaponCargoGlobal (_this select 1)}] call _fnc_restoreCargo;

    [_newVestContainer, _oldVestCargo select 0, {(_this select 0) addItemCargoGlobal (_this select 1)}] call _fnc_restoreCargo;
    [_newVestContainer, _oldVestCargo select 1, {(_this select 0) addMagazineCargoGlobal (_this select 1)}] call _fnc_restoreCargo;
    [_newVestContainer, _oldVestCargo select 2, {(_this select 0) addWeaponCargoGlobal (_this select 1)}] call _fnc_restoreCargo;

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
