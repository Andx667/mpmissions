/*
	author = Reimchen
	description = n.a.
*/

while {alive exp_1} do {
	if (isNil "reimVar_1") then {
		[exp_1,"FD_Timer_F"] remoteExec ["say3D",0,false];
		sleep 2;
	} else {
		[exp_1,"FD_Timer_F"] remoteExec ["say3D",0,false];
		sleep 0.5;
	};
};
