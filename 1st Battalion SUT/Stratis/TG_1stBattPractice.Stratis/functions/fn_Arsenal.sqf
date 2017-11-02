/*
	file: 		fn_Arsenal.sqf
	author:		JediNarwals [TG]
	Description:
					Adds a limited Arsenal to an object. You pre-define the objects.
*/
_crate = _this;
["AmmoboxInit",[_crate,false,{true}]] spawn BIS_fnc_arsenal;

//Lists of items to include
_availableHeadgear = [
	"Desert_ECH",
	"Night_ECH",
	"MCB_Boonie",
	"Scorpion_Boonie",
	"rhsusf_cvc_green_alt_helmet"
];

_availableGoggles = [
	"G_Spectacles",
	"G_Spectacles_Tinted",
	"G_Combat",
	"G_Lowprofile",
	"G_Shades_Black",
	"G_Shades_Green",
	"G_Shades_Red",
	"G_Squares",
	"G_Squares_Tinted",
	"G_Sport_BlackWhite",
	"G_Sport_Blackyellow",
	"G_Sport_Greenblack",
	"G_Sport_Checkered",
	"G_Sport_Red",
	"G_Tactical_Black",
	"G_Aviator",
	"G_Lady_Mirror",
	"G_Lady_Dark",
	"G_Lady_Red",
	"G_Lady_Blue",
	"G_Diving",
	"G_B_Diving",
	"G_O_Diving",
	"G_I_Diving",
	"G_Goggles_VR",
	"G_Balaclava_blk",
	"G_Balaclava_oli",
	"G_Balaclava_combat",
	"G_Balaclava_lowprofile",
	"G_Bandanna_blk",
	"G_Bandanna_oli",
	"G_Bandanna_khk",
	"G_Bandanna_tan",
	"G_Bandanna_beast",
	"G_Bandanna_shades",
	"G_Bandanna_sport",
	"G_Bandanna_aviator",
	"G_Shades_Blue",
	"G_Sport_Blackred",
	"G_Tactical_Clear",
	"rhs_scarf",
	"rhs_balaclava",
	"rhs_balaclava1_olive",
	"rhs_googles_black",
	"rhs_googles_clear",
	"rhs_googles_yellow",
	"rhs_googles_orange",
	"rhs_ess_black",
	"rhsusf_oakley_goggles_base",
	"rhsusf_oakley_goggles_blk",
	"rhsusf_oakley_goggles_clr",
	"rhsusf_oakley_goggles_ylw",
	"rhsusf_shemagh_base",
	"rhsusf_shemagh_white",
	"rhsusf_shemagh_tan",
	"rhsusf_shemagh_od",
	"rhsusf_shemagh_grn",
	"rhsusf_shemagh_gogg_base",
	"rhsusf_shemagh_gogg_white",
	"rhsusf_shemagh_gogg_tan",
	"rhsusf_shemagh_gogg_od",
	"rhsusf_shemagh_gogg_grn",
	"rhsusf_shemagh2_base",
	"rhsusf_shemagh2_white",
	"rhsusf_shemagh2_tan",
	"rhsusf_shemagh2_od",
	"rhsusf_shemagh2_grn",
	"rhsusf_shemagh2_gogg_base",
	"rhsusf_shemagh2_gogg_white",
	"rhsusf_shemagh2_gogg_tan",
	"rhsusf_shemagh2_gogg_od",
	"rhsusf_shemagh2_gogg_grn",
	"G_Balaclava_TI_blk_F",
	"G_Balaclava_TI_tna_F",
	"G_Balaclava_TI_G_blk_F",
	"G_Balaclava_TI_G_tna_F",
	"G_Combat_Goggles_tna_F",
	"G_Respirator_base_F",
	"G_Respirator_white_F",
	"G_Respirator_yellow_F",
	"G_Respirator_blue_F",
	"G_EyeProtectors_base_F",
	"G_EyeProtectors_F",
	"G_EyeProtectors_Earpiece_F",
	"G_WirelessEarpiece_base_F",
	"G_WirelessEarpiece_F"
];

_availableUniforms = [
	"everestdesClothing",
	"everestnightClothing"
];

_availableVests = [
	"desVest",
	"nightVest",
	"MCB_Vest_7",
	"Scorpion_Vest_7"
];

_availableBackpacks = [
	"everest_packDesert",
	"everest_packNight",
	"tf_rt1523g_big_bwmod"
];

_nvgoggles = [
	"NVGoggles_OPFOR",
	"rhsusf_ANPVS_14"
];

_gunz = [
	"rhs_weap_hk416d145",
  "rhs_weap_m249_pip_L_vfg",
	"rhs_weap_m240G",
	"rhs_weap_sr25",
	"ACE_VMH3",
	"rhsusf_weap_glock17g4",
	"rhs_weap_m4a1_blockII_M203_bk",
	"rhs_weap_fim92",
	"rhs_weap_smaw_green",
	"rhs_weap_M136"
];
_mainattachments = [
	"rhsusf_acc_ACOG_RMR",
	"rhsusf_acc_grip1",
	"rhsusf_acc_anpeq15side_bk",
	"rhsusf_acc_nt4_black",
	"rhsusf_acc_eotech_552",
	"rhsusf_acc_g33_xps3",
	"rhsusf_acc_SR25S",
	"bipod_01_F_blk",
	"optic_MRCO",
	"rhs_weap_optic_smaw"
];
_miscshit = [
	"ItemWatch",
	"ItemCompass",
	"ItemGPS",
	"ItemRadio",
	"ItemMap",
	"ACE_Altimeter",
	"Binocular",
	"B_UavTerminal",
	"tf_anprc152",
	"ACE_EarPlugs",
	"ACE_EntrenchingTool",
	"ACE_elasticBandage",
	"ACE_morphine",
	"ACE_Flashlight_XL50",
	"ACE_CableTie",
	"ACE_MapTools"
];
_magazines = [
	"rhs_mag_m67",
	"SmokeShell",
	"SmokeShellGreen",
	"SmokeShellRed",
	"rhs_200rnd_556x45_T_SAW",
	"rhsusf_100Rnd_762x51_m62_tracer",
	"rhs_mag_30Rnd_556x45_Mk318_Stanag",
	"rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red",
	"rhsusf_mag_17Rnd_9x19_FMJ",
	"rhsusf_20Rnd_762x51_m118_special_Mag",
	"rhsusf_m112_mag",
	"rhs_mag_M433_HEDP",
	"rhs_mag_m714_White",
	"rhs_mag_m713_Red",
	"rhs_mag_m715_Green",
	"UGL_FlareWhite_F",
	"rhs_fim92_mag",
	"rhs_mag_smaw_HEAA",
	"rhs_mag_smaw_SR",
	"SatchelCharge_Remote_Mag",
	"DemoCharge_Remote_Mag",
	"ACE_M26_Clacker",
	"B_IR_Grenade",
	"ACE_IR_Strobe_Item",
	"rhs_mag_mk84"
];
//Populate with predefined items and whatever is already in the crate
[_crate,((backpackCargo _crate) + _availableBackpacks)] call BIS_fnc_addVirtualBackpackCargo;
[_crate,((itemCargo _crate) + _availableHeadgear + _availableGoggles + _availableUniforms + _availableVests + _nvgoggles + _mainattachments + _miscshit)] call BIS_fnc_addVirtualItemCargo;
[_crate,(magazineCargo _crate + _magazines)] call BIS_fnc_addVirtualMagazineCargo;
[_crate,((weaponCargo _crate) + _gunz)] call BIS_fnc_addVirtualWeaponCargo;
