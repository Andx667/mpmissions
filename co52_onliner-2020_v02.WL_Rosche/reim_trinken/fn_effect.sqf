/*
	author = Reimchen
	description = n.a.
*/

while {true} do {
	sleep 1;
	waitUntil {missionNamespace getVariable ["Reim_effect",true]};
	//leicht
	if (Reim_Var_Trinken >= 2 && Reim_Var_Trinken <= 4) then {
		missionNamespace setVariable ["Reim_effect",false,false];
		["ChromAberration", 10, [0.01, 0.01, true]] spawn { 
			params ["_name", "_priority", "_effect", "_handle"]; 
			while { 
				_handle = ppEffectCreate [_name, _priority]; 
				_handle < 0 
			} do { 
				_priority = _priority + 1; 
			}; 
			_handle ppEffectEnable true; 
			_handle ppEffectAdjust _effect; 
			_handle ppEffectCommit 10;
			uiSleep 14;  
			comment "admire effect for a sec"; 
			_handle ppEffectAdjust [0,0, true]; 
			_handle ppEffectCommit 15;
			uiSleep 16;
			_handle ppEffectEnable false; 
			ppEffectDestroy _handle; 
		};
		uiSleep 180 + random 180;
		["ChromAberration", 10, [0.01, 0.01, true]] spawn { 
			params ["_name", "_priority", "_effect", "_handle"]; 
			while { 
				_handle = ppEffectCreate [_name, _priority]; 
				_handle < 0 
			} do { 
				_priority = _priority + 1; 
			}; 
			_handle ppEffectEnable true; 
			_handle ppEffectAdjust _effect; 
			_handle ppEffectCommit 10;
			uiSleep 14;  
			comment "admire effect for a sec"; 
			_handle ppEffectAdjust [0,0, true]; 
			_handle ppEffectCommit 15;
			uiSleep 16;
			_handle ppEffectEnable false; 
			ppEffectDestroy _handle; 
		};
		uiSleep 180 + random 180;
		missionNamespace setVariable ["Reim_effect",true,false];
	};

	//mittel
	if (Reim_Var_Trinken >= 5 && Reim_Var_Trinken <= 9) then {
		missionNamespace setVariable ["Reim_effect",false,false];
		addCamShake [5, 100, 0.5]; 
		["ChromAberration", 20, [0.04, 0.04, true]] spawn { 
			params ["_name", "_priority", "_effect", "_handle"]; 
			while { 
				_handle = ppEffectCreate [_name, _priority]; 
				_handle < 0 
			} do { 
				_priority = _priority + 1; 
			}; 
			_handle ppEffectEnable true; 
			_handle ppEffectAdjust _effect; 
			_handle ppEffectCommit 10;
			uiSleep 34;  
			comment "admire effect for a sec"; 
			_handle ppEffectAdjust [0,0, true]; 
			_handle ppEffectCommit 15;
			uiSleep 16;
			_handle ppEffectEnable false; 
			ppEffectDestroy _handle; 
		};
		uiSleep 180 + random 180;
		addCamShake [5, 100, 0.5]; 
		["ChromAberration", 20, [0.04, 0.04, true]] spawn { 
			params ["_name", "_priority", "_effect", "_handle"]; 
			while { 
				_handle = ppEffectCreate [_name, _priority]; 
				_handle < 0 
			} do { 
				_priority = _priority + 1; 
			}; 
			_handle ppEffectEnable true; 
			_handle ppEffectAdjust _effect; 
			_handle ppEffectCommit 10;
			uiSleep 34;  
			comment "admire effect for a sec"; 
			_handle ppEffectAdjust [0,0, true]; 
			_handle ppEffectCommit 15;
			uiSleep 16;
			_handle ppEffectEnable false; 
			ppEffectDestroy _handle; 
		};
		uiSleep 180 + random 180;
		missionNamespace setVariable ["Reim_effect",true,false];
	};

	//stark
	if (Reim_Var_Trinken >= 10 && Reim_Var_Trinken <= 19) then {
		missionNamespace setVariable ["Reim_effect",false,false];
		addCamShake [5, 476, 0.5]; 
		["ChromAberration", 20, [0.04, 0.04, true]] spawn { 
			params ["_name", "_priority", "_effect", "_handle"]; 
			while { 
				_handle = ppEffectCreate [_name, _priority]; 
				_handle < 0 
			} do { 
				_priority = _priority + 1; 
			}; 
			_handle ppEffectEnable true; 
			_handle ppEffectAdjust _effect; 
			_handle ppEffectCommit 10;
			uiSleep 222;  
			comment "admire effect for a sec"; 
			_handle ppEffectAdjust [0,0, true]; 
			_handle ppEffectCommit 15;
			uiSleep 16;
			_handle ppEffectEnable false; 
			ppEffectDestroy _handle; 
		};
		uiSleep 240;
		addCamShake [5, 60, 1];
		["ChromAberration", 40, [0.2, 0.2, true]] spawn { 
			params ["_name", "_priority", "_effect", "_handle"]; 
			while { 
				_handle = ppEffectCreate [_name, _priority]; 
				_handle < 0 
			} do { 
				_priority = _priority + 1; 
			}; 
			_handle ppEffectEnable true; 
			_handle ppEffectAdjust _effect; 
			_handle ppEffectCommit 10;
			uiSleep 14;  
			comment "admire effect for a sec"; 
			_handle ppEffectAdjust [0,0, true]; 
			_handle ppEffectCommit 15;
			uiSleep 16;
			_handle ppEffectEnable false; 
			ppEffectDestroy _handle; 
		};
		uiSleep 32;
		addCamShake [5, 476, 0.5]; 
		["ChromAberration", 20, [0.04, 0.04, true]] spawn { 
			params ["_name", "_priority", "_effect", "_handle"]; 
			while { 
				_handle = ppEffectCreate [_name, _priority]; 
				_handle < 0 
			} do { 
				_priority = _priority + 1; 
			}; 
			_handle ppEffectEnable true; 
			_handle ppEffectAdjust _effect; 
			_handle ppEffectCommit 10;
			uiSleep 222;  
			comment "admire effect for a sec"; 
			_handle ppEffectAdjust [0,0, true]; 
			_handle ppEffectCommit 15;
			uiSleep 16;
			_handle ppEffectEnable false; 
			ppEffectDestroy _handle; 
		};
		uiSleep 240;
		missionNamespace setVariable ["Reim_effect",true,false];
	};

	//sehr stark
	if (Reim_Var_Trinken >= 20) then {
		missionNamespace setVariable ["Reim_effect",false,false];
		addCamShake [5, 718, 1];
		["ChromAberration", 40, [0.2, 0.2, true]] spawn { 
			params ["_name", "_priority", "_effect", "_handle"]; 
			while { 
				_handle = ppEffectCreate [_name, _priority]; 
				_handle < 0
			} do {
				_priority = _priority + 1;
			};
			_handle ppEffectEnable true;
			_handle ppEffectAdjust _effect;
			_handle ppEffectCommit 60;
			uiSleep 343;
			comment "admire effect for a sec"; 
			_handle ppEffectAdjust [0,0, true]; 
			_handle ppEffectCommit 15;
			uiSleep 16;
			_handle ppEffectEnable false; 
			ppEffectDestroy _handle; 
		};
		uiSleep 360;
		missionNamespace setVariable ["Reim_effect",true,false];
	};
};
