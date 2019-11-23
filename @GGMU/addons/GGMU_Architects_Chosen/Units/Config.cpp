class CfgPatches {
	class GGMU_PMC_CO {
		units[] = {"GGMU_ChosenMilitia_Rifleman_1"};
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

	class B_Soldier_F;
	class GGMU_ChosenMilitia_Base: B_Soldier_F { //Base Unit
		side=0;
		scope=0;
		author="PenguinMancer";
		identityTypes[] = {"LanguageENG_F","Head_African","Head_Greek","NoGlasses"};
		faction = "GGMU_Architects_Chosen";
		vehicleClass = "GGMU_Men"; // Puts unit in the vehicleclass
		genericNames = "GGMU_Western_Names"; //PLACEHOLDER PLEASE CHANGE
		Items[] = {};
		RespawnItems[] = {};
		class EventHandlers;
	};


	class GGMU_ChosenMilitia_Rifleman_1: GGMU_ChosenMilitia_Base //Rifleman
	{
		scope=2;
		displayName = "Architect's Chosen Grunt"; // In-game name of unit
		uniformClass="sweater_drab"; // Uniform Class
		backpack = "usp_crye_zipon"; // Backpack Class
		weapons[] = {"Throw","Put","Binocular"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {"Throw","Put","Binocular"};
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

};

class Extended_Init_Eventhandlers {
	#include "Extendedinit.hpp"
};