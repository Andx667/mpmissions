#ifndef MODULES_DIRECTORY
    #define MODULES_DIRECTORY modules
#endif

class MB_gasmaskFog {
    tag = "MB";
    class Functions {
        file = MODULES_DIRECTORY\mb-gasmaskfog\functions;
        class gasmaskFogInit {postInit = 1;};
        class gasmaskFogCheck {};
        class gasmaskFogPFH {};
        class gasmaskFogGetFatigue {};
    };
};
