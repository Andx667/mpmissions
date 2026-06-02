_box = _this select 0;

clearItemCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;

_box addAction ["<t color='#d12313'>Kiste Löschen</t>", "deleteVehicle (_this select 0)", nil, 99, false, true, "", ""];
[_box, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
[_box, true, [0, 2, 1], 10, true] call ace_dragging_fnc_setCarryable;

_box addItemCargoGlobal ["BWA3_20Rnd_762x51_G28_AP", 60];
_box addItemCargoGlobal ["BWA3_20Rnd_762x51_G28_LR", 60];
_box addItemCargoGlobal ["BWA3_20Rnd_762x51_G28_Tracer", 60];
_box addItemCargoGlobal ["BWA3_20Rnd_762x51_G28_SD", 60];