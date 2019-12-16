/*
	Author: Project Odin - mrgwilliam

	Description:
	Initalizes Odin

	Parameter(s):
	NA

	Returns:
	Boolean
*/

// Set inital side tickets
[west, 100] call BIS_fnc_respawnTickets;
[east, 100] call BIS_fnc_respawnTickets;

// Show ticket counters
call BIS_fnc_showMissionStatus;


// Setup ACE Spectator
[[1], [0,2]] call ace_spectator_fnc_updateCameraModes;

_playersFaction = faction player;
if (_playersFaction == "WEST") then
{
	[[west], [east,civilian,resistance]] call ace_spectator_fnc_updateSides;
};

if (_playersFaction == "EAST") then
{
	[[east], [west,civilian,resistance]] call ace_spectator_fnc_updateSides;
};

// Report Initialization
["Odin - Initalized"] call BIS_fnc_logFormat;

true