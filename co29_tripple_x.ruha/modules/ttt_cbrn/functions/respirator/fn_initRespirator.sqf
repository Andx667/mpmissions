/*
    Function: ttt_cbrn_fnc_initRespirator

    Description:
        Textures the combination unit respirator backpack: the TTT logo while it
        is worn, and the hose only while the matching air purifying respirator
        (goggles) is worn as well. Settings: config.sqf.

        Called by ttt_cbrn_fnc_init (client only).
*/

if (!hasInterface) exitWith {};

["loadout", {
    params ["_unit"];

    private _container = backpackContainer _unit;
    if (isNull _container || {(backpack _unit) != ttt_cbrn_respirator_backpack}) exitWith {};

    private _connected = (goggles _unit) == ttt_cbrn_respirator_goggles;
    private _hose = ["", ttt_cbrn_respirator_hoseTexture] select _connected;

    // "loadout" fires on every loadout change (even firing a shot), so only send the
    // global texture updates when something changed on this backpack
    private _state = [ttt_cbrn_respirator_logoTexture, _hose];
    if (_state isEqualTo (_container getVariable ["ttt_cbrn_respirator_state", []])) exitWith {};
    _container setVariable ["ttt_cbrn_respirator_state", _state];

    if (ttt_cbrn_respirator_logoTexture != "") then {
        _container setObjectTextureGlobal [4, ttt_cbrn_respirator_logoTexture];
    };

    _container setObjectTextureGlobal [1, _hose];
    _container setObjectTextureGlobal [2, _hose];
}, true] call CBA_fnc_addPlayerEventHandler;
