class Extended_PostInit_EventHandlers {
	bnb_es_screenshot_mode = "[] call bnb_es_screenshot_mode_fnc_postInit;";
};

class Extended_PreInit_EventHandlers {
	class bnb_es_screenshot_mode {
		clientInit = "call compile preprocessFileLineNumbers '\x\bnb_es\screenshot_mode\XEH_preClientInit.sqf';";
	};
};
