#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class bnb_es_admin_messages {
		// Addon identity
		name = "2BNB Essentials - Admin Messages";
		author = "McDiod";
		authors[] = {
			"McDiod",
			"Ford",
			"Arend"
		};
		url = "https://discord.gg/rUUsCShkzJ";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.00;
		requiredAddons[] = {
			"A3_Ui_F"
		};

		// Addon items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

#include "\x\bnb_es\admin_messages\cfgEventHandlers.hpp"
#include "\x\bnb_es\admin_messages\cfgFunctions.hpp"
#include "\x\bnb_es\admin_messages\gui\defines.hpp"
#include "\x\bnb_es\admin_messages\gui\sendBoxBase.hpp"
#include "\x\bnb_es\admin_messages\gui\interruptMenu.hpp"
#include "\x\bnb_es\admin_messages\gui\rscTitles.hpp"
