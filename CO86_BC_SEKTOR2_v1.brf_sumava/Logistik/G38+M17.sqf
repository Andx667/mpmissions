_box = _this select 0;

clearItemCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;

_box addAction ["<t color='#d12313'>Kiste Löschen</t>", "deleteVehicle (_this select 0)", nil, 99, false, true, "", ""];
[_box, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
[_box, true, [0, 2, 1], 10, true] call ace_dragging_fnc_setCarryable;

_box addItemCargoGlobal ["BWA3_30Rnd_556x45_G36_AP", 100];
_box addItemCargoGlobal ["BWA3_30Rnd_556x45_G36_Tracer", 60];
_box addItemCargoGlobal ["CUP_17Rnd_9x19_M17_Black", 40];
