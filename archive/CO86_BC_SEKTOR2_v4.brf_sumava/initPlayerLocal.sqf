// Durchgeführt lokal, wenn sich Spieler Mission anschließt (schließt sowohl Missionsanfang als auch JIP ein).

enableSentences false; //AI-Chat und automatische Kontakt-Meldungen
enableRadio false;

if (didJIP) then {player setPosATL (getPosATL ttt_teleport_teleporter);};


//======================LOADOUT-SPAWN-SCRIPT======================


//======================BW-CONTAINER_KISTEN-SPAWNER======================

Spawner addAction ["<t color='#8f9cff'>G38+M17-Kiste</t>", "_box = createVehicle ['BWA3_Box_Ammo',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\G38+M17.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>MG5-Kiste</t>", "_box = createVehicle ['BWA3_Box_Ammo',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\MG5.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>ZFG28-Kiste</t>", "_box = createVehicle ['BWA3_Box_Ammo',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\ZFG28.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>AT+AA-Kiste</t>", "_box = createVehicle ['BWA3_Box_Launchers',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\AT+AA.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>GRANATEN+40MM-Kiste</t>", "_box = createVehicle ['Box_NATO_Grenades_F',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\FRAG+40MM.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>SPRENGMITTEL</t>", "_box = createVehicle ['BWA3_Box_Explosives',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\EXPLO.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>MARKER-MITTEL</t>", "_box = createVehicle ['ttt_common_mark_crate',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\MARKER-KISTE.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>AUFKL-MUN-Kiste</t>", "_box = createVehicle ['BWA3_Box_Ammo',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\AUFKL_MUN.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>AUFKL-XTRA-Kiste</t>", "_box = createVehicle ['BWA3_Box_SpecialWeapons',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\AUFKL_XTRA.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>VEHICLE-AMMO</t>", "_box = createVehicle ['Box_NATO_AmmoVeh_F',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\FZGMUN.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>VEHICLE-REFUEL</t>", "_box = createVehicle ['FlexibleTank_01_forest_F',position Spawnpoint, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\FZGREF.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>LEERE-KLEINE-KISTE</t>", "_box = createVehicle ['Box_NATO_Equip_F',position Spawnpoint_1, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\KLEINEKISTE-LEER.sqf';", nil, 11, false, true, "", "", 4];
Spawner addAction ["<t color='#8f9cff'>LEERES-FRACHTNETZ</t>", "_box = createVehicle ['B_CargoNet_01_ammo_F',position Spawnpoint_1, [], 0,  'CAN_COLLIDE']; [_box] execVM 'Logistik\FRACHTNETZ-LEER.sqf';", nil, 11, false, true, "", "", 4];


//======================SAN-CONTAINER_KISTEN-SPAWNER======================

SANSpawner addAction ["<t color='#8f9cff'>SANBRAVO-Kiste</t>", "_box = createVehicle ['ttt_common_sanb_crate',position Spawnpoint_1, [], 0,  'CAN_COLLIDE']; [_box] execVM 'SANLogistik\SAN-Bravo.sqf';", nil, 11, false, true, "", "", 4];
SANSpawner addAction ["<t color='#8f9cff'>SANCHARLIE-Kiste</t>", "_box = createVehicle ['ttt_common_sanc_crate',position Spawnpoint_1, [], 0,  'CAN_COLLIDE']; [_box] execVM 'SANLogistik\SAN-Charlie.sqf';", nil, 11, false, true, "", "", 4];
SANSpawner addAction ["<t color='#8f9cff'>LEERE-KLEINE-KISTE</t>", "_box = createVehicle ['Box_NATO_Equip_F',position Spawnpoint_1, [], 0,  'CAN_COLLIDE']; [_box] execVM 'SANLogistik\KLEINEKISTE-LEER.sqf';", nil, 11, false, true, "", "", 4];
SANSpawner addAction ["<t color='#8f9cff'>LEERES-FRACHTNETZ</t>", "_box = createVehicle ['B_CargoNet_01_ammo_F',position Spawnpoint_1, [], 0,  'CAN_COLLIDE']; [_box] execVM 'SANLogistik\FRACHTNETZ-LEER.sqf';", nil, 11, false, true, "", "", 4];
