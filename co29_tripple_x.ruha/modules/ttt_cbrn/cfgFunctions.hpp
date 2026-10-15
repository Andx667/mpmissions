#ifndef MODULES_DIRECTORY
    #define MODULES_DIRECTORY modules
#endif

class ttt_cbrn {
    tag = "ttt_cbrn";

    class Core {
        file = MODULES_DIRECTORY\ttt_cbrn\functions;
        class init {postInit = 1;};
    };

    class DeconShower {
        file = MODULES_DIRECTORY\ttt_cbrn\functions\deconShower;
        class initDeconShower {};
        class deconShowerGetVehicle {};
        class deconShowerCanBuild {};
        class deconShowerCanDeconstruct {};
        class deconShowerBuildStart {};
        class deconShowerBuild {};
        class deconShowerDeconstructStart {};
        class deconShowerDeconstruct {};
        class deconShowerCancel {};
        class deconShowerToggle {};
        class deconShowerDeconPFH {};
    };

    class GasmaskFog {
        file = MODULES_DIRECTORY\ttt_cbrn\functions\gasmaskFog;
        class initGasmaskFog {};
        class gasmaskFogCheck {};
        class gasmaskFogPFH {};
        class gasmaskFogGetFatigue {};
    };

    class Respirator {
        file = MODULES_DIRECTORY\ttt_cbrn\functions\respirator;
        class initRespirator {};
    };

    class UniformSwap {
        file = MODULES_DIRECTORY\ttt_cbrn\functions\uniformSwap;
        class swapUniformVest {};
        class revertUniformVest {};
        class addVehicleUniformSwapAction {};
    };
};
