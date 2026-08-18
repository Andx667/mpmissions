_box = _this select 0;

clearItemCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;

_box addAction ["<t color='#d12313'>Kiste Löschen</t>", "deleteVehicle (_this select 0)", nil, 99, false, true, "", ""];
[_box, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
[_box, true, [0, 2, 1], 10, true] call ace_dragging_fnc_setCarryable;

_box addItemCargoGlobal ["ace_flags_blue", 10];
_box addItemCargoGlobal ["ace_flags_green", 10];
_box addItemCargoGlobal ["ace_flags_red", 10];
_box addItemCargoGlobal ["ace_flags_yellow", 10];
_box addItemCargoGlobal ["ace_flags_purple", 10];
_box addItemCargoGlobal ["ace_flags_white", 10];

_box addItemCargoGlobal ["ace_marker_flags_blue", 10];
_box addItemCargoGlobal ["ace_marker_flags_green", 10];
_box addItemCargoGlobal ["ace_marker_flags_red", 10];
_box addItemCargoGlobal ["ace_marker_flags_yellow", 10];
_box addItemCargoGlobal ["ace_marker_flags_purple", 10];
_box addItemCargoGlobal ["ace_marker_flags_orange", 10];
_box addItemCargoGlobal ["ace_marker_flags_white", 10];

_box addItemCargoGlobal ["mts_items_marker_yellow", 10];

_box addItemCargoGlobal ["ACE_SpraypaintBlue", 10];
_box addItemCargoGlobal ["ACE_SpraypaintGreen", 10];
_box addItemCargoGlobal ["ACE_SpraypaintRed", 10];
_box addItemCargoGlobal ["ACE_SpraypaintYellow", 10];
_box addItemCargoGlobal ["ACE_SpraypaintBlack", 10];
_box addItemCargoGlobal ["ACE_SpraypaintWhite", 10];

_box addItemCargoGlobal ["mts_whistle_FOX40", 5];