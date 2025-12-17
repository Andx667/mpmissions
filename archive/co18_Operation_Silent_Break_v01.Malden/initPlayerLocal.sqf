/*
	* Author: TTT
	* Runs local to player on initialization.
	* Executed locally when player joins mission (includes both mission start and JIP).
	* Executed after initServer and before initPlayerServer and init.
	*
	* Arguments:
	* 0: player <OBJECT>
	* 1: DidJIP <BOOL>
	*
	* Return Value:
	* None
	*
	* Example:
	* None
*/

// Wer jippt spawnt am respawn/Flagge
if (didJIP) then {
	player setPos (getPos "ttt_teleport_teleporter");
};


/*
    author: [TTT] EinStein
    description: adds an ACE-AddAction to specific vehicles to build a tent as a medical facitlity behind the vehicle.
    note: every vehicle is loaded by default. If this is not wanted, type 'if (isServer) then {this setVariable ["hasTent", false];};' in the object init.

    usage (initPlayerLocal.sqf):
    [] call compile preprocessFileLineNumbers "scripts\stein_medicTent_vehicle.sqf";

    //'bool' should an animation be used while constructiong
    //'string' animation-name from animation-config
    //'integer' time in seconds to construct the tent
    //'string' classname for the tent to be build
    //'array (string)' classnames for every vehicle that should be capable to carry a tent

    last updated: 06.09.2024 by [TTT] Andx
*/

