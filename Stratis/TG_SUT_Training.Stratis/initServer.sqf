/*
	file: 
		initServer.sqf
	Author:
		JediNarwals
	Description:
		Initial server start up.
*/


allBases = []; basesOwned = []; baseSpawns = [];
JIPmarkers = []; publicVariable "JIPmarkers"; localMarkers = [];
JIPactions = []; publicVariable "JIPactions";
result = false;
AW_dead = [];

//~~~~~~~~~~~~~~~~ Spawns bases

	[WEST, "base_Stratis_Air", "Main Base"] call BIS_fnc_addRespawnPosition;
	[WEST, "base_LR_SR", "Long Rifle Firing Range"] call BIS_fnc_addRespawnPosition;
	[WEST, "base_JetSpawn", "Fixed Wing Flight School"] call BIS_fnc_addRespawnPosition;
	[WEST, "base_JTAC", "JTAC Training Center"] call BIS_fnc_addRespawnPosition;
	[WEST, "base_SR_AT_Rng", "Rifle and AT Firing Range"] call BIS_fnc_addRespawnPosition;
	[WEST, "base_Bound", "Bounding Training Center"] call BIS_fnc_addRespawnPosition;
	[WEST, "base_HeliSpawn", "Helicopter Flight School"] call BIS_fnc_addRespawnPosition;
	[WEST, "base_VTOLSpawn", "VTOL Flight School"] call BIS_fnc_addRespawnPosition;
	[WEST, "base_CQC", "Close Quarters Combat Center"] call BIS_fnc_addRespawnPosition;
	
//~~~~~~~~~~~~~~~ Clean up time
while {true} do
	{
	sleep 10;
	
		{
		_sandGlass = _x getVariable "RYD_DeathTime";
		if (isNil "_sandGlass") then 
			{
			_x setVariable ["RYD_DeathTime",time]
			}
		else
			{
			if ((time - _sandGlass) > 60) then
				{
				deleteVehicle _x
				}

			}
		}
	foreach AllDead;
	};