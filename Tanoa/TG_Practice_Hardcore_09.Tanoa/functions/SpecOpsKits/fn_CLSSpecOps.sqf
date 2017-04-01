removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "SMA_Mk17_black";
player addPrimaryWeaponItem "SMA_ANPEQ15_BLK";
player addPrimaryWeaponItem "SMA_eotech552";
player addPrimaryWeaponItem "SMA_supp_762";
player addWeapon "hgun_ACPC2_F";
player addHandgunItem "muzzle_snds_acp";

 
player forceAddUniform "MCB_Camo_Cyre_GS";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
player addItemToUniform "ACE_M84";
for "_i" from 1 to 3 do {player addItemToUniform "9Rnd_45ACP_Mag";};
player addVest "MCB_Vest_2";
for "_i" from 1 to 7 do {player addItemToVest "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellGreen";
player addItemToVest "SmokeShellRed";
player addBackpack "MCB_Backpack_Compact";
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_bloodIV";};
for "_i" from 1 to 15 do {player addItemToBackpack "ACE_fieldDressing";};
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_epinephrine";};
for "_i" from 1 to 10 do {player addItemToBackpack "ACE_morphine";};
for "_i" from 1 to 2 do {player addItemToBackpack "HandGrenade";};
player addItemToBackpack "ACE_EarPlugs";
player addItemToBackpack "ACE_MapTools";
player addItemToBackpack "ACE_CableTie";
player addHeadgear "MCB_Helmet1";
player addGoggles "G_Balaclava_TI_blk_F";

 

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";