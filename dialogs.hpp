class odin_PurchaseVehicleAsset_Dialog 
{
	idd = 55229
	movingEnable = false;

	class controls
	{
		
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Guillermo, v1.063, #Gizima)
		////////////////////////////////////////////////////////

		class odin_backgroundPicture: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.354186 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.283953 * safezoneW;
			h = 0.506 * safezoneH;
		};
		class odin_logo: RscPicture
		{
			idc = 1201;
			text = "images\odin\odin_horizontal_logo.paa";
			x = 0.457791 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.072907 * safezoneW;
			h = 0.088 * safezoneH;
		};
		class RscListbox_1500: RscListbox
		{
			idc = 1500;
			x = 0.36186 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.268605 * safezoneW;
			h = 0.352 * safezoneH;
		};
		class odin_button_purchaseAsset: RscButton
		{
			idc = 1600;
			text = "Purchase Vehicle Asset"; //--- ToDo: Localize;
			x = 0.377209 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.103605 * safezoneW;
			h = 0.033 * safezoneH;
			action = "[player] call odin_fnc_purchaseVehicleAssetButtonGUI;";
		};
		class odin_button_closeMenu: RscButton
		{
			idc = 1601;
			text = "Cancel"; //--- ToDo: Localize;
			x = 0.511512 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.103605 * safezoneW;
			h = 0.033 * safezoneH;
			action = "closeDialog 2;";
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
};

