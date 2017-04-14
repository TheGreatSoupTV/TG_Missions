comment "Exported from Arsenal by Duke";

comment "Remove existing items";
removeAllWeapons this;
removeAllItems this;
removeAllAssignedItems this;
removeUniform this;
removeVest this;
removeBackpack this;
removeHeadgear this;
removeGoggles this;

comment "Add containers";
this forceAddUniform "everestdesClothing";
for "_i" from 1 to 15 do {this addItemToUniform "ACE_elasticBandage";};
this addItemToUniform "ACE_EarPlugs";
this addItemToUniform "ACE_EntrenchingTool";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_morphine";};
for "_i" from 1 to 2 do {this addItemToUniform "ACE_tourniquet";};
this addItemToUniform "ACE_Flashlight_XL50";
this addItemToUniform "ACE_MapTools";
for "_i" from 1 to 2 do {this addItemToUniform "ACE_CableTie";};
for "_i" from 1 to 2 do {this addItemToUniform "rhsusf_mag_17Rnd_9x19_FMJ";};
this addVest "desVest";
for "_i" from 1 to 2 do {this addItemToVest "rhs_mag_m67";};
for "_i" from 1 to 2 do {this addItemToVest "SmokeShell";};
this addItemToVest "SmokeShellGreen";
this addItemToVest "SmokeShellRed";
for "_i" from 1 to 3 do {this addItemToVest "rhsusf_100Rnd_762x51_m62_tracer";};
this addBackpack "everest_packDesert";
this addHeadgear "Desert_ECH";

comment "Add weapons";
this addWeapon "rhs_weap_m240G";
this addPrimaryWeaponItem "muzzle_snds_H_MG";
this addPrimaryWeaponItem "optic_MRCO";
this addWeapon "rhsusf_weap_glock17g4";
this addWeapon "Binocular";

comment "Add items";
this linkItem "ItemMap";
this linkItem "ItemCompass";
this linkItem "ACE_Altimeter";
this linkItem "tf_anprc148jem_2";
this linkItem "ItemGPS";

comment "Set identity";
this setFace "WhiteHead_11";
this setSpeaker "ace_novoice";
