//Uniforms and other worn gear start here.
_Uniforms = [
"rhs_uniform_flora_patchless"
]; //All unit uniforms.

_soldiervest = [
"rhs_6b23_rifleman"
]; //Vest for basic soldiers

_soldierfacewear = [
//Nothing so far.
]; //Misc facewear such as glasses.

_soldierheadgear = [
"rhs_6b26_bala_green"
]; //Units helmets and other headgear.

//Weapons start here.

_BasicPrimary = [
["rhs_weap_ak74m","hlc_30Rnd_545x39_B_AK"]
]; //Basic service rifles.

_BasicSecondary = [
["rhs_weap_pya","rhs_mag_9x19_17"]
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
    //removeHeadgear _unit; _unit addHeadgear (selectRandom _soldierheadgear); 
    removeVest _unit; _unit addVest (selectRandom _soldiervest); 
	_WeaponPrimary = selectRandom _BasicPrimary; [_unit, (_WeaponPrimary select 0), 5, (_WeaponPrimary select 1)] call BIS_fnc_addWeapon;
	_WeaponSecondary = selectRandom _BasicSecondary; [_unit, (_WeaponSecondary select 0), 3, (_WeaponSecondary select 1)] call BIS_fnc_addWeapon;
    };
}; 

//readd the items we took from them.
{_unit addMagazine _x} forEach _magazines; 
{_unit additem _x} forEach _items; 
{_unit linkItem _x} forEach _assitems; 
_unit setvariable ["Unit_invset", true,true]  