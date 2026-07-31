// respawn disables spectator cam
["Terminate"] call BIS_fnc_EGSpectator;

// assigning loadouts on spawn
private _loadoutSQF = ["loadouts\", (player getVariable ["loadout", "TTT_Gren"]), ".sqf"] joinString "";
private _helm = (player getVariable ["helm", "1"]);
private _tarn = (player getVariable ["tarn", "BW_Flecktarn"]);
private _farbe = (player getVariable ["farbe", "black"]);

[player, _helm, _tarn, _farbe] spawn compile preprocessFileLineNumbers _loadoutSQF;
