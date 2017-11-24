comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add weapons";
player addWeapon "rhs_weap_m4_carryhandle";
player addWeapon "rhsusf_weap_m9";

comment "Add containers";
player forceAddUniform "U_C_WorkerCoveralls";
player addItemToUniform "H_Cap_red";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACE_Chemlight_Shield";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_IR_Strobe_Item";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_Flashlight_MX991";
player addVest "V_TacVest_oli";
for "_i" from 1 to 4 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";
player addItemToVest "ACE_Chemlight_HiRed";
for "_i" from 1 to 2 do {player addItemToVest "ACE_Chemlight_IR";};
player addItemToVest "Chemlight_green";
player addItemToVest "B_IR_Grenade";
player addItemToVest "ACE_HandFlare_Green";
player addItemToVest "ACE_HandFlare_Red";
player addItemToVest "SmokeShellYellow";
player addItemToVest "SmokeShellRed";
player addItemToVest "rhsusf_mag_15Rnd_9x19_JHP";
player addHeadgear "rhsusf_hgu56p_visor_mask_Empire_black";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "tf_microdagr";
player linkItem "tf_anprc152_4";
player linkItem "ItemGPS";
player linkItem "rhsusf_ANPVS_15";


player setSpeaker "ACE_NoVoice";

player setVariable ["ACE_GForceCoef", 1];

switch (true) do
{
	case (typeOf player == "B_CTRG_soldier_GL_LAT_F"):
	{
		[player, "TacticalGaming"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_CTRG_Sharphooter_F"):
	{
		[player, "TacticalGaming"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_CTRG_soldier_M_medic_F"):
	{
		[player, "Everest"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_CTRG_soldier_engineer_exp_F"):
	{
		[player, "Everest"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_Survivor_F"):
	{
		[player, "Everest"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_Story_Protagonist_F"):
	{
		[player, "Zulu"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_CTRG_soldier_M_medic_F"):
	{
		[player, "X-Ray"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
};

[[player],"ace_medical_medicClass", 0, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 1, true] call ace_common_fnc_assignObjectsInList;
