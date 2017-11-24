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
player addWeapon "rhs_weap_m4a1_blockII";
player addPrimaryWeaponItem "rhsusf_acc_M952V";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";

comment "Add containers";
player forceAddUniform "Scorpion_Camo_Cyre";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Flashlight_MX991";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "B_IR_Grenade";
player addItemToUniform "Chemlight_green";
player addItemToUniform "ACE_Chemlight_IR";
player addItemToUniform "Chemlight_red";
player addVest "Scorpion_Vest_1";
player addItemToVest "ACE_CableTie";
player addItemToVest "ACE_microDAGR";
player addItemToVest "HandGrenade";
player addItemToVest "SmokeShell";
player addItemToVest "SmokeShellRed";
player addItemToVest "SmokeShellBlue";
for "_i" from 1 to 7 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addBackpack "Scorpion_Backpack_Kitbag";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_200rnd_556x45_M_SAW";};
player addItemToBackpack "rhsusf_100Rnd_556x45_soft_pouch";
player addHeadgear "Scorpion_Helmet1";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "tf_microdagr";
player linkItem "tf_anprc152_95";
player linkItem "ItemGPS";
player linkItem "rhsusf_ANPVS_14";


player setSpeaker "ACE_NoVoice";

player setVariable ["ACE_GForceCoef", 1];

closeDialog 0;

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
[[player],"ACE_IsEngineer", 0, true] call ace_common_fnc_assignObjectsInList;
