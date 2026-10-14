/*
    Function: MB_fnc_deconShowerGetVehicle

    Description:
        Nearest supported vehicle within 15 m of the object whose shower is currently built up.

    Parameters:
        0: Object (shower or vehicle) <OBJECT>

    Returns:
        <OBJECT> vehicle, objNull if there is none
*/

params ["_object"];

private _vehicles = nearestObjects [getPos _object, MB_deconShower_vehicles, 15] select {
    !(_x getVariable ["hasshower", true])
};

if (_vehicles isEqualTo []) then {objNull} else {_vehicles select 0}
