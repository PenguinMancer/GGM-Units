class CfgPatches {
	class GGMU_Special_Weapons {
		requiredVersion=0.1;
		author="PenguinMancer";
		weapons[]={
		"GGMU_bcmjack_custom"
		};
		units[]={};
		requiredAddons[]={};
	};
};
	

class CfgWeapons {
	class hlc_rifle_bcmjack;
	class GGMU_bcmjack_custom: hlc_rifle_bcmjack {
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="CUP_optic_MicroT1_low";
			};
		};
	};
};