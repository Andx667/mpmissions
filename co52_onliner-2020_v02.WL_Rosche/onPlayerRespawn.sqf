/*
	author = Reimchen
	description = n.a.
*/

if (missionNamespace getVariable ["varEvent",false]) then {player setPos (getMarkerPos "respawn"); hintC "Du bist zwar tot, aber bitte nicht gehen. Schau einfach in der Zuschauerkamera zu wie sich die anderen schlagen. Sobald du wieder einsteigen kannst gibt es einen Hint.";};

//loadout
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

private _newUniform = selectRandom ["U_C_Man_casual_4_F","U_C_Man_casual_1_F","U_C_Poloshirt_burgundy","CUP_U_C_Citizen_03","CUP_U_C_racketeer_02","CUP_U_C_Rocker_01"];
private _oldUnifrom = uniform player;
if (_oldUnifrom != _newUniform) then {
        removeUniform player;
        player forceAddUniform _newUniform;
};

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";

switch (player getVariable "loadouts") do {
	case "bus":{
		removeUniform player;
		private _newUniform = "U_Marshal";
		private _oldUnifrom = uniform player;
		if (_oldUnifrom != _newUniform) then {
				removeUniform player;
				player forceAddUniform _newUniform;
		};
		player addHeadgear "H_MilCap_blue";
		player linkItem "ItemGPS";
	};
};
