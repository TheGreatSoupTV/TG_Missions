removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "srifle_LRR_F";
player addPrimaryWeaponItem "ACE_optic_LRPS_PIP";
player addWeapon "rhsusf_weap_m9";
player addWeapon "ACE_Vector";

player forceAddUniform "Sherwood_Uniform";
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_fieldDressing";};
player addItemToUniform "ACE_morphine";
player addItemToUniform "ACE_DAGR";
player addItemToUniform "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItemToUniform "7Rnd_408_Mag";};
player addVest "Custom_Vest";
player addItemToVest "ACE_Flashlight_XL50";
player addItemToVest "ACE_ATragMX";
player addItemToVest "ACE_Kestrel4500";
for "_i" from 1 to 2 do {player addItemToVest "ACE_CableTie";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToVest "rhsusf_mag_15Rnd_9x19_FMJ";};
for "_i" from 1 to 4 do {player addItemToVest "7Rnd_408_Mag";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellRed";
player addHeadgear "H_HelmetB_light";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_INDEP";

player setFace "WhiteHead_19";
player setSpeaker "ACE_NoVoice";
