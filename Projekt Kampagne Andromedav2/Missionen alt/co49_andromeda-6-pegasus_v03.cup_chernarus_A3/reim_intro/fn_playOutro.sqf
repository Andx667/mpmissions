/*
	author = Reimchen
	description = n.a.
*/

if (isServer) exitWith {};

playMusic "LeadTrack02_F_Tank";
5 fadeMusic 1;
5 fadeSound 0.25;

sleep 4;
cutText ["", "BLACK", -1, true];
enableSentences false;
showCinemaBorder true;

sleep 0.5;
if (player != vehicle player) then {vehicle player enableSimulation false;};
player enableSimulation false;
player allowDamage false;

sleep 1.5;
private _cam = "camera" camCreate (getPos camhelper_01);  
_cam camSetTarget camhelper_02; 
_cam cameraEffect ["internal", "BACK"];  
_cam camCommit 0; 

sleep 0.5;
_cam camSetPos (getPos camhelper_02); 
_cam camSetTarget camhelper_02; 
_cam camCommit 20;
sleep 0.5;
cutText ["", "BLACK IN", -1, true];

sleep 5;
cutText ["", "BLACK", -1, true];
sleep 1;
_cam camSetPos (getPos camhelper_03); 
_cam camSetTarget camhelper_04; 
_cam camCommit 0;
sleep 1;
cutText ["", "BLACK IN", -1, true];
_cam camSetPos (getPos camhelper_04); 
_cam camSetTarget camhelper_04; 
_cam camCommit 20;

sleep 10;
cutText ["", "BLACK", -1, true];
sleep 1;
_cam camSetPos (getPos camhelper_05); 
_cam camSetTarget camhelper_06; 
_cam camCommit 0;
sleep 1;
cutText ["", "BLACK IN", -1, true];
_cam camSetPos (getPos camhelper_06); 
_cam camSetTarget camhelper_06; 
_cam camCommit 20;

sleep 5;
cutText ["", "BLACK", -1, true];
sleep 1;
_cam camSetPos (getPos camhelper_07); 
_cam camSetTarget camhelper_08; 
_cam camCommit 0;
sleep 1;
cutText ["", "BLACK IN", -1, true];
_cam camSetPos (getPos camhelper_09); 
_cam camSetTarget camhelper_08; 
_cam camCommit 20;

sleep 18;
cutText ["", "BLACK", -1, true];
sleep 1;
player enableSimulation true;
if (player != vehicle player) then {moveOut player;};
private _var = player getVariable "outro";
player attachTo [_var select 0, [0,0,0]];
[player] call ace_medical_treatment_fnc_fullHealLocal;
if (_var select 1 == true) then {player playMoveNow "amovPknlMstpSrasWrflDnon"; sleep 2; player playMoveNow "amovPknlMstpSrasWrflDnon";} else {player playMoveNow "AmovPercMstpSrasWrflDnon"; sleep 2; player playMoveNow "AmovPercMstpSrasWrflDnon";};
if (_var select 2 == true) then {removeHeadgear player;};
sleep 0.5;
player action ["WeaponOnBack", player];

_cam camSetPos (getPos camhelper_10); 
_cam camSetTarget camhelper_11; 
_cam camCommit 0;
sleep 1;
cutText ["", "BLACK IN", -1, true];
_cam camSetPos (getPos camhelper_10); 
_cam camSetTarget camhelper_11; 
_cam camCommit 0;

sleep 30;
["end1", true, true, true] call BIS_fnc_endMission;
