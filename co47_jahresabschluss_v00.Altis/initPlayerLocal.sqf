/*
	author: EinStein
	description: adds Powerpoint-Actions to Gamemaster
*/

allScreens = [o_screen_1, o_screen_2, o_screen_3, o_screen_4];

player addAction [
	"<t size='2' color='#7CFC00' >Foliensteuerung</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		_caller setVariable ["menu", 1];
		missionNamespace setVariable ["intermezzo", false];
	}, [], -50, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 0)", 1
];

player addAction [
	"<t size='2' color='#7CFC00' >Intermezzo</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		_caller setVariable ["menu", 2];
	}, [], -55, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 0)", 1
];

player addAction [
	"<t size='2' color='#FFF200' >Zurück</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		_caller setVariable ["menu", 0];
	}, [], -99, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] != 0)", 1
];

player addAction [
	"<t size='2' color='#7CFC00' >Folie +1</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		missionNamespace setVariable ["currentSlide", ((missionNamespace getVariable ["currentSlide", 0]) +1)];
		private _slideToDisplay = ["pictures\presentation\slide_", (missionNamespace getVariable ["currentSlide", 0]), ".paa"] joinString "";
		{_x setObjectTextureGlobal [0, _slideToDisplay];} forEach allScreens;
	}, [], -65, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 1) && (missionNamespace getVariable ['currentSlide', 0] < 46)", 1
];

player addAction [
	"<t size='2' color='#7CFC00' >Folie -1</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		missionNamespace setVariable ["currentSlide", ((missionNamespace getVariable ["currentSlide", 0]) -1)];
		private _slideToDisplay = ["pictures\presentation\slide_", (missionNamespace getVariable ["currentSlide", 0]), ".paa"] joinString "";
		{_x setObjectTextureGlobal [0, _slideToDisplay];} forEach allScreens;
	}, [], -66, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 1) && (missionNamespace getVariable ['currentSlide', 0] > 1)", 1
];

player addAction [
	"<t size='2' color='#7CFC00' >Folie +5</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		missionNamespace setVariable ["currentSlide", ((missionNamespace getVariable ["currentSlide", 0]) +5)];
		private _slideToDisplay = ["pictures\presentation\slide_", (missionNamespace getVariable ["currentSlide", 0]), ".paa"] joinString "";
		{_x setObjectTextureGlobal [0, _slideToDisplay];} forEach allScreens;
	}, [], -67, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 1) && (missionNamespace getVariable ['currentSlide', 0] < 41)", 1
];

player addAction [
	"<t size='2' color='#7CFC00' >Folie -5</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		missionNamespace setVariable ["currentSlide", ((missionNamespace getVariable ["currentSlide", 0]) -5)];
		private _slideToDisplay = ["pictures\presentation\slide_", (missionNamespace getVariable ["currentSlide", 0]), ".paa"] joinString "";
		{_x setObjectTextureGlobal [0, _slideToDisplay];} forEach allScreens;
	}, [], -68, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 1) && (missionNamespace getVariable ['currentSlide', 0] > 5)", 1
];

player addAction [
	"<t size='2' color='#7CFC00' >Folie +10</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		missionNamespace setVariable ["currentSlide", ((missionNamespace getVariable ["currentSlide", 0]) +10)];
		private _slideToDisplay = ["pictures\presentation\slide_", (missionNamespace getVariable ["currentSlide", 0]), ".paa"] joinString "";
		{_x setObjectTextureGlobal [0, _slideToDisplay];} forEach allScreens;
	}, [], -69, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 1) && (missionNamespace getVariable ['currentSlide', 0] < 36)", 1
];

player addAction [
	"<t size='2' color='#7CFC00' >Folie -10</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		missionNamespace setVariable ["currentSlide", ((missionNamespace getVariable ["currentSlide", 0]) -10)];
		private _slideToDisplay = ["pictures\presentation\slide_", (missionNamespace getVariable ["currentSlide", 0]), ".paa"] joinString "";
		{_x setObjectTextureGlobal [0, _slideToDisplay];} forEach allScreens;
	}, [], -70, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 1) && (missionNamespace getVariable ['currentSlide', 0] > 10)", 1
];

player addAction [
	"<t size='2' color='#7CFC00' >Intermezzo Starten</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		missionNamespace setVariable ["intermezzo", true];
		missionNamespace setVariable ["currentSlide", nil];
		{
			[_x] spawn {
				params ["_screen"];
				while {missionNamespace getVariable ["intermezzo", false]} do {
					private _slideToDisplay = ["pictures\intermezzos\intermezzo_", (floor random 6) +1, ".paa"] joinString "";
					_screen setObjectTextureGlobal [0, _slideToDisplay];
					sleep (20 + random 20);
				};
			};
		} forEach allScreens;
	}, [], -65, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 2) && !(missionNamespace getVariable ['intermezzo', false])", 1
];

player addAction [
	"<t size='2' color='#7CFC00' >Intermezzo Pausieren</t>", 
	{
		params ["_target", "_caller", "_actionId", "_arguments"];
		missionNamespace setVariable ["intermezzo", false];
	}, [], -65, false, true, "", "(groupId group player == 'Gamemaster') && (player getVariable ['menu',0] == 2) && (missionNamespace getVariable ['intermezzo', false])", 1
];


//cTab Template
["maps.plan-ops.fr#170",0,"TTT Trivia Night","TTT Trivia Night","https://maps.plan-ops.fr/MessageTemplates/Details/170?t=mv40G6SZFWsiXD7SpEyvkL4dc8lDupVKBa4awrizYHk",[["TTT Trivia Night","",[]],["Frage","",[["","1",1]]],["Antwort","",[["","",8]]]]] call ctab_fnc_registerMessageTemplate;