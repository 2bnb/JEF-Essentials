private _staminaBar = uiNamespace getVariable ["ace_advanced_fatigue_staminaBarContainer", controlNull];
private _aceEnabled = !(isNull _staminaBar);
private _newState = param [0, true];

if (!_aceEnabled) exitWith {};

if (_newState) then {
	_staminaBar ctrlShow bnb_es_screenshot_mode_staminaBarContainer;
	ace_nametags_showplayernames = bnb_es_screenshot_mode_playerNames;
} else {
	bnb_es_screenshot_mode_staminaBarContainer = ctrlShown _staminaBar;
	bnb_es_screenshot_mode_playerNames = ace_nametags_showplayernames;

	_staminaBar ctrlShow false;
	ace_nametags_showplayernames = 0;
};
