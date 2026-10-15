/*
	author = Reimchen
	description = n.a.
*/

params ["_busIndex","_busStop","_busNextStop"];

switch (_busIndex) do {
	case 1:{
		switch (_busNextStop) do {
			case 1:{
				playMusic "next_stop";
				sleep 1.5;
			};
		};
		switch (_busStop) do {
			case 0:{
				playMusic "ratzlingen";
			};
			case 1:{
				playMusic "riestedt";
			};
			case 2:{
				playMusic "masendorf";
			};
			case 3:{
				playMusic "oetzendorf";
			};
			case 4:{
				playMusic "klein_hesebeck";
			};
			case 5:{
				playMusic "jastorf";
			};
			case 6:{
				playMusic "molzen";
			};
			case 7:{
				playMusic "woltersburg";
			};
			case 8:{
				playMusic "pieperhofen";
			};
			case 9:{
				playMusic "bei_fabrik";
			};
			case 10:{
				playMusic "gross_liedern";
			};
			case 11:{
				playMusic "hanstedt";
			};
		};
	};
	case 2:{
		switch (_busNextStop) do {
			case 1:{
				playMusic "next_stop";
				sleep 1.5;
			};
		};
		switch (_busStop) do {
			case 0:{
				playMusic "rosche_west";
			};
			case 1:{
				playMusic "jarlitz";
			};
			case 2:{
				playMusic "stocken";
			};
			case 3:{
				playMusic "oetzen";
			};
			case 4:{
				playMusic "dormte";
			};
			case 5:{
				playMusic "bruchwedel";
			};
			case 6:{
				playMusic "neumuhle";
			};
			case 7:{
				playMusic "borg";
			};
			case 8:{
				playMusic "katzien";
			};
			case 9:{
				playMusic "rosche_ost";
			};
		};
	};
};
