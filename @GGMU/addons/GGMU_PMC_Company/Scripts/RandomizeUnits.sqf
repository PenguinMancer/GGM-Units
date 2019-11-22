//Uniforms and other worn gear start here.
_Uniforms = [
"USP_CRYE_G3C_SHORT_BLK_RGR",
"USP_CRYE_G3C_SHORT_BLK_M81",
"USP_CRYE_G3C_SHORT_BLK_ATACSFG"
]; //All unit uniforms.

_soldiervest = [
"USP_CRYE_CPC_LIGHT_RGR",
"USP_CRYE_CPC_LIGHT_BELT_RGR",
"USP_CRYE_JPC_RGR",
"USP_CRYE_JPC_FS_RGR"
]; //Vest for basic soldiers

_MGvest = [
"USP_CRYE_JPC_MG_RGR",
"USP_CRYE_JPC_MGB_RGR"
]; //Vests for units that need to carry a lot, like machine gunners.

_soldierfacewear = [
"TRYK_headset_Glasses",
"USP_511_ra_EMB",
"rhs_googles_orange",
"TRYK_US_ESS_Glasses_BLK",
"G_Balaclava_lowprofile",
"G_Balaclava_blk",
"CUP_G_Scarf_Face_Blk",
"rhs_scarf",
"TRYK_TAC_EARMUFF_Gs"
]; //Misc facewear such as glasses.

_soldierheadgear = [
"cox_chelm_dgreen",
"xoc_chelm_arid",
"xoc_chelm_light_arid",
"cox_modular_granite",
"cox_modular_dgreen",
"TRYK_H_woolhat_cu",
"TRYK_H_woolhat_br",
"USP_BASEBALL_CAP_ATACSFG",
"TRYK_R_CAP_OD_US",
"fl_patrolcap_urban"
]; //Units helmets and other headgear.

//Weapons start here.

_BasicPrimary = [
["GGMU_bcmjack_custom","hlc_30rnd_556x45_EPR_PMAG"],
["GGMU_RU556_custom","hlc_30rnd_556x45_EPR"],
["hlc_rifle_bcmjack","hlc_30rnd_556x45_EPR"],
["hlc_rifle_RU556","hlc_30rnd_556x45_EPR_PMAG"]
]; //Basic service rifles.

_BasicSecondary = [
["rhsusf_weap_glock17g4","rhsusf_mag_17Rnd_9x19_JHP"],
["hlc_pistol_P226R_Elite","hlc_15Rnd_9x19_B_P226"],
["rhsusf_weap_m9","rhsusf_mag_15Rnd_9x19_JHP"]
]; //Basic backup pistols.

_Machineguns = [
["GGMU_minimipara_custom","hlc_200rnd_556x45_M_SAW"],
["hlc_lmg_minimipara_long_railed","hlc_200rnd_556x45_M_SAW"]
]; //LMGs/MGs.

//strip units of items that would be inside the vests and backpacks we're about to remove
_magazines = magazines _unit; 
_items = items _unit; // Medkits, ToolKits etc. 
_assitems = assignedItems _unit; // NVG's, GPS etc. 

{_unit removemagazine _x} foreach _magazines; 
removeAllItems _unit;     

//figure out type of unit, then add appropriate gear
switch (_typeofUnit) do 
{
    case "basic": //Soldier
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "mg": //Machine Gunner
    { 
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _soldierfacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _MGvest); 
	_WeaponLMG = selectRandom _Machineguns; [_unit, (_WeaponLMG select 0), 2, (_WeaponLMG select 1)] call BIS_fnc_addWeapon;
    }; 
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["Unit_invset", true,true]  