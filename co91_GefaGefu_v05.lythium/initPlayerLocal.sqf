/*
	author = Reimchen 
    edit: Redd + Andx
	description = n.a.
*/

// W-Teleporter
{
    _x addAction ["W-Teleporter",{createDialog "W_RscTeleportDialog"},[],1,false,true,"","",5];
} forEach [

    flag_sammelplatz

];

//Truppfarbe etc für alle Container auf der Karte
{
	nul = [_x] execVM "scripts\ax_options.sqf";
	
} forEach [container_01];



// spectator cam and clean up near base
flag_sammelplatz addAction ["Zuschauermodus", {
    params ["_target","_caller"];

    ["Initialize", [_caller, [], true]] call BIS_fnc_EGSpectator;
	},
	[],1,false,true,"","",5
	
	];

player addEventHandler ["Respawn",{
    params ["","_corpse"];

    if((getPosASL player) distance (getMarkerPos "respawn") < 1000) then {
        deleteVehicle _corpse;
    };
}];

