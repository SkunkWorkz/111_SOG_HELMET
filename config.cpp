class CfgPatches 
{

	class SOG_HELMET 
	{
		units[] = {"SOGhelmet", "SOGhat"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F", "A3_Characters_F_EPA"};

	};

};

class CfgGlasses
{
	class G_Aviator;
	class FIR_Visor_Black_down: G_Aviator
	{
		author="Firewill";
		displayName="111th HGU-55/P Visor Black Close";
		model = "\111_SOG_HELMET\FIR_Visor_Black_down.p3d"; 
		hiddenSelections[]=
		{
		};
		hiddenSelectionsTextures[]=
		{
		};
		identityTypes[] = {"NoGlasses",0,"FIR_Visor",25};
		//fir_visor = 1;				
		//fir_visor_reverse_code = "FIR_Visor_Black_up";				
	};
};
class CFGWeapons
{
	class ItemCore;
	class HeadgearItem;
	
	class 111_HelmetBase: ItemCore
	{
		weaponPoolAvailable = 1;
		scope = 1;
		displayName = "$STR_A3_H_HelmetB0";
		picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
		descriptionShort = "$STR_A3_SP_NOARMOR";
		class ItemInfo: HeadgearItem
		{
			mass = 0;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	
	class 111_HelmetB: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "H_HelmetB";
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "$STR_A3_H_HelmetB0";
		picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_II";
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class 111_H_HelmetB: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "$STR_A3_H_HelmetB0";
		picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\equip1_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class 111_H_HelmetB_light: 111_H_HelmetB
	{
		author = "Krossin";
		scope = 1;
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		displayName = "111 Special Operations Group Helmet Light";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		class ItemInfo: ItemInfo
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class 111_SOG_HELMET_LIGHT_BLK: 111_H_HelmetB_light
	{
		author = "Krossin";
		scope = 2;
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_black_ca.paa";
		displayName = "111 Special Operations Group Helmet (BLK)";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_HELMET_LIGHT_BLK_co.paa"};
	};

	
	//------------------------------------Hats and such-----------------------------------------//
	class 111_SOG_HAT_BASE: 111_HelmetBase
	{
		author = "Krossin";
		scope = 1;
		displayName = "$STR_A3_H_Booniehat_khk0_boot";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Civil\Data\booniehat_khk_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {6};
		};
	};
	
	class 111_SOG_BOONIE_BLK_URB: 111_SOG_HAT_BASE
	{
		author = "Krossin";
		scope = 2;
		displayName = "111th SOG Boonie (BLK URB)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_BOONIE_BLK_URB_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_BOONIE_BLK: 111_SOG_HAT_BASE
	{
		author = "Krossin";
		scope = 2;
		displayName = "111th SOG Boonie (BLK)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_BOONIE_BLK_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_BOONIE_TAN: 111_SOG_HAT_BASE
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG Boonie (TAN)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\booniehat_tan_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_BOONIE_WDL: 111_SOG_HAT_BASE
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG Boonie (WDL)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\booniehat_wdl_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_BOONIE_WHT: 111_SOG_HAT_BASE
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG Boonie (WHT)";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_H_Booniehat_oli_ca.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\booniehat_wht_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_Cap: 111_HelmetBase
	{
		author = "Krossin";
		scope = 1;
		displayName = "111th SOG Cap";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		model = "\A3\Characters_F\common\capb_headphones";
		hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\capb_headphones_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 8;
			uniformModel = "\A3\Characters_F\common\capb_headphones";
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			//hiddenSelectionsTextures[] = {"\111_SOG_HELMET\data\111_SOG_CAPHP_co.paa.paa"};
			allowedSlots[] = {801,901,701,605};
		};
	};
	/*
	class 111_SOG_Cap_Back: 111_HelmetBase
	{
		author = "Krossin";
		scope = 1;
		displayName = "111th SOG Backwards Cap";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		model = "\111_SOG_HELMET\common\CUP_EP_Cap_Back.p3d";
		hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\capb_headphones_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 8;
			uniformModel = "\111_SOG_HELMET\common\CUP_EP_Cap_Back.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"camo3"};
			//hiddenSelectionsTextures[] = {"\111_SOG_HELMET\data\111_SOG_CAPHP_co.paa.paa"};
			allowedSlots[] = {801,901,701,605};
		};
	};
	*/
	class 111_SOG_Cap_HP_111: 111_SOG_Cap
	{
		author = "Krossin";
		scope = 2;
		displayName = "111th SOG Cap with Headphones (BLK 111th)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_111_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_Cap_HP_BLK: 111_SOG_Cap
	{
		author = "Krossin";
		scope = 2;
		displayName = "111th SOG Cap with Headphones (BLK)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_Cap_HP_CIA2: 111_SOG_Cap
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG Cap with Headphones (BLK CIA)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA2_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_Cap_HP_TAN: 111_SOG_Cap
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG Cap with Headphones (TAN CIA)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_TAN_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_Cap_HP_WDL: 111_SOG_Cap
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG Cap with Headphones (WDL CIA)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_WDL_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	class 111_SOG_Cap_HP_WHT: 111_SOG_Cap
	{
		author = "Krossin & Dagger";
		scope = 2;
		displayName = "111th SOG Cap with Headphones (WHT CIA)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_WHT_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	
	//-------------------------------------Reverse Caps---------------------------------------------//
	/*
	class 111_SOG_Cap_HP_WDL_BACK: 111_SOG_Cap_Back
	{
		author = "Krossin";
		scope = 2;
		displayName = "111th SOG Reverse Cap with Headphones (WDL CIA)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_WDL_co.paa"};
		allowedFacewear[] = {"",6.5,"G_Aviator",1,"G_Bandanna_aviator",1,"G_Bandanna_beast",1,"G_Bandanna_blk",1,"G_Bandanna_khk",1,"G_Bandanna_oli",1,"G_Bandanna_shades",1,"G_Bandanna_sport",1,"G_Bandanna_tan",1,"G_Shades_Black",1,"G_Shades_Blue",1,"G_Shades_Red",1,"G_Shades_Green",1};
	};
	*/
	class 111_SOG_Cap_HP_WDL_BACK: ItemCore
	{
		scope = 2;
		author = "Krossin & Dagger";
		displayName = "111th SOG Reverse Cap w/ HP (WDL CIA)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		model = "\111_SOG_HELMET\CUP_EP_Cap_Back.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_WDL2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\111_SOG_HELMET\CUP_EP_Cap_Back.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo3"};
			hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_WDL2_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	
	class 111_SOG_Cap_HP_BLK_BACK: ItemCore
	{
		scope = 2;
		author = "Krossin & Dagger";
		displayName = "111th SOG Reverse Cap w/ HP (BLK CIA)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		model = "\111_SOG_HELMET\CUP_EP_Cap_Back.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_BLK2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\111_SOG_HELMET\CUP_EP_Cap_Back.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo3"};
			hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_BLK2_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	
	class 111_SOG_Cap_HP_TAN_BACK: ItemCore
	{
		scope = 2;
		author = "Krossin & Dagger";
		displayName = "111th SOG Reverse Cap w/ HP (TAN CIA)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		model = "\111_SOG_HELMET\CUP_EP_Cap_Back.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_TAN2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\111_SOG_HELMET\CUP_EP_Cap_Back.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo3"};
			hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_TAN2_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	
	class 111_SOG_Cap_HP_WHT_BACK: ItemCore
	{
		scope = 2;
		author = "Krossin & Dagger";
		displayName = "111th SOG Reverse Cap w/ HP (WHT CIA)";
		picture = "\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		model = "\111_SOG_HELMET\CUP_EP_Cap_Back.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_WHT2_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\111_SOG_HELMET\CUP_EP_Cap_Back.p3d";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo3"};
			hiddenSelectionsTextures[] = {"\111_SOG_HELMET\Data\111_SOG_CAPHP_CIA_WHT2_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	
	//--------------------------------------------Air Helmets-----------------------------------------------------//
	//----------------Heli Open Face------------//
	class 111_PilotHelmetHeli_B: 111_H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		_generalMacro = "H_PilotHelmetHeli_B";
		displayName = "$STR_A3_H_PilotHelmetHeli_B0";
		picture = "\A3\characters_f\Data\UI\icon_H_Pilot_Helmet_Heli_B_CA.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_blk_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 30;
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class 111_PilotHelmetHeli_Krossin_blk: 111_PilotHelmetHeli_B
	{
		author = "Krossin & Shrike";
		scope = 2;
		displayName = "111th Helmet Heli Krossin (BLK)";
		picture = "\A3\Characters_F\data\ui\icon_H_Pilot_Helmet_Heli_B_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\data\111_helmet_heli_blk_krs_co"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {0,3};
		};
	};
	class 111_PilotHelmetHeli_Shrike_grn: 111_PilotHelmetHeli_B
	{
		author = "Krossin & Shrike";
		scope = 2;
		displayName = "111th Helmet Heli Shrike (GRN)";
		picture = "\A3\Characters_F\data\ui\icon_H_Pilot_Helmet_Heli_OI_CA.paa";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\helmet_heli_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[] = {0,3};
		};
	};
	
	//----------------Heli Shield Face------------//
	class 111_CrewHelmetHeli_B: 111_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		_generalMacro = "H_CrewHelmetHeli_B";
		displayName = "$STR_A3_H_CrewHelmetHeli_B0";
		picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
		model = "A3\Characters_F\Common\headgear_helmet_heli_shield";
		hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\helmet_heli_blk_co.paa"};
		class ItemInfo: ItemInfo
		{
			mass = 50;
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class 111_CrewHelmetHeli_Krossin: 111_CrewHelmetHeli_B
	{
		author = "Krossin, Shrike & Dagger";
		scope = 2;
		displayName = "111th Crew Helmet Krossin";
		picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\data\111_helmet_heli_blk_krs_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {0,3};
		};
	};
	class 111_CrewHelmetHeli_Shrike: 111_CrewHelmetHeli_B
	{
		author = "Krossin, Shrike & Dagger";
		scope = 2;
		displayName = "111th Crew Helmet Shrike";
		picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_OI_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\data\111_helmet_heli_blk_krs_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {0,3};
		};
	};
	class 111_CrewHelmetHeli_Dagger: 111_CrewHelmetHeli_B
	{
		author = "Krossin, Shrike & Dagger";
		scope = 2;
		displayName = "111th Crew Helmet Dagger";
		picture = "\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_OI_CA.paa";
		hiddenSelectionsTextures[] = {"\111_SOG_HELMET\data\111_helmet_heli_blk_krs_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[] = {0,3};
		};
	};
	
	//----------------Fighter Helmets------------//
	class 111_PilotHelmetFighter_B: 111_H_HelmetB
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 1;
		_generalMacro = "H_PilotHelmetFighter_B";
		displayName = "$STR_A3_H_PilotHelmetFighter_B0";
		picture = "\A3\characters_f\Data\UI\icon_H_PilotHelmetFighter_B_CA.paa";
		model = "A3\Characters_F\Common\headgear_helmet_pilot";
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\pilot_helmet_nato_co.paa"};
		descriptionShort = "$STR_A3_SP_AL_III";
		class ItemInfo: ItemInfo
		{
			mass = 60;
			uniformModel = "A3\Characters_F\Common\headgear_helmet_pilot";
			modelSides[] = {3,1};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
		subItems[] = {"Integrated_NVG_F"};
	};
	
	class 111_FIR_JHMCS_KROSSIN: 111_PilotHelmetFighter_B
    { 
        displayName = "111th Krossin (JHMCS)"; 
		scope = 2;
		picture = "\111_SOG_HELMET\pic\helmet1_pic_ca.paa";
        model = "\111_SOG_HELMET\FIR_JHMCS.p3d"; 
		
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"\111_SOG_HELMET\data\111_jhmcs_krossin_co.paa"};
        class ItemInfo : ItemInfo
        { 
            mass = 40; 
            allowedSlots[] = {901,605}; 
            uniformModel = "\111_SOG_HELMET\FIR_JHMCS.p3d"; 
            modelSides[] = {2,3}; 
            armor = 5; 
            passThrough = 0.6; 
			
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"\111_SOG_HELMET\data\helmet\111_jhmcs_krossin_co.paa"};
        }; 
    };
	
	class 111_FIR_USHelmetType1_Shrike: 111_PilotHelmetHeli_B
    { 
        displayName = "111th Shrike (HGU-55/P / MBU-20/P)"; 
		scope = 2;
		picture = "\111_SOG_HELMET\pic\helmet1_pic_ca.paa";
        model = "\111_SOG_HELMET\FIR_USHelmetType1.p3d"; 
		
		hiddenselections[] = {"Camo"};
		hiddenselectionstextures[] = {"\111_SOG_HELMET\data\111_helmet_co.paa"};
        class ItemInfo : ItemInfo
        { 
            mass = 40; 
            allowedSlots[] = {901,605}; 
            uniformModel = "\111_SOG_HELMET\FIR_USHelmetType1.p3d"; 
            modelSides[] = {2,3}; 
            armor = 5; 
            passThrough = 0.6; 
			
		hiddenselections[] = {"Camo"};
		hiddenselectionstextures[] = {"\111_SOG_HELMET\data\111_helmet_co.paa"};
        }; 
		fir_visor_type = "hgu55p";
    };
};