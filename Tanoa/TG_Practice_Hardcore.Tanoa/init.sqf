enableSaving [false, false];
enableRadio false;														// That will clear the voices from my head...
enableSentences FALSE;													// Stop talking to myself

[missionNamespace,["SherwoodMemberRespawnInv"]] call BIS_fnc_addRespawnInventory;


addMissionEventHandler ["HandleDisconnect",
    {
        _unit = _this select 0;
        deleteVehicle _unit;
    }];