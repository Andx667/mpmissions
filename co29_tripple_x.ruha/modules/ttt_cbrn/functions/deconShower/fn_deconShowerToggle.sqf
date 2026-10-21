/*
    Function: ttt_cbrn_fnc_deconShowerToggle

    Description:
        Turns the shower effects on/off on this client, based on diwako_cbrn (fn_toggleShower).
        Particles, mist, valve and sound come from BI's BIN_fnc_deconShowerAnim / ...AnimStop;
        on top of that a puddle is spawned and, while running, the decon PFH is active.

    Parameters:
        0: Shower <OBJECT>
        1: On <BOOL> (default: false)
*/

params ["_shower", ["_on", false]];

if !(hasInterface) exitWith {};

if (_on) then {
    if (_shower getVariable ["ttt_cbrn_deconShower_water", ttt_cbrn_deconShower_waterTime] isEqualTo 0) exitWith {};

    // already running on this client (e.g. turn on event and late join check both fired)
    if (_shower getVariable ["ttt_cbrn_deconShower_running", false]) exitWith {};
    _shower setVariable ["ttt_cbrn_deconShower_running", true];

    // water particles, mist, valve and sound: BI's own shower animation (power, count)
    [_shower, 1.5, 9] spawn BIN_fnc_deconShowerAnim;

    // Standing under the running shower decontaminates like a KAT decon kit
    if (!isNil "kat_chemical_fnc_clearContamination") then {
        private _pfh = [{call ttt_cbrn_fnc_deconShowerDeconPFH}, 1, [_shower]] call CBA_fnc_addPerFrameHandler;
        _shower setVariable ["ttt_cbrn_deconShower_pfh", _pfh];
    };

    if (isNull (_shower getVariable ["ttt_cbrn_deconShower_puddle", objNull])) then {
        private _puddle = createSimpleObject ["a3\Props_F_Enoch\Military\Decontamination\WaterSpill_01_Small_F.p3d", (getPosWorld _shower) vectorAdd [0, 0, -1.2], true];
        _puddle setDir (random 360);
        _shower setVariable ["ttt_cbrn_deconShower_puddle", _puddle];
        [{deleteVehicle _this}, _puddle, 180] call CBA_fnc_waitAndExecute;
    };
} else {
    _shower setVariable ["ttt_cbrn_deconShower_running", false];
    [_shower] call BIN_fnc_deconShowerAnimStop;

    private _pfh = _shower getVariable ["ttt_cbrn_deconShower_pfh", -1];
    if (_pfh >= 0) then {
        [_pfh] call CBA_fnc_removePerFrameHandler;
        _shower setVariable ["ttt_cbrn_deconShower_pfh", -1];
    };
    // only reset the decon timer if this shower was the one timing it
    if ((ace_player getVariable ["ttt_cbrn_deconShower_timeShower", objNull]) isEqualTo _shower) then {
        ace_player setVariable ["ttt_cbrn_deconShower_time", 0];
        ace_player setVariable ["ttt_cbrn_deconShower_timeShower", objNull];
    };

};
