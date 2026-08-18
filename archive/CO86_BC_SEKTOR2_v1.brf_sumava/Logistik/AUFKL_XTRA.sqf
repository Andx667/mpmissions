_box = _this select 0;

clearItemCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;

_box addAction ["<t color='#d12313'>Kiste Löschen</t>", "deleteVehicle (_this select 0)", nil, 99, false, true, "", ""];
[_box, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
[_box, true, [0, 2, 1], 10, true] call ace_dragging_fnc_setCarryable;


_box addItemCargoGlobal ["BWA3_G29", 1];
_box addItemCargoGlobal ["BWA3_G82", 1];
_box addItemCargoGlobal ["BWA3_muzzle_snds_Rotex_Monoblock", 1];
_box addItemCargoGlobal ["BWA3_optic_M5Xi_MSR", 2];
_box addItemCargoGlobal ["BWA3_optic_M5Xi_Tremor3", 2];
_box addItemCargoGlobal ["BWA3_optic_Hensoldt", 2];
_box addItemCargoGlobal ["optic_LRPS", 2];
_box addItemCargoGlobal ["bipod_02_F_hex", 1];
_box addItemCargoGlobal ["BWA3_RGW90_Loaded", 4];
_box addItemCargoGlobal ["BWA3_Fliegerfaust", 2];
_box addItemCargoGlobal ["BWA3_Fliegerfaust_Mag", 2];
