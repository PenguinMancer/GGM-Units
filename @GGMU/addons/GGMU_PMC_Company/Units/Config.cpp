class CfgPatches {
	class GGMU_PMC_CO {
		units[] = {"GGMU_PMC_Rifleman_1","GGMU_PMC_Autorifleman_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"GGMU_Core","cba_xeh"};
		version="1";
		projectName="GGMU_PMC_CO";
		author="PenguinMancer";
	};
};

class CfgFunctions {
	class PMC {
		class PMCcommon {
			class InitUnit {
				file = "\GGMU_PMC_Company\Scripts\InitUnit.sqf";
			};
		};
	};
};

#include "script_macros.hpp"

class EventHandlers;

class CfgVehicles {		

	class B_Soldier_F;
	class GGMU_PMC_Base: B_Soldier_F { //Base Unit
		side=2;
		scope=0;
		author="PenguinMancer";
		identityTypes[] = {"LanguageENG_F","Head_NATO","Head_Russian","Head_Asian","NoGlasses"};
		faction = "GGMU_PMC_CO";
		vehicleClass = "GGMU_Men"; // Puts unit in the vehicleclass
		genericNames = "GGMU_Western_Names";
		class EventHandlers;
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};//First Aids and similar items.
	};


	class GGMU_PMC_Rifleman_1: GGMU_PMC_Base //Rifleman
	{
		scope=2;
		displayName = "Manticore Rifleman"; // In-game name of unit
		uniformClass="USP_CRYE_G3C_SHORT_BLK_RGR"; // Uniform Class
		backpack = "usp_crye_zipon"; // Backpack Class
		weapons[] = {"Throw","Put","Binocular"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {"Throw","Put","Binocular"};
		magazines[] = {Standard_Grenades_PMC}; //Grenades added to the unit. Magazines also go here, but are added at randomization step for this unit.
		respawnMagazines[]= {Standard_Grenades_PMC};
		linkedItems[]=
		{
			"USP_CRYE_CPC_LIGHT_RGR", 	//Vest, leave all these in for now, gets changed at randomization step.
			"cox_chelm_dgreen",			//Helmet
			"TRYK_headset_Glasses", 	//Facewear
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"USP_CRYE_CPC_LIGHT_RGR", 	//Vest
			"cox_chelm_dgreen",			//Helmet
			"TRYK_headset_Glasses", 	//Facewear
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	class GGMU_PMC_Autorifleman_1: GGMU_PMC_Base //Machine Gunner
	{
		scope=2;
		displayName = "Manticore Autorifleman"; // In-game name of unit
		uniformClass="USP_CRYE_G3C_SHORT_BLK_RGR"; // Uniform
		backpack = "VSM_OGA_OD_carryall"; // Backpack Class
		weapons[] = {"Throw","Put","Binocular"}; // Weapons
		respawnWeapons[]= {"Throw","Put","Binocular"};
		magazines[] = {Standard_Grenades_PMC}; //Magazines added to the unit.
		respawnMagazines[]= {Standard_Grenades_PMC};
		linkedItems[]=
		{
			"USP_CRYE_JPC_MG_RGR", 		//Vest
			"cox_chelm_dgreen",			//Helmet
			"TRYK_headset_Glasses", 	//Facewear
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"USP_CRYE_JPC_MG_RGR", 		//Vest
			"cox_chelm_dgreen",			//Helmet
			"TRYK_headset_Glasses", 	//Facewear
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};

class Extended_Init_Eventhandlers {
	#include "Extendedinit.hpp"
};