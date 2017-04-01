/*
	File: fn_keyDownHandler.sqf
	Author: JediNarwals [TG]

	Description:
	Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey"];
_ctrl = _this select 0;
_code = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;
_speed = speed cursorTarget;
_handled = false;

if (_code in (actionKeys "PushToTalk") || _code in (actionKeys "PushToTalkSide") || _code in (actionKeys "PushToTalkGlobal") || _code in (actionKeys "PushToTalkCommand") || _code in (actionKeys "PushToTalkGroup") || _code in (actionKeys "PushToTalkVehicle")) then
{
	if (currentChannel in [0,1,2,3,4,6]) then { _handled = true; };
};

_handled;