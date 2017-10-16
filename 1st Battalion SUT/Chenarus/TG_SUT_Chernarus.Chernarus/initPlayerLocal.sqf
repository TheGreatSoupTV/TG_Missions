/*
	@file		initPlayerLocal.sqf
	@author		JediNarwals [TG]
	@description
		
		Initializes the player local scripts.
		
*/

//------------------- Client Execution

enableRadio false;														// That will clear the voices from my head...
enableSentences FALSE;													// Stop talking to myself
enableSaving [FALSE,FALSE];												// "Everything Not saved will be lost." - Nintendo 'Quit Screen' message
[] execVM "functions\fn_fatigue.sqf";                                   // Quicksilver's fatigue
[] execVM "scripts\icons.sqf";                                          // Quicksilver's Icons for Bluefor