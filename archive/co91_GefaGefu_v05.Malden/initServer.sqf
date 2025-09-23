/*
	author = Reimchen
	edit: Andx
	description = n.a.
*/

// create center to spawn enemies or civilian in other scripts
EastHQ = createCenter EAST;
CivHQ = createCenter CIVILIAN;

//Setup ACEX Fortify
[
	west, 
	200,
	[
	  ["EFM_wood_wall_2m_single_filled", 1],
	  ["Land_BagFence_Short_F", 1],
	  ["Land_Net_Fence_4m_F", 1],
	  ["Land_Plank_01_4m_F", 1],
	  ["FlagMarker_01_F", 1]	
	]
] call acex_fortify_fnc_registerObjects;


//Inventar der Container auf der Karte
{
	//_x setVariable ["ace_cargo_noRename", false]; //Container nicht umbenennen

	[_x] execVM "scripts\ax_log.sqf"; //Inhalt

	[_x, 0] call ace_cargo_fnc_setSpace; //Containercargo auf 0 setzen

} forEach [
	
	container_01

];

