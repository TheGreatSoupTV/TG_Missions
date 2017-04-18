removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

player addWeapon "rhsusf_weap_glock17g4";

player forceAddUniform "U_B_PilotCoveralls";
for "_i" from 1 to 3 do {player addItemToUniform "rhsusf_mag_17Rnd_9x19_FMJ";};
for "_i" from 1 to 2 do {player addItemToUniform "rhs_mag_an_m8hc";};
player addVest "MCB_Vest_2";
for "_i" from 1 to 2 do {player addItemToVest "ACE_fieldDressing";};
player addItemToVest "ACE_CableTie";
player addItemToVest "ACE_EarPlugs";
player addItemToVest "ACE_Flashlight_XL50";
player addItemToVest "ACE_MapTools";
player addItemToVest "ACE_microDAGR";
player addItemToVest "rhs_mag_an_m8hc";
for "_i" from 1 to 2 do {player addItemToVest "ACE_HandFlare_Green";};
for "_i" from 1 to 2 do {player addItemToVest "ACE_HandFlare_Red";};
player addItemToVest "rhs_mag_m18_green";
player addItemToVest "rhs_mag_m18_red";
player addHeadgear "H_PilotHelmetFighter_B";

player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "tf_anprc152";
player linkItem "ItemGPS";


player setSpeaker "ACE_NoVoice";