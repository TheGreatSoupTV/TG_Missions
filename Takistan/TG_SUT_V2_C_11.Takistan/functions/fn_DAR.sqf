removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player forceAddUniform "everestdesClothing";
for "_i" from 1 to 15 do {player addItemToUniform "ACE_elasticBandage";};
for "_i" from 1 to 10 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_EarPlugs";
for "_i" from 1 to 2 do {player addItemToUniform "rhs_mag_m67";};
player addVest "desVest";
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 3 do {player addItemToVest "rhsusf_200Rnd_556x45_soft_pouch";};
player addBackpack "everest_packDesert";
player addItemToBackpack "ACE_Flashlight_XL50";
player addItemToBackpack "rhs_200rnd_556x45_T_SAW";
player addItemToBackpack "rhs_200rnd_556x45_M_SAW";
player addHeadgear "Desert_ECH";

player addWeapon "rhs_weap_m249_pip_S";
player addPrimaryWeaponItem "rhsusf_acc_elcan_ard_3d";
player addWeapon "rhsusf_weap_glock17g4";
player addHandgunItem "rhsusf_acc_omega9k";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_5";
player linkItem "ItemGPS";
player linkItem "ACE_NVG_Gen4";

player setFace "WhiteHead_19";
player setSpeaker "ace_novoice";
