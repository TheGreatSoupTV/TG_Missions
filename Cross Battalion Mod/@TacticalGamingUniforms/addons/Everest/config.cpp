class CfgFactionClasses
{
    class Everest_Faction 
    { 
        displayName = "Everest"; 
        priority = 4; // Position in list. 
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2. 
        icon = "\Everest\data\tg_icon.paa"; //Custom Icon 
    };  
};

class CfgPatches {
    class EverestCustom_Config 
    { 
        units[] = {"EverestCustom_Mod"}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F"}; 
    }; 
};

class CfgUnitInsignia
{
	class Everest
	{
		displayName = "Everest"; // Name displayed in Arsenal
		author = "Hermano [TG]"; // Author displayed in Arsenal
		texture = "\Everest\Data\Everest.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
    class Sherwood
	{
		displayName = "Sherwood"; // Name displayed in Arsenal
		author = "Hermano [TG]"; // Author displayed in Arsenal
		texture = "\Everest\Data\Sherwood.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
    class Alpha
	{
		displayName = "Alpha"; // Name displayed in Arsenal
		author = "Hermano [TG]"; // Author displayed in Arsenal
		texture = "\Everest\Data\Alpha.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
    class Bravo
	{
		displayName = "Bravo"; // Name displayed in Arsenal
		author = "Hermano [TG]"; // Author displayed in Arsenal
		texture = "\Everest\Data\Bravo.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
    class Charlie
	{
		displayName = "Charlie"; // Name displayed in Arsenal
		author = "Hermano [TG]"; // Author displayed in Arsenal
		texture = "\Everest\Data\Charlie.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
    };
    class XRay
	{
		displayName = "X-Ray"; // Name displayed in Arsenal
		author = "Hermano [TG]"; // Author displayed in Arsenal
		texture = "\Everest\Data\X-Ray.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
    };
    class Zulu
	{
		displayName = "Zulu"; // Name displayed in Arsenal
		author = "Hermano [TG]"; // Author displayed in Arsenal
		texture = "\Everest\Data\Zulu.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
};

class CfgVehicles {
	class B_Soldier_F;

    class Everest_SoldierDES: B_soldier_F {
        author = "JediNarwals [TG]"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Everest Soldier"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Everest_Faction";
        model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d"; //Default NATO 
        icon = "\Everest\data\tg_icon.paa";
        uniformClass = "Everest_Uniform"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"\Everest\Data\Everestdesclo.paa"}; 
         weapons[] = {"Throw","Put"}; 
        respawnWeapons[] = {"Throw","Put"}; 
    };

    class Everest_SoldierNGT: B_soldier_F {
        author = "JediNarwals [TG]"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Everest Soldier Night"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Everest_Faction";
        model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d"; //Default NATO 
        icon = "\Everest\data\tg_icon.paa";
        uniformClass = "Everest_Uniform"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"\Everest\Data\Everestnightclo.paa"}; 
         weapons[] = {"Throw","Put"}; 
        respawnWeapons[] = {"Throw","Put"}; 
    };

    class Everest_SoldierURB: B_soldier_F {
        author = "JediNarwals [TG]"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Everest Soldier Urban"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Everest_Faction";
        model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d"; //Default NATO 
        icon = "\Everest\data\tg_icon.paa";
        uniformClass = "Everest_Uniform"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"\Everest\Data\Everesturbanclo.paa"}; 
         weapons[] = {"Throw","Put"}; 
        respawnWeapons[] = {"Throw","Put"}; 
    };
    class Everest_SoldierWLND: B_soldier_F {
        author = "JediNarwals [TG]"; 
        _generalMacro = "B_soldier_F"; 
        scope = 2; 
        displayName = "Everest Soldier Urban"; 
        identityTypes[] = {"Head_NATO", "G_NATO_default"}; 
        genericNames = "NATOMen"; 
        faction = "Everest_Faction";
        model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d"; //Default NATO 
        icon = "\Everest\data\tg_icon.paa";
        uniformClass = "Everest_Uniform"; 
        hiddenSelections[] = {"Camo","Insignia"}; 
        hiddenSelectionsTextures[] = {"\Everest\Data\Everestwlandclo.paa"}; 
         weapons[] = {"Throw","Put"}; 
        respawnWeapons[] = {"Throw","Put"}; 
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

    class everestdesClothing : Uniform_Base 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        displayName = "Everest BDU (Desert)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo : UniformItem 
        {
            uniformModel = "-";
            uniformClass = "Everest_SoldierDES"; //would be same as our made soldier class
            containerClass = Supply500; //how much it can carry
            mass = 5; //how much it weights
            capacity = 500;
        };
    };

    class everestnightClothing : Uniform_Base 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        displayName = "Everest BDU (Night)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo : UniformItem 
        {
            uniformModel = "-";
            uniformClass = "Everest_SoldierNGT"; //would be same as our made soldier class
            containerClass = Supply500; //how much it can carry
            mass = 5; //how much it weights
            capacity = 500;
        };
    };

    class everesturbanClothing : Uniform_Base 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        displayName = "Everest BDU (Urban)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo : UniformItem 
        {
            uniformModel = "-";
            uniformClass = "Everest_SoldierURB"; //would be same as our made soldier class
            containerClass = Supply50; //how much it can carry
            mass = 35; //how much it weights
            capacity = 40;
        };
    };

    class everestwlandClothing : Uniform_Base 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        displayName = "Everest BDU (Woodland)";
        picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";

        class ItemInfo : UniformItem 
        {
            uniformModel = "-";
            uniformClass = "Everest_SoldierWLND"; //would be same as our made soldier class
            containerClass = Supply50; //how much it can carry
            mass = 35; //how much it weights
            capacity = 40;
        };
    };


    class HeadgearItem;
    class Desert_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestdeshelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 6;
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 12; // addition to armor of referenced hitpoint
					passThrough	= 0.1; // multiplier of base passThrough defined in referenced hitpoint
                };
            };
        };
    };

    class Night_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH (Night)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestnighthelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 6;
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 12; // addition to armor of referenced hitpoint
					passThrough	= 0.1; // multiplier of base passThrough defined in referenced hitpoint
                };
            };
        };
    };

    class Urban_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH (Urban)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everesturbanhelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 4;
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 8; // addition to armor of referenced hitpoint
					passThrough	= 0.4; // multiplier of base passThrough defined in referenced hitpoint
                };
            };
        };
    };

    class Woodland_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestwlandhelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 4;
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor		= 8; // addition to armor of referenced hitpoint
					passThrough	= 0.4; // multiplier of base passThrough defined in referenced hitpoint
                };
            };
        };
    };

    class desBGC_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest BGC ECH (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestdeshelmBGC.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class nightBGC_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest BGC ECH (Night)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestnighthelmBGC.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class urbanBGC_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest BGC ECH (Urban)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everesturbanhelmBGC.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class wlandBGC_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest BGC ECH (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestwlandhelmBGC.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class desCO_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest CO ECH (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestdeshelmCO.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class nightCO_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest CO ECH (Night)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestnighthelmCO.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class urbanCO_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest CO ECH (Urban)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everesturbanhelmCO.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class wlandCO_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest CO ECH (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestwlandhelmCO.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class desXO_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest XO ECH (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestdeshelmXO.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class nightXO_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest XO ECH (Night)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestnighthelmXO.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class urbanXO_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest XO ECH (Urban)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everesturbanhelmXO.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class wlandXO_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest XO ECH (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestwlandhelmXO.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class desAT_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest AT ECH (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestdeshelmAT.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class nightAT_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest AT ECH (Night)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestnighthelmAT.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class urbanAT_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest AT ECH (Urban)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everesturbanhelmAT.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class wlandAT_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest AT ECH (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestwlandhelmAT.paa"};   

        class ItemInfo : HeadgearItem
        {
            mass = 5;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 5;
            passThrough = 0.09;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointName = "HitHead";
                    armor = 10;
                    passThrough = 0.1;
                };
            };
        };
    };

    class VestItem;
    class Vest_Camo_Base: ItemCore
    {
        class ItemInfo;
    };

    class desVest : Vest_Camo_Base 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        displayName = "Everest Vest (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestdesvest.paa"};

        class ItemInfo : VestItem 
        {
            uniformModel = "A3\characters_f\BLUFOR\equip_b_vest02.p3d";
            containerClass = Supply300;
            mass = 55;
            armor = 20;
            capacity = 300;
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
              				class Neck
				{
					hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
					armor		= 8; // addition to armor of referenced hitpoint
					passThrough	= 0.3; // multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 8;
					passThrough	= 0.3;
				};
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 30; 
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 28;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 28;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};  
            };
        };
    };
    
    class nightVest : Vest_Camo_Base 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        displayName = "Everest Vest (Night)";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestnightvest.paa"};

        class ItemInfo : VestItem 
        {
            uniformModel = "A3\characters_f\BLUFOR\equip_b_vest02.p3d";
            containerClass = Supply300;
            mass = 55;
            armor = 20;
            capacity = 300;
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
              				class Neck
				{
					hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
					armor		= 8; // addition to armor of referenced hitpoint
					passThrough	= 0.3; // multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 8;
					passThrough	= 0.3;
				};
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 30; 
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 28;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 28;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};  
            };
        };
    };
    class urbanVest : Vest_Camo_Base 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        displayName = "Everest Vest (Urban)";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everesturbanvest.paa"};

        class ItemInfo : VestItem 
        {
            uniformModel = "A3\characters_f\BLUFOR\equip_b_vest02.p3d";
            containerClass = Supply300;
            mass = 55;
            armor = 20;
            capacity = 300;
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
              				class Neck
				{
					hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
					armor		= 8; // addition to armor of referenced hitpoint
					passThrough	= 0.3; // multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 8;
					passThrough	= 0.3;
				};
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 30; 
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 28;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 28;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};  
            };
        };
    };

    class woodLandVest : Vest_Camo_Base 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        displayName = "Everest Vest (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
        model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\Everest\data\everestwlandvest.paa"};

        class ItemInfo : VestItem 
        {
            uniformModel = "A3\characters_f\BLUFOR\equip_b_vest02.p3d";
            containerClass = Supply300;
            mass = 55;
            armor = 20;
            capacity = 300;
            passThrough = 0.3;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
              				class Neck
				{
					hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
					armor		= 8; // addition to armor of referenced hitpoint
					passThrough	= 0.3; // multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 8;
					passThrough	= 0.3;
				};
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 30; 
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 28;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 28;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough	= 0.1;
				};  
            };
        };
    };
};