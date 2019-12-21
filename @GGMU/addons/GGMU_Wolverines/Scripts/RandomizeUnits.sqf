//Uniforms and other worn gear start here.
_Uniforms = [
"Project_BJC",
"Project_BJC_PCU_Jean_blk1",
"Project_BJC_PCU_Jean5",
"Project_BJC_Shirt_Jean_blk",
"Project_BJC_Shirt_Cut_Jean_blk"
]; //Grunt Uniforms

_soldiervest = [
"rhs_6sh92",
"rhs_6sh92_radio",
"rhs_6sh92_vsr",
"rhs_6sh92_vsr_radio"
]; //Vest for basic soldiers

_soldierfacewear = [
"VSM_Goggles",
"G_Balaclava_blk",
"rhs_ess_black",
"G_Squares_Tinted"
]; //Misc facewear such as glasses.

_soldierheadgear = [
"CUP_H_FR_BoonieMARPAT",
"CUP_H_FR_BoonieWDL",
"CUP_H_USMC_BOONIE_PRR_WDL",
"VSM_Multicam_Boonie",
"rhs_booniehat2_marpatwd",
"VSM_Multicam_Boonie"
]; //Units helmets and other headgear.

//Weapons start here.

_BasicPrimary = [
["hlc_rifle_ak74","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74_dirty","hlc_30Rnd_545x39_B_AK"],
["hlc_rifle_ak74_dirty2","hlc_30Rnd_545x39_B_AK"]
]; //Basic service rifles.

_BasicSecondary = [
["rhs_weap_makarov_pm","rhs_mag_9x18_8_57N181S"],
["CUP_hgun_TaurusTracker455","CUP_6Rnd_45ACP_M"],
["hlc_pistol_C96_Wartime","hlc_10Rnd_763x25_B_C96"],
["rhsusf_weap_m1911a1","rhsusf_mag_7x45acp_MHP"]
]; //Basic backup pistols.

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
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), (round (random [2,3,4])), (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
    _WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), (round (random [1,2,3])), (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    }; 
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["Unit_invset", true,true]  