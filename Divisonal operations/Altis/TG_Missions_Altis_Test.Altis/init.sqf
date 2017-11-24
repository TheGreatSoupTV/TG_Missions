enableSaving [false, false];
enableRadio false;														// That will clear the voices from my head...
enableSentences FALSE;													// Stop talking to myself
player enableAimPrecision false;

[] execVM "module_chatIntercept\init.sqf";

[missionNamespace,["SherwoodMemberRespawnInv"]] call BIS_fnc_addRespawnInventory;

[missionNamespace, "arsenalOpened", {
		disableSerialization;
		params ["_display"];
		_display displayAddEventHandler ["keydown", "_this select 3"];
		{(_display displayCtrl _x) ctrlShow false} forEach [44151, 44147, 44148, 44149, 44346];
	}] call BIS_fnc_addScriptedEventHandler;
