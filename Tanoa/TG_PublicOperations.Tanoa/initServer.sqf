/*
	@file		server.sqf
	@author		Rarek [AW]
				JediNarwals [TG]

	@description
		Sets up the server files
			Called from the main init.sqf
			Can be called with "[] execVM 'init\server.sqf';"
*/

if (debugMode) exitWith {};

_timeStamp = diag_tickTime;
diag_log "------------------------------------------------------------------------------------------------------";
diag_log "---------------------------------- Starting Server by JediNarwals ------------------------------------";
diag_log "------------------------------------------------------------------------------------------------------";

["Initialize"] call BIS_fnc_dynamicGroups;

diag_log ":: IA3 :: Adding everything to Zeus : Cleaning up the dead ::";
/*
NOT NEEDED IN MODDED

[] execVM "functions\generic\fn_zeusUpdater.sqf";
*/
[] execVM "functions\garbage\fn_cleanSlate.sqf";
[] call compile PreprocessFileLineNumbers "config\configuration.sqf";
diag_log ":: IA3 :: Server adding objects to Zeus : Watching for death ::";


diag_log "RESPAWN INVENTORIES START";



diag_log "RESPAWN INVENTORIES FINISH";

diag_log "------------------------------------------------------------------------------------------------------";
diag_log format["                End of Server Init :: Total Execution Time %1 seconds ",(diag_tickTime) - _timeStamp];
diag_log "------------------------------------------------------------------------------------------------------";

serverInitComplete = true;
publicVariable "serverInitComplete";