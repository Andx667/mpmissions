// Loadoutzuweisung
private _loadoutSQF = ["loadouts\", (player getVariable ["loadout", "partner"]), ".sqf"] joinString "";
[] spawn compile preprocessFileLineNumbers _loadoutSQF;