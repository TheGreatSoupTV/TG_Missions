
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "rhs_weap_m249_pip_S_para";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15A";
player addPrimaryWeaponItem "rhsusf_acc_eotech_552";
player addWeapon "rhsusf_weap_m9";

player forceAddUniform "Sherwood_Uniform";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 4 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "rhsusf_mag_15Rnd_9x19_FMJ";
for "_i" from 1 to 2 do {player addItemToUniform "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 2 do {player addItemToUniform "SmokeShell";};
player addItemToUniform "HandGrenade";
player addVest "Custom_Vest";
player addItemToVest "rhs_200rnd_556x45_M_SAW";
player addItemToVest "HandGrenade";
player addItemToVest "SmokeShellGreen";
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellRed";
player addItemToVest "ACE_microDAGR";
player addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_200rnd_556x45_M_SAW";};
player addHeadgear "H_HelmetB";


player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_INDEP";


player setFace "WhiteHead_19";
player setSpeaker "ACE_NoVoice";