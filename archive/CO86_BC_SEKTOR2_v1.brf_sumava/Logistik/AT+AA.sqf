_box = _this select 0;

clearItemCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;

_box addAction ["<t color='#d12313'>Kiste Löschen</t>", "deleteVehicle (_this select 0)", nil, 99, false, true, "", ""];
[_box, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
[_box, true, [0, 2, 1], 10, true] call ace_dragging_fnc_setCarryable;

_box addItemCargoGlobal ["BWA3_PzF3_Tandem_Loaded", 6];
_box addItemCargoGlobal ["BWA3_Bunkerfaust_Loaded", 6];
_box addItemCargoGlobal ["BWA3_RGW90_Loaded", 6];
_box addItemCargoGlobal ["BWA3_Fliegerfaust", 2];
_box addItemCargoGlobal ["BWA3_Fliegerfaust_Mag", 6];
_box addItemCargoGlobal ["CUP_launch_Javelin", 1];
_box addItemCargoGlobal ["CUP_Javelin_M", 1];
