_box = _this select 0;

clearItemCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;

_box addAction ["<t color='#d12313'>Kiste Löschen</t>", "deleteVehicle (_this select 0)", nil, 99, false, true, "", ""];
[_box, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
[_box, true, [0, 2, 1], 10, true] call ace_dragging_fnc_setCarryable;

_box addItemCargoGlobal ["ACE_elasticBandage", 80],
_box addItemCargoGlobal ["ACE_packingBandage", 80],
_box addItemCargoGlobal ["ACE_tourniquet", 25],
_box addItemCargoGlobal ["kat_chestSeal", 25],

_box addItemCargoGlobal ["kat_Painkiller", 5],
_box addItemCargoGlobal ["ACE_epinephrine", 25],
_box addItemCargoGlobal ["kat_naloxone", 5],
_box addItemCargoGlobal ["ACE_morphine", 10],
_box addItemCargoGlobal ["kat_Penthrox", 5],
_box addItemCargoGlobal ["kat_lidocaine", 10],

_box addItemCargoGlobal ["ACE_surgicalKit", 1],
_box addItemCargoGlobal ["ACE_suture", 100],
_box addItemCargoGlobal ["kat_ncdKit", 10],
_box addItemCargoGlobal ["kat_pocketBVM", 3],
_box addItemCargoGlobal ["kat_larynx", 20],
_box addItemCargoGlobal ["kat_IV_16", 30],
_box addItemCargoGlobal ["kat_Pulseoximeter", 3],
_box addItemCargoGlobal ["kat_AED", 1],

_box addItemCargoGlobal ["ACE_salineIV", 20],
_box addItemCargoGlobal ["ACE_salineIV_500", 20],
_box addItemCargoGlobal ["ACE_salineIV_250", 5],

_box addItemCargoGlobal ["kat_basicDiagnostic", 1],
_box addItemCargoGlobal ["ace_flags_blue", 1],
_box addItemCargoGlobal ["ACE_SpraypaintBlue", 1],
_box addItemCargoGlobal ["ACE_bodyBag_blue", 3],
_box addItemCargoGlobal ["ACE_bodyBag_white", 3],
_box addItemCargoGlobal ["SmokeShellBlue", 5],
_box addItemCargoGlobal ["Chemlight_blue", 5]
