class Extended_PostInit_EventHandlers {
	class bnb_es_admin_messages {
		serverInit = "call compile preprocessFileLineNumbers '\x\bnb_es\admin_messages\XEH_postInit.sqf'";
	};
};

class Extended_PreInit_EventHandlers {
	class bnb_es_admin_messages {
		clientInit = "call compile preprocessFileLineNumbers '\x\bnb_es\admin_messages\XEH_preClientInit.sqf'";
	};
};
