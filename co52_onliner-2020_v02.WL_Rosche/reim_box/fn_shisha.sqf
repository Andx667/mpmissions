/*
	author = Reimchen
	description = n.a.
*/

params ["_object"];

private _actionShisha = [
	"Reim_actionShisha",
	"An der Hauptschultrompette nuckeln",
	"",
	{
		params ["_target","_caller"];
		_caller setVariable ["reimVarShisha",false,false];
		[_caller,{
				params ["_caller"];
				private _source = "Land_HelipadEmpty_F" createVehicleLocal (getpos _caller);
				_source attachto [_caller,[0,0.15,0], "neck"];
				private _vapors = "#particlesource" createVehicleLocal getpos _source;
				_vapors setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 13,0],"","Billboard",0.5,0.5,[0,0,0],[0, 0.5, -0.2],1, 1.275,1, 0,[0, 0.2,0],[[1,1,1, random 0.02], [1,1,1, 0.01], [1,1,1, 0]],[1000],1,0.04,"","",_source];
				_vapors setParticleRandom [2, [0, 0, 0], [0.25, 0.25, 0.25], 0, 0.5, [0, 0, 0, 0.1], 0, 0, 10];
				_vapors setDropInterval 0.001;
				sleep 0.2+random 0.5;
				deleteVehicle _vapors;
				deleteVehicle _source;
		}]remoteExec ["spawn",0,false];
		
		[_caller] spawn {
			params ["_caller"];
			addCamShake [5, 140, 1];
			sleep 10;
			private _handle = ppEffectCreate ["ColorInversion", 2500];
			_handle ppEffectEnable true;
			_handle ppEffectAdjust [0.5, 0.5, 0.5];
			_handle ppEffectCommit 30;
			waitUntil {ppEffectCommitted _handle};
			sleep 60;
			_handle ppEffectAdjust [0, 0, 0];
			_handle ppEffectCommit 30;
			waitUntil {ppEffectCommitted _handle};
			_handle ppEffectEnable false;
			ppEffectDestroy _handle;
			sleep 10;
			_caller setVariable ["reimVarShisha",true,false];
		};
	},
	{_player getVariable ["reimVarShisha",true]}
] call ace_interact_menu_fnc_createAction;
[_object,0,["ACE_MainActions"], _actionShisha] call ace_interact_menu_fnc_addActionToObject;
