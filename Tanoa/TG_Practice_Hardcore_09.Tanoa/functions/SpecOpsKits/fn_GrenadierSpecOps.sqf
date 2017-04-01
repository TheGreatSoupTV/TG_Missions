removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "SMA_MK17_EGLM_black";
player addPrimaryWeaponItem "SMA_supp_762";
player addPrimaryWeaponItem "SMA_eotech552";
player addPrimaryWeaponItem "SMA_ANPEQ15_BLK";
player addWeapon "hgun_ACPC2_F";
player addHandgunItem "muzzle_snds_acp";
 
player forceAddUniform "MCB_Camo_Cyre_GS";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_HuntIR_monitor";
player addItemToUniform "ACE_M84";
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
player addVest "MCB_Vest_2";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellGreen";
player addItemToVest "SmokeShellRed";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 3 do {player addItemToVest "9Rnd_45ACP_Mag";};
for "_i" from 1 to 4 do {player addItemToVest "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR";};
player addBackpack "MCB_Backpack_Compact";
for "_i" from 1 to 8 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 4 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_HuntIR_M203";};
for "_i" from 1 to 3 do {player addItemToBackpack "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR";};
player addHeadgear "MCB_Helmet1";
player addGoggles "G_Balaclava_TI_blk_F";
 

 

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";
