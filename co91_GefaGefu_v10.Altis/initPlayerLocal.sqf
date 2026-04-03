/*
	author = Reimchen 
    edit: Redd + Andx
	description = n.a.
*/

//Truppfarbe etc für alle Container auf der Karte
{
	nul = [_x] execVM "scripts\ax_options.sqf";
	
} forEach [container_01];

player addEventHandler ["Respawn",{
    params ["","_corpse"];

    if((getPosASL player) distance (getMarkerPos "respawn") < 1000) then {
        deleteVehicle _corpse;
    };
}];

