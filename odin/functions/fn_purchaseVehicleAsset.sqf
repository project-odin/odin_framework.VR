/*
	Author: Project Odin - mrgwilliam

	Description:
	Spawns an asset on a marker and deducts the tickets from the correct side.
	Parameter(s):
	0 - _asset - Asset name
	1 - _locationMarker - Marker or Object where assets will be spawned
	2 - _side - The side which points need to be deducted from
	3 - _angle - The angle which assets are spawn in

	Returns:
	Boolean
*/
params ["_asset", "_locationMarker", ["_side", west], ["_angle", 0]];

// Get Location
_locationMarkerCoordinates = getMarkerPos _locationMarker;

// Get Assets Cost and Current Tickets
_assetCost = [_asset, "vehicle"] call odin_fnc_getAssetCost;
_currentTickets = [_side, 0] call BIS_fnc_respawnTickets;

// Create Vehicle or Inform Side asset is not able to be purchased
if (_currentTickets > _assetCost) then
{
	_vehicle = createVehicle [_asset, _locationMarkerCoordinates,[], 0,"NONE"];
	_vehicle setDir _angle;
	_newTicketCount = [_side, -_assetCost] call BIS_fnc_respawnTickets;
	"Vehicle Asset Purchased - Tickets Deducted" remoteExec ["hintSilent", _side]; 
}
else
{
	"Insufficent Tickets - Unable to Purchase Asset" remoteExec ["hintSilent", _side]; 
	false;
};

true;
