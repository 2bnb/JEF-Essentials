#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class bnb_es_mount_up {
		// Addon identity
		name = "2BNB Essentials - Mount Up";
		author = "2nd Battalion, Nord Brigade";
		authors[] = {
			"Arend"
		};
		url = "https://discord.gg/DRaWNyf";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";

		// Addon requirements
		requiredVersion = 2.02;
		requiredAddons[] = {
			"A3_Modules_F"
		};

		// Addon items
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgFunctions {
	class bnb_es_mount_up {
		class functions {
			file = "\x\bnb_es\mount_up\functions";
			class addMountUpActions {};
		};
	};
};


class Extended_InitPost_EventHandlers {
	class AllVehicles {
		class BNB_ES_VehicleMountUp {
			init = "[_this select 0] call bnb_es_mount_up_fnc_addMountUpActions;";
		};
	};
};
