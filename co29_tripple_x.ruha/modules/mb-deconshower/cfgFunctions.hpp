#ifndef MODULES_DIRECTORY
    #define MODULES_DIRECTORY modules
#endif

class MB_deconShower {
    tag = "MB";
    class Functions {
        file = MODULES_DIRECTORY\mb-deconshower\functions;
        class deconShowerInit {postInit = 1;};
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
};
