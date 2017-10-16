/*
	File name: init.sqf
	
	author: JediNarwals
	
	Last modified:
		30 June 2016 
		by JediNarwals
	
	Description: 
		init that will handle both clients and server sided scripts.
*/
//------------------- Handle Parameters

for [ {_i = 0}, {_i < count(paramsArray)}, {_i = _i + 1} ] do {
	call compile format
	[
		"PARAMS_%1 = %2",
		(configName ((missionConfigFile >> "Params") select _i)),
		(paramsArray select _i)
	];
};

//------------------- Client/server Execution

[] execVM "outlw_magRepack\MagRepack_init_sv.sqf";						// OutLaw's Mag Repack
player enableFatigue false;												// Disables fatigue
enableRadio false;														// That will clear the voices from my head...
enableSentences FALSE;													// Stop talking to myself
enableSaving [FALSE,FALSE];												// "Everything Not saved will be lost." - Nintendo 'Quit Screen' message
[] execVM "KRON_Strings.sqf";											// Server things for scripting

//------------------- System chat for when the Inventory is active

[] spawn
{
	while {true} do
	{
		waitUntil { !isNull (findDisplay 602) };
		systemChat "Press CTRL+R to repack magazine ammo.";
		waitUntil { isNull (findDisplay 602) };
	};
};

//=========================== Handlers

waitUntil {!isNull(findDisplay 46)};
(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call jedi_fnc_keyDownHandler"];