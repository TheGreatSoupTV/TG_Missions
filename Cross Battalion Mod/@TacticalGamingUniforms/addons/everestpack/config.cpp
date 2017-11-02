#define private         0
#define protected               1
#define public          2
 
#define true    1
#define false   0

class CfgPatches {
        class everest_pack {
                units[] = {};
                weapons[] = {};
                requiredVersion = 0.1;
                requiredAddons[] = { "A3_Weapons_F" };
        };
};
 
class cfgVehicles {
        class ContainerSupply;
        class Bag_Base;
		class B_Kitbag_Base;   // External class reference
               
        class everest_pack : B_Kitbag_Base {
                scope = public;
                class TransportMagazines{};
                class TransportWeapons{};
                isbackpack = 1;
                transportMaxWeapons = 1;
                transportMaxMagazines = 13;
                class DestructionEffects{};
                displayName = "Everest Pack (Stock)";
                model = "\everestpack\Backpack_Fast.p3d";
                vehicleClass = "Backpacks";
                allowedSlots[] = {1000};
        };

class everest_packUrban : everest_pack { 
                displayName = "Everest Pack (Urban)"; 
                hiddenSelectionsTextures[] = {"\everestpack\data\everestpackurban.paa"}; 
        };  

class everest_packNight : everest_pack { 
                displayName = "Everest Pack (Night)";
                hiddenSelectionsTextures[] = {"\everestpack\data\everestpacknight.paa"}; 
		 };	 
		 
class everest_packWland : everest_pack { 
                displayName = "Everest Pack (Woodland)";
                hiddenSelectionsTextures[] = {"\everestpack\data\everestpackwland.paa"}; 
		 };	 
		 
class everest_packWinter : everest_pack { 
                displayName = "Everest Pack (Winter)";
                hiddenSelectionsTextures[] = {"\everestpack\data\everestpackwinter.paa"}; 
		 };	 

class everest_packDesert : everest_pack { 
                displayName = "Everest Pack (Desert)";
                hiddenSelectionsTextures[] = {"\everestpack\data\everestpackdes.paa"}; 
		 };	 
   
 };
  
 
