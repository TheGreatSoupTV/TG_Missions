_condition = {
    _conditionVar = player getVariable ["hasTent", false];
    vehicle player == player && (_conditionVar);
};
_statement = {
    [] spawn TG_fnc_CreateTent;
};
_action = ["deploy_medical_tent","Deploy Medical Tent","",_statement,_condition] call ace_interact_menu_fnc_createAction;

[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action] call ace_interact_menu_fnc_addActionToClass;