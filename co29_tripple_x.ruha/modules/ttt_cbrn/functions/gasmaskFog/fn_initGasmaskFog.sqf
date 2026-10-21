/*
    Function: ttt_cbrn_fnc_initGasmaskFog (postInit)

    Description:
        Gas mask fogging, ported from diwako_cbrn (APL-SA, see LICENSE.txt).
        The longer the player wears a mask from ttt_cbrn_gasmaskFog_masks (counted from
        the moment it is put on), the more a fog overlay obscures the screen. Taking the mask off clears the fog
        again. Fatigue speeds it up, an air conditioner backpack slows it down.
        Settings: config.sqf.

        Called by ttt_cbrn_fnc_init (client only).
*/

if (!hasInterface) exitWith {};

ttt_cbrn_gasmaskFog_pfh = -1;

// the fog handler only runs while a mask is worn (or fog is still fading): start it whenever a mask is put on
["loadout", {call ttt_cbrn_fnc_gasmaskFogCheck}, true] call CBA_fnc_addPlayerEventHandler;
["unit", {call ttt_cbrn_fnc_gasmaskFogCheck}, false] call CBA_fnc_addPlayerEventHandler;
