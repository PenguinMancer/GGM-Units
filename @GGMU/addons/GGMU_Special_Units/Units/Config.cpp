class CfgPatches {
	class GGMU_Specials {
		units[] = {"GGMU_Penguin_1"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"GGMU_Core","cba_xeh"};
		version="1";
		projectName="GGMU_Specials";
		author="PenguinMancer";
	};
};

class Eventhandlers {};

class CfgVehicles {		
class I_Soldier_F;
	class GGMU_Penguin: I_Soldier_F { //Sab Unit	
		scope=2;
		author="PenguinMancer";
		identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setIdentity ""GGMU_Identity_Penguin""";
		};
		faction = "GGMU_PMC_CO";
		vehicleClass = "GGMU_Men_Special"; // Puts unit in the vehicleclass
		genericNames = "GGMU_Penguin_Name";
		nakedUniform="U_BasicBody";
		displayName = "Agent Penguin"; // In-game name of unit
		uniformClass="USP_CRYE_G3C_SHORT_BLK"; // Uniform Class
		backpack = "TRYK_B_Belt_BLK"; // Backpack Class
		weapons[] = {"GGMU_falosw_custom","GGMU_P226R_40Combat_Custom","Throw","Put","Rangefinder"}; // Weapons added to the unit. Rangefinders/Binoculars also go in weapon slots.
		respawnWeapons[]= {"GGMU_falosw_custom","GGMU_P226R_40Combat_Custom","Throw","Put","Rangefinder"};
		magazines[] = {"hlc_20Rnd_762x51_T_fal","hlc_20Rnd_762x51_T_fal","hlc_20Rnd_762x51_T_fal","hlc_20Rnd_762x51_T_fal","hlc_12Rnd_40sw_JHP_P226","hlc_12Rnd_40sw_JHP_P226","hlc_12Rnd_40sw_JHP_P226","hlc_12Rnd_40sw_JHP_P226","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellRed","ACE_HandFlare_White","ACE_HandFlare_White"}; //Magazines added to the unit.
		respawnMagazines[]= {"hlc_20Rnd_762x51_T_fal","hlc_20Rnd_762x51_T_fal","hlc_20Rnd_762x51_T_fal","hlc_20Rnd_762x51_T_fal","hlc_12Rnd_40sw_JHP_P226","hlc_12Rnd_40sw_JHP_P226","hlc_12Rnd_40sw_JHP_P226","hlc_12Rnd_40sw_JHP_P226","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellRed","ACE_HandFlare_White","ACE_HandFlare_White"};
		linkedItems[]=
		{
			"USP_EAGLE_MBAV_MCB",
			"VSM_Beanie_Black",
			"USP_THERMAL_AO",
			"FirstAidKit",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"TRYK_TAC_EARMUFF"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"USP_EAGLE_MBAV_MCB",
			"VSM_Beanie_Black",
			"USP_THERMAL_AO",
			"FirstAidKit",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"TRYK_TAC_EARMUFF"
		};
		
	};
	
	class GGMU_Smiley: I_Soldier_F { //Jayme Unit
		scope=2;
		author="PenguinMancer";
		identityTypes[] = {"LanguageENG_F","Head_NATO","NoGlasses"};
		class EventHandlers: EventHandlers {
			init = "(_this select 0) setIdentity ""GGMU_Identity_Smiley""";
		};
		faction = "GGMU_PMC_CO";
		vehicleClass = "GGMU_Men_Special";
		genericNames = "GGMU_Smiley_Name";
		nakedUniform="U_BasicBody";
		displayName = "Agent Smiley";
		uniformClass="TRYK_U_B_Denim_T_BK";
		backpack = "cox_APack_rederdl";
		weapons[] = {"GGMU_AK104_zenitco01_custom","GGMU_glock17g4_Custom","Throw","Put","Rangefinder"};
		respawnWeapons[]= {"GGMU_AK104_zenitco01_custom","GGMU_glock17g4_Custom","Throw","Put","Rangefinder"};
		magazines[] = {"hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellRed","ACE_HandFlare_White","ACE_HandFlare_White"}; //Magazines added to the unit.
		respawnMagazines[]= {"hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk","hlc_45Rnd_762x39_t_rpk","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","rhsusf_mag_17Rnd_9x19_JHP","HandGrenade","HandGrenade","SmokeShellGreen","SmokeShellRed","ACE_HandFlare_White","ACE_HandFlare_White"};
		linkedItems[]=
		{
			"cox_PlateCarrierSpec_yellow",
			"CUP_H_USArmy_Helmet_M1_btp",
			"CUP_PMC_Facewrap_Smilie",
			"FirstAidKit",
			"FirstAidKit",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ACE_Altimeter",
			"ItemRadio",
			"TAC_SG_SK"
		}; //Item's added to the unit. 
		respawnLinkedItems[]=
		{
			"cox_PlateCarrierSpec_yellow",
			"CUP_H_USArmy_Helmet_M1_btp",
			"CUP_PMC_Facewrap_Smilie",
			"FirstAidKit",
			"FirstAidKit",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ACE_Altimeter",
			"ItemRadio",
			"TAC_SG_SK"
		};
		
	};

};