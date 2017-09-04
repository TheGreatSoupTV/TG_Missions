removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add containers";
player forceAddUniform "rhs_uniform_g3_blk";
for "_i" from 1 to 2 do {player addItemToUniform "11Rnd_45ACP_Mag";};
player addVest "MCB_Vest_3";
for "_i" from 1 to 5 do {player addItemToVest "ACE_elasticBandage";};
for "_i" from 1 to 4 do {player addItemToVest "ACE_CableTie";};
player addItemToVest "ACE_EarPlugs";
player addItemToVest "ACE_Flashlight_MX991";
player addItemToVest "ACE_SpraypaintGreen";
player addItemToVest "ACE_IR_Strobe_Item";
player addItemToVest "ACE_Flashlight_XL50";
player addItemToVest "ACE_MapTools";
player addItemToVest "ACE_microDAGR";
player addItemToVest "ACE_personalAidKit";
for "_i" from 1 to 5 do {player addItemToVest "ACE_morphine";};
player addItemToVest "rhsusf_acc_rotex_mp7";
player addItemToVest "G_Aviator";
for "_i" from 1 to 3 do {player addItemToVest "ACE_Chemlight_HiWhite";};
for "_i" from 1 to 2 do {player addItemToVest "Chemlight_green";};
for "_i" from 1 to 3 do {player addItemToVest "SmokeShell";};
player addHeadgear "rhsusf_hgu56p";

comment "Add weapons";
player addWeapon "hgun_Pistol_heavy_01_F";
player addHandgunItem "muzzle_snds_acp";
player addHandgunItem "acc_flashlight_pistol";
player addHandgunItem "optic_MRD";
player addWeapon "Rangefinder";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_12";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";

comment "Set identity";
player setFace "WhiteHead_20";
player setSpeaker "ace_novoice";



