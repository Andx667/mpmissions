_box = _this select 0;

clearItemCargoGlobal _box;
clearMagazineCargoGlobal _box;
clearWeaponCargoGlobal _box;
clearBackpackCargoGlobal _box;

_box addAction ["<t color='#d12313'>Kiste Löschen</t>", "deleteVehicle (_this select 0)", nil, 99, false, true, "", ""];
[_box, true, [0, 2, 0], 45, true] call ace_dragging_fnc_setDraggable;
[_box, true, [0, 2, 1], 10, true] call ace_dragging_fnc_setCarryable;

_box addItemCargoGlobal ["ACE_elasticBandage", 75],
_box addItemCargoGlobal ["ACE_packingBandage", 70],
_box addItemCargoGlobal ["ACE_tourniquet", 15],
_box addItemCargoGlobal ["kat_chestSeal", 15],

_box addItemCargoGlobal ["kat_epinephrineIV", 15],
_box addItemCargoGlobal ["ACE_epinephrine", 15],
_box addItemCargoGlobal ["kat_ketamine", 10],
_box addItemCargoGlobal ["kat_naloxone", 10],
_box addItemCargoGlobal ["kat_fentanyl", 10],
_box addItemCargoGlobal ["kat_Penthrox", 5],
_box addItemCargoGlobal ["kat_Painkiller", 5],
_box addItemCargoGlobal ["kat_lidocaine", 10],
_box addItemCargoGlobal ["kat_nitroglycerin", 10],
_box addItemCargoGlobal ["kat_norepinephrine", 10],
_box addItemCargoGlobal ["kat_phenylephrine", 10],
_box addItemCargoGlobal ["kat_amiodarone", 10],
_box addItemCargoGlobal ["kat_atropine", 10],
_box addItemCargoGlobal ["kat_TXA", 15],
_box addItemCargoGlobal ["kat_EACA", 10],

_box addItemCargoGlobal ["ACE_surgicalKit", 1],
_box addItemCargoGlobal ["ACE_suture", 80],
_box addItemCargoGlobal ["kat_aatKit", 15],
_box addItemCargoGlobal ["kat_BVM", 1],
_box addItemCargoGlobal ["kat_pocketBVM", 3],
_box addItemCargoGlobal ["kat_larynx", 15],
_box addItemCargoGlobal ["kat_IV_16", 20],
_box addItemCargoGlobal ["kat_IO_FAST", 15],
_box addItemCargoGlobal ["kat_Pulseoximeter", 3],
_box addItemCargoGlobal ["kat_X_AED", 1],
_box addItemCargoGlobal ["kat_oxygenTank_150", 1],
_box addItemCargoGlobal ["kat_accuvac", 1],

_box addItemCargoGlobal ["ACE_bloodIV", 15],
_box addItemCargoGlobal ["ACE_bloodIV_500", 15],
_box addItemCargoGlobal ["ACE_bloodIV_250", 5],
_box addItemCargoGlobal ["ACE_salineIV_250", 2],

_box addItemCargoGlobal ["kat_basicDiagnostic", 1],
_box addItemCargoGlobal ["ace_flags_blue", 1],
_box addItemCargoGlobal ["ACE_SpraypaintBlue", 1],
_box addItemCargoGlobal ["ACE_bodyBag_blue", 2],
_box addItemCargoGlobal ["ACE_bodyBag_white", 2],
_box addItemCargoGlobal ["SmokeShellBlue", 5],
_box addItemCargoGlobal ["Chemlight_blue", 5]
