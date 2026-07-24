//Streamator
if !(isNil "CLib_fnc_loadModules") then { call CLib_fnc_loadModules; };

//Fahrzeuge unzerstörbar machen 
{
    null = [_x] execVM "scripts\vehicleShield.sqf";
    //Variablennamen der Fhz die geschützt werden
}
forEach [coyote_01, coyote_02, coyote_03, coyote_04, dingo_01, heli_01, heli_02, heli_03, log_01, log_02, log_03, log_04]; 



///////////////////
// Grenze erhöhen damit auch volle Kisten getragen werden können
///////////////////

ACE_maxWeightCarry = 1550;
ACE_maxWeightDrag = 2000;

//Intro 
[] spawn reim_intro_fnc_playIntro;