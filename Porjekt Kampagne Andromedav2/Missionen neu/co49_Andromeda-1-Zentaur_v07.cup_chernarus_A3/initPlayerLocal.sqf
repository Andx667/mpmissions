/*
	author = Andx + Karl Baker
	description = 
*/

// Zum Träger Teleportieren
teleporter_01 addAction ["Zum Träger", {
    params ["_target","_caller"];
    _caller setPosASL (getPosASL port);
}];

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
