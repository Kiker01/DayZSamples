class CfgPatches
{
	class JD_RazorRDS
	{
		units[]=
		{
			"JD_RazorRDS"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics"
		};
	};
};
class cfgVehicles
{
	class ItemOptics;
	class JD_RazorRDS: ItemOptics
	{
		scope=2;
		displayName="JD_RazorRDS";
		descriptionShort="JD_RazorRDS";
		model="JDweapons\Attachments\Optics\RazorRDS\RazorRDS.p3d";
		attachments[]={};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[]={"weaponOptics"};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=16;
		reversed=0;
		weight=265;
		itemSize[]={2,1};
		recoilModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_ca.paa",
								"DZ\weapons\attachments\data\cm2.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_damage_ca.paa",
								"DZ\weapons\attachments\data\cm2_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0.0,
							
							{
								"DZ\weapons\attachments\optics\data\lensglass_destruct_ca.paa",
								"DZ\weapons\attachments\data\cm2_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin=0.5236;
			opticsZoomMax=0.5236;
			opticsZoomInit=0.5236;
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.4,0.05};
			PPLensProperties[]={1,0.15,0,0};
			PPBlurProperties=0.2;
			opticSightTexture="#(argb,8,8,3)color(1,0,0,1.0,co)";
		};
		repairableWithKits[]={5,7};
		repairCosts[]={30,25};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
};