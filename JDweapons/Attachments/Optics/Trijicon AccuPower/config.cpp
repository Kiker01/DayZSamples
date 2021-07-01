class CfgPatches
{
	class JD_AccuPower
	{
		units[]=
		{
			"JD_AccuPower"
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
	class JD_AccuPower: ItemOptics
	{
		scope=2;
		displayName="Trijicon AccuPower";
		descriptionShort="Made by your friendly neighborhood JD :), this Trijicon 1-8x28 scope offers a great mid range alternative for operatives looking to engage targets at a safer distance.";
		model="JDweapons\Attachments\Optics\Trijicon AccuPower\AccuPower.p3d";
		animClass="Binoculars";
		rotationFlags=16;
		reversed=0;
		weight=440;
		itemSize[]={2,1};
		inventorySlot[]={"weaponOptics"};
		selectionFireAnim="zasleh";
		simulation="itemoptics";
		dispersionModifier=-9.9999997e-005;
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
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPower.rvmat",
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPowerMount.rvmat"
							}
						},
						
						{
							0.7,
							{
								"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard.rvmat",
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPower.rvmat",
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPowerMount.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPower_damage.rvmat",
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPowerMount_damage.rvmat"
							}
						},
						
						{
							0.3,
							{
								"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard_damage.rvmat",
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPower_damage.rvmat",
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPowerMount_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa",
								"DZ\weapons\attachments\optics\data\lensglass_standard_destruct.rvmat",
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPower_destruct.rvmat",
								"JDweapons\Attachments\Optics\Trijicon AccuPower\Data\AccuPowerMount_destruct.rvmat"
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
			opticsDisablePeripherialVision=0.67;
			modelOptics = "-";
			opticsFlare=1;
			opticsPPEffects[]={};
			opticsZoomMin="0.3926/2.5";
			opticsZoomMax="0.3926/6";
			opticsZoomInit="0.3926/2.5";
			discretefov[]=
			{
				"0.3926/2.5",
				"0.3926/4",
				"0.3926/6"
				
			};
			distanceZoomMin=100;
			distanceZoomMax=600;
			discreteDistance[]={100,200,300,400,500,600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0,0,0,0.};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0.0;
		};
	};
};