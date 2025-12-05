for "_i" from 1 to 9 do {
	_cube = call compile format ["o_gameCube_%1", _i];
	{
		_sign = createVehicle ["UserTexture1m_F", [(getPos _cube) select 0, (getPos _cube) select 1, ((getPos _cube) select 2) + 2.5], [], 0, "CAN_COLLIDE"];
		_sign enableSimulation false;
		_sign attachTo [_cube, (_x select 0)];
		_sign setVectorDirAndUp (_x select 1);
		switch (_i) do
		{
			case 1: {
				_sign setObjectTextureGlobal [0, "z\ttt\addons\insignias\data\gelb_ca.paa"];
			};
			case 2: {
				_sign setObjectTextureGlobal [0, "z\ttt\addons\insignias\data\schwarz_ca.paa"];
			};
			case 3: {
				_sign setObjectTextureGlobal [0, "z\ttt\addons\insignias\data\rot_ca.paa"];
			};
			case 4: {
				_sign setObjectTextureGlobal [0, "z\ttt\addons\insignias\data\orange_ca.paa"];
			};
			case 5: {
				_sign setObjectTextureGlobal [0, "z\ttt\addons\insignias\data\blau_ca.paa"];
			};
			case 6: {
				_sign setObjectTextureGlobal [0, "z\ttt\addons\insignias\data\weiss_ca.paa"];
			};
			case 7: {
				_sign setObjectTextureGlobal [0, "z\ttt_pm\addons\common\data\ui\grpw_logo_ca.paa"];
			};
			case 8: {
				_sign setObjectTextureGlobal [0, "z\ttt_pm\addons\common\data\ui\grad_logo_ca.paa"];
			};
			case 9: {
				_sign setObjectTextureGlobal [0, "z\ttt_pm\addons\common\data\ui\prae_logo_ca.paa"];
			};
		};
	} forEach [
		[[0,0,2.5],[[1,0,0], [0,0,1]]],					//oben 1
		[[0,0,2.5],[[-1,0,0], [0,0,1]]],				//oben 2
		[[0.502,0,0],[[-1,0,0], [0,0,1]]],				//unten 1
		[[-0.502,0,0],[[1,0,0], [0,0,1]]],				//unten 2
		[[0,0.502,0],[[0,-1,0], [0,0,1]]],				//unten 3
		[[0,-0.502,0],[[0,1,0], [0,0,1]]]				//unten 4
	];
};