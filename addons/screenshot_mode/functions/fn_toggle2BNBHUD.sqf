private _newState = param [0, true];

if (_newState) then {
	// "bnb_es_admin_messages_customChatLayer" cutRsc ["bnb_es_admin_messages_rscCustomChat","PLAIN",-1,true];
	// private _customChatTitleDisplay = uiNamespace getVariable ["bnb_es_admin_messages_rscCustomChat",displayNull];
	// private _ctrlText = _customChatTitleDisplay displayCtrl BNB_ES_ADMIN_MESSAGES_IDC_CUSTOMCHATTEXT;

	// _ctrlText ctrlSetStructuredText bnb_es_admin_messages_customChatLayerMessage;

	// private _textHeight = ctrlTextHeight _ctrlText;

	// (ctrlPosition _ctrlText) params ["_origX","_origY","_origW","_origH"];

	// _ctrlText ctrlSetPosition [_origX,_origY - _textHeight,_origW,_textHeight];
	// _ctrlText ctrlCommit 0;
} else {
	"bnb_es_admin_messages_customChatLayer" cutText ["", "PLAIN"];
};
