#ifndef MODULES_DIRECTORY
    #define MODULES_DIRECTORY modules
#endif

class MB_gasmaskFog {
    idd = -1;
    movingEnable = false;
    duration = 999999;
    onLoad = "uiNamespace setVariable ['MB_gasmaskFog_display', _this select 0]";
    onUnload = "uiNamespace setVariable ['MB_gasmaskFog_display', displayNull]";
    controlsBackground[] = {overlay};
    objects[] = {};
    controls[] = {};

    class overlay {
        idc = 1336;
        type = 0;
        style = 48;
        colorBackground[] = {};
        colorText[] = {1, 1, 1, 0};
        font = "PuristaMedium";
        sizeEx = 1.0;
        moving = false;
        x = safeZoneXAbs;
        y = safeZoneY - safeZoneH / 4;
        w = safeZoneWAbs;
        h = safeZoneH * 1.5;
        text = "modules\mb-gasmaskfog\images\fog_overlay.paa";
    };
};
