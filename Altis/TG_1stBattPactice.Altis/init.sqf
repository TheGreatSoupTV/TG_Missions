_icons = execVM "scripts\icons.sqf";


addMissionEventHandler ["HandleDisconnect",
    {
        _unit = _this select 0;
        deleteVehicle _unit;
    }];