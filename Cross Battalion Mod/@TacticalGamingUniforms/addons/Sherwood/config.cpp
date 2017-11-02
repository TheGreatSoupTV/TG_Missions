class CfgPatches
{
	class MCB_Config
	{
		units[] = {"SherwoodUniforms_mod"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgFactionClasses
{
	class SHERWD_MCB
	{
		displayName = "Sherwood MCB";
		priority = 1;
		side = 1;
		icon = "\Everest\data\tg_icon.paa";
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgVehicles
{
	class B_Soldier_F;
	class MCB_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Rifleman";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "MCB_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Team Leader";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "MCB_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_GP_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Rifleman(BP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "MCB_GP_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1_GREEN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_GP_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Team Leader(BP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "MCB_GP_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1_GREEN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_GS_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Rifleman(BS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "MCB_GS_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1_GREEN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_GS_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Team Leader(BS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "MCB_GS_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1_GREEN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_TP_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Rifleman(GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "MCB_TP_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1_TAN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_TP_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Team Leader(GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "MCB_TP_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1_TAN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_TS_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Rifleman(GS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "MCB_TS_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1_TAN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_TS_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Team Leader(GS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "MCB_TS_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_1_TAN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_BDU: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Rifleman(BDU)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "MCB_Camo_BDU";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_officer.paa","Sherwood\Data\MCB_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_BDU_GP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Rifleman(BDU BP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "MCB_Camo_BDU_GP";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_officer.paa","Sherwood\Data\MCB_1_GREEN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_BDU_TP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Rifleman(BDU GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "MCB_Camo_BDU_TP";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_officer.paa","Sherwood\Data\MCB_1_TAN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_TShirt: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Medic";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass = "MCB_Camo_TShirt";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MOH_TSHIRT.paa","Sherwood\Data\MCB_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_Cyre: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Operator";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "MCB_Camo_Cyre";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_CYRE.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_Cyre_TS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Operator GS";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "MCB_Camo_Cyre_TS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_CYRE_tan_shirt.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_Cyre_TP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Operator GP";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "MCB_Camo_Cyre_TP";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_CYRE_tan_pants.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_Cyre_GP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Operator BP";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "MCB_Camo_Cyre_GP";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_CYRE_green_pants.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_Cyre_GS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Operator BS";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "MCB_Camo_Cyre_GS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_CYRE_green_shirt.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class MCB_Uniform_Cyre_Tee: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Multicam Black Lite";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "MCB_Camo_Cyre_Tee";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_CYRE.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Rifleman";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Scorpion_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Team Leader";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Scorpion_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_GP_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Rifleman(GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Scorpion_GP_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1_GREEN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_GP_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Team Leader(GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Scorpion_GP_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1_GREEN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_GS_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Rifleman(GS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Scorpion_GS_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1_GREEN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_GS_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Team Leader(GS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Scorpion_GS_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1_GREEN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_TP_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Rifleman(TP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Scorpion_TP_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1_TAN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_TP_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Team Leader(TP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Scorpion_TP_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1_TAN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_TS_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Rifleman(TS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Scorpion_TS_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1_TAN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_TS_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Team Leader(TS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Scorpion_TS_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_1_TAN_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_BDU: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Rifleman(BDU)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "Scorpion_Camo_BDU";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_officer.paa","Sherwood\Data\Scorpion_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_BDU_GP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Rifleman(BDU GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "Scorpion_Camo_BDU_GP";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_officer.paa","Sherwood\Data\Scorpion_1_GREEN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_BDU_TP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Rifleman(BDU TP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "Scorpion_Camo_BDU_TP";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_officer.paa","Sherwood\Data\Scorpion_1_TAN_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_TShirt: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Medic";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass = "Scorpion_Camo_TShirt";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MOH_TSHIRT.paa","Sherwood\Data\Scorpion_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_Cyre: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Operator";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Scorpion_Camo_Cyre";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_CYRE.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_Cyre_TS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Operator TS";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Scorpion_Camo_Cyre_TS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_CYRE_tan_shirt.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_Cyre_TP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Operator TP";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Scorpion_Camo_Cyre_TP";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_CYRE_tan_pants.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_Cyre_GP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Operator GP";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Scorpion_Camo_Cyre_GP";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_CYRE_green_pants.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_Cyre_GS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Operator GS";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Scorpion_Camo_Cyre_GS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_CYRE_green_shirt.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Scorpion_Uniform_Cyre_Tee: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Scorpion Lite";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "Scorpion_Camo_Cyre_Tee";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_CYRE.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Rifleman";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Tiger_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Team Leader";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Tiger_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_GP_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Rifleman(BP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Tiger_GP_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1_Black_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_GP_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Team Leader(BP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Tiger_GP_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1_Black_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_GS_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Rifleman(BS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Tiger_GS_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1_Black_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_GS_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Team Leader(BS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Tiger_GS_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1_Black_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_TP_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Rifleman(GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Tiger_TP_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1_Grey_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_TP_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Team Leader(GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Tiger_TP_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1_Grey_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_TS_Uniform: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Rifleman(GS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		uniformClass = "Tiger_TS_Camo";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1_Grey_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_TS_Uniform_SS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Team Leader(GS)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		uniformClass = "Tiger_TS_Camo_SS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_1_Grey_SHIRT.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_BDU: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Rifleman(BDU)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "Tiger_Camo_BDU";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_officer.paa","Tiger\Data\Tiger_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_BDU_GP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Rifleman(BDU BP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "Tiger_Camo_BDU_GP";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_officer.paa","Sherwood\Data\Tiger_1_Black_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_BDU_TP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Rifleman(BDU GP)";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		uniformClass = "Tiger_Camo_BDU_TP";
		hiddenSelections[] = {"Camo1","camo2","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_officer.paa","Sherwood\Data\Tiger_1_Grey_PANTS.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_TShirt: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Medic";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		uniformClass = "Tiger_Camo_TShirt";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MOH_TSHIRT.paa","Sherwood\Data\Tiger_1.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_Cyre: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Operator";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Tiger_Camo_Cyre";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_CYRE.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_Cyre_TS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Operator GS";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Tiger_Camo_Cyre_TS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_CYRE_Grey_shirt.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_Cyre_TP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Operator GP";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Tiger_Camo_Cyre_TP";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_CYRE_Grey_pants.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_Cyre_GP: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Operator BP";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Tiger_Camo_Cyre_GP";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_CYRE_Black_pants.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_Cyre_GS: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Operator BS";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass = "Tiger_Camo_Cyre_GS";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_CYRE_Black_shirt.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class Tiger_Uniform_Cyre_Tee: B_Soldier_F
	{
		author = "VanSchmoozin";
		_generalMacro = "B_soldier_F";
		scope = 2;
		displayName = "Tiger Lite";
		identityTypes[] = {"Head_NATO","G_NATO_default"};
		genericNames = "NATOMen";
		faction = "SHERWD_MCB";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		uniformClass = "Tiger_Camo_Cyre_Tee";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_CYRE.paa"};
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class B_kitbag_Base;
	class MCB_Backpack_Kitbag: B_kitbag_Base
	{
		scope = 2;
		displayName = "Multicam Black Kitbag";
		author = "VanSchmoozin";
		model = "A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_kitbag.paa"};
	};
	class Tiger_Backpack_Kitbag: B_kitbag_Base
	{
		scope = 2;
		displayName = "Tiger Kitbag";
		author = "VanSchmoozin";
		model = "A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_kitbag.paa"};
	};
	class Scorpion_Backpack_Kitbag: B_kitbag_Base
	{
		scope = 2;
		displayName = "Scorpion Kitbag";
		author = "VanSchmoozin";
		model = "A3\weapons_f\ammoboxes\bags\Backpack_fast.p3d";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_kitbag.paa"};
	};
	class B_AssaultPack_Base;
	class MCB_Backpack_Compact: B_AssaultPack_Base
	{
		scope = 2;
		displayName = "Multicam Black Compact Bag";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_compact.paa"};
	};
	class Scorpion_Backpack_Compact: B_AssaultPack_Base
	{
		scope = 2;
		displayName = "Scorpion Compact Bag";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_compact.paa"};
	};
	class Tiger_Backpack_Compact: B_AssaultPack_Base
	{
		scope = 2;
		displayName = "Tiger Compact Bag";
		picture = "\A3\characters_f\Data\UI\icon_b_assaultpack_ca.paa";
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_compact.paa"};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class MCB_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_GP_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (BP) ";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_GP_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_GP_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (BP) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_GP_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_GS_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (BS) ";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_GS_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_GS_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (BS) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_GS_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_TP_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (GP)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_TP_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_TP_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (GP) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_TP_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_TS_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (GS)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_TS_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_TS_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (GS) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_TS_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_BDU: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black BDU";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_BDU";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_BDU_GP: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black BDU BP";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_BDU_GP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_BDU_TP: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black BDU GP";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_BDU_TP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_TShirt: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (T-Shirt)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_TShirt";
			containerClass = "Supply30";
			mass = 35;
		};
	};
	class MCB_Camo_Cyre: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (Crye)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_Cyre";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_Cyre_TS: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (Crye GS)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_Cyre_TS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_Cyre_TP: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (Crye GP)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_Cyre_TP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_Cyre_GS: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (Crye BS)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_Cyre_GS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_Cyre_Tee: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (Crye Tee)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_Cyre_Tee";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class MCB_Camo_Cyre_GP: Uniform_Base
	{
		scope = 2;
		displayName = "Multicam Black (Crye BP)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "MCB_Uniform_Cyre_GP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_GP_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (GP) ";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_GP_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_GP_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (GP) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_GP_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_GS_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (GS) ";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_GS_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_GS_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (GS) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_GS_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_TP_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (TP)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_TP_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_TP_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (TP) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_TP_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_TS_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (TS)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_TS_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_TS_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (TS) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_TS_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_BDU: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion BDU";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_BDU";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_BDU_GP: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion BDU GP";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_BDU_GP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_BDU_TP: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion BDU TP";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_BDU_TP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_TShirt: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (T-Shirt)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_TShirt";
			containerClass = "Supply30";
			mass = 35;
		};
	};
	class Scorpion_Camo_Cyre: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (Crye)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_Cyre";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_Cyre_TS: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (Crye TS)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_Cyre_TS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_Cyre_TP: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (Crye TP)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_Cyre_TP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_Cyre_GS: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (Crye GS)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_Cyre_GS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_Cyre_Tee: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (Crye Tee)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_Cyre_Tee";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Scorpion_Camo_Cyre_GP: Uniform_Base
	{
		scope = 2;
		displayName = "Scorpion (Crye GP)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Scorpion_Uniform_Cyre_GP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_GP_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (BP) ";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_GP_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_GP_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (BP) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_GP_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_GS_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (BS) ";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_GS_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_GS_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (BS) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_GS_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_TP_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (GP)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_TP_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_TP_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (GP) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_TP_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_TS_Camo: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (GS)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_TS_Uniform";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_TS_Camo_SS: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (GS) (Rolled Sleeves)";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_TS_Uniform_SS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_BDU: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger BDU";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_BDU";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_BDU_GP: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger BDU BP";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_BDU_GP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_BDU_TP: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger BDU GP";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_BDU_TP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_TShirt: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (T-Shirt)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_TShirt";
			containerClass = "Supply30";
			mass = 35;
		};
	};
	class Tiger_Camo_Cyre: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (Crye)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_Cyre";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_Cyre_TS: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (Crye GS)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_Cyre_TS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_Cyre_TP: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (Crye GP)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_Cyre_TP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_Cyre_GS: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (Crye BS)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_Cyre_GS";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_Cyre_Tee: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (Crye Tee)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_Cyre_Tee";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class Tiger_Camo_Cyre_GP: Uniform_Base
	{
		scope = 2;
		displayName = "Tiger (Crye BP)";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_f_b_combatuniform_ocam_ca.paa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		class ItemInfo: UniformItem
		{
			uniformClass = "Tiger_Uniform_Cyre_GP";
			containerClass = "Supply50";
			mass = 50;
		};
	};
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class MCB_Vest_1: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Multicam Black Platecarrier";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest01";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class MCB_Vest_2: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Multicam Black Platecarrier Lite";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest02";
		descriptionShort = "$STR_A3_SP_AL_III";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class MCB_Vest_3: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Multicam Black Platecarrier Special";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		descriptionShort = "$STR_A3_SP_AL_III";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class MCB_Vest_4: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Multicam Black IOTV Lite";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
		descriptionShort = "$STR_A3_SP_AL_III";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_IOTV.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class MCB_Vest_5: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Multicam Black IOTV";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_IOTV.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class MCB_Vest_6: Vest_Camo_Base
	{
		author = "VanSchmoozin";
		scope = 2;
		displayName = "Multicam Black Heavy 1";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_blk.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		descriptionShort = "$STR_A3_SP_AL_V";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_NATO_Heavy.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			containerClass = "Supply100";
			mass = 100;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
	class MCB_Vest_7: Vest_Camo_Base
	{
		author = "VanSchmoozin";
		scope = 2;
		displayName = "Multicam Black Heavy 2";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_blk.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
		descriptionShort = "$STR_A3_SP_AL_V";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_NATO_Heavy.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
			containerClass = "Supply100";
			mass = 100;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
	class Scorpion_Vest_1: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Scorpion Platecarrier";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest01";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01";
			containerClass = "Supply120";
			mass = 100;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class Scorpion_Vest_2: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Scorpion Platecarrier Lite";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest02";
		descriptionShort = "$STR_A3_SP_AL_III";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02";
			containerClass = "Supply120";
			mass = 80;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Scorpion_Vest_3: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Scorpion Platecarrier Special";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		descriptionShort = "$STR_A3_SP_AL_III";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			mass = 80;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Scorpion_Vest_4: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Scorpion IOTV Lite";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
		descriptionShort = "$STR_A3_SP_AL_III";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_IOTV.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Scorpion_Vest_5: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Scorpion IOTV";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_IOTV.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Scorpion_Vest_6: Vest_Camo_Base
	{
		author = "VanSchmoozin";
		scope = 2;
		displayName = "Scorpion Heavy 1";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_blk.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		descriptionShort = "$STR_A3_SP_AL_V";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_NATO_Heavy.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			containerClass = "Supply100";
			mass = 100;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
	class Scorpion_Vest_7: Vest_Camo_Base
	{
		author = "VanSchmoozin";
		scope = 2;
		displayName = "Scorpion Heavy 2";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_spec_rig_blk.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
		descriptionShort = "$STR_A3_SP_AL_V";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_NATO_Heavy.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
			containerClass = "Supply100";
			mass = 100;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
	class Tiger_Vest_1: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Tiger Platecarrier";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest01";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest01";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Tiger_Vest_2: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Tiger Platecarrier Lite";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_Vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_Vest02";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Tiger_Vest_3: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Tiger Platecarrier Special";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_vest.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Tiger_Vest_4: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Tiger IOTV Lite";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_IOTV.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class Tiger_Vest_5: Vest_Camo_Base
	{
		scope = 2;
		displayName = "Tiger IOTV";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_v_tacvest_blk_ca.paa";
		model = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_IOTV.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_beta\indep\equip_ia_vest02.p3d";
			containerClass = "Supply120";
			mass = 40;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class MCB_Helmet1: H_HelmetB
	{
		displayName = "Multicam Black ECH";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 20;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class MCB_Helmet2: H_HelmetB
	{
		displayName = "Multicam Black ECH Lite";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class MCB_Boonie: H_HelmetB
	{
		displayName = "Multicam Black Boonie";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_boonie.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
	class MCB_Cap: H_HelmetB
	{
		displayName = "Multicam Black Cap";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\MCB_cap.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
	class Scorpion_Helmet1: H_HelmetB
	{
		displayName = "Scorpion ECH";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 20;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class Scorpion_Helmet2: H_HelmetB
	{
		displayName = "Scorpion ECH Lite";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class Scorpion_Boonie: H_HelmetB
	{
		displayName = "Scorpion Boonie";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_boonie.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
	class Scorpion_Cap: H_HelmetB
	{
		displayName = "Scorpion Cap";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Scorpion_cap.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
	class Tiger_Helmet1: H_HelmetB
	{
		displayName = "Tiger ECH";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 20;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class Tiger_Helmet2: H_HelmetB
	{
		displayName = "Tiger ECH Lite";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_helmet.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class Tiger_Boonie: H_HelmetB
	{
		displayName = "Tiger Boonie";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_boonie.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
	class Tiger_Cap: H_HelmetB
	{
		displayName = "Tiger Cap";
		author = "VanSchmoozin";
		picture = "\A3\characters_f\Data\UI\icon_h_helmetb_black_ca.paa";
		model = "A3\Characters_F\Common\cappatrol.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"Sherwood\Data\Tiger_cap.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 15;
			allowedSlots[] = {901,605};
			uniformModel = "A3\Characters_F\Common\cappatrol.p3d";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			passThrough = 0.6;
		};
	};
};