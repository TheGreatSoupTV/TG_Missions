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
for "_i" from 1 to 5 do {player addItemToUniform "ACE_morphine";};
player addItemToUniform "ACE_EarPlugs";
player addItemToUniform "ACE_Flashlight_MX991";
for "_i" from 1 to 2 do {player addItemToUniform "SmokeShell";};
for "_i" from 1 to 2 do {player addItemToUniform "rhsusf_mag_17Rnd_9x19_JHP";};
player addVest "desVest";
player addItemToVest "ACE_RangeCard";
player addItemToVest "ACE_Kestrel4500";
player addItemToVest "optic_NVS";
for "_i" from 1 to 8 do {player addItemToVest "rhsusf_20Rnd_762x51_m118_special_Mag";};
player addHeadgear "Desert_ECH";

player addWeapon "rhs_weap_sr25_ec";
player addPrimaryWeaponItem "rhsusf_acc_SR25S";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_LEUPOLDMK4";
player addPrimaryWeaponItem "rhsusf_acc_harris_bipod";
player addWeapon "rhsusf_weap_glock17g4";
player addHandgunItem "rhsusf_acc_omega9k";
player addWeapon "ACE_Vector";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_2";
player linkItem "ItemGPS";
player linkItem "NVGoggles";

player setFace "WhiteHead_19";
player setSpeaker "ace_novoice";