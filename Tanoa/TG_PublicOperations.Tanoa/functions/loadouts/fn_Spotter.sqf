
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "arifle_SPAR_01_blk_F";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "optic_Holosight_blk_F";
player addWeapon "hgun_ACPC2_F";
player addWeapon "ACE_Vector";
 
player forceAddUniform "U_B_T_Sniper_F";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_CableTie";
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToUniform "Chemlight_red";};
for "_i" from 1 to 2 do {player addItemToUniform "SmokeShell";};
player addItemToUniform "B_IR_Grenade";
player addItemToUniform "9Rnd_45ACP_Mag";
player addVest "V_PlateCarrier2_blk";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToVest "30Rnd_556x45_Stanag_red";};
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
player addItemToVest "SmokeShellGreen";
player addItemToVest "SmokeShellRed";
player addItemToVest "9Rnd_45ACP_Mag";
player addBackpack "tf_rt1523g_big_bwmod_tropen";
player addItemToBackpack "ACE_ATragMX";
player addItemToBackpack "ACE_Kestrel4500";
player addItemToBackpack "ACE_microDAGR";
player addItemToBackpack "ACE_RangeCard";
player addItemToBackpack "ACE_Tripod";
for "_i" from 1 to 5 do {player addItemToBackpack "ACE_7Rnd_408_305gr_Mag";};
player addHeadgear "H_HelmetB_Enh_tna_F";
 

 

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";

closeDialog 0;