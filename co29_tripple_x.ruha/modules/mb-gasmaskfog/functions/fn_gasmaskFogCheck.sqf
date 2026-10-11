/*
    Function: MB_fnc_gasmaskFogCheck

    Description:
        Called whenever the player's loadout or unit changes (and once at
        mission start). Starts the fog handler the moment a mask is put on, so
        the fog timer begins at that moment. The handler stops itself once the
        mask is off and all fog has faded.

    Parameters:
        0: _unit <OBJECT> - (optional) default: current player unit
*/

params [["_unit", call CBA_fnc_currentUnit]];

if (MB_gasmaskFog_pfh != -1) exitWith {};
if !(alive _unit && {(goggles _unit) in MB_gasmaskFog_masks}) exitWith {};

// args: [last time, accumulated fog time, overlay shown, unit the state belongs to]
MB_gasmaskFog_pfh = [MB_fnc_gasmaskFogPFH, 0.05, [CBA_missionTime, 0, false, _unit]] call CBA_fnc_addPerFrameHandler;
