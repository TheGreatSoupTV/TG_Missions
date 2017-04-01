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
player addVest "desVest";
for "_i" from 1 to 2 do {player addItemToVest "rhs_mag_m67";};
for "_i" from 1 to 2 do {player addItemToVest "rhsusf_mag_17Rnd_9x19_JHP";};
for "_i" from 1 to 2 do {player addItemToVest "SmokeShell";};
for "_i" from 1 to 9 do {player addItemToVest "rhs_mag_30Rnd_556x45_Mk318_Stanag";};
player addBackpack "B_AssaultPack_cbr";
player addItemToBackpack "ToolKit";
player addItemToBackpack "ACE_M26_Clacker";
for "_i" from 1 to 3 do {player addItemToBackpack "DemoCharge_Remote_Mag";};
player addHeadgear "Desert_ECH";

player addWeapon "rhs_weap_mk18_grip";
player addPrimaryWeaponItem "rhsusf_acc_SF3P556";
player addPrimaryWeaponItem "rhsusf_acc_anpeq15side_bk";
player addPrimaryWeaponItem "rhsusf_acc_eotech_xps3";
player addPrimaryWeaponItem "rhsusf_acc_grip1";
player addWeapon "rhsusf_weap_glock17g4";
player addWeapon "Binocular";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152_5";
player linkItem "ItemGPS";
player linkItem "ACE_NVG_Gen4";

player setFace "WhiteHead_19";
player setSpeaker "ace_novoice";
