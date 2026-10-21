/*
    Function: ttt_cbrn_fnc_deconShowerGetVehicle

    Description:
        The vehicle the shower was built from (stored by ttt_cbrn_fnc_deconShowerBuild),
        as long as it is alive and within 15 m of the shower.

    Parameters:
        0: Shower <OBJECT>

    Returns:
        <OBJECT> vehicle, objNull if there is none
*/

params ["_shower"];

private _vehicle = _shower getVariable ["ttt_cbrn_deconShower_vehicle", objNull];

if (alive _vehicle && {(_vehicle distance _shower) < 15}) then {_vehicle} else {objNull}
