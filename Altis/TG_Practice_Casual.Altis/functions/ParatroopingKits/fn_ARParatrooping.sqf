removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "rhs_weap_m249_pip_L_para";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";
player addWeapon "rhsusf_weap_glock17g4";

player forceAddUniform "Scorpion_Camo_Cyre";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "rhs_200rnd_556x45_M_SAW";
player addVest "Scorpion_Vest_1";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
player addItemToVest "rhs_mag_an_m8hc";
player addItemToVest "B_IR_Grenade";
player addItemToVest "rhs_mag_m18_green";
player addItemToVest "rhs_mag_m18_red";
player addItemToVest "rhs_mag_m67";
for "_i" from 1 to 2 do {player addItemToVest "rhsusf_mag_17Rnd_9x19_FMJ";};
player addItemToVest "rhs_200rnd_556x45_M_SAW";
for "_i" from 1 to 2 do {player addItemToVest "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToVest "Chemlight_red";};
player addHeadgear "Scorpion_Helmet1";
player addBackpack "B_Parachute";
player addGoggles "G_Balaclava_TI_G_blk_F";

 

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";