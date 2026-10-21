/*
    Function: ttt_cbrn_fnc_deconShowerCancel

    Description:
        Progress bar failure/abort for both building and taking down: restores the state.
*/

(_this select 0) params ["_target", "_caller"];

hint "Vorgang abgebrochen";
_caller switchMove "";

if (typeOf _target == ttt_cbrn_deconShower_class) then {
    _target setVariable ["inUse", false, true];
} else {
    _target setVariable ["hasshower", true, true];
};
