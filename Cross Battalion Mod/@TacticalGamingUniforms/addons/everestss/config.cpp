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
    class EverestCustomSS_Config 
    { 
        units[] = {"EverestCustom_Mod"}; 
        weapons[] = {}; 
        requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Characters_F"}; 
    }; 
};

class cfgWeapons 
{
    class ItemCore;
    class HeadgearItem;

    class sldesert_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest SL ECH (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\everestss\data\everestsldeshelm.paa"};

     class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
         };
    };

    class slnight_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest SL ECH (Night)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};	
        hiddenSelectionsTextures[] = {"\everestss\data\everestslnighthelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
        };
    };

    class slurban_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest SL ECH (Urban)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\everestss\data\everestslurbanhelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
        };
    };

    class slwinter_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest SL ECH (Winter)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\everestss\data\everestslwinterhelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
        };
    };

    class slwland_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest SL ECH (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\everestss\data\everestslwlandhelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
        };
    };

    class sadesert_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest SA ECH (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\everestss\data\everestsadeshelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
        };
    };

    class sanight_ECH : ItemCore 
    {
    author = "JediNarwals [TG]";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Everest SA ECH (Night)";
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\everestss\data\everestsanighthelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
        };
    };

    class saurban_ECH : ItemCore 
    {
    author = "JediNarwals [TG]";
    scope = 2;
    weaponPoolAvailable = 1;
    displayName = "Everest SA ECH (Urban)";
    picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
    model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\everestss\data\everestsaurbanhelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
        };
    };

    class sawinter_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest SA ECH (Winter)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\everestss\data\everestsawinterhelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
        };
    };

    class sawland_ECH : ItemCore 
    {
        author = "JediNarwals [TG]";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "Everest SA ECH (Woodland)";
        picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
        model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\everestss\data\everestsawlandhelm.paa"};

        class ItemInfo : HeadgearItem 
        {
            mass = 20;
            uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
            modelSides[] = {3, 1};
            armor = 10;
            passThrough = 0.4;
            hiddenSelections[] = {"camo"};
            class HitpintsProtectionInfo
            {
                class HeadgearItem
                {
                    hitpointsName   = "HitHead";
                    armor           = 8;
                    passThrough     = 0.4;
                };
            };
        };
    };
};