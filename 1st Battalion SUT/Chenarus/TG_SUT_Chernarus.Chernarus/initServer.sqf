/*
	@file		initServer.sqf
	@author		JediNarwals [TG]
	@description
		
		Initializes the server scripts
		
*/


//~~~~~~~~~~~~~~~~ Spawns bases

	[WEST, "respawn_Base", "FOB Ironheart"] call BIS_fnc_addRespawnPosition;

//~~~~~~~~~~~~~~~ Give's the main inventory for starting off

	[WEST, "B_Rifleman"] call BIS_fnc_addRespawnInventory;

	endLoadingScreen;
	
//~~~~~~~~~~~~~~~ Clean up time

//[] execVM "functions\fn_fatigue.sqf";                                   // Quicksilver's fatigue

[] spawn
{
	while {true} do 
	{
		sleep 120 + (random 300);
		//{deleteVehicle _x;} count allDead;
		//sleep 1;
		{deleteVehicle _x;} count (allMissionObjects "CraterLong");
	};
/*
	while {true} do
	{
		sleep 10;
	
		{
			_Time = _x getVariable "DeathTime";
			if (isNil "_sandGlass") then 
			{
				_x setVariable ["DeathTime",time]
			}
			else
			{
				if ((time - _Time) > 320) then
				{
					deleteVehicle _x
				}

			}
		}foreach AllDead;
	};
*/
};
