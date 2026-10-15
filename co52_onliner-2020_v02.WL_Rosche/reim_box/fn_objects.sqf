/*
	author = Reimchen
	description = n.a.
*/

params ["_index","_target","_caller"];

switch (_index) do {
	case 1:{
		private _object = "Land_ChairPlastic_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
	};
	case 2:{
		private _object = "Land_RattanChair_01_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
	};
	case 3:{
		private _object = "Land_CampingChair_V1_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
	};
	case 4:{
		private _object = "Land_Bench_05_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		[_object,true,[0,1,0],0] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,false];
	};
	case 5:{
		private _object = "Land_TablePlastic_01_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		[_object,true,[0,1,0],0] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target, false] remoteExec ["enableSimulationGlobal",2,false];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,false];
	};
	case 6:{
		private _object = "Land_WoodenTable_large_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		[_object,true,[0,1.5,0],90] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target, false] remoteExec ["enableSimulationGlobal",2,false];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,false];
	};
	case 7:{
		private _object = "Land_CampingTable_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		[_object,true,[0,1,0],0] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target, false] remoteExec ["enableSimulationGlobal",2,false];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,false];
	};
	case 8:{
		private _object = "plp_ctm_WoodBarrelDark" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		private _objectExtra = "PressureHose_01_StraightShort_F" createVehicle [0,0,0];
		_objectExtra attachTo [_object,[0,-0.3,-0.25]];
		[_objectExtra, false] remoteExec ["enableSimulationGlobal",2,false];
		[_object,true,[0,1,0],0] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target, false] remoteExec ["enableSimulationGlobal",2,false];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,false];
		_object remoteExec ["reim_trinken_fnc_actionBeer",0,true];
	};
	case 9:{
		private _object = "plp_ctm_KegBarrelPlain" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		[_object,true,[0,1,0],0] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target, false] remoteExec ["enableSimulationGlobal",2,false];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,false];
		_object remoteExec ["reim_trinken_fnc_actionHigh",0,true];
	};
	case 10:{
		private _object = "Land_LiquidDispenser_01_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		[_object,true,[0,1,0],0] call ace_dragging_fnc_setCarryable;
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target, false] remoteExec ["enableSimulationGlobal",2,false];
				[_target] remoteExec ["reim_trinken_fnc_actionFree",0,true];
				[_target,false] call ace_dragging_fnc_setCarryable;
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] call ace_interact_menu_fnc_removeActionFromObject;
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] call ace_interact_menu_fnc_addActionToObject;
	};
	case 11:{
		private _object = "Land_FoodContainer_01_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		private _objectArray = [
			["Land_Tableware_01_stackOfNapkins_F",[0.5,0,-0.2],25],
			["Land_BakedBeans_F",[0.5,0.55,-0.2],75],
			["Land_BakedBeans_F",[0.45,0.5,-0.2],58],
			["Land_TacticalBacon_F",[-0.05,0.22,-0.2],15],
			["Land_Mustard_01_F",[-0.35,0.1,-0.1],0],
			["Land_Ketchup_01_F",[-0.4,0,-0.1],0]
		];
		{
			_x params ["_className","_positionArray","_dir"];
			private _objectExtra = _className createVehicle [0,0,0];
			_objectExtra attachTo [_object,_positionArray];
			_objectExtra setDir _dir;
			[_objectExtra, false] remoteExec ["enableSimulationGlobal",2,false];
		} forEach _objectArray;
		[_object,true,[0,1,0],0] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target, false] remoteExec ["enableSimulationGlobal",2,false];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,false];
	};
	case 12:{
		private _object = "Land_Tableware_01_stackOfNapkins_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		private _objectArray = [
			["Land_Mustard_01_F",[0.15,0.05,0.065],0],
			["Land_Ketchup_01_F",[0.15,-0.05,0.065],0]
		];
		{
			_x params ["_className","_positionArray","_dir"];
			private _objectExtra = _className createVehicle [0,0,0];
			_objectExtra attachTo [_object,_positionArray];
			_objectExtra setDir _dir;
			[_objectExtra, false] remoteExec ["enableSimulationGlobal",2,false];
		} forEach _objectArray;
		[_object,true,[0,1,0],0] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target, false] remoteExec ["enableSimulationGlobal",2,false];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,false];
	};
	case 13:{
		private _object = "Land_BottlePlastic_V1_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
		private _objectArray = [
			["Land_BottlePlastic_V1_F",[0,0.1,0],15],
			["Land_Tableware_01_cup_F",[0.1,0,-0.05],0],
			["Land_Tableware_01_cup_F",[0.15,-0.05,-0.05],0],
			["Land_Tableware_01_cup_F",[0.15,0.05,-0.05],0]
		];
		{
			_x params ["_className","_positionArray","_dir"];
			private _objectExtra = _className createVehicle [0,0,0];
			_objectExtra attachTo [_object,_positionArray];
			_objectExtra setDir _dir;
			[_objectExtra, false] remoteExec ["enableSimulationGlobal",2,false];
		} forEach _objectArray;
		[_object,true,[0,1,0],0] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target, false] remoteExec ["enableSimulationGlobal",2,false];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] remoteExec ["ace_interact_menu_fnc_removeActionFromObject",0,false];
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] remoteExec ["ace_interact_menu_fnc_addActionToObject",0,false];
	};
	case 14:{
		private _object = "Land_Water_pipe_EP1" createVehicle (getPos objectSpawner_1);
		[_object, false] remoteExec ["enableSimulationGlobal",2,false];
		_object allowDamage false;
		[_object,true,[0,1,0],0] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
		private _actionSimulation = [
			"Reim_actionSimulation",
			"Position bestätigen",
			"",
			{
				params ["_target","_caller"];
				[_target] remoteExec ["reim_box_fnc_shisha",0,true];
				[_target,false] remoteExec ["ace_dragging_fnc_setCarryable",0,false];
				[_target,0,["ACE_MainActions","Reim_actionSimulation"]] call ace_interact_menu_fnc_removeActionFromObject;
			},
			{true}
		] call ace_interact_menu_fnc_createAction;
		[_object,0,["ACE_MainActions"], _actionSimulation] call ace_interact_menu_fnc_addActionToObject;
	};
	case 15:{
		private _object = "Land_Camping_Light_off_F" createVehicle (getPos objectSpawner_1);
		_object allowDamage false;
	};
	case 16:{
		private _object = "Land_WoodenLog_F" createVehicle (getPos axe_1);
		_object allowDamage false;
		_caller playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	};
};
