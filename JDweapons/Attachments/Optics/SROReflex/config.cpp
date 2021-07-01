class CfgPatches
{
	class JD_SRO_REDDOT
	{
		units[]=
		{
			"JD_SRO_REDDOT"
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
	class JD_SRO_REDDOT: ItemOptics
	{
		scope=2;
		displayName="TRIJICON SRO REDDOT";
		descriptionShort="The Trijicon SRO® (Specialized Reflex Optic) is designed with a maximized field of view and a clean, crisp red dot that deliver improved pistol accuracy";
		model="JDweapons\Attachments\Optics\SROReflex\SROReflex.p3d";
		animClass="Binoculars";
		rotationFlags=4;
		reversed=0;
		weight=150;
		itemSize[]={1,1};
		inventorySlot[]=
		{
			"pistolOptics",
			"weaponOpticsCrossbow"
		};
		simulation="itemoptics";
		dispersionModifier=-0.00025;
		dispersionCondition="true";
		recoilModifier[]={1,1,1};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		selectionFireAnim="zasleh";
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
			distanceZoomMin=50;
			distanceZoomMax=50;
			discreteDistance[]={50};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.4,0.05};
			PPLensProperties[]={1,0.15,0,0};
			PPBlurProperties=0;
			PPDOFProperties[] = {0,0,0,0,0,0};
			opticSightTexture="#(argb,8,8,3)color(1,0,0,1.0,co)";
		};

	};
	
};