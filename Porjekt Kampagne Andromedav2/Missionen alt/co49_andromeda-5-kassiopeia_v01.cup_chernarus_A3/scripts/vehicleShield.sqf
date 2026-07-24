_kfz = _this select 0;

_kfz addEventHandler ["HandleDamage",
    {
        _unit = _this select 0;
        _selection = _this select 1;
        _damage = _this select 2;
        _source = _this select 3;
        _projectile = _this select 4;
        if (_selection in ["", """", "telo", "hull", "karoserie", "hit_hull", "hithull", "hit_hull_point"]) then {
            _damage = 0;
        };
        if (_projectile == "SLAMDirectionalMine_Wire_Ammo") then {
            _kette = selectRandom ["hitltrack", "hitrtrack"];
            _unit setHitPointDamage [_kette, 1];
        };
        _damage
   }
];