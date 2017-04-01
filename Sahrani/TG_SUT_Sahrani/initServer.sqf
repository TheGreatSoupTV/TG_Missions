/*
	@file		initServer.sqf
	@author		JediNarwals [TG]
	@description
		
		Initializes the server scripts
		
*/


//~~~~~~~~~~~~~~~~ Spawns bases

	[WEST, "base_Main", "Luke Air Force Base"] call BIS_fnc_addRespawnPosition;

//~~~~~~~~~~~~~~~ Give's the main inventory for starting off

	[WEST, "B_Rifleman"] call BIS_fnc_addRespawnInventory;
	
//~~~~~~~~~~~~~~~ Clean up time
[] spawn
{
	while {true} do 
	{
		sleep 360 + (random 180);
		{deleteVehicle _x;} count allDead;
		sleep 1;
		{deleteVehicle _x;} count (allMissionObjects "CraterLong");
		sleep 1;
		{deleteVehicle _x;} count (allMissionObjects "WeaponHolder");
		sleep 1;
		{deleteVehicle _x;} count (allMissionObjects "WeaponHolderSimulated");
		sleep 1;
		{if (!isPlayer _x) then {_x enableFatigue FALSE;};} count allUnits;
		{if ((count units _x) == 0) then {deleteGroup _x;};} count allGroups;
	};

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
};