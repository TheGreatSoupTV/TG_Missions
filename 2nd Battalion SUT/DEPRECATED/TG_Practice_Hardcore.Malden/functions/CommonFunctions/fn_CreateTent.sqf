player playMove "AinvPknlMstpSnonWnonDnon_medicUp3";

sleep 10; //spawn time of tent
tent = "Land_TentA_F" createVehicle [0,0,0];
tent setpos (player modelToWorld [0, 2, 0]);

tent setVariable ["ACE_isMedicalFacility", true, true];

player setVariable ["hasTent", false];


_statement = {
	[] spawn TG_fnc_PackTent;
	};
	
_condition = {
	_conditionVar = player getVariable ["hasTent", false];
	(!_conditionVar);
	};

_action = ["pack_medical_tent","Pack Medical Tent","",_statement,_condition,{},"",[0,0,0],5] call ace_interact_menu_fnc_createAction;

[tent, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;