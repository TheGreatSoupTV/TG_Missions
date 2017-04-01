/*
	file: onPlayerRespawn.sqf
	
	author: JediNarwals [TG]
	
	description:
		BIS auto file that runs everytime the player respawns
*/

//----------------- Make things a little nicer on everyone

enableRadio false;														// That will clear the voices from my head...
enableSentences false;													// Stop talking to myself
enableSaving [false,false];												// "Everything Not saved will be lost." - Nintendo 'Quit Screen' message
//player enableFatigue false;											// Disables fatigue
player enableAimPrecision false;										// Does fatigue affect your aim

[] execVM "functions\fn_fatigue.sqf";                                   // Quicksilver's fatigue