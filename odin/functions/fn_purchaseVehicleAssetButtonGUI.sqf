/*
	Author: Project Odin - mrgwilliam

	Description:
	Handles button click for vehicle purchase asset menu
	Parameter(s):
	0 - _player - The player who called the purchase

	Returns:
	Boolean
*/
params ["_player"];

// Wait until the display is found
waitUntil{!isNull (findDisplay 55229);};

_ctrl = (findDisplay 55229) displayCtrl 1500;
_index = lbCurSel _ctrl;

// Define Vehicle Array 
_vehicleArrays = [] call odin_fnc_getVehicleArray;
_vehicleAssetClassNames = _vehicleArrays select 0;
_selectedAsset = _vehicleAssetClassNames select _index;

// Determine Location and Side based on player
if (side _player == west) then {
	_spawnLocation = "spawn_asset_west";
	_side = west;
	 _result = [_selectedAsset, _spawnLocation, _side] call odin_fnc_purchaseVehicleAsset;

};

if (side _player == east) then {
	_spawnLocation = "spawn_asset_east";
	_side = east;
	_result = [_selectedAsset, _spawnLocation, _side] call odin_fnc_purchaseVehicleAsset;
};

true;
