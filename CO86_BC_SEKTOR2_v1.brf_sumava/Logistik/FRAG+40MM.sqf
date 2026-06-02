_box = _this select 0;

clearItemCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;

_box addAction ["<t color='#d12313'>Kiste Löschen</t>", "deleteVehicle (_this select 0)", nil, 99, false, true, "", ""];
[_box, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
[_box, true, [0, 2, 1], 10, true] call ace_dragging_fnc_setCarryable;

_box addItemCargoGlobal ["BWA3_DM25", 100];
_box addItemCargoGlobal ["BWA3_DM32_Blue", 10];
_box addItemCargoGlobal ["BWA3_DM32_Yellow", 10];
_box addItemCargoGlobal ["BWA3_DM32_Green", 30];
_box addItemCargoGlobal ["BWA3_DM32_Orange", 20];
_box addItemCargoGlobal ["BWA3_DM32_Purple", 20];
_box addItemCargoGlobal ["BWA3_DM32_Red", 20];
_box addItemCargoGlobal ["BWA3_DM51A1", 50];
_box addItemCargoGlobal ["ACE_HuntIR_M203", 20];
_box addItemCargoGlobal ["CUP_1Rnd_HE_M203", 40];
_box addItemCargoGlobal ["CUP_1Rnd_HEDP_M203", 40];
_box addItemCargoGlobal ["1Rnd_SmokeBlue_Grenade_shell", 10];
_box addItemCargoGlobal ["1Rnd_SmokeYellow_Grenade_shell", 10];
_box addItemCargoGlobal ["1Rnd_SmokeGreen_Grenade_shell", 20];
_box addItemCargoGlobal ["1Rnd_SmokeOrange_Grenade_shell", 10];
_box addItemCargoGlobal ["1Rnd_SmokePurple_Grenade_shell", 10];
_box addItemCargoGlobal ["1Rnd_SmokeRed_Grenade_shell", 20];
_box addItemCargoGlobal ["1Rnd_Smoke_Grenade_shell", 30];