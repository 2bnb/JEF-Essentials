params ["_sender","_UID","_message",["_receiveCondition",{[] call bnb_es_admin_messages_fnc_isAdminOrZeus}],["_receiveConditionParams",[]]];

if !(hasInterface) exitWith {};
if !(_receiveConditionParams call _receiveCondition) exitWith {};
if (profileName == _sender) exitWith {};

if (isNil "bnb_es_admin_messages_latestConvos") then {bnb_es_admin_messages_latestConvos = []};
if (bnb_es_admin_messages_latestConvos find [toUpper _sender,_UID] < 0) then {
	reverse bnb_es_admin_messages_latestConvos;
	bnb_es_admin_messages_latestConvos pushBack [toUpper _sender,_UID];
	reverse bnb_es_admin_messages_latestConvos;
};
if (count bnb_es_admin_messages_latestConvos > 5) then {bnb_es_admin_messages_latestConvos resize 5};

[_sender,_message] call bnb_es_admin_messages_fnc_displayMessage;

playSound "3DEN_notificationWarning";
