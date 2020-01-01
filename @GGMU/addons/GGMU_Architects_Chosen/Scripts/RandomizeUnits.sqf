//Uniforms and other worn gear start here.
_Uniforms = [
"sweater_drab",
"sweater_plain_grey",
"sweater_plain_tan"
]; //Grunt Uniforms

_SoldierVest = [
"CUP_V_RUS_Smersh_1",
"CUP_V_O_Ins_Carrier_Rig_Light",
"V_BandollierB_rgr",
"V_BandollierB_khk"
]; //Vest for basic soldiers

_HeavyVest = [
"CUP_V_O_Ins_Carrier_Rig_MG",
"rhsgref_alice_webbing"
]; //Vest for heavier loadouts, such as Autoriflemen.

_SniperVest = [
"V_BandollierB_khk",
"V_BandollierB_rgr"
]; //Vest for snipers

_LeaderVest = [
"rhssaf_vest_md99_woodland_rifleman_radio",
"rhssaf_vest_md99_woodland_rifleman",
"rhssaf_vest_md99_woodland_radio",
"rhssaf_vest_md99_woodland"
]; //Vest for basic soldiers

_SoldierFacewear = [
//Nothing yet!
]; //Misc facewear such as glasses.

_Bandanas = [
"H_Bandanna_khk",
"H_Bandanna_sand",
"H_Bandanna_sgg"
]; //Default Hat

_BoonieHats = [
"H_Booniehat_khk",
"H_Booniehat_oli",
"H_Booniehat_mcamo"
]; //Hats used by Machine Gunners

_WatchCaps = [
"H_Watchcap_cbr",
"H_Watchcap_khk",
"H_Watchcap_camo"
]; //Hats used by Snipers

_PatrolHats = [
"CUP_H_US_patrol_cap_OD",
"CUP_H_US_patrol_cap_ERDL",
"USP_A2_PATROL_CAP_RGR"
]; //Hats used by Anti-Armor

_Helmets = [
"rhs_6b7_1m_olive",
"rhs_6b7_1m_flora",
"rhs_6b7_1m_emr",
"rhs_6b7_1m"
]; //Proper Helmets used by Squad Leaders

//Weapons start here.

_BasicPrimary = [
["hlc_rifle_ak47","hlc_30Rnd_762x39_b_ak"],
["hlc_rifle_akm","hlc_30Rnd_762x39_b_ak"],
["rhs_weap_pm63","hlc_30Rnd_762x39_b_ak"],
["hlc_rifle_ak74","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74_dirty","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74_dirty2","hlc_30Rnd_545x39_B_AK"]
]; //Basic service rifles.

_BasicSecondary = [
["rhs_weap_makarov_pm","rhs_mag_9x18_8_57N181S"],
["CUP_hgun_TaurusTracker455","CUP_6Rnd_45ACP_M"],
["rhs_weap_tt33","rhs_mag_762x25_8"],
["rhsusf_weap_m1911a1","rhsusf_mag_7x45acp_MHP"]
]; //Basic backup pistols.

_BetterPrimary = [
["rhs_weap_ak103","hlc_30Rnd_762x39_b_ak"],
["rhs_weap_ak104","hlc_30Rnd_762x39_b_ak"],
["rhs_weap_ak105","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_aek971","hlc_30Rnd_545x39_B_AK"]
]; //More modern service rifles.

_BetterSecondary = [
["rhs_weap_makarov_pm","rhs_mag_9x18_8_57N181S"],
["rhs_weap_tt33","rhs_mag_762x25_8"],
["rhs_weap_pya","rhs_mag_9x19_17"]
]; //A slightly better selection of backup pistols.

_LightPrimary = [
["CUP_smg_vityaz","CUP_30Rnd_9x19AP_Vityaz"],
["CUP_smg_bizon","CUP_64Rnd_9x19_Bizon_M"],
["rhs_weap_pp2000","rhs_mag_9x19mm_7n21_44"],
["hlc_rifle_aks74u","hlc_30Rnd_545x39_B_AK"]
]; //Lighter Service Weapons.

_Snipers = [
["CUP_srifle_SVD_pso","CUP_10Rnd_762x54_SVD_M"],
["rhs_weap_m76_pso","rhsgref_10Rnd_792x57_m76"]
]; //Snipers and DMRs.

_MGs = [
["hlc_rifle_rpk_75rnd","hlc_75Rnd_762x39_b_rpk"],
["hlc_rifle_rpk74n","hlc_60Rnd_545x39_b_rpk"],
["CUP_lmg_PKM","CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"]
]; //Machine Guns.

_RPG = [
["rhs_weap_rpg7","rhs_rpg7_PG7V_mag"]
]; //RPG

//strip units of items that would be inside the vests and backpacks we're about to remove
_magazines = magazines _unit; //Magazines, but also Grenades.
_items = items _unit; // Medkits, ToolKits, etc. 
_assitems = assignedItems _unit; // NVG's, GPS, etc. 

{_unit removemagazine _x} foreach _magazines; 
removeAllItems _unit;     

//figure out type of unit, then add appropriate gear
switch (_typeofUnit) do 
{
    case "basic": //Basic Soldier
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit;
    removeHeadgear _unit; _unit addHeadgear (selectRandom _Bandanas); 
    removeVest _unit; _unit addVest (selectRandom _SoldierVest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 4, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    _WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "mg": //Machine Gunner
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit;
    removeHeadgear _unit; _unit addHeadgear (selectRandom _BoonieHats); 
    removeVest _unit; _unit addVest (selectRandom _MGVest); 
	_WeaponPrimary = selectRandom _MGs; [_unit, (_WeaponPrimary select 0), 3, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "snipe": //Sniper
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit;
    removeHeadgear _unit; _unit addHeadgear (selectRandom _WatchCaps); 
    removeVest _unit; _unit addVest (selectRandom _SniperVest); 
	_WeaponPrimary = selectRandom _Snipers; [_unit, (_WeaponPrimary select 0), 4, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    _WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
	case "aa": //Anti-Armor
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit;
    removeHeadgear _unit; _unit addHeadgear (selectRandom _PatrolHats); 
    removeVest _unit; _unit addVest (selectRandom _SoldierVest); 
	_WeaponPrimary = selectRandom _LightPrimary; [_unit, (_WeaponPrimary select 0), 4, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponRocket = selectRandom _RPG; [_unit, (_WeaponRocket select 0), 3, (_WeaponRocket select 1)] call BIS_fnc_addWeapon;
    }; 
	case "sl": //Squad Leader
    {
	removeUniform _unit; _unit forceAddUniform (selectRandom _Uniforms); 
	removeGoggles _unit;
    removeHeadgear _unit; _unit addHeadgear (selectRandom _Helmets); 
    removeVest _unit; _unit addVest (selectRandom _LeaderVest); 
	_WeaponPrimary = selectRandom _BetterPrimary; [_unit, (_WeaponPrimary select 0), 4, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    _WeaponSecondary = selectRandom _BetterSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["Unit_invset", true,true]  