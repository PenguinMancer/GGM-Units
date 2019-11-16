class CfgPatches {
	class GGMU_Special_Weapons {
		requiredVersion=0.1;
		author="PenguinMancer";
		weapons[]={
		"GGMU_falosw_custom",
		"GGMU_P226R_40Combat_Custom"
		};
		units[]={};
		requiredAddons[]={};
	};
};
	

class CfgWeapons {
	class hlc_rifle_falosw;
	class GGMU_falosw_custom: hlc_rifle_falosw {
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="optic_MRCO";
			};
			class LinkedItemsMuzzle {
				slot="MuzzleSlot";
				item="hlc_muzzle_MAG58_Brake";
			};
			class LinkedItemsPointer {
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "HLC_bipod_UTGShooters";
			};
		};
	};
	class hlc_pistol_P226R_40Combat;
	class GGMU_P226R_40Combat_Custom: hlc_pistol_P226R_40Combat {
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="HLC_Optic_Romeo1_RX";
			};
			class LinkedItemsMuzzle {
				slot="MuzzleSlot";
				item="hlc_muzzle_Octane9";
			};
			class LinkedItemsPointer {
				slot="PointerSlot";
				item="CUP_acc_MLPLS_Laser";
			};
		};
	};
};