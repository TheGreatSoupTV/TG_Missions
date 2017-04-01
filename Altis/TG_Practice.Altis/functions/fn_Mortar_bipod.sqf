removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "rhs_weap_m4a1_carryhandle";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15A";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "rhsusf_weap_m9";

player forceAddUniform "Sherwood_Uniform";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 4 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_MapTools";
for "_i" from 1 to 2 do {player addItemToUniform "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addVest "Custom_Vest";
player addItemToVest "rhsusf_acc_nt4_black";
player addItemToVest "ACE_Flashlight_XL50";
player addItemToVest "ACE_RangeTable_82mm";
player addItemToVest "ACE_MapTools";
player addItemToVest "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 6 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellRed";
player addBackpack "B_Mortar_01_support_F";
player addHeadgear "H_HelmetB1";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_INDEP";

player setFace "WhiteHead_19";
player setSpeaker "ACE_NoVoice";
