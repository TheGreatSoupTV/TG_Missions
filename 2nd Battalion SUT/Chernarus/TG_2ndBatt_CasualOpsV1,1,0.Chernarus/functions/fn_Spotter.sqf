
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "rhs_weap_m4a1_blockII_bk";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";
player addWeapon "rhsusf_weap_glock17g4";
player addHandgunItem "rhsusf_acc_omega9k";
player addWeapon "ACE_Vector";

player forceAddUniform "U_B_T_Sniper_F";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
for "_i" from 1 to 2 do {player addItemToUniform "rhs_mag_an_m8hc";};
for "_i" from 1 to 2 do {player addItemToUniform "rhsusf_mag_17Rnd_9x19_FMJ";};
player addItemToUniform "B_IR_Grenade";
player addVest "MCB_Vest_1";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "rhs_mag_m67";};
player addItemToVest "rhs_mag_m18_green";
player addItemToVest "rhs_mag_m18_red";
player addBackpack "tf_rt1523g_big_bwmod_tropen";
player addItemToBackpack "ACE_ATragMX";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_microDAGR";
player addItemToBackpack "ACE_RangeCard";
player addItemToBackpack "ACE_Tripod";
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_7Rnd_408_305gr_Mag";};
player addHeadgear "MCB_Helmet2";




player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";

player setSpeaker "ACE_NoVoice";

closeDialog 0;

player setVariable ["ACE_GForceCoef", 1];

/*switch (true) do
{
	case (typeOf player == "B_Soldier_F"):
	{
		[player, "Alpha"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_Soldier_lite_F"):
	{
		[player, "Bravo"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_officer_F"):
	{
		[player, "Charlie"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_Soldier_unarmed_F"):
	{
		[player, "Sherwood"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
	case (typeOf player == "B_Survivor_F"):
	{
		[player, "Everest"] remoteExec ["BIS_fnc_setUnitInsignia", player, true];
	};
};*/

[[player],"ace_medical_medicClass", 0, true] call ace_common_fnc_assignObjectsInList;
[[player],"ACE_IsEngineer", 0, true] call ace_common_fnc_assignObjectsInList;
