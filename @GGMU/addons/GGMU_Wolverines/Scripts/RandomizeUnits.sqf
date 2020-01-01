//Uniforms and other worn gear start here.
_Uniforms = [
"Project_BJC",
"Project_BJC_PCU_Jean_blk1",
"Project_BJC_PCU_Jean5",
"Project_BJC_Shirt_Jean_blk",
"Project_BJC_Shirt_Cut_Jean_blk"
]; //Grunt Uniforms

_SoldierVest = [
"rhs_6sh92",
"rhs_6sh92_radio",
"rhs_6sh92_digi",
"rhs_6sh92_digi_radio"
]; //Vest for basic soldiers

_HeavyVest = [
"USP_CRYE_CPC_MCT",
"USP_CRYE_CPC_MC",
"USP_CRYE_CPC_RGR"
]; //Vest for heavier loadouts, like Machine Gunners.

_SoldierFacewear = [
"VSM_Goggles",
"G_Balaclava_blk",
"rhs_ess_black",
"G_Squares_Tinted"
]; //Misc facewear such as glasses.

_BoonieHats = [
"CUP_H_FR_BoonieMARPAT",
"CUP_H_FR_BoonieWDL",
"CUP_H_USMC_BOONIE_PRR_WDL",
"VSM_Multicam_Boonie",
"rhs_booniehat2_marpatwd"
]; //Boonie Hats

_Bandanas = [
"H_Bandanna_khk",
"H_Bandanna_sand",
"H_Bandanna_sgg",
"H_Bandanna_surfer",
"H_Bandanna_surfer_blk",
"H_Bandanna_surfer_grn"
]; //Bandanas

_WatchCaps = [
"H_Watchcap_blk",
"H_Watchcap_cbr",
"H_Watchcap_khk",
"H_Watchcap_camo",
"USP_A2_WATCHCAP",
"USP_A2_WATCHCAP_RGR"
]; //Watch Caps


_AllHats = [];
_AllHats append _BoonieHats;
_AllHats append _Bandanas;
_AllHats append _WatchCaps;


//Weapons start here.

_BasicPrimary = [
["rhs_weap_ak74m_camo","hlc_30Rnd_545x39_B_AK"],
["rhs_weap_ak74_3","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74_dirty","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74_dirty2","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak47","hlc_30Rnd_762x39_b_ak"],
["hlc_rifle_akm","hlc_30Rnd_762x39_b_ak"],
["rhs_weap_pm63","hlc_30Rnd_762x39_b_ak"],
["CUP_arifle_Sa58P","rhs_30Rnd_762x39mm_Savz58"],
["CUP_arifle_Sa58P_woodland","rhs_30Rnd_762x39mm_Savz58"]
]; //Basic service rifles.

_BasicSecondary = [
["rhs_weap_makarov_pm","rhs_mag_9x18_8_57N181S"],
["CUP_hgun_TaurusTracker455","CUP_6Rnd_45ACP_M"],
["hlc_pistol_C96_Wartime","hlc_10Rnd_763x25_B_C96"],
["rhs_weap_tt33","rhs_mag_762x25_8"],
["rhsusf_weap_m1911a1","rhsusf_mag_7x45acp_MHP"]
]; //Basic backup pistols.

_MGs = [
["hlc_rifle_rpk_75rnd","hlc_75Rnd_762x39_b_rpk"],
["hlc_rifle_rpk74n","hlc_60Rnd_545x39_b_rpk"],
["CUP_lmg_PKM","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"],
["CUP_lmg_Pecheneg_woodland","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"]
]; //Machine Guns.

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
	removeGoggles _unit; _unit addGoggles (selectRandom _SoldierFacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _AllHats); 
    removeVest _unit; _unit addVest (selectRandom _SoldierVest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 4, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    _WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
    case "mg": //Soldier
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit; _unit addGoggles (selectRandom _SoldierFacewear); 
    removeHeadgear _unit; _unit addHeadgear (selectRandom _AllHats); 
    removeVest _unit; _unit addVest (selectRandom _HeavyVest); 
	_WeaponPrimary = selectRandom _MGs; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    };
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["Unit_invset", true,true]  