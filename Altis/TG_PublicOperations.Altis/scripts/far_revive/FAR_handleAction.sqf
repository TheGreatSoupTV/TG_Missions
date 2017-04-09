private ["_params", "_action"];

// Parameters passed by the action
_unit = _this select 0;
_params = _this select 3;
_action = _params select 0;

////////////////////////////////////////////////
// Handle actions
////////////////////////////////////////////////
if (_action == "action_revive") then
{
	[cursorTarget] spawn FAR_HandleRevive;
};

if (_action == "action_stabilize") then
{
	[cursorTarget] spawn FAR_HandleStabilize;
};

if (_action == "action_suicide") then
{
	player setDamage 1;
	sleep 1;
	waitUntil 
	{
		alive player;
	};
	_null = [] execVM "initPlayerLocal.sqf";
};

if (_action == "action_drag") then
{
	[cursorTarget] spawn FAR_Drag;
};

if (_action == "action_release") then
{
	[] spawn FAR_Release;
};