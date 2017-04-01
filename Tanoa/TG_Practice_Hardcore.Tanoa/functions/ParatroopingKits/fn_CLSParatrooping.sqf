removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "SMA_HK416MOEOD";
player addPrimaryWeaponItem "SMA_ANPEQ15_BLK";
player addPrimaryWeaponItem "SMA_eotech552";
player addWeapon "hgun_ACPC2_F";
 
player forceAddUniform "MCB_Camo_SS";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_epinephrine";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 3 do {player addItemToUniform "9Rnd_45ACP_Mag";};
player addVest "MCB_Vest_1";
for "_i" from 1 to 7 do {player addItemToVest "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellGreen";
player addItemToVest "SmokeShellRed";
for "_i" from 1 to 2 do {player addItemToVest "ACE_bloodIV";};
for "_i" from 1 to 15 do {player addItemToVest "ACE_fieldDressing";};
player addItemToVest "ACE_morphine";
player addHeadgear "MCB_Helmet1";
player addBackpack "B_Parachute";
player addGoggles "G_Balaclava_TI_G_blk_F";
 
 

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";