class odin_PurchaseVehicleAsset_Dialog 
{
	idd = 55229
	movingEnable = false;

	class controls
	{
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Guillermo, v1.063, #Rasifo)
		////////////////////////////////////////////////////////

		class odin_purchaseAssetsBackground: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.354186 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.291628 * safezoneW;
			h = 0.506 * safezoneH;
		};
		class odin_logoPicture: RscPicture
		{
			idc = 1201;
			text = "images\odin\odin_horizontal_logo.paa";
			x = 0.358023 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.072907 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class odin_button_purchaseAsset: RscButton
		{
			idc = 1600;
			text = "Purchase Asset"; //--- ToDo: Localize;
			x = 0.565233 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0537209 * safezoneW;
			h = 0.055 * safezoneH;
			action = "[player] call odin_fnc_purchaseVehicleAssetButtonGUI;";
		};
		class odin_button_closeMenu: RscButton
		{
			idc = 1601;
			text = "Close Menu"; //--- ToDo: Localize;
			x = 0.565233 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0537209 * safezoneW;
			h = 0.055 * safezoneH;
			action = "closeDialog 2;";
		};
		class odin_assetList: RscListbox
		{
			idc = 1500;
			x = 0.358023 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.188023 * safezoneW;
			h = 0.319 * safezoneH;
		};
		class odin_text_assetListHeader: RscText
		{
			idc = 1000;
			text = "Asset List:"; //--- ToDo: Localize;
			x = 0.369535 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0306977 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {0,0,0,1};
			colorActive[] = {0,0,0,1};
		};
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT END
		////////////////////////////////////////////////////////

	};
};