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
