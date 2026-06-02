private ["_loadout"];
_loadout = _this select 0;
if (_loadout == "") exitWith {};

// Variablen festlegen
private ["_script", "_handle", "_delay"];
_script = format ["loadout\%1.sqf", _loadout];
_delay = ceil (random 25 + 5);

// Nachricht an den Spieler
hint parseText Format ["<t size='2.0'>Du bekommst dein Loadout in wenigen Sekunden</t>", _delay];

// Loadout Anwenden
sleep _delay;
_handle = execVM _script;