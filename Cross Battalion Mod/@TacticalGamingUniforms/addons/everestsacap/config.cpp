enum {
DESTRUCTENGINE = 2,
DESTRUCTDEFAULT = 6,
DESTRUCTWRECK = 7,
DESTRUCTTREE = 3,
DESTRUCTTENT = 4,
STABILIZEDINAXISX = 1,
STABILIZEDINAXESXYZ = 4,
STABILIZEDINAXISY = 2,
STABILIZEDINAXESBOTH = 3,
DESTRUCTNO = 0,
STABILIZEDINAXESNONE = 0,
DESTRUCTMAN = 5,
DESTRUCTBUILDING = 1,
};

class CfgPatches {
class POMI_CAPPATCH {
units[] = {};
weapons[] = {};
requiredVersion = 0.1;
requiredAddons[] = {};
};
};

class cfgWeapons {
class ItemCore;	// External class reference
class HeadgearItem; // External class reference
class H_Cap_cappatch_default: ItemCore 
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Everest SA Cap";
		model = "\everestsacap\cap_patch.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\everestsacap\data\everestsacap.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\everestsacap\cap_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;			
		};
	};
class H_Cap_capbackpatch_default: ItemCore 
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Everest SA Cap (Backwards)";
		model = "\everestsacap\capback_patch.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\everestsacap\Data\everestsacap.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 3;
			uniformModel = "\everestsacap\capback_patch.p3d";
			hiddenSelections[] = {"camo1","camo2"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;			
		};
	};
};