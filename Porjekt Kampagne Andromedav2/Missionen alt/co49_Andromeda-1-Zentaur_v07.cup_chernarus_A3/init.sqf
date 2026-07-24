//Streamator
if !(isNil "CLib_fnc_loadModules") then { call CLib_fnc_loadModules; };

///////////////////
// Grenze erhöhen damit auch volle Kisten getragen werden können
///////////////////

ACE_maxWeightCarry = 1550;
ACE_maxWeightDrag = 2000;

//Intro 
[] spawn reim_intro_fnc_playIntro;
