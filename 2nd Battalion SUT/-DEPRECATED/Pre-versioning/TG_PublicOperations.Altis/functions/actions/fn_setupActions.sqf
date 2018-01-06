/*
	@file 		fn_setupActions.sqf
	@author		JediNarwals [TG]
	@description
		Sets up the actions for players
*/
JEDI_act pushBack (player addAction["<t color='#FF0000'>Repair Vehicle</t>",jedi_fnc_personalRepair,"",99,false,false,"", ' vehicle player == player && !isNull cursorTarget && ((cursorTarget isKindOf "Car") OR (cursorTarget isKindOf "Air") OR (cursorTarget isKindOf "Ship")) && (player distance cursorTarget < 10)']);
JEDI_act pushBack (player addAction["<t color='#0099FF'>Sit Down</t>",{[cursorObject,player] execVM "scripts\chairs\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 3 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr)} ']);
JEDI_act pushBack (player addAction["<t color='#FF0000'>Unflip Vehicle</t>",jedi_fnc_flip,"",99,false,false,"",'(cursorTarget isKindOf "Car" || cursorTarget isKindOf "Air") && (vehicle player == player) && (player distance cursorTarget < 8) && (vectorUp cursorTarget select 2 < 0.6 || vectorUp cursorTarget select 1 > 0.2 || vectorUp cursorTarget select 1 < -0.2) && (speed cursorTarget < 1)']);
JEDI_act pushBack (player addAction["<t color='#FF0000'>Settings</t>",TAWVD_fnc_openMenu,[],-99,false,false,"",'']);