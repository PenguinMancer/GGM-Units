class CfgPatches {
	class GGMU_PMC_CO {
		units[] = {"GGMU_PMC_Rifleman_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"GGMU_Core"};
		version="1";
		projectName="GGMU_PMC_CO";
		author="PenguinMancer";
	};
};

class Eventhandlers {};

class CfgVehicles {		
class B_Soldier_F;
	
	class GGMU_PMC_Base: B_Soldier_F { //Base Unit
		side=2;
		scope=0;
		author="PenguinMancer";
		identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
		faction = "GGMU_PMC_CO";
		vehicleClass = "GGMU_Men"; // Puts unit in the vehicleclass
		genericNames = "GGMU_Western_Names";
		nakedUniform="U_BasicBody";
	};


	class GGMU_PMC_Rifleman_1: GGMU_PMC_Base //Rifleman
	{
		scope=2;
		displayName = "Manticore Rifleman"; // In-game name of unit
		uniformClass="USP_CRYE_G3C_SHORT_BLK_RGR"; // Uniform Class
		backpack = "usp_crye_zipon"; // Backpack Class
		weapons[] = {"GGMU_bcmjack_custom","rhsusf_weap_glock17g4","Throw","Put","Binocular"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots.
		respawnWeapons[]= {"GGMU_bcmjack_custom","rhsusf_weap_glock17g4","Throw","Put","Binocular"};
		magazines[] = {"hlc_30rnd_556x45_EPR_PMAG","hlc_30rnd_556x45_EPR_PMAG","hlc_30rnd_556x45_EPR_PMAG","hlc_30rnd_556x45_EPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellRed","ACE_HandFlare_White","ACE_HandFlare_White"}; //Magazines added to the unit.
		respawnMagazines[]= {"hlc_30rnd_556x45_EPR_PMAG","hlc_30rnd_556x45_EPR_PMAG","hlc_30rnd_556x45_EPR_PMAG","hlc_30rnd_556x45_EPR_PMAG","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellRed","ACE_HandFlare_White","ACE_HandFlare_White"};
		linkedItems[]=
		{
			"USP_CRYE_CPC_LIGHT_RGR",
			"cox_chelm_dgreen",
			"TRYK_headset_Glasses",
			"FirstAidKit",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"USP_CRYE_CPC_LIGHT_RGR",
			"cox_chelm_dgreen",
			"TRYK_headset_Glasses",
			"FirstAidKit",
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
		uniformClass="USP_CRYE_G3C_SHORT_BLK_RGR"; // Uniform Class
		backpack = "VSM_OGA_OD_carryall"; // Backpack Class
		weapons[] = {"GGMU_minimipara_custom","rhsusf_weap_glock17g4","Throw","Put","Binocular"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots.
		respawnWeapons[]= {"GGMU_minimipara_custom","rhsusf_weap_glock17g4","Throw","Put","Binocular"};
		magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellRed","ACE_HandFlare_White","ACE_HandFlare_White"}; //Magazines added to the unit.
		respawnMagazines[]= {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_M_SAW","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellRed","ACE_HandFlare_White","ACE_HandFlare_White"};
		linkedItems[]=
		{
			"USP_CRYE_JPC_MG_RGR",
			"cox_chelm_dgreen",
			"TRYK_headset_Glasses",
			"FirstAidKit",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"USP_CRYE_JPC_MG_RGR",
			"cox_chelm_dgreen",
			"TRYK_headset_Glasses",
			"FirstAidKit",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
};