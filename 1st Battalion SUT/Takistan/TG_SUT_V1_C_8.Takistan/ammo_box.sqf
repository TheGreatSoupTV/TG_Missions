/////////   MP Ammo Box script
/////////   By: Riouken
/////////   For Arma 3

if (! isServer) exitWith {};


_crate = _this select 0;




while {alive _crate} do
{


clearMagazineCargo _crate;
clearWeaponCargo _crate;
clearItemCargoGlobal _crate;
///NATO Weapons///




_crate addItemCargoGlobal ["DeltaACUPASGT", 50];
_crate addItemCargoGlobal ["DeltaACUPatrolCap", 50];
_crate addItemCargoGlobal ["DeltaBDU", 50];
_crate addItemCargoGlobal ["DeltaACUVest", 50];
_crate addItemCargoGlobal ["DeltaACUCarryall", 50];
_crate addItemCargoGlobal ["UK_Beret_Paras", 50];
_crate addItemCargoGlobal ["UK_Beret_RoyalMarines", 50];
_crate addItemCargoGlobal ["SP_PASGTHelmet_Black2", 50];
_crate addItemCargoGlobal ["Black", 50];
_crate addItemCargoGlobal ["ACUCarryall:", 50];
_crate addItemCargoGlobal ["UrbanACUPASGT", 50];
_crate addItemCargoGlobal ["UrbanACUPatrolCap", 50];
_crate addItemCargoGlobal ["UrbanACUBDU", 50];
_crate addItemCargoGlobal ["UrbanACUVest", 50];
_crate addItemCargoGlobal ["WoodBDU", 50];
_crate addItemCargoGlobal ["Woodvest", 50];
_crate addItemCargoGlobal ["SP_PASGTHelmet_Un1", 50];




sleep 500;
};