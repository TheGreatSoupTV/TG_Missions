enableSaving [false, false];
enableRadio false;														// That will clear the voices from my head...
enableSentences FALSE;													// Stop talking to myself

[missionNamespace,["SquadStaffRespawnInv"]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["SquadMemberRespawnInv"]] call BIS_fnc_addRespawnInventory;
[missionNamespace,["BtnStaffRespawnInv"]] call BIS_fnc_addRespawnInventory;