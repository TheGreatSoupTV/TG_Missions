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
 
player forceAddUniform "Tiger_Camo_Cyre_GS";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_Clacker";
player addItemToUniform "ACE_DefusalKit";
player addItemToUniform "rhs_mag_m67";
player addItemToUniform "rhs_mag_30Rnd_556x45_Mk318_Stanag";
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};

player addItemToUniform "rhs_mag_an_m8hc";
player addVest "Tiger_Vest_5";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
for "_i" from 1 to 4 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addItemToVest "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItemToVest "rhs_mag_mk84";};
player addItemToVest "B_IR_Grenade";
for "_i" from 1 to 2 do {player addItemToVest "DemoCharge_Remote_Mag";};
player addHeadgear "Tiger_Helmet1";
player addBackpack "B_Parachute";
player addGoggles "G_Balaclava_TI_G_blk_F";
 

player addWeapon "ACE_VMH3";
 

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";
