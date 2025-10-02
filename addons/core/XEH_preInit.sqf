private _bnb_es_settings = [
	[
		"bnb_es_debug",
		"CHECKBOX",
		["Enable Debug", "Tick enable 2BNB debug messages to appear in RPT and systemChat"],
		["JEF Common", "Development"],
		false
	],
	[
		"bnb_es_respawn_timer",
		"SLIDER",
		["Respawn Timer (seconds)", "Number of seconds player waves need to wait before respawn (0 -> 600 (10 minutes))"],
		["JEF Zeus", "Respawn"],
		[1, 600, 5, 0],
		1,
		{
			setPlayerRespawnTime _this;
		}
	],
	[
		"bnb_es_map_volume",
		"SLIDER",
		["Map Volume", "Volume to set when in a vehicle and looking at the map (so that you don't have to listen to loud as fuck helicopter rotors)"],
		"JEF Common",
		[0, 1, 0.20, 2]
	]
];

{_x call CBA_Settings_fnc_init;} forEach _bnb_es_settings;

CHVD_allowNoGrass = false;
