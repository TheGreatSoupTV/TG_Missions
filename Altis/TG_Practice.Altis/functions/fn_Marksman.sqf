removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "rhs_weap_sr25_ec";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_ACOG";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "rhsusf_weap_m9";
player addWeapon "ACE_Vector";

player forceAddUniform "Sherwood_Uniform";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 4 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_CableTie";
for "_i" from 1 to 3 do {player addItemToUniform "rhsusf_20Rnd_762x51_m118_special_Mag";};
player addVest "Custom_Vest";
player addItemToVest "ACE_MapTools";
player addItemToVest "ACE_Flashlight_XL50";
for "_i" from 1 to 3 do {player addItemToVest "rhsusf_20Rnd_762x51_m118_special_Mag";};
for "_i" from 1 to 2 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "ACE_microDAGR";
player addItemToVest "ACE_DAGR";
player addItemToVest "SmokeShellGreen";
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellRed";
player addItemToVest "rhsusf_acc_SR25S";
player addBackpack "tf_rt1523g_black";
player addHeadgear "H_HelmetB1";


player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_22";
player linkItem "ItemGPS";
player linkItem "NVGoggles_INDEP";


player setFace "WhiteHead_19";
player setSpeaker "ACE_NoVoice";
