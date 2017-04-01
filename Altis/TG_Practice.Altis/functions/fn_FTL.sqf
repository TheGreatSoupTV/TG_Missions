removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "rhs_weap_m4a1_m203";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15A";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";
player addWeapon "rhsusf_weap_m9";
player addWeapon "ACE_Vector";

player forceAddUniform "Sherwood_Uniform";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_DAGR";
for "_i" from 1 to 4 do {player addItemToUniform "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addVest "Custom_Vest";
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
player addItemToVest "rhsusf_acc_nt4_black";
player addItemToVest "ACE_CableTie";
for "_i" from 1 to 4 do {player addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 3 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
for "_i" from 1 to 6 do {player addItemToVest "rhs_mag_m713_Red";};
for "_i" from 1 to 6 do {player addItemToVest "rhs_mag_m714_White";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellRed";
player addHeadgear "H_HelmetB";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_INDEP";

player setFace "WhiteHead_19";
player setSpeaker "ACE_NoVoice";
