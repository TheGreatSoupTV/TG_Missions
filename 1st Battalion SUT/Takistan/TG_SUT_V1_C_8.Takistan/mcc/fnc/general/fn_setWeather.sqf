//==================================================================MCC_fnc_setWeather======================================================================================
// Sets weather  on all clients  - skip time by one hour to make the weather change
// Example: [[[ Overcast, WindForce, Waves, Rain, Lightnings,fog]],"MCC_fnc_setWeather",true,false] spawn BIS_fnc_MP;
// Params:
//	Overcast: number, 0-1
//	WindForce: number, 0-1
//	Waves: number, 0-1
//	Rain: number, 0-1
//	Lightnings: number, 0-1
//	Fog: array, [fogValue, fogDecay, fogBase]
//==============================================================================================================================================================================
private ["_weather"];

_weather = _this select 0;

/*
skipTime -24;
86400 setOvercast (_weather select 0);
skipTime 24;
*/

if ((count _weather) > 1) then {0 setWindForce 	(_weather select 1)};
if ((count _weather) > 2) then {0 setWaves 		(_weather select 2)};
if ((count _weather) > 3) then {0 setRain 		(_weather select 3)};
if ((count _weather) > 4) then {0 setLightnings	(_weather select 4)};
if ((count _weather) > 5) then {[(_weather select 5), 0.03,5] call bis_fnc_setfog;};
(_weather select 0) spawn bis_fnc_setovercast;

/*
0 = [] spawn
{
	sleep 0.1;
	simulWeatherSync;
};
*/