/*
	author = Reimchen
	description = n.a.
*/

if (!(isNil "reimVar_IntroStart")) exitWith {};

if (isServer) then {
	[] spawn {
		sleep 30;
		missionNamespace setVariable ["reimVar_IntroStart",true,true];
		sleep 37;																		//Intro Länge bis FadeIn
		missionNamespace setVariable ["reimVar_IntroStop",true,true];
	};
};

[] spawn {
	sleep 0.5;
	cutText ["", "BLACK", -1, true];
};

waitUntil {!(isNil "reimVar_IntroStart")};
titleRsc["introImage", "PLAIN", 1];
playMusic "CUP_A2_Defcon_Three";

[] spawn {
	sleep 29;
	[parseText "<t font='TahomaB' size='3'>Kampagne XIII - Andromeda</t><br />by Andx, Karl Baker, Reimchen, Stormy", [0.1,0.1,1.25,1], nil, 6.5, 0.7, 0] spawn BIS_fnc_textTiles;
	sleep 1;
	["<img image='reim_intro\intro_small.paa' size = '5' /img>",-1,-1,5.5,1,0,789] spawn BIS_fnc_dynamicText;
};

waitUntil {!(isNil "reimVar_IntroStop")};
	
cutText ["", "BLACK IN", -1, true];
