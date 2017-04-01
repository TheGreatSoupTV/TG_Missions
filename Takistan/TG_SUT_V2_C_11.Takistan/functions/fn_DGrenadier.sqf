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
player addVest "desVest";
for "_i" from 1 to 10 do {player addItemToVest "rhs_mag_M433_HEDP";};
for "_i" from 1 to 2 do {player addItemToVest "rhsusf_mag_17Rnd_9x19_JHP";};
player addItemToVest "rhs_mag_m67";
for "_i" from 1 to 8 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addBackpack "B_AssaultPack_cbr";
player addItemToBackpack "ACE_EntrenchingTool";
for "_i" from 1 to 6 do {player addItemToBackpack "rhs_mag_m67";};
for "_i" from 1 to 2 do {player addItemToBackpack "SmokeShell";};
player addItemToBackpack "rhs_mag_m7a3_cs";
for "_i" from 1 to 5 do {player addItemToBackpack "rhs_mag_M433_HEDP";};
for "_i" from 1 to 2 do {player addItemToBackpack "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addHeadgear "Desert_ECH";

player addWeapon "rhs_weap_mk18_m320";
player addPrimaryWeaponItem "rhsusf_acc_nt4_black";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15A";
player addPrimaryWeaponItem "rhsusf_acc_eotech_xps3";
player addWeapon "rhsusf_weap_glock17g4";
player addHandgunItem "rhsusf_acc_omega9k";
player addWeapon "Rangefinder";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_5";
player linkItem "ItemGPS";
player linkItem "ACE_NVG_Gen4";

player setFace "WhiteHead_19";
player setSpeaker "ace_novoice";
