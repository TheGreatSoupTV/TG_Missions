removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "rhs_weap_m249_pip_L";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";
player addWeapon "rhsusf_weap_glock17g4";

player forceAddUniform "U_B_Wetsuit";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "rhs_200rnd_556x45_T_SAW";
player addVest "V_RebreatherB";
player addBackpack "B_ViperLightHarness_blk_F";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_mag_an_m8hc";};
player addItemToBackpack "B_IR_Grenade";
player addItemToBackpack "rhs_mag_m18_green";
player addItemToBackpack "rhs_mag_m18_red";
player addItemToBackpack "rhs_mag_m67";
for "_i" from 1 to 2 do {player addItemToBackpack "rhsusf_mag_17Rnd_9x19_FMJ";};
player addItemToBackpack "rhs_200rnd_556x45_T_SAW";
for "_i" from 1 to 2 do {player addItemToBackpack "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToBackpack "Chemlight_red";};
player addGoggles "G_B_Diving";

 

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";