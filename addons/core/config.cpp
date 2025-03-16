#include "script_component.hpp"
#include "script_macros.hpp"

class CfgPatches {
	class ADDON {
			// Meta information for editor
			name = "JEF Essentials";
			author = "JEF Mod Team";
	
			// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
			requiredVersion = 1.98; 
			// Required addons, used for setting load order.
			// When any of the addons is missing, pop-up warning will appear when launching the game.
			requiredAddons[] = { "CBA_main", "cba_settings", "3DEN" };
			// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
			units[] = {};
			// List of weapons (CfgWeapons classes) contained in the addon.
			weapons[] = {};
			is3DENmod = 1;
	};
};


#include "CfgEventhandlers.hpp"
#include "configs\CfgEdenToolBar.hpp"
#include "configs\CfgDirectConnect.hpp"
// #include "configs\CfgDefines.hpp"