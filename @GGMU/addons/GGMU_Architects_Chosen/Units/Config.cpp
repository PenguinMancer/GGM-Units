class CfgPatches {
	class GGMU_Chosen {
		units[] = {"GGMU_ChosenMilitia_Blank","GGMU_ChosenMilitia_Rifleman","GGMU_ChosenMilitia_AutoRifleman","GGMU_ChosenMilitia_Sniper"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"GGMU_Core","cba_xeh"};
		version="1";
		projectName="GGMU_Chosen_Militia";
		author="PenguinMancer";
	};
};

class CfgFunctions {
	class ARC {
		class ARCcommon {
			class InitUnit {
				file = "\GGMU_Architects_Chosen\Scripts\InitUnit.sqf";
			};
		};
	};
};

#include "script_macros.hpp"

class EventHandlers;

class CfgVehicles {		

	class O_Soldier_F;
	class GGMU_ChosenMilitia_Base: O_Soldier_F { //Base Unit
		scope=0;
		author="PenguinMancer";
		identityTypes[] = {"LanguageENG_F","Head_African","Head_Greek","NoGlasses"};
		faction = "GGMU_Architects_Chosen";
		vehicleClass = "GGMU_Men"; // Puts unit in the vehicleclass
		genericNames = "GGMU_Western_Names"; //PLACEHOLDER PLEASE CHANGE
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		class EventHandlers;
	};
	
	class GGMU_ChosenMilitia_Blank: GGMU_ChosenMilitia_Base //Rifleman
	{
		scope=2;
		displayName = "AC Soldier"; // In-game name of unit
		uniformClass="sweater_drab"; // Uniform Class
		backpack = ""; // Backpack Class
		weapons[] = {}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {};
		magazines[] = {}; //Grenades or magazines added to the unit. None are added at this time.
		respawnMagazines[]= {};
		linkedItems[]=
		{}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{};
	};

	class GGMU_ChosenMilitia_Rifleman: GGMU_ChosenMilitia_Base //Rifleman
	{
		scope=2;
		displayName = "AC Grunt"; // In-game name of unit
		uniformClass="sweater_drab"; // Uniform Class
		backpack = "TAC_MTAP_RG2"; // Backpack Class
		weapons[] = {"Throw","Put"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {"Throw","Put"};
		magazines[] = {}; //Grenades or magazines added to the unit. None are added at this time.
		respawnMagazines[]= {};
		linkedItems[]=
		{
			"CUP_V_RUS_Smersh_1", 		//Vest, leave all these in for now, gets changed at randomization step.
			"H_Bandanna_khk",			//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_Smersh_1", 		//Vest
			"H_Bandanna_khk",			//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	
	class GGMU_ChosenMilitia_AutoRifleman: GGMU_ChosenMilitia_Base //Machine Gunner
	{
		scope=2;
		displayName = "AC Machine Gunner"; // In-game name of unit
		uniformClass="sweater_drab"; // Uniform Class
		backpack = "TAC_MTAP_RG2"; // Backpack Class
		weapons[] = {"Throw","Put"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {"Throw","Put"};
		magazines[] = {}; //Grenades or magazines added to the unit. None are added at this time.
		respawnMagazines[]= {};
		linkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_MG", 		//Vest, leave all these in for now, gets changed at randomization step.
			"H_Booniehat_khk",					//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"CUP_V_O_Ins_Carrier_Rig_MG", 		//Vest
			"H_Booniehat_khk",					//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	
	
	class GGMU_ChosenMilitia_Sniper: GGMU_ChosenMilitia_Base //Sniper
	{
		scope=2;
		displayName = "AC Sniper"; // In-game name of unit
		uniformClass="sweater_drab"; // Uniform Class
		backpack = "TAC_MTAP_RG2"; // Backpack Class
		weapons[] = {"Throw","Put"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {"Throw","Put"};
		magazines[] = {}; //Grenades or magazines added to the unit. None are added at this time.
		respawnMagazines[]= {};
		linkedItems[]=
		{
			"V_BandollierB_khk", 		//Vest, leave all these in for now, gets changed at randomization step.
			"H_Watchcap_cbr",			//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"V_BandollierB_khk", 		//Vest
			"H_Watchcap_cbr",			//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	class GGMU_ChosenMilitia_AntiArmor: GGMU_ChosenMilitia_Base //Anti-Armor
	{
		scope=2;
		displayName = "AC Anti-Armor"; // In-game name of unit
		uniformClass="sweater_drab"; // Uniform Class
		backpack = "rhs_rpg_empty"; // Backpack Class
		weapons[] = {"Throw","Put"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {"Throw","Put"};
		magazines[] = {}; //Grenades or magazines added to the unit. None are added at this time.
		respawnMagazines[]= {};
		linkedItems[]=
		{
			"CUP_V_RUS_Smersh_1", 				//Vest, leave all these in for now, gets changed at randomization step.
			"CUP_H_US_patrol_cap_OD",			//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"CUP_V_RUS_Smersh_1", 				//Vest
			"CUP_H_US_patrol_cap_OD",			//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	
	class GGMU_ChosenMilitia_SquadLeader: GGMU_ChosenMilitia_Base //Squad Leader
	{
		scope=2;
		displayName = "AC Squad Leader"; // In-game name of unit
		uniformClass="sweater_drab"; // Uniform Class
		backpack = "TAC_MTAP_RG2"; // Backpack Class
		weapons[] = {"Throw","Put","Binocular"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {"Throw","Put","Binocular"};
		magazines[] = {}; //Grenades or magazines added to the unit. None are added at this time.
		respawnMagazines[]= {};
		linkedItems[]=
		{
			"rhssaf_vest_md99_woodland_rifleman_radio", 				//Vest, leave all these in for now, gets changed at randomization step.
			"rhs_6b7_1m_olive",											//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"rhssaf_vest_md99_woodland_rifleman_radio", 				//Vest
			"rhs_6b7_1m_olive",											//Helmet
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	
	//Vehicles with changed crew (Kept in external file)
	#include "AC_Vehicles.hpp"
	
};

class Extended_Init_Eventhandlers {
	#include "Extendedinit.hpp"
};