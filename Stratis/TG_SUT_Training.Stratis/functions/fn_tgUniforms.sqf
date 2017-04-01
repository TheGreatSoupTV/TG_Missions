/*
	file: tgUniforms.sqf
	
	Author: JediNarwals [TG]
	
	Description:
		Scroll wheel option for adding uniforms specific for TG members.
*/

_amazonLoadOuts = player;

[[_amazonLoadOuts,['Get Rifleman loadout',{
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

player forceAddUniform 'everestwlandClothing';
for '_i' from 1 to 10 do {player addItemToUniform 'ACE_fieldDressing';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_morphine';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_epinephrine';};
for '_i' from 1 to 2 do {player addItemToUniform '16Rnd_9x21_Mag';};
player addVest 'wlandVest';
player addItemToVest '16Rnd_9x21_Mag';
for '_i' from 1 to 10 do {player addItemToVest 'rhs_mag_30Rnd_556x45_Mk318_Stanag';};
for '_i' from 1 to 2 do {player addItemToVest 'HandGrenade';};
player addBackpack 'everest_packWland';
for '_i' from 1 to 2 do {player addItemToBackpack 'HandGrenade';};
for '_i' from 1 to 10 do {player addItemToBackpack 'SmokeShell';};
player addItemToBackpack 'SmokeShellRed';
player addItemToBackpack 'SmokeShellGreen';
player addItemToBackpack 'ACE_EarPlugs';
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_green';};
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_red';};
for '_i' from 1 to 2 do {player addItemToBackpack 'ACE_M84';};
for '_i' from 1 to 3 do {player addItemToBackpack 'B_IR_Grenade';};
for '_i' from 1 to 5 do {player addItemToBackpack 'rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red';};
for '_i' from 1 to 5 do {player addItemToBackpack 'rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer';};
player addHeadgear 'wland_ECH';
player addGoggles 'G_mas_wpn_shemag';

player addWeapon 'rhs_weap_m4a1_carryhandle';
player addPrimaryWeaponItem 'rhsusf_acc_nt4_black';
player addPrimaryWeaponItem 'ACE_optic_Hamr_PIP';
player addPrimaryWeaponItem 'rhsusf_acc_grip2';
player addWeapon 'hgun_Rook40_F';
player addWeapon 'ACE_VectorDay';

player linkItem 'ItemCompass';
player linkItem 'ACE_Altimeter';
player linkItem 'tf_anprc152_2';
player linkItem 'ItemGPS';
player linkItem 'NVGoggles_OPFOR';

}]],'addAction',true] call BIS_fnc_MP;

[[_amazonLoadOuts,['Get Rifleman AT loadout',{
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

player forceAddUniform 'everestwlandClothing';
for '_i' from 1 to 10 do {player addItemToUniform 'ACE_fieldDressing';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_morphine';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_epinephrine';};
for '_i' from 1 to 2 do {player addItemToUniform '16Rnd_9x21_Mag';};
player addItemToUniform 'rhs_mag_30Rnd_556x45_Mk318_Stanag';
player addItemToUniform 'HandGrenade';
player addVest 'wlandVest';
player addItemToVest '16Rnd_9x21_Mag';
for '_i' from 1 to 2 do {player addItemToVest 'HandGrenade';};
for '_i' from 1 to 5 do {player addItemToVest 'rhs_mag_30Rnd_556x45_Mk318_Stanag';};
for '_i' from 1 to 4 do {player addItemToVest 'rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange';};
for '_i' from 1 to 2 do {player addItemToVest 'ACE_M84';};
player addBackpack 'B_Carryall_ghex_F';
player addItemToBackpack 'ACE_EarPlugs';
player addItemToBackpack 'HandGrenade';
player addItemToBackpack 'SmokeShellRed';
player addItemToBackpack 'SmokeShellGreen';
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_green';};
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_red';};
for '_i' from 1 to 3 do {player addItemToBackpack 'B_IR_Grenade';};
for '_i' from 1 to 10 do {player addItemToBackpack 'SmokeShell';};
player addItemToBackpack 'rhs_mag_smaw_HEDP';
player addHeadgear 'wland_ECH';
player addGoggles 'G_mas_wpn_shemag';

player addWeapon 'rhs_weap_m4a1';
player addPrimaryWeaponItem 'rhsusf_acc_nt4_black';
player addPrimaryWeaponItem 'rhsusf_acc_anpeq15side_bk';
player addPrimaryWeaponItem 'ACE_optic_Hamr_PIP';
player addWeapon 'rhs_weap_smaw';
player addSecondaryWeaponItem 'rhs_weap_optic_smaw_2';
player addWeapon 'hgun_Rook40_F';
player addWeapon 'ACE_VectorDay';

player linkItem 'ItemCompass';
player linkItem 'ItemMap';
player linkItem 'ACE_Altimeter';
player linkItem 'tf_anprc152_2';
player linkItem 'ItemGPS';
player linkItem 'NVGoggles_OPFOR';

}]],'addAction',true] call BIS_fnc_MP;

[[_amazonLoadOuts,['Get Autorifleman loadout',{
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

player forceAddUniform 'everestwlandClothing';
for '_i' from 1 to 10 do {player addItemToUniform 'ACE_fieldDressing';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_morphine';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_epinephrine';};
for '_i' from 1 to 2 do {player addItemToUniform '16Rnd_9x21_Mag';};
player addItemToUniform 'HandGrenade';
player addVest 'wlandVest';
player addItemToVest '16Rnd_9x21_Mag';
for '_i' from 1 to 2 do {player addItemToVest 'HandGrenade';};
for '_i' from 1 to 2 do {player addItemToVest 'ACE_M84';};
player addItemToVest '150Rnd_762x54_Box';
player addBackpack 'everest_packWland';
player addItemToBackpack 'ACE_EarPlugs';
player addItemToBackpack 'HandGrenade';
player addItemToBackpack 'SmokeShellRed';
player addItemToBackpack 'SmokeShellGreen';
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_green';};
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_red';};
for '_i' from 1 to 3 do {player addItemToBackpack 'B_IR_Grenade';};
for '_i' from 1 to 10 do {player addItemToBackpack 'SmokeShell';};
for '_i' from 1 to 3 do {player addItemToBackpack '150Rnd_762x54_Box';};
player addHeadgear 'wland_ECH';
player addGoggles 'G_mas_wpn_shemag';

player addWeapon 'LMG_Zafir_F';
player addPrimaryWeaponItem 'rhsusf_acc_anpeq15side_bk';
player addPrimaryWeaponItem 'ACE_optic_Hamr_PIP';
player addWeapon 'hgun_Rook40_F';
player addWeapon 'ACE_VectorDay';

player linkItem 'ItemCompass';
player linkItem 'ItemMap';
player linkItem 'ACE_Altimeter';
player linkItem 'tf_anprc152_2';
player linkItem 'ItemGPS';
player linkItem 'NVGoggles_OPFOR';

}]],'addAction',true] call BIS_fnc_MP;

[[_amazonLoadOuts,['Get Marksman loadout',{
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

player forceAddUniform 'everestwlandClothing';
for '_i' from 1 to 10 do {player addItemToUniform 'ACE_fieldDressing';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_morphine';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_epinephrine';};
for '_i' from 1 to 2 do {player addItemToUniform '16Rnd_9x21_Mag';};
player addItemToUniform 'HandGrenade';
player addVest 'wlandVest';
player addItemToVest '16Rnd_9x21_Mag';
for '_i' from 1 to 2 do {player addItemToVest 'HandGrenade';};
for '_i' from 1 to 2 do {player addItemToVest 'ACE_M84';};
for '_i' from 1 to 2 do {player addItemToVest 'rhsusf_mag_10Rnd_STD_50BMG_M33';};
player addBackpack 'everest_packWland';
player addItemToBackpack 'ACE_EarPlugs';
player addItemToBackpack 'HandGrenade';
player addItemToBackpack 'SmokeShellRed';
player addItemToBackpack 'SmokeShellGreen';
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_green';};
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_red';};
for '_i' from 1 to 3 do {player addItemToBackpack 'B_IR_Grenade';};
for '_i' from 1 to 10 do {player addItemToBackpack 'SmokeShell';};
for '_i' from 1 to 8 do {player addItemToBackpack 'rhsusf_mag_10Rnd_STD_50BMG_M33';};
player addHeadgear 'wland_ECH';
player addGoggles 'G_mas_wpn_shemag';

player addWeapon 'rhs_weap_M107';
player addPrimaryWeaponItem 'optic_mas_zeiss_eo';
player addWeapon 'hgun_Rook40_F';
player addWeapon 'ACE_VectorDay';

player linkItem 'ItemCompass';
player linkItem 'ItemMap';
player linkItem 'ACE_Altimeter';
player linkItem 'tf_anprc152_2';
player linkItem 'ItemGPS';
player linkItem 'NVGoggles_OPFOR';

}]],'addAction',true] call BIS_fnc_MP;

[[_amazonLoadOuts,['Get Engineer loadout',{
	removeAllWeapons player;
	removeAllItems player;
	removeAllAssignedItems player;
	removeUniform player;
	removeVest player;
	removeBackpack player;
	removeHeadgear player;
	removeGoggles player;

player forceAddUniform 'everestwlandClothing';
for '_i' from 1 to 10 do {player addItemToUniform 'ACE_fieldDressing';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_morphine';};
for '_i' from 1 to 5 do {player addItemToUniform 'ACE_epinephrine';};
for '_i' from 1 to 2 do {player addItemToUniform '16Rnd_9x21_Mag';};
player addItemToUniform 'rhs_mag_30Rnd_556x45_Mk318_Stanag';
player addItemToUniform 'HandGrenade';
player addVest 'wlandVest';
player addItemToVest '16Rnd_9x21_Mag';
for '_i' from 1 to 2 do {player addItemToVest 'HandGrenade';};
for '_i' from 1 to 5 do {player addItemToVest 'rhs_mag_30Rnd_556x45_Mk318_Stanag';};
for '_i' from 1 to 4 do {player addItemToVest 'rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Orange';};
for '_i' from 1 to 2 do {player addItemToVest 'ACE_M84';};
player addBackpack 'everest_packWland';
player addItemToBackpack 'ToolKit';
player addItemToBackpack 'ACE_EarPlugs';
player addItemToBackpack 'ACE_Flashlight_XL50';
player addItemToBackpack 'HandGrenade';
player addItemToBackpack 'SmokeShellRed';
player addItemToBackpack 'SmokeShellGreen';
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_green';};
for '_i' from 1 to 5 do {player addItemToBackpack 'Chemlight_red';};
for '_i' from 1 to 3 do {player addItemToBackpack 'B_IR_Grenade';};
for '_i' from 1 to 10 do {player addItemToBackpack 'SmokeShell';};
player addHeadgear 'wland_ECH';
player addGoggles 'G_mas_wpn_shemag';

comment 'Add weapons';
player addWeapon 'rhs_weap_m4a1';
player addPrimaryWeaponItem 'rhsusf_acc_nt4_black';
player addPrimaryWeaponItem 'rhsusf_acc_anpeq15side_bk';
player addPrimaryWeaponItem 'ACE_optic_Hamr_PIP';
player addWeapon 'hgun_Rook40_F';
player addWeapon 'ACE_VectorDay';

player linkItem 'ItemCompass';
player linkItem 'ItemMap';
player linkItem 'ACE_Altimeter';
player linkItem 'tf_anprc152_2';
player linkItem 'ItemGPS';
player linkItem 'NVGoggles_OPFOR';

}]],'addAction',true] call BIS_fnc_MP;
