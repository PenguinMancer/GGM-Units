class CfgPatches {
	class GGMU_East_Mil {
		units[] = {"GGMU_EastMil_Rifleman_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"GGMU_Core","cba_xeh"};
		version="1";
		projectName="GGMU_East_Military";
		author="PenguinMancer";
	};
};

class CfgFunctions {
	class EastMil {
		class EastMilcommon {
			class InitUnit {
				file = "\GGMU_Eastern_Military\Scripts\InitUnit.sqf";
			};
		};
	};
};

#include "script_macros.hpp"

class EventHandlers;

class CfgVehicles {		

	class B_Soldier_F;
	class GGMU_EastMil_Base: B_Soldier_F { //Base Unit
		side=0;
		scope=0;
		author="PenguinMancer";
		identityTypes[] = {"LanguageENG_F","Head_Russian","Head_Euro","NoGlasses"};
		faction = "GGMU_East_Military";		
		vehicleClass = "GGMU_Men"; // Puts unit in the vehicleclass
		genericNames = "GGMU_Western_Names"; //To be changed.
		class EventHandlers;
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};//First Aids and similar items.
	};


	class GGMU_EastMil_Rifleman_1: GGMU_EastMil_Base //Rifleman
	{
		scope=2;
		displayName = "Rifleman"; // In-game name of unit
		uniformClass="rhs_uniform_flora_patchless"; // Uniform Class
		backpack = ""; // Backpack Class
		weapons[] = {"Throw","Put"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {"Throw","Put"};
		magazines[] = {Standard_Grenades_EastMil}; //Grenades added to the unit. Magazines also go here, but are added at randomization step for this unit.
		respawnMagazines[]= {Standard_Grenades_EastMil};
		linkedItems[]=
		{
			"rhs_6b23_rifleman", 		//Vest, leave all these in for now, gets changed at randomization step.
			"rhs_6b26_bala_green",		//Helmet
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"rhs_6b23_rifleman", 		//Vest, 
			"rhs_6b26_bala_green",		//Helmet
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