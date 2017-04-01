
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

player forceAddUniform "Sherwood_Uniform";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addVest "Custom_Vest";
player addItemToVest "ACE_fieldDressing";
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
player addItemToVest "ACE_MapTools";
player addItemToVest "rhsusf_acc_nt4_black";
player addItemToVest "ACE_Flashlight_XL50";
player addItemToVest "ACE_HuntIR_monitor";
player addItemToVest "ACE_CableTie";
for "_i" from 1 to 2 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellRed";
player addItemToVest "ACE_microDAGR";
player addBackpack "B_AssaultPack_rgr";
for "_i" from 1 to 3 do {player addItemToBackpack "rhs_mag_m714_White";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_HuntIR_M203";};
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_mag_m713_Red";};
for "_i" from 1 to 8 do {player addItemToBackpack "rhs_mag_M441_HE";};
for "_i" from 1 to 4 do {player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addHeadgear "H_HelmetB";


player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_22";
player linkItem "ItemGPS";
player linkItem "NVGoggles_INDEP";


player setFace "WhiteHead_19";
player setSpeaker "ACE_NoVoice";
