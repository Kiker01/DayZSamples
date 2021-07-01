class CfgPatches
{
	class JD_SpecterOptic
	{
		units[]=
		{
			"JD_SpecterOptic"
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
	class JD_SpecterOptic: ItemOptics
	{
		scope=2;
		displayName="SPECTER Optic";
		descriptionShort="The Elcan SpecterDR Dual Role 1-4x Optical Sight w/Integral A.R.M.S. Picatinny Mount is a dual-threat optic that offers two different sights that allow you to navigate both CQB and mid-range situations with precision and speed. Switch between the 1-4x with the throw of a lever";
		model="JDweapons\Attachments\Optics\Specter\SpecterScope.p3d";
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
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
								"DZ\weapons\attachments\data\acog.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
								"DZ\weapons\attachments\data\acog_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
								"DZ\weapons\attachments\data\acog_destruct.rvmat"
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
			opticsDisablePeripherialVision=0.67000002;
			modelOptics = "-";
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin="0.3926/4";
			opticsZoomMax="0.3926/4";
			opticsZoomInit="0.3926/4";
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
	class JD_SpecterOptic_SRO: JD_SpecterOptic
	{
		scope=2;
		displayName="SPECTER Optic";
		descriptionShort="The Elcan SpecterDR Dual Role 1-4x Optical Sight w/Integral A.R.M.S. Picatinny Mount is a dual-threat optic that offers two different sights that allow you to navigate both CQB and mid-range situations with precision and speed. Switch between the 1-4x with the throw of a lever";
		model="JDweapons\Attachments\Optics\Specter\SpecterScopeSRO.p3d";
	};
};