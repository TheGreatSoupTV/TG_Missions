
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;
 
player addWeapon "srifle_DMR_03_F";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "optic_MRCO";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "hgun_ACPC2_F";
player addWeapon "ACE_Vector";

 
player forceAddUniform "U_B_CTRG_1";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";};
player addVest "V_PlateCarrier2_blk";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
player addItemToVest "ACE_CableTie";
player addItemToVest "ACE_EarPlugs";
player addItemToVest "ACE_IR_Strobe_Item";
player addItemToVest "ACE_Flashlight_XL50";
player addItemToVest "ACE_MapTools";
player addItemToVest "ACE_microDAGR";
for "_i" from 1 to 2 do {player addItemToVest "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToVest "ACE_20Rnd_762x51_Mk316_Mod_0_Mag";};
for "_i" from 1 to 2 do {player addItemToVest "9Rnd_45ACP_Mag";};
for "_i" from 1 to 2 do {player addItemToVest "Chemlight_green";};
for "_i" from 1 to 2 do {player addItemToVest "Chemlight_red";};
player addItemToVest "B_IR_Grenade";
player addItemToVest "HandGrenade";
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
player addItemToVest "SmokeShellRed";
player addItemToVest "SmokeShellGreen";
player addBackpack "tf_rt1523g_big_rhs";
player addHeadgear "H_HelmetSpecB";
 

 

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";
 
player setSpeaker "ACE_NoVoice";