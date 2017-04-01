
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player forceAddUniform "everestdesClothing";
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
player addVest "desVest";
for "_i" from 1 to 2 do {player addItemToVest "HandGrenade";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_M84";};
for "_i" from 1 to 3 do {player addItemToVest "Chemlight_green";};
player addItemToVest "16Rnd_9x21_Mag";
for "_i" from 1 to 9 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addBackpack "everest_packDesert";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
for "_i" from 1 to 15 do {player addItemToBackpack "1Rnd_HE_Grenade_shell";};
for "_i" from 1 to 5 do {player addItemToBackpack "1Rnd_Smoke_Grenade_shell";};
player addHeadgear "Des_ECH";

player addWeapon "rhs_weap_m4a1_carryhandle_m203";
player addPrimaryWeaponItem "rhsusf_acc_nt4_black";
player addPrimaryWeaponItem "ACE_optic_Hamr_PIP";
player addWeapon "hgun_Rook40_F";
player addWeapon "ACE_VectorDay";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ACE_Altimeter";
player linkItem "tf_anprc152_9";
player linkItem "ItemGPS";
player linkItem "NVGoggles_OPFOR";

player setFace "WhiteHead_21";
player setSpeaker "Male09ENG";
