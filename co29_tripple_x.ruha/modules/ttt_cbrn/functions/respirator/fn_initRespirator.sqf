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

    if (ttt_cbrn_respirator_logoTexture != "") then {
        _container setObjectTexture [4, ttt_cbrn_respirator_logoTexture];
    };

    private _connected = (goggles _unit) == ttt_cbrn_respirator_goggles;
    private _hose = ["", ttt_cbrn_respirator_hoseTexture] select _connected;
    _container setObjectTexture [1, _hose];
    _container setObjectTexture [2, _hose];
}, true] call CBA_fnc_addPlayerEventHandler;
