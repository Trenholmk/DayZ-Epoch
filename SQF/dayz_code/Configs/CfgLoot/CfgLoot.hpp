#include "LootDefines.hpp"

class CfgLoot
{
	class Groups
	{		
		// General groups
		#include "Groups\Ammo.hpp"
		#include "Groups\AmmoBox.hpp"
		#include "Groups\Attachments.hpp"
		#include "Groups\Medical.hpp"
		#include "Groups\Generic.hpp"
		#include "Groups\Trash.hpp"
		#include "Groups\Consumable.hpp"
		#include "Groups\ConsumableItems.hpp"
		#include "Groups\Fuel.hpp"
		#include "Groups\Parts.hpp"
		#include "Groups\Weapons.hpp"
		#include "Groups\Clothes.hpp"
		#include "Groups\Backpacks.hpp"
		#include "Groups\Wrecks.hpp"
		#include "Groups\Vanilla.hpp"
		#include "Groups\Tools.hpp"
		#include "Groups\Documents.hpp"
		
		// Points of interest
		#include "Groups\CrashSite.hpp"
		#include "Groups\CarePackage.hpp"
		#include "Groups\InfectedCamp.hpp"
				
		// Buildings
		#include "CfgBuildingLoot.hpp"

		// Zombies
		#include "Groups\Zombies\Civilian.hpp"
		#include "Groups\Zombies\Hunter.hpp"
		#include "Groups\Zombies\Police.hpp"
		#include "Groups\Zombies\Military.hpp"
		#include "Groups\Zombies\Worker.hpp" //DZE
		#include "Groups\Zombies\Suit.hpp" //DZE
		#include "Groups\Zombies\Doctor.hpp" //DZE
		#include "Groups\Zombies\Pilot.hpp" //DZE
		//New 1.0.7
		#include "Groups\Zombies\Bodyguard.hpp" //DZE
		#include "Groups\Zombies\Crewman.hpp" //DZE
		#include "Groups\Zombies\Ghillie.hpp" //DZE
		#include "Groups\Zombies\Lumberjack.hpp" //DZE
		#include "Groups\Zombies\Officer.hpp" //DZE
		#include "Groups\Zombies\Rebels.hpp" //DZE
		#include "Groups\Zombies\Rocker.hpp" //DZE
		#include "Groups\Zombies\SpecialForces.hpp" //DZE
		#include "Groups\Zombies\Firefighter.hpp" //DZE
		#include "Groups\Zombies\Postman.hpp" //DZE
		#include "Groups\Zombies\Teacher.hpp" //DZE
		#include "Groups\Zombies\Gardener.hpp" //DZE
		#include "Groups\Zombies\Stalker.hpp" //DZE
		#include "Groups\Zombies\Apo.hpp" //DZE
		#include "Groups\Zombies\DrugDealer.hpp" //DZE
		#include "Groups\Zombies\Prisoner.hpp" //DZE
		#include "Groups\Zombies\Hero.hpp" //DZE
		#include "Groups\Zombies\Bandit.hpp" //DZE
		#include "Groups\Zombies\Bloodsucker.hpp" //DZE
	};	
	
	class Buildings
	{
		class Default
		{
			zombieChance = 0.2;
			minRoaming = 0;
			maxRoaming = 2;
			fixWaterPos = 0; // Add fixWaterPos = 1; to the building class that have floating loot if the building is over water.
			
			zombieClass[] =
			{
			//	"zZombie_Base",
				"z_hunter",
				"z_teacher",
				"z_suit1",
				"z_suit2",
				"z_worker1",
				"z_worker2",
				"z_worker3",
				"z_villager1",
				"z_villager2",
				"z_villager3"
			};
			
			lootChance = 0;
			lootRefreshTimer = 900;
			lootGroup = "";
			lootPos[] = {};
		};
	
		// Buildings
		#include "CfgBuildingPos.hpp"
	};
};
