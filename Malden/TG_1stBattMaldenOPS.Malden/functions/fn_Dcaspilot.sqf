removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add containers";
player forceAddUniform "U_B_PilotCoveralls";
for "_i" from 1 to 3 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 3 do {player addItemToUniform "ACE_tourniquet";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_elasticBandage";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_MapTools";
player addItemToUniform "ACE_microDAGR";
player addItemToUniform "Chemlight_green";
player addItemToUniform "B_IR_Grenade";
player addItemToUniform "SmokeShellBlue";
for "_i" from 1 to 3 do {player addItemToUniform "16Rnd_9x21_Mag";};
player addVest "V_TacVest_blk";
player addItemToVest "SmokeShellGreen";
player addItemToVest "SmokeShellBlue";
player addItemToVest "SmokeShellOrange";
player addItemToVest "Chemlight_green";
player addItemToVest "DemoCharge_Remote_Mag";
player addBackpack "B_Parachute";
player addHeadgear "H_PilotHelmetFighter_B";

comment "Add weapons";
player addWeapon "hgun_P07_F";
player addWeapon "Rangefinder";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_rf7800str_3";
player linkItem "ItemGPS";

comment "Set identity";
player setFace "WhiteHead_20";
player setSpeaker "male08eng";


