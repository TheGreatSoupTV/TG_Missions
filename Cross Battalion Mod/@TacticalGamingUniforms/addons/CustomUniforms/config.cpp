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
    class EverestCustomUniforms_Config 
    { 
        units[] = {"EverestCustomUniforms_Mod"}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F"}; 
    }; 
};

class cfgWeapons
{
    class ItemCore;
    class HeadgearItem;
    class desJEDI_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH JediNarwals (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\CustomUniforms\data\everestdeshelmJEDI.paa"};

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

    class nightJEDI_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH JediNarwals (Night)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\CustomUniforms\data\everestnighthelmJEDI.paa"};

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

    class urbanJEDI_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH JediNarwals (Urban)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\CustomUniforms\data\everesturbanhelmJEDI.paa"};

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

    class wlandJEDI_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH JediNarwals (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\CustomUniforms\data\everestwlandhelmJEDI.paa"};

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

    class desLG_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH Louie G (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\CustomUniforms\data\everestdeshelmLG.paa"};

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

    class nightLG_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH Louie G (Night)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\CustomUniforms\data\everestnighthelmLG.paa"};

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

    class urbanLG_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH Louie G (Urban)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\CustomUniforms\data\everesturbanhelmLG.paa"};

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

    class wlandLG_ECH : ItemCore
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest ECH Louie G (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\CustomUniforms\data\everestwlandhelmLG.paa"};

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
};