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
player addWeapon "hgun_ACPC2_F";
player addHandgunItem "muzzle_snds_acp";
player addWeapon "ACE_Vector";
 
player forceAddUniform "MCB_Camo_Cyre_GS";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_ATragMX";
player addItemToUniform "ACE_Kestrel4500";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
player addItemToUniform "HandGrenade";
player addVest "MCB_Vest_2";
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellGreen";
player addItemToVest "SmokeShellRed";
player addItemToVest "HandGrenade";
for "_i" from 1 to 3 do {player addItemToVest "9Rnd_45ACP_Mag";};
for "_i" from 1 to 6 do {player addItemToVest "7Rnd_408_Mag";};
player addHeadgear "MCB_Helmet1";
player addGoggles "G_Balaclava_TI_blk_F";

 
 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
 
player setSpeaker "ACE_NoVoice";