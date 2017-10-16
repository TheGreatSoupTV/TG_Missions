/*
	file: onPlayerRespawn.sqf
	
	author: JediNarwals
	
	description:
		BIS auto file that runs everytime the player respawns
*/

//----------------- Make things a little nicer on everyone

enableRadio false;														// That will clear the voices from my head...
enableSentences FALSE;													// Stop talking to myself
enableSaving [FALSE,FALSE];												// "Everything Not saved will be lost." - Nintendo 'Quit Screen' message
player enableFatigue false;												// Disables fatigue