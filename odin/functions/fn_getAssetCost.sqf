/*
	Author: Project Odin - mrgwilliam

	Description:
	Returns Asset Cost Based on item name and type
	Parameter(s):
	0 - _asset - Asset name
	1 - _type - Type of asset ["vehicle","air","weapon","gear","ammo"]

	Returns:
	Integer
*/
params ["_asset", "_type"];

_vehicleArrays = [] call odin_fnc_getVehicleArray;

_vehicleArray = _vehicleArrays select 0;
_vehicleCostArray = _vehicleArrays select 1;
_cost = -1;

if (_type == "vehicle") then
{
	_index = _vehicleArray find _asset;
	if (_index == -1) then
	{
		["Odin - getAssetCost - Unable to find asset %1, in %2 array", _asset, _type] call BIS_fnc_error;
	};

	_cost = _vehicleCostArray select _index;
};

_cost;