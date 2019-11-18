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
	class GGMU_falosw_custom: hlc_rifle_falosw { //Used by Agent Penguin (Rifle)
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
	class GGMU_P226R_40Combat_Custom: hlc_pistol_P226R_40Combat { //Used by Agent Penguin (Pistol)
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
	class rhs_weap_ak104_zenitco01_b33;
	class GGMU_AK104_zenitco01_custom: rhs_weap_ak104_zenitco01_b33 { //Used by Agent Smiley (Rifle)
		scope=1;
		class LinkedItems {
			class LinkedItemsOptic {
				slot="CowsSlot";
				item="ACE_optic_Arco_2D";
			};
			class LinkedItemsMuzzle {
				slot="MuzzleSlot";
				item="rhs_acc_dtk1";
			};
			class LinkedItemsPointer {
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder {
				slot = "GripodSlot";
				item = "rhsusf_acc_grip1";
			};
		};
	};
	class rhsusf_weap_glock17g4;
	class GGMU_glock17g4_Custom: rhsusf_weap_glock17g4 { //Used by Agent Smiley (Pistol)
		scope=1;
		class LinkedItems {
			class LinkedItemsMuzzle {
				slot="MuzzleSlot";
				item="hlc_muzzle_Evo9";
			};
			class LinkedItemsPointer {
				slot="PointerSlot";
				item="CUP_acc_CZ_M3X";
			};
		};
	};
};