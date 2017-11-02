/*
File: QS_Fatigue.sqf
Script: Quiksilvers Modified Fatigue
Author:

	Quiksilver
	
Last Modified:

	28/02/2015 ArmA 3 1.38 by Quiksilver
	
Description:

	Custom Fatigue
	With default settings, provides approximately 2* or up to 3* stamina compared to default.
	
Instructions:

	Copy this file to your scenario main directory (contains other files such as description.ext, mission.sqm)
	
	Create a file called 'initPlayerLocal.sqf' in the same directory, if you do not have it already.
	
	In 'initPlayerLocal.sqf', paste the following line:
	
	[] execVM 'fatigue.sqf';
	
Credit:

	Credit to zooloo75 for the 'stumble' mechanics.
	
______________________________________________________*/

private ['_useVariableStamina','_useStumble'];

//==================================================== CONFIG

_useVariableStamina = TRUE;						// Does stamina factor in the players class? Set TRUE or FALSE. 
_useStumble = TRUE;								// Can the player stumble when very fatigued? Set TRUE or FALSE. Be careful when using, this may apply: http://feedback.arma3.com/view.php?id=22067

// These classes have higher-than-normal stamina, if variable stamina used. Feel free to add or remove entries.
QS_fatigue_classes_highStamina = compileFinal '[
	"B_diver_TL_F","B_diver_exp_F","B_diver_F","B_recon_exp_F","B_recon_LAT_F",
	"B_recon_medic_F","B_recon_TL_F","B_recon_M_F","B_recon_F","B_recon_JTAC_F",
	"O_recon_exp_F","O_recon_LAT_F","O_recon_medic_F","O_recon_TL_F","O_recon_M_F",
	"O_recon_F","O_recon_JTAC_F","O_diver_TL_F","O_diver_exp_F","O_diver_F","I_diver_TL_F",
	"I_diver_exp_F","I_diver_F","rhsusf_army_ucp_medic","rhsusf_army_ucp_squadleader","rhsusf_army_ucp_teamleader",
	"rhsusf_army_ucp_javelin","rhsusf_army_ucp_rifleman","rhsusf_army_ucp_engineer","rhsusf_army_ucp_marksman",
	"rhsusf_navy_marpat_d_medic"
]';

// These classes have lower-than-normal stamina, if variable stamina used. Feel free to add or remove entries.
QS_fatigue_classes_lowStamina = compileFinal '[
	"B_pilot_F","B_helipilot_F","B_helicrew_F","O_pilot_F","O_helipilot_F","O_helicrew_F",
	"I_pilot_F","I_helipilot_F","B_officer_F","O_officer_F","I_officer_F"
]';

//==================================================== FUNCTIONS

QS_fnc_fatigue = compileFinal "

	private ['_10mX','_20mX','_30mX','_40mX','_50mX','_60mX','_passOut','_t','_s','_p','_lowStamina','_highStamina','_exit'];
	
	_s = _this select 0;
	_p = _this select 1;
	_exit = FALSE;
	player setVariable ['QS_fatigue',1,FALSE];
	player setVariable ['QS_playerFatigued',FALSE,FALSE];
	
	_10mX = 0.985;
	_20mX = 0.9875;
	_30mX = 0.9925;
	_40mX = 0.995;
	_50mX = 0.9975;
	_60mX = 1;

	[] spawn {
		hintSilent 'Fatigue enabled.'; 
		uiSleep 5; 
		hintSilent '';
	};
	
	if (_s) then {
		_t = typeOf (vehicle player);
		_lowStamina = [] call QS_fatigue_classes_lowStamina;
		_highStamina = [] call QS_fatigue_classes_highStamina;

		if (_t in _lowStamina) exitWith {
			_exit = TRUE;
			player enableFatigue TRUE;
		};
		if (_t in _highStamina) then {
			_10mX = 0.983;	
			_20mX = 0.9855;
			_30mX = 0.9905;
			_40mX = 0.993;
			_50mX = 0.9955;
			_60mX = 1;
		};
	};

	if (_exit) exitWith {};
	while {TRUE} do {
		if (!isNull player) then {
			if (alive player) then {
				if ((getFatigue player) >= 0.1) then {
					if ((getFatigue player) >= 0.2) then {
						if ((getFatigue player) >= 0.3) then {
							if ((getFatigue player) >= 0.4) then {
								if ((getFatigue player) >= 0.5) then {
									if ((getFatigue player) >= 0.61 && ((getFatigue player) <= 0.9)) then {
										if (!(player getVariable 'QS_playerFatigued')) then {
											if ((random 1) > 0.9) then {
												player setVariable ['QS_playerFatigued',TRUE,FALSE];
												if (_p) then {
													[] call QS_fnc_stumble;
												};
											} else {
												player setVariable ['QS_playerFatigued',TRUE,FALSE];
												[] spawn {uiSleep 30;player setVariable ['QS_playerFatigued',FALSE,FALSE];};
											};
										};
										player setFatigue ((getFatigue player) * _60mX);
									} else {
										player setFatigue ((getFatigue player) * _50mX);
									};
								} else {
									player setFatigue ((getFatigue player) * _40mX);
								};
							} else {
								player setFatigue ((getFatigue player) * _30mX);
							};
						} else {
							player setFatigue ((getFatigue player) * _20mX);
						};
					} else {
						player setFatigue ((getFatigue player) * _10mX);
					};
				};
			};
		};
		uiSleep 0.25;
	};
";

QS_fnc_stumble = compileFinal "
	private ['_o','_vel','_dir'];
	player allowDamage FALSE;
	_o = 'Steel_Plate_L_F' createVehicleLocal [0,0,0];    
	_o setObjectTexture [0,''];   
	_o setMass 220;    
	_o setDir random 360;    
	_o setPosATL [(position player select 0),(position player select 1),((((boundingBox player) select 1) select 2) / 2) - ((position player select 2) / 100)];     
	_vel = velocity player;
	_dir = direction player;
	_o setVelocity [
		(_vel select 0) + (sin _dir * 4), 
		(_vel select 1) + (cos _dir * 4), 
		(_vel select 2)
	];
	[_o] spawn QS_fnc_stumbleRegen;
";

QS_fnc_stumbleRegen = compileFinal "
	private ['_t'];
	uiSleep 1;
	deleteVehicle (_this select 0);
	_t = time + (15 + (random 15));
	player allowDamage TRUE;
	player setFatigue 1;
	player setVariable ['QS_playerFatigued',TRUE,FALSE];
	while {((time) < _t)} do {
		uiSleep 2;
		player setFatigue 1;
	};
	uiSleep 120;
	player setVariable ['QS_playerFatigued',FALSE,FALSE];

";

//==================================================== INIT

QS_EH_client_Fatigue = player addEventHandler ['Respawn',{player setVariable ['QS_playerFatigued',FALSE,FALSE];}];
[_useVariableStamina,_useStumble] spawn QS_fnc_fatigue;
player enableAimPrecision false;
/*
/*
	Author: Josef Zemanek

	Description:
	Legacy Fatigue Mod main function

	Parameter(s):
		_this: OBJECT - unit to apply fatigue to

	Returns:
	NOTHING


// --- variables init

_defaultStamina = 500;
_runCD = 5;
_exhaustionEnd = 10e10;

// --- init EH from config is not executed upon respawn, need to run it manually

if (isServer) then {
	if !(_this getVariable ["BIS_fatMod_EHAdded", FALSE]) then {
		_this setVariable ["BIS_fatMod_EHAdded", TRUE];
		_this addMPEventHandler ["MPRespawn", {(_this select 0) remoteExec ["BIS_fnc_legacyFatigue"]}];
	};
};

sleep 1;
_per = player;

while {TRUE} do {
	_per = player;
	//waitUntil {(vehicle _this == _this) || isNull _this || !alive _this};
	//if (isNull _this || !alive _this) exitWith {};
	player enableAimPrecision FALSE;
	_addedDrain = 0;
	while {local _this && alive _this && !isNull _this && vehicle _this == _this} do {
		_per = player;
		_maxStamina = _defaultStamina - (_defaultStamina * load player);
		_noSprintLim = _maxStamina / 2;		// --- sprint treshold
		_noRunLim = 0;				// --- run treshold
		_tmout = 0.5;
		if !(isPlayer player) then {_tmout = 5 + random 5};	// --- longer timeout for AIs (performance tweak)

		// --- disable run / sprint based on stamina level

		if (getStamina player <= _noRunLim) then {
			if !(isForcedWalk _per) then {
				_per forceWalk TRUE;
				_exhaustionEnd = time + _runCD;
				setStaminaScheme "Exhausted";
			};
		} else {
			if (isForcedWalk _per && time > _exhaustionEnd) then {
				_per forceWalk FALSE;
				setStaminaScheme "FastDrain";
			};
			if (getStamina _per <= _noSprintLim) then {
				if (isSprintAllowed _per) then {
					_per allowSprint FALSE;
					setStaminaScheme "FastDrain";
				};
			} else {
				if !(isSprintAllowed _per) then {
					_per allowSprint TRUE;
					setStaminaScheme "Default";
				};
			};
			if (getStamina _per > _noSprintLim) then {
			_per forceWalk FALSE;
			_per allowSprint TRUE;
			setStaminaScheme "Default";
			};
		};

		_prevPos = getPosASL player;
		_prevStamina = (getStamina _per) - _addedDrain;
		if (_per getVariable ["BIS_fatigueSlowDrain", FALSE]) then {
			sleep _tmout;
		} else {
			waitUntil {!(_per getVariable ["BIS_fatigueSlowDrain", FALSE])};
		};
		sleep _tmout;
		if (!alive player || isNull player) exitWith {};
		_curPos = getPosASL _per;
		_curStamina = getStamina _per;
		_prevASL = _prevPos select 2;
		_staminaDiff = _prevStamina - _curStamina;
		if (_prevStamina <= 0) then {_staminaDiff = 0};

		// --- calculate & apply extended stamina drain based on terrain gradient

		if (_prevPos distance _curPos > 0.25) then {
			_curASL = _curPos select 2;
			_diffZ = _prevASL - _curASL;
			_grad = tan (_diffZ atan2 ([_prevPos, _curPos] call BIS_fnc_distance2D));
			if (_grad > -0.3 && _grad < 0.5 ) then {_grad = 0};	// --- ignore terrain gradients below sprinting threshold
			_addedDrain = abs (_staminaDiff * _grad * 2);
			if (isPlayer player) then {
				_per setVariable ["BIS_fatigueSlowDrain", TRUE];
				_slowDrainScr = [_per, _addedDrain, _tmout] spawn {
					_unit = _this select 0;
					_drain = _this select 1;
					_tmout = ((_this select 2) * 0.9);
					_steps = 5;
					for [{_i = 0}, {_i < _drain}, {_i = _i + (_drain / _steps)}] do {
						_drainNow = (_drain / _steps);
						_per setStamina ((getStamina _per) - _drainNow);
						sleep (_tmout / _steps);
					};
				};
				_per setVariable ["BIS_fatigueSlowDrain", FALSE];
			} else {
				_per setStamina (_curStamina - _addedDrain);
			};
		};

		// --- slow down animations based on stamina level
		_animSpeedCoef = 0.6 + (0.4 * (_curStamina / _maxStamina));
		_maxSlowdown = getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> animationState player >> "relSpeedMin");
		if (_maxSlowdown > 0 && _maxSlowdown > _animSpeedCoef) then {_animSpeedCoef = _maxSlowdown};	// --- respect maximum slowdown of a given animation defined in config
		_this setAnimSpeedCoef _animSpeedCoef;

		// --- weapon sway

		_staminaPerc = _curStamina / _maxStamina;
		_stanceAimPrecision = getAnimAimPrecision player;
		player setCustomAimCoef (5 - (_staminaPerc * 5) + _stanceAimPrecision);
	};
	if !(alive player) exitWith {};
};
*/