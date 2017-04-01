removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "srifle_LRR_F";
player addPrimaryWeaponItem "rhsusf_acc_LEUPOLDMK4_2";
player addWeapon "rhsusf_weap_glock17g4";
player addHandgunItem "rhsusf_acc_omega9k";
player addWeapon "ACE_Vector";
 
player forceAddUniform "MCB_Camo_Cyre_GS";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_ATragMX";
player addItemToUniform "ACE_Kestrel4500";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "Chemlight_green";
player addItemToUniform "Chemlight_red";
for "_i" from 1 to 2 do {player addItemToUniform "rhs_mag_m67";};
for "_i" from 1 to 2 do {player addItemToUniform "rhsusf_mag_17Rnd_9x19_FMJ";};
player addItemToUniform "ACE_RangeCard";
player addVest "MCB_Vest_1";
player addItemToVest "B_IR_Grenade";
player addItemToVest "rhs_mag_m18_green";
player addItemToVest "rhs_mag_m18_red";
player addItemToVest "rhs_mag_an_m8hc";
for "_i" from 1 to 5 do {player addItemToVest "7Rnd_408_Mag";};
player addItemToVest "rhsusf_mag_17Rnd_9x19_FMJ";
player addHeadgear "MCB_Helmet2";
player addBackpack "B_Parachute";
player addGoggles "G_Balaclava_TI_G_blk_F";

 
 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";