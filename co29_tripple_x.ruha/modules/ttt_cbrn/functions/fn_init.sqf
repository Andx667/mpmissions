/*
    Function: ttt_cbrn_fnc_init (postInit)

    Description:
        Entry point of the TTT CBRN module: loads config.sqf and starts the
        decon shower (server + client) and the client-side parts (gas mask
        fog, respirator textures). The uniform swap has
        nothing to initialise, its action is added per vehicle via
        ttt_cbrn_fnc_addVehicleUniformSwapAction.
        Settings: config.sqf.

        Needs CBA and ACE.
*/

#include "..\config.sqf"

call ttt_cbrn_fnc_initDeconShower;
call ttt_cbrn_fnc_initGasmaskFog;
call ttt_cbrn_fnc_initRespirator;
