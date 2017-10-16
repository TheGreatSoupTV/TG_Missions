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
 
player forceAddUniform "U_B_Wetsuit";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
for "_i" from 1 to 2 do {player addItemToUniform "rhs_mag_an_m8hc";};
player addItemToUniform "ACE_ATragMX";
player addItemToUniform "ACE_Kestrel4500";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_RangeCard";
player addItemToUniform "B_IR_Grenade";
for "_i" from 1 to 2 do {player addItemToUniform "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
for "_i" from 1 to 2 do {player addItemToUniform "rhs_mag_m67";};
player addVest "V_RebreatherB";
player addBackpack "tf_rt1523g_big_bwmod";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_morphine";};
player addItemToBackpack "rhs_mag_m18_green";
player addItemToBackpack "rhs_mag_m18_red";
player addItemToBackpack "ACE_Tripod";
for "_i" from 1 to 1 do {player addItemToBackpack "rhsusf_mag_17Rnd_9x19_FMJ";};
for "_i" from 1 to 4 do {player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_7Rnd_408_305gr_Mag";};
player addGoggles "G_B_Diving";
 
 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR"; 
 
player setSpeaker "ACE_NoVoice";

closeDialog 0;