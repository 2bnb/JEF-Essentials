/* ----------------------------------------------------------------------------
Function: bnb_es_core_fnc_forceRespawn

Description:
	Forces all the dead people to respawn immediately.
	After that the respawn is once again set to default timer value.

Parameters:
	Nothing

Returns:
	Nothing

Examples:
	[] call bnb_es_core_fnc_forceRespawn;

Author:
	Ford
	Arend
---------------------------------------------------------------------------- */
{
	setPlayerRespawnTime 0;
	sleep 2;
	setPlayerRespawnTime bnb_es_respawn_timer;
} remoteExec ["BIS_fnc_call", 0];
