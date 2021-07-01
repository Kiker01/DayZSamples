class CfgPatches
{
	class JD_HoloSun
	{
		units[]=
		{
			"JD_HoloSun"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Characters"
		};
	};
};
class cfgVehicles
{
	class ItemOptics;
	class JD_HoloSun_Optic: ItemOptics
	{
		scope=2;
		displayName="Holosun";
		descriptionShort="Holosun";
		model="JDweapons\Attachments\Optics\Holosun\Holosun.p3d";
		attachments[]=
		{
		};
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
		
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={100};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
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
