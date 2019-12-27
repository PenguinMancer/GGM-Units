//Uniforms and other worn gear start here.
_Uniforms = [
"sweater_drab",
"sweater_plain_grey",
"sweater_plain_tan"
]; //Grunt Uniforms

_soldiervest = [
"CUP_V_RUS_Smersh_1",
"CUP_V_O_Ins_Carrier_Rig_Light",
"V_BandollierB_rgr",
"V_BandollierB_khk"
]; //Vest for basic soldiers

_mgvest = [
"CUP_V_O_Ins_Carrier_Rig_MG",
"rhssaf_vest_md12_digital"
]; //Vest for autoriflemen

_snipervest = [
"V_BandollierB_khk",
"V_BandollierB_rgr"
]; //Vest for snipers

_soldierfacewear = [
//Nothing yet!
]; //Misc facewear such as glasses.

_soldierheadgear = [
"H_Bandanna_khk",
"H_Bandanna_sand",
"H_Bandanna_sgg"
]; //Units helmets and other headgear.

_mgheadgear = [
"H_Booniehat_khk",
"H_Booniehat_oli",
"H_Booniehat_mcamo"
]; //Hats for snipers

_sniperheadgear = [
"H_Watchcap_cbr",
"H_Watchcap_khk",
"H_Watchcap_camo"
]; //Hats for snipers

//Weapons start here.

_BasicPrimary = [
["hlc_rifle_ak47","hlc_30Rnd_762x39_b_ak"],
["hlc_rifle_akm","hlc_30Rnd_762x39_b_ak"],
["hlc_rifle_ak74_dirty","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74_dirty2","hlc_30Rnd_545x39_B_AK"]
]; //Basic service rifles.

_BasicSecondary = [
["rhs_weap_makarov_pm","rhs_mag_9x18_8_57N181S"],
["CUP_hgun_TaurusTracker455","CUP_6Rnd_45ACP_M"],
["rhsusf_weap_m1911a1","rhsusf_mag_7x45acp_MHP"]
]; //Basic backup pistols.

_Snipers = [
["CUP_srifle_SVD_pso","CUP_10Rnd_762x54_SVD_M"],
["rhs_weap_m76_pso","rhsgref_10Rnd_792x57_m76"]
]; //Snipers and DMRs

_MGs = [
["hlc_rifle_rpk_75rnd","hlc_75Rnd_762x39_b_rpk"],
["hlc_rifle_rpk74n","hlc_60Rnd_545x39_b_rpk"],
["CUP_lmg_PKM","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"]
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
	removeGoggles _unit;
    removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 4, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    _WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "mg": //Soldier
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit;
    removeHeadgear _unit; _unit addHeadgear (selectRandom _mgheadgear); 
    removeVest _unit; _unit addVest (selectRandom _mgvest); 
	_WeaponPrimary = selectRandom _MGs; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "snipe": //Soldier
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit;
    removeHeadgear _unit; _unit addHeadgear (selectRandom _sniperheadgear); 
    removeVest _unit; _unit addVest (selectRandom _snipervest); 
	_WeaponPrimary = selectRandom _Snipers; [_unit, (_WeaponPrimary select 0), 4, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    _WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["Unit_invset", true,true]  