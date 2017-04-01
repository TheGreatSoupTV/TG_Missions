removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "rhs_weap_hk416d10";
player addPrimaryWeaponItem "rhsusf_acc_nt4_black";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";
player addPrimaryWeaponItem "rhsusf_acc_grip2";
player addWeapon "rhsusf_weap_glock17g4";
player addHandgunItem "rhsusf_acc_omega9k";
player addWeapon "ACE_Vector";
 
player forceAddUniform "Tiger_Camo_Cyre_GS";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
for "_i" from 1 to 2 do {player addItemToUniform "rhs_mag_an_m8hc";};
player addItemToUniform "B_IR_Grenade";
player addItemToUniform "Laserbatteries";
player addItemToUniform "rhsusf_mag_17Rnd_9x19_FMJ";
player addVest "Tiger_Vest_1";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "rhs_mag_m67";};
player addItemToVest "Laserdesignator_01_khk_F";
player addItemToVest "rhsusf_mag_17Rnd_9x19_FMJ";
player addItemToVest "rhs_mag_m18_green";
player addItemToVest "rhs_mag_m18_red";
player addBackpack "tf_rt1523g_big_bwmod_tropen";
player addItemToBackpack "ACE_ATragMX";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_microDAGR";
player addHeadgear "Tiger_Helmet2";
player addGoggles "G_Balaclava_TI_blk_F";
 
 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
 
player setSpeaker "ACE_NoVoice";

closeDialog 0;