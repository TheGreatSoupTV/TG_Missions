/*
	@file		roles.hpp
	@author		JediNarwals [TG]
	@description
		Adds roles to the respawn menu can be used for adding different roles to the inventories.hpp loadouts

		To add to mission
			Add line into description.ext
				CfgRoles
				{
					functions\config\roles.hpp
				};
			Once added you just call the role with-in inventories.hpp
*/
class Rifleman
{
	displayName = "Rifleman";	
	icon = "a3\Ui_f\data\GUI\Cfg\RespawnRoles\assault_ca.paa";
};