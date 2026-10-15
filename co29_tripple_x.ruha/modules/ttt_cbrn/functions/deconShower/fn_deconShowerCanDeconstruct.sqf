/*
    Function: ttt_cbrn_fnc_deconShowerCanDeconstruct

    Description:
        ACE condition: shower is not in use and a supported vehicle with a built-up shower is nearby.

    Returns:
        <BOOL>
*/

params ["_target"];

!(_target getVariable ["inUse", false]) && {!isNull ([_target] call ttt_cbrn_fnc_deconShowerGetVehicle)}
