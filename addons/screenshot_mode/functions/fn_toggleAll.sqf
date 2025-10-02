private _newState = param [0, true];

{
	[_newState] call _x;
} forEach [
	bnb_es_screenshot_mode_fnc_toggle2BNBHUD,
	bnb_es_screenshot_mode_fnc_toggleACENametags,
	bnb_es_screenshot_mode_fnc_toggleSTHud,
	bnb_es_screenshot_mode_fnc_toggleTFAR,
	bnb_es_screenshot_mode_fnc_toggleVanillaHUD,
	bnb_es_screenshot_mode_fnc_toggleDuiHud
];

false;
