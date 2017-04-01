
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
player addWeapon "rhsusf_weap_m9";

player forceAddUniform "Sherwood_Uniform";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 4 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToUniform "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addVest "Custom_Vest";
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
player addItemToVest "ACE_MapTools";
player addItemToVest "rhsusf_acc_nt4_black";
player addItemToVest "ACE_Flashlight_XL50";
player addItemToVest "ACE_CableTie";
player addItemToVest "ACE_microDAGR";
for "_i" from 1 to 3 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
for "_i" from 1 to 2 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellRed";
player addBackpack "B_AssaultPack_rgr";
player addItemToBackpack "rhs_mag_smaw_SR";
player addItemToBackpack "rhs_mag_smaw_HEAA";
player addHeadgear "H_HelmetB1";


player addWeapon "rhs_weap_smaw_green";
player addSecondaryWeaponItem "rhs_weap_optic_smaw";


player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_22";
player linkItem "ItemGPS";
player linkItem "NVGoggles_INDEP";


player setFace "WhiteHead_19";
player setSpeaker "ACE_NoVoice";
