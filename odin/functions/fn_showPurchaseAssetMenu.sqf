disableSerialization;

_shopItem = ["Test","Testo","Testo3"];

createDialog "odin_PurchaseVehicleAsset_Dialog";

waitUntil{!isNull (findDisplay 55229);};

// Populate Menu

_vehicleArrays = [] call odin_fnc_getVehicleArray;
_ctrl = (findDisplay 55229) displayCtrl 1500;
_labels = _vehicleArrays select 2;

{
	_ctrl lbAdd _x;
} forEach _labels