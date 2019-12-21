class CfgPatches {
	class GGMU_Wolverine {
		units[] = {"GGMU_Wolverine_Rifleman"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"GGMU_Core","cba_xeh"};
		version="1";
		projectName="GGMU_PMC_CO";
		author="PenguinMancer";
	};
};

class CfgFunctions {
	class Wol {
		class Wolcommon {
			class InitUnit {
				file = "\GGMU_Wolverines\Scripts\InitUnit.sqf";
			};
		};
	};
};

#include "script_macros.hpp"

class EventHandlers;

class CfgVehicles {		

	class B_Soldier_F;
	class GGMU_Wolverine_Base: B_Soldier_F { //Base Unit
		scope=0;
		author="PenguinMancer";
		identityTypes[] = {"LanguageENG_F","Head_African","Head_Greek","NoGlasses"};
		faction = "GGMU_Wolverine";
		vehicleClass = "GGMU_Men"; // Puts unit in the vehicleclass
		genericNames = "GGMU_Western_Names";
		class EventHandlers;
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};//First Aids and similar items.
	};

	class GGMU_Wolverine_Blank: GGMU_Wolverine_Base //Rifleman
	{
		scope=2;
		displayName = "Wolverine Soldier"; // In-game name of unit
		uniformClass="Project_BJC"; // Uniform Class
		backpack = ""; // Backpack Class
		weapons[] = {}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {};
		magazines[] = {}; //Grenades added to the unit. Magazines also go here, but are added at randomization step for this unit.
		respawnMagazines[]= {};
		linkedItems[]=
		{}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{};
	};
	
	class GGMU_Wolverine_Rifleman: GGMU_Wolverine_Base //Rifleman
	{
		scope=2;
		displayName = "Wolverine Rifleman"; // In-game name of unit
		uniformClass="Project_BJC_PCU_Jean_blk1"; // Uniform Class
		backpack = "VSM_MulticamTropic_Backpack_Compact"; // Backpack Class
		weapons[] = {"Throw","Put"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots. Weapons are added at randomization step for this unit.
		respawnWeapons[]= {"Throw","Put"};
		magazines[] = {}; //Grenades added to the unit. Magazines also go here, but are added at randomization step for this unit.
		respawnMagazines[]= {};
		linkedItems[]=
		{
			"rhs_6sh92", 					//Vest
			"CUP_H_FR_BoonieMARPAT",		//Helmet
			"VSM_Goggles", 					//Facewear
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"rhs_6sh92", 					//Vest
			"CUP_H_FR_BoonieMARPAT",		//Helmet
			"VSM_Goggles", 					//Facewear
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