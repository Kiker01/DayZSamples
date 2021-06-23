class CfgPatches
{
	class mando_helmet
	{
		units[]=
		{
			"mando_helmet"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Pants",
			"DZ_Characters_Tops",
			"DZ_Characters_Headgear",
			"DZ_Data"
		};
	};
	
};
class CfgVehicles
{	
	class Mich2001Helmet;
	class JD_MandoHelmet_Base: Mich2001Helmet
	{
		scope=0;
		displayName="Tactical Next-Gen Helmet";
		descriptionShort="Tactical Next-Gen Helmet that offers protect to the face and head. Made by jdfnc24.";
		model="Mo_Guns\NewMandoHelmet\MandoHelmet_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]=
		{
			"NVG"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noMask=0;
		varWetMax=0.249;
		heatIsolation=0.25;
		visibilityModifier=0.95;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=80;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"Mo_Guns\NewMandoHelmet\data\helmet.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"Mo_Guns\NewMandoHelmet\data\helmet.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Mo_Guns\NewMandoHelmet\data\helmet_Damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"Mo_Guns\NewMandoHelmet\data\helmet_Damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"Mo_Guns\NewMandoHelmet\data\helmet_Destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25999999;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="Mo_Guns\NewMandoHelmet\MandoHelmet_m.p3d";
			female="Mo_Guns\NewMandoHelmet\MandoHelmet_f.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class JD_MandoHelmet: JD_MandoHelmet_Base
	{
		scope=2;
	};
	class JD_MandoHelmet_Black: JD_MandoHelmet_Base
	{
		scope=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Mo_Guns\NewMandoHelmet\data\Helmet_dark_co.paa"};
	};
	class JD_MandoHelmet_Digital_Woodland: JD_MandoHelmet_Base
	{
		scope=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Mo_Guns\NewMandoHelmet\data\Helmet_digitalwood_co.paa"};
	};
	class JD_MandoHelmet_Multicam_Black: JD_MandoHelmet_Base
	{
		scope=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Mo_Guns\NewMandoHelmet\data\Helmet_multicam_black_co.paa"};
	};
	class JD_MandoHelmet_Multicam: JD_MandoHelmet_Base
	{
		scope=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Mo_Guns\NewMandoHelmet\data\Helmet_multicam_co.paa"};
	};
	class JD_MandoHelmet_Multicam_Green: JD_MandoHelmet_Base
	{
		scope=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Mo_Guns\NewMandoHelmet\data\Helmet_multicam_green_co.paa"};
	};
	class JD_MandoHelmet_ODGreen: JD_MandoHelmet_Base
	{
		scope=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Mo_Guns\NewMandoHelmet\data\Helmet_ODgreen_co.paa"};
	};
	class JD_MandoHelmet_RUGreen: JD_MandoHelmet_Base
	{
		scope=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Mo_Guns\NewMandoHelmet\data\Helmet_RUgreen_co.paa"};
	};
	class JD_MandoHelmet_Tan: JD_MandoHelmet_Base
	{
		scope=2;
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"Mo_Guns\NewMandoHelmet\data\Helmet_tan_co.paa"};
	};
};