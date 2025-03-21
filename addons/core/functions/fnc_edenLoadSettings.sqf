#include "..\script_component.hpp"
/* ----------------------------------------------------------------------------
Function: jef_core_fnc_edenLoadSettings

Description:
	Loads standard mission settings.

Parameters:
	None

Returns:
	Nothing.

Examples:
	[] call jef_core_fnc_edenLoadSettings;

Author:
	Met
---------------------------------------------------------------------------- */
set3DENMissionAttributes
[
	["Multiplayer", "gameType", "Zeus"],
	["Multiplayer", "minPlayers", 0],
	["Multiplayer", "maxPlayers", 64],
	["Multiplayer", "disabledAI", true],
	["Multiplayer", "respawn", 3],
	["Multiplayer", "respawnTemplates", ["ace_spectator", "Counter"]],
	["Multiplayer", "respawnDelay", 90]
];
systemChat "Loaded JEF Settings";
