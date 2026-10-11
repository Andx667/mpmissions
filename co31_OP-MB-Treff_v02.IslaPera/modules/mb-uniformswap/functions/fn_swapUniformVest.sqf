/*
    Function: MB_fnc_swapUniformVest

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
        1: _uniformClass <STRING> - classname of the new uniform   <<< PLACEHOLDER, CHANGE ME >>>
        2: _vestClass    <STRING> - classname of the new vest      <<< PLACEHOLDER, CHANGE ME >>>

    Returns:
        BOOL - true if the swap was initiated (actual cargo restore happens a
        moment later, via CBA_fnc_waitUntilAndExecute)

    Example:
        [player, "U_I_C_Soldier_Bandit_1_F", "V_TacVest_oli"] call MB_fnc_swapUniformVest;
*/

params [
    ["_unit", objNull, [objNull]],
    ["_uniformClass", "U_B_CombatUniform_mcam", [""]], // <<< PLACEHOLDER, CHANGE ME
    ["_vestClass", "V_PlateCarrier1_rgr", [""]]         // <<< PLACEHOLDER, CHANGE ME
];

if (isNull _unit) exitWith {false};

if !(isClass (configFile >> "CfgWeapons" >> _uniformClass)) exitWith {
    diag_log text format ["[MB_uniformSwap] Unknown uniform class: %1", _uniformClass];
    false
};

if !(isClass (configFile >> "CfgWeapons" >> _vestClass)) exitWith {
    diag_log text format ["[MB_uniformSwap] Unknown vest class: %1", _vestClass];
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

// --- Swap the uniform and vest (the old ones and their cargo are discarded, --- //
// --- the content was already saved above and gets restored afterwards)      --- //
_unit forceAddUniform _uniformClass;
_unit addVest _vestClass;

// The new uniform/vest container objects (needed to restore the cargo into)
// are not guaranteed to exist within the same frame the item was added, so the
// rest of the logic is deferred until they do (CBA per-frame wait, unscheduled).
[
    {
        params ["_unit"];
        !(alive _unit) || {!isNull (uniformContainer _unit) && {!isNull (vestContainer _unit)}}
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
        if (isNull _container) exitWith {};
        _cargo params ["_classnames", "_counts"];

        {
            private _classname = _x;
            private _count = _counts select _forEachIndex;
            for "_i" from 1 to _count do {
                if (_container canAdd _classname) then {
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
    [_unit, _oldUniformCargo, _oldVestCargo],
    5,
    {
        diag_log text format ["[MB_uniformSwap] Timed out waiting for new uniform/vest containers of %1 - cargo not restored.", _this select 0];
    }
] call CBA_fnc_waitUntilAndExecute;

true
