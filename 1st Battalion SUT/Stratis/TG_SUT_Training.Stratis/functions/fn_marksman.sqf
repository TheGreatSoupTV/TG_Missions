
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player forceAddUniform "everestwlandClothing";
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_epinephrine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_EntrenchingTool";
player addItemToUniform "ACE_Flashlight_XL50";
player addItemToUniform "ACE_MapTools";
for "_i" from 1 to 2 do {player addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 9 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "16Rnd_9x21_Mag";
player addVest "wlandVest";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_M84";};
for "_i" from 1 to 3 do {player addItemToVest "Chemlight_green";};
player addItemToVest "16Rnd_9x21_Mag";
for "_i" from 1 to 6 do {player addItemToVest "20Rnd_762x51_Mag";};
player addBackpack "everest_packWland";
for "_i" from 1 to 5 do {player addItemToBackpack "20Rnd_762x51_Mag";};
player addHeadgear "wland_ECH";

player addWeapon "srifle_EBR_F";
player addPrimaryWeaponItem "muzzle_snds_B";
player addPrimaryWeaponItem "ACE_optic_Hamr_PIP";
player addPrimaryWeaponItem "bipod_01_F_blk";
player addWeapon "hgun_Rook40_F";
player addWeapon "ACE_VectorDay";

player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_9";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";

player setFace "WhiteHead_21";
player setSpeaker "Male09ENG";
