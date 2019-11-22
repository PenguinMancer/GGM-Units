class CfgPatches {
	class GGMU_PMC_Weapons {
		requiredVersion=0.1;
		author="PenguinMancer";
		weapons[]={
		"GGMU_bcmjack_custom","GGMU_RU556_custom","GGMU_minimipara_custom"
		};
		units[]={};
		requiredAddons[]={};
	};
};
	

class CfgWeapons {
	class hlc_rifle_bcmjack;
	class GGMU_bcmjack_custom: hlc_rifle_bcmjack { //Standard Rifleman
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="CUP_optic_MicroT1_low";
			};
		};
	};
	class hlc_rifle_RU556;
	class GGMU_RU556_custom: hlc_rifle_RU556 { //Standard Rifleman (Option 2)
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="CUP_optic_MicroT1_low";
			};
		};
	};
	class hlc_lmg_minimipara_long_railed;
	class GGMU_minimipara_custom: hlc_lmg_minimipara_long_railed { //Autorifleman
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="CUP_optic_ElcanM145_PIP";
			};
			class LinkedItemsMuzzle {
				slot="MuzzleSlot";
				item="hlc_muzzle_SF3P_556";
			};
		};
	};
};