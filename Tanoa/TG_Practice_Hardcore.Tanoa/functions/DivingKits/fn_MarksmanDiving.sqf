removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "arifle_SPAR_03_blk_F";
player addPrimaryWeaponItem "SMA_ANPEQ15_BLK";
player addPrimaryWeaponItem "optic_Hamr";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "hgun_ACPC2_F";
player addWeapon "ACE_Vector";
 
player forceAddUniform "U_B_Wetsuit";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
player addVest "V_RebreatherB";
player addBackpack "B_ViperLightHarness_blk_F";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToBackpack "SmokeShell";};
player addItemToBackpack "B_IR_Grenade";
player addItemToBackpack "SmokeShellGreen";
player addItemToBackpack "SmokeShellRed";
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToBackpack "9Rnd_45ACP_Mag";};
for "_i" from 1 to 4 do {player addItemToBackpack "20Rnd_762x51_Mag";};
for "_i" from 1 to 3 do {player addItemToBackpack "20Rnd_762x51_Mag";};
player addGoggles "G_B_Diving";

 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";
