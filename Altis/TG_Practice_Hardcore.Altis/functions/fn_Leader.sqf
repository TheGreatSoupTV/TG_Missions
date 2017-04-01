removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "rhs_weap_m4a1_blockII_M203_bk";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";
player addWeapon "rhsusf_weap_glock17g4";
player addWeapon "ACE_Vector";

 
player forceAddUniform "Scorpion_Camo";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
for "_i" from 1 to 2 do {player addItemToUniform "rhsusf_mag_17Rnd_9x19_FMJ";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
for "_i" from 1 to 3 do {player addItemToUniform "rhs_mag_m713_Red";};
player addItemToUniform "rhs_mag_M585_white";
player addVest "Scorpion_Vest_1";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "rhs_mag_an_m8hc";};
for "_i" from 1 to 2 do {player addItemToVest "rhs_mag_m715_Green";};
player addItemToVest "B_IR_Grenade";
player addItemToVest "rhs_mag_m18_green";
player addItemToVest "rhs_mag_m661_green";
for "_i" from 1 to 2 do {player addItemToVest "rhs_mag_m714_White";};
player addHeadgear "Scorpion_Helmet1";

 
 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";
