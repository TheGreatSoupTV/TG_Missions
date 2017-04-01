removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "SMA_AUG_EGLM";
player addPrimaryWeaponItem "SMA_ANPEQ15_BLK";
player addPrimaryWeaponItem "SMA_eotech552";
player addWeapon "hgun_ACPC2_F";
 
player forceAddUniform "U_B_Wetsuit";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
player addItemToUniform "ACE_HuntIR_monitor";
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
for "_i" from 1 to 4 do {player addItemToBackpack "30Rnd_556x45_Stanag_Tracer_Red";};
for "_i" from 1 to 8 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 4 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToBackpack "1Rnd_SmokeRed_Grenade_shell";};
for "_i" from 1 to 2 do {player addItemToBackpack "ACE_HuntIR_M203";};
for "_i" from 1 to 3 do {player addItemToBackpack "30Rnd_556x45_Stanag_Tracer_Red";};
player addGoggles "G_B_Diving";
 

 

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_1";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";
