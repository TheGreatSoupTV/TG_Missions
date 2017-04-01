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
for "_i" from 1 to 2 do {player addItemToUniform "ACE_morphine";};
for "_i" from 1 to 5 do {player addItemToUniform "ACE_packingBandage";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Flashlight_XL50";
player addVest "desVest";
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 7 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addBackpack "everest_packDesert";
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_mag_smaw_SR";};
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_mag_smaw_HEDP";};
player addHeadgear "Desert_ECH";

player addWeapon "rhs_weap_mk18_grip";
player addPrimaryWeaponItem "rhsusf_acc_eotech_xps3";
player addPrimaryWeaponItem "rhsusf_acc_grip1";
player addWeapon "rhs_weap_smaw_green";
player addSecondaryWeaponItem "rhs_weap_optic_smaw";
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
