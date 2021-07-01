class CfgPatches
{
	class JD_ACOG
	{
		units[]=
		{
			"JD_ACOG"
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
	class JD_ACOG: ItemOptics
	{
		scope=2;
		displayName="JD's ACOG";
		descriptionShort="Bringing an exciting spin to the 4x32 Trijicon ACOG, this model comes with a clean SRO red dot mounted on top for those quick transitions. An excellent choice for those SBR platforms.";
		model="JDweapons\Attachments\Optics\ACOG\BO_ACOG3.p3d";
		animClass="Binoculars";
		rotationFlags=16;
		reversed=0;
		weight=440;
		itemSize[]={2,1};
		inventorySlot[]={"weaponOptics"};
		selectionFireAnim="zasleh";
		simulation="itemoptics";
		dispersionModifier=-0.00012500001;
		dispersionCondition="true";
		recoilModifier[]={1,1,1};
		swayModifier[]={1,1,1};
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"JDweapons\Attachments\Optics\ACOG\data\opticview_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","JDweapons\Attachments\Optics\ACOG\data\FO.rvmat","JDweapons\Attachments\Optics\ACOG\data\FiberOptic.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount_mrd.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr_glass.rvmat"}},
						{0.7,{"JDweapons\Attachments\Optics\ACOG\data\opticview_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard.rvmat","JDweapons\Attachments\Optics\ACOG\data\FO.rvmat","JDweapons\Attachments\Optics\ACOG\data\FiberOptic.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount_mrd.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr_glass.rvmat"}},
						{0.5,{"JDweapons\Attachments\Optics\ACOG\data\opticview_damaged_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","JDweapons\Attachments\Optics\ACOG\data\FO_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\fiberoptic_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount_mrd_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr_glass.rvmat"}},
						{0.3,{"JDweapons\Attachments\Optics\ACOG\data\opticview_damaged_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat","JDweapons\Attachments\Optics\ACOG\data\FO_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\fiberoptic_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount_mrd_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr_damaged.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr_glass.rvmat"}},
						{0.0,{"JDweapons\Attachments\Optics\ACOG\data\opticview_destruct_ca.paa","DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat","JDweapons\Attachments\Optics\ACOG\data\FO_destruct.rvmat","JDweapons\Attachments\Optics\ACOG\data\FiberOptic_destruct.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount_destruct.rvmat","JDweapons\Attachments\Optics\ACOG\data\Mount_mrd_destruct.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr_destruct.rvmat","JDweapons\Attachments\Optics\ACOG\data\rmr_glass.rvmat"}}
						};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			opticsDisablePeripherialVision=0.67000002;
			modelOptics = "-";
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin="0.3926/4.35";
			opticsZoomMax="0.3926/4.35";
			opticsZoomInit="0.3926/4.35";
			distanceZoomMin=100;
			distanceZoomMax=600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.375,0.050000001};
			PPLensProperties[]={0.5,0.15000001,0,0};
			PPBlurProperties=0.05000002;
			opticSightTexture="#(argb,8,8,3)color(1,0,0,1.0,CO)";
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera="eyeIronsights";
			cameraDir="cameraDirIronsights";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=50;
			distanceZoomMax=150;
			discreteDistance[]={50,100,150};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.375,0.050000001};
			PPLensProperties[]={0.5,0.15000001,0,0};
			PPBlurProperties=0.40000002;
			PPDOFProperties[] = {0,0,0,0,0,0};
		};
	};
	class JD_ACOG_Horseshoe: JD_ACOG
	{
		scope=2;
		displayName="JD's ACOG (Horseshoe Reticle)";
		descriptionShort="Horseshoe ACOG scope. Made by your friendly neighborhood JD :)";
		model="JDweapons\Attachments\Optics\ACOG\BO_ACOG300.p3d";
	};
	
};