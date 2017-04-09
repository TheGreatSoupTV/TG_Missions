removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "hgun_ACPC2_F";

player forceAddUniform "U_B_CTRG_3";
for "_i" from 1 to 3 do {player addItemToUniform "9Rnd_45ACP_Mag";};
for "_i" from 1 to 2 do {player addItemToUniform "SmokeShell";};
player addVest "V_PlateCarrier1_blk";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
player addItemToVest "ACE_CableTie";
player addItemToVest "ACE_EarPlugs";
player addItemToVest "ACE_Flashlight_XL50";
player addItemToVest "ACE_MapTools";
player addItemToVest "ACE_microDAGR";
player addItemToVest "SmokeShell";
for "_i" from 1 to 2 do {player addItemToVest "ACE_HandFlare_Green";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_HandFlare_Red";};
player addItemToVest "SmokeShellRed";
player addItemToVest "SmokeShellGreen";
this addHeadgear "H_HelmetCrew_B";


player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";


player setSpeaker "ACE_NoVoice";