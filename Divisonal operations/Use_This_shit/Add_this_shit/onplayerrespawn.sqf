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

removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player forceAddUniform "Scorpion_Camo_Cyre";
player addVest "Scorpion_Vest_1";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_9";
player linkItem "ItemGPS";

player setSpeaker "ACE_NoVoice";
