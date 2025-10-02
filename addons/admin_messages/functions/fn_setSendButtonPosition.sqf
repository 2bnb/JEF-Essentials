#include "..\gui\defines.hpp"

params [["_ctrl",controlNull]];

if !([] call bnb_es_admin_messages_fnc_isAdminOrZeus) exitWith {};

_ctrl ctrlSetPosition [BNB_ES_ADMIN_MESSAGES_TITLE_X,BNB_ES_ADMIN_MESSAGES_SENDBUTTON_Y_2];
_ctrl ctrlCommit 0;
