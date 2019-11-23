class DefaultEventhandlers;
class CfgPatches {
	class GGMU_Core {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		version="1";
		projectName="GGMU_Core";
		author="PenguinMancer";
	};
};

class CfgWorlds {					//Setting up generic names for all our factions.
	class GenericNames {
		class GGMU_Western_Names {
			class FirstNames {	
				James = "James";
				John = "John";
				Robert = "Robert";
				Michael = "Michael";
				Will = "Will";
				David = "David";
				Joseph = "Joseph";
				Tom = "Tom";
				Charles = "Charles";
				Noah = "Noah";
				Liam = "Liam";
				Mason = "Mason";
				Jacob = "Jacob";
				Ethan = "Ethan";
				Elijah = "Elijah";
				Ben = "Ben";
				Owen = "Owen";
				Connor = "Connor";
				Henry = "Henry";
				Nathan = "Nathan";
				Dylan = "Dylan";
				Cameron = "Cameron";
				Matthew = "Matthew";
				Jack = "Jack";
				Logan = "Logan";
				Taco = "Taco";
			};
			class LastNames {
				Smith = "Smith";
				Johnson = "Johnson";
				Williams = "Williams";
				Brown = "Brown";
				Jones = "Jones";
				Miller = "Miller";
				Davis = "Davis";
				Garcia = "Garcia";
				Wilson = "Wilson";
				Martinez = "Martinez";
				Anderson = "Anderson";
				Taylor = "Taylor";
				Thomas = "Thomas";
				Moore = "Moore";
				Martin = "Martin";
				Jackson = "Jackson";
				Thompson = "Thompson";
				White = "White";
				Lopez = "Lopez";
				Lee = "Lee";
				Gonzalez = "Gonzalez";
				Harris = "Harris";
				Clark = "Clark";
			};
		};
		class GGMU_Penguin_Name {		//Specifically setting up names for our one use units.
			class FirstNames {
				Codename = "Agent";
			};
			class LastNames {
				Penguin = "Penguin";
			};
		};
		class GGMU_Smiley_Name {
			class FirstNames {
				Codename = "Agent";
			};
			class LastNames {
				Smiley = "Smiley";
			};
		};
	};
};

class CfgIdentities {						//Setting custom identities for our special units.
    class GGMU_Identity_Penguin {
        name = "Agent Penguin";
        nameSound = "";
        face = "Oakes";
        glasses = "None";
        speaker = "ACE_NoVoice";
        pitch = 1;
    };
	class GGMU_Identity_Smiley {
        name = "Agent Smiley";
        nameSound = "";
        face = "Sturrock";
        glasses = "None";
        speaker = "male01engvr";
        pitch = 1;
    };
};

class cfgFactionClasses
{
	class GGMU_East_Military //Faction Calling Name
	{
		displayName = "Eastern Military"; //Faction name in game
		priority = 3; //How far down it is on the menu
		side = 0; // 0 opfor 1 Blufor 2 independant 3 Civilian
		icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
	};
	class GGMU_East_Guerilla
	{
		displayName = "Eastern Guerilla";
		priority = 3;
		side = 2;
		icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
	};
	class GGMU_Architects_Chosen
	{
		displayName = "The Architect's Chosen";
		priority = 3;
		side = 0;
		icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
	};
	class GGMU_West_Military
	{
		displayName = "Western Military";
		priority = 3;
		side = 1;
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
	};
	class GGMU_West_Guerilla
	{
		displayName = "Western Guerilla";
		priority = 3;
		side = 2;
		icon = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
	};
	class GGMU_PMC_CO
	{
		displayName = "Manticore PMC Company";
		priority = 3;
		side = 2;
		icon = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
	};
};

class CfgVehicleClasses //This should be the editor subcategories of units, I thought. Doesn't seem to be working though? Not high on priorities. Research more later.
{
	class GGMU_Men
	{
		displayName = "Men"; // Name of the Group of Units
	};
	class GGMU_Men_Specop
	{
		displayName = "Men (Special Forces)";
	};
	class GGMU_Men_Special
	{
		displayName = "Special Units";
	};
};