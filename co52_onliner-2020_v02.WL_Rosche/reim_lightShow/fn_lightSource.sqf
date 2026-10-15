/*
	author = Reimchen
	description = n.a. color=[red,green,blue] [1,1,1]=white
*/

params ["_object","_color","_size","_time"];
 
private _lightSource = "#lightpoint" createVehicleLocal [0,0,0]; 
_lightSource lightAttachObject  [_object,[0,0,0]]; 
_lightSource setLightBrightness 0.5; 
_lightSource setLightColor _color; 
_lightSource setLightUseFlare true; 
_lightSource setLightFlareMaxDistance 1000; 
_lightSource setLightFlareSize _size; 
sleep _time; 
deleteVehicle _lightSource;
