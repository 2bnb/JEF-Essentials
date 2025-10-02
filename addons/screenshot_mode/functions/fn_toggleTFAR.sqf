private _tfarEnabled = !(isNil "TFAR_VolumeHudTransparency");
private _newState = param [0, true];

if (!_tfarEnabled) exitWith {};

if (_newState) then {
	TFAR_VolumeHudTransparency = bnb_es_screenshot_mode_tfar;
	[] call TFAR_fnc_updateSpeakVolumeUI;
} else {
	bnb_es_screenshot_mode_tfar = TFAR_VolumeHudTransparency;
	TFAR_VolumeHudTransparency = 1;
	[] call TFAR_fnc_updateSpeakVolumeUI;
};
