/*
	author = Reimchen
	description = n.a.
*/

params ["_unit"];

reimVarDance = true;
if (!isNil "reimVarDance") then {
	[_unit, "Acts_Dance_01"] remoteExec ["switchMove",0,false];
};
sleep 24.062;
if (!isNil "reimVarDance") then {
	[_unit, "Acts_Dance_02"] remoteExec ["switchMove",0,false];
};
sleep 20.833;
reimVarDance = nil;

/*
params ["_unit"];
private ["_animation","_oldAnimation","_animation_1","_animation_2","_time"];

reimVarDance = true;
_oldAnimation = "";
_animation_1 = "Acts_Dance_01";
_animation_2 = "Acts_Dance_02";
_animation = _animation_1;

while {(alive _unit) && !(isNil "reimVarDance")} do {
	if ((_animation == "Acts_Dance_01") && (_oldAnimation != _animation)) then {
		_oldAnimation = _animation_1; 
		_time = 24.062;
		if ((alive _unit) && !(isNil "reimVarDance")) then {
			_unit switchMove _animation; 
			_animation = _animation_2; 
		};
	} else {
		_oldAnimation = _animation_2; 
		_time = 20.833;
		if ((alive _unit) && !(isNil "reimVarDance")) then {
			_unit switchMove _animation; 
			_animation = _animation_1; 
		};
	};
	sleep _time;
};
*/
