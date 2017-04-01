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
player addWeapon "ACE_Vector";
 
player forceAddUniform "MCB_Camo_Cyre_GS";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_M84";
for "_i" from 1 to 2 do {player addItemToUniform "9Rnd_45ACP_Mag";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
for "_i" from 1 to 2 do {player addItemToUniform "1Rnd_SmokeGreen_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToUniform "1Rnd_SmokeRed_Grenade_shell";};
player addItemToUniform "UGL_FlareCIR_F";
player addVest "MCB_Vest_2";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToVest "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "B_IR_Grenade";
player addItemToVest "SmokeShellGreen";
player addItemToVest "SmokeShellRed";
player addItemToVest "HandGrenade";
player addItemToVest "UGL_FlareCIR_F";
for "_i" from 1 to 2 do {player addItemToVest "1Rnd_Smoke_Grenade_shell";};
player addHeadgear "MCB_Helmet1";
player addGoggles "G_Balaclava_TI_blk_F";

 
 
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";
