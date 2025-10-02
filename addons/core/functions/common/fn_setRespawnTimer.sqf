/* ----------------------------------------------------------------------------
Function: bnb_es_core_fnc_setRespawnTimer

Description:
	Set the respawn timer CBA Setting.

Parameters:
	0: _time - Time in seconds to set to <NUMBER>

Returns:
	Nothing

Examples:
	[134] call bnb_es_core_fnc_setRespawnTimer;

Author:
	Arend
---------------------------------------------------------------------------- */
params [["_time", 0, [0]]];

[
	"cba_settings_setSettingMission",
	[
		"bnb_es_respawn_timer",
		_time,
		1 // Priority
	],
	"bnb_es_respawn_timer_event" // Event ID, must be unique
] call CBA_fnc_globalEventJIP;

[format["Respawn timer set to %1", [_time, "M:SS"] call CBA_fnc_formatElapsedTime]] call bnb_es_core_fnc_notifyZeus;
[format["Respawn timer set to %1", [_time, "M:SS"] call CBA_fnc_formatElapsedTime], "core\functions\common\fn_setRespawnTimer.sqf"] call bnb_es_core_fnc_log;
