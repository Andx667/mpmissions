private _loadoutSQF = ["loadout\", (player getVariable ["loadout", "rifleman"]), ".sqf"] joinString "";
[] spawn compile preprocessFileLineNumbers _loadoutSQF;