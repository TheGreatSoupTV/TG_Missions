/*
	file:		zuesUpdater.sqf
	author:		JediNarwals [TG]
	description:
				Updates zues with all editable opjects to all zues owners. This will restart every 30 seconds.
*/

waitUntil {time > 3};
call 
{
	while {true} do 
	{
		objectsToAdd = (entities "AllVehicles" - entities "Animal" - entities "RoadCone_L_F"); 
		publicVariable "objectsToAdd";
		{_x addCuratorEditableObjects [(objectsToAdd), true];} foreach allCurators;
		sleep 30;
	};
};