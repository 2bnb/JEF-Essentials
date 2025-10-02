#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class bnb_es_screenshot_mode {
		// Addon identity
		name = "JEF Essentials - Screenshot Mode";
		author = "$STR_grad_Author";
		authors[] = {
			"DerZade [A]",
			"Arend"
		};
		url = "$STR_grad_URL";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"bnb_es_admin_messages"
		};

		// Addon items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

#include "CfgFunctions.hpp"
#include "CfgEventHandlers.hpp"
