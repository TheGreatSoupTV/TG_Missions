/*
	@file		inventories.hpp
	@author		JediNarwals [TG]
	@description
			Sets up the inventories for the respawn menu.

			To call it:
				Add to include in description.ext
				class CfgRespawnInventory
				{
					#include "functions\config\Inventories.hpp"
				};
				Add the function so everyone can see it in the server init (I prefer initServer.sqf)

				[SIDE, "CLASS_name"] call BIS_fnc_addRespawnInventory;
				Example:
				[WEST, "B_Rifleman"] call BIS_fnc_addRespawnInventory;
				// This one will add our inventory below into the respawn menu
*/
class B_Rifleman
{
	displayName = "Rifleman";
	role = "Rifleman";
	icon = "\A3\ui_f\data\map\VehicleIcons\iconMan_ca.paa";
	show = "true";
	weapons[] = {
		
	};
	magazines[] = {

	};
	items[] = {

	};
	linkedItems[] = {
		"desVest",
		"Des_ECH",
		"muzzle_snds_H",
		"ItemGPS",
		"ItemMap",
		"ItemCompass",
		"ItemWatch"
	};
	uniformClass = "everestdesClothing";
};