#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class ADDON {
			// Meta information for editor
			name = "JEF Essentials";
			author = "JEF Mod Team";
					authors[] = {
			"Ford",
			"Arend",
			"FarCry",
			"Carmichael",
			"Met",
			"Woods",
		};
	
			// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
			requiredVersion = 1.98; 
			// Required addons, used for setting load order.
			// When any of the addons is missing, pop-up warning will appear when launching the game.
			requiredAddons[] = { "CBA_main", "cba_settings", "3DEN", "ace_arsenal", "ace_medical", "A3_Modules_F" };
			// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
			units[] = {};
			// List of weapons (CfgWeapons classes) contained in the addon.
			weapons[] = {};
			is3DENmod = 1;
	};
};
class CfgFunctions {
	class bnb_es_core {
		class functions {
			file="\x\bnb_es\core\functions";
			class edenLoadSettings {};
			class edenCreateAssets {};
		};
		class common {
			file = "\x\bnb_es\core\functions\common";
			class addDeployActions {};
			class addFullHeal {};
			class addSpectator {};
			class changeSpeakVolume {};
			class edenLoadSettings {};
			class edenCreateAssets {};
			class getCurators {};
			class getDeadPlayers {};
			class getDeployAnimations {};
			class isCurator {};
			class listDeadPlayers {};
			class notifyZeus {};
			class openTimerUI {};
			class setRespawnTimer {};
			class setDefaultLoadouts {};
		};

		class zeus_modules {
			file = "\x\bnb_es\core\functions\zeus_modules";
			class forceRespawn {};
			class addMusicRadio {};
		};

		class utilities {
			file = "\x\bnb_es\core\functions\utilities";
			class arrayFlatten {};
			class log {};
			class strToArray {};
			class toBoolean {};
		};
	};
};

class Extended_PreInit_EventHandlers {
	class bnb_es_core_preInit {
		init = "call compile preprocessFileLineNumbers '\x\bnb_es\core\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class bnb_es_core_postInit {
		init = "call compile preprocessFileLineNumbers '\x\bnb_es\core\XEH_postInit.sqf'";
	};
};


#include "\x\bnb_es\core\configs\CfgDefines.hpp"
#include "\x\bnb_es\core\configs\CfgEdenToolBar.hpp"
#include "\x\bnb_es\core\configs\CfgDirectConnect.hpp"
#include "\x\bnb_es\core\configs\CfgLadderTweak.hpp" // LadderTweak is currently commented out for conflict with another mod
#include "\x\bnb_es\core\configs\CfgMedicalEquipment.hpp"
class CfgVehicles {
#include "\x\bnb_es\core\configs\CfgUnitTrainerTools.hpp"
#include "\x\bnb_es\core\configs\CfgVehicleDeploy.hpp"
};
#include "\x\bnb_es\core\configs\CfgZeusActions.hpp"
#include "\x\bnb_es\core\configs\CfgEdenLoadouts.hpp"

/*
#include "\x\bnb_es\core\configs\CfgEnableDebug.hpp"
*/