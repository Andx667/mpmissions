/*
	author = Andx + Karl Baker
	description = 
*/

//mobiler Operationsbereich
[] call compile preprocessFileLineNumbers "scripts\stein_medicTent_backpack.sqf";

//Signalplane
[] call compile preprocessFileLineNumbers "scripts\stein_Plane.sqf";

// Stein beladen
[] call compile preprocessFileLineNumbers "scripts\stein_loading.sqf";

// W-Teleporter
teleporter_01 addAction ["W-Teleporter",{createDialog "W_RscTeleportDialog"},[],1,false,true,"","",5];

//Zuschauerkamera
teleporter_01 addAction ["Zuschauermodus", {
            params ["_target","_caller"];

            ["Initialize", [_caller, [], true]] call BIS_fnc_EGSpectator;
        },
        [],1,false,true,"","",5
];


// Zur Basis Teleportieren
teleporter_01 addAction ["Zur Basis", {
    params ["_target","_caller"];
    _caller setPosASL (getMarkerPos "basis");
}];

//Leichen am Respawn aufräumen
player addEventHandler ["Respawn",{
        params ["","_corpse"];

        if((getPosASL player) distance (getMarkerPos "respawn") < 100) then {
            deleteVehicle _corpse;
        };
    }
];

// JIP spwant am respawn
if (didJIP) then {player setPos (getMarkerPos "respawn");};

// Markt Sound

[] spawn {
	while {true} do {
		{sleep random 1; _x say3D ["market_sound", 300]} forEach [markt_01,markt_02];
		sleep 140;
	};
};