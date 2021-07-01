class CfgPatches
{
	class JD_PDWR
	{
		units[]=
		{
			"JD_PDWR"
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
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class JD_PDWR_Base: Rifle_Base
	{
		scope=0;
		weight=1746;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[] = {0,0,0,0,0,0};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		WeaponLength=0.48108799;
		chamberSize=1;
		chamberedRound="";
		magazineSwitchTime=0.5;
		barrelArmor=800;
		ejectType=1;
		recoilModifier[]={0.65,0.65,0.65};
		swayModifier[]={0.75,0.75,0.6};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadCZ61";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",
			0.8,
			1,
			20
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_cz61_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					onlyWithinRainLimits[]={0,0.2};
					ignoreIfSuppressed=1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.1,0.02,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=25;
		};
	};
	class JD_PDWR: JD_PDWR_Base
	{
		scope=0;
		displayName="Magpul PDWR";
		descriptionShort="Magpul PDWR";
		model="JDweapons\SMGs\PDWR\PDWR.p3d";
		attachments[]=
		{
			"weaponMuzzleM4",
			"weaponOptics",
			"weaponWrap",
			"weaponBipod"
		};
		itemSize[]={5,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"JDweapons\SMGs\PDWR\data\PDWR.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"JDweapons\SMGs\PDWR\data\PDWR.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\PDWR\data\PDWR_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\PDWR\data\PDWR_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\PDWR\data\PDWR_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class JD_PDWR_556: JD_PDWR
	{
		scope=2;
		displayName="Magpul PDR-C";
		descriptionShort="The Magpul PDR is a prototype bullpup-style carbine unveiled by Magpul Industries in 2006. Although halted in development as of 2011 it has garnered some attention, largely due to its 'futuristic' appearance. The system consists of a gas-operated bullpup carbine intended to replace some submachine guns, M9 pistols and M4 carbines while still offering the rapid fire and range of a M4 carbine in an ultra compact firearm. Chambered in 5.56x45mm NATO rounds and accepts compatible magazines.";
		
		model="JDweapons\SMGs\PDWR\PDWR.p3d";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"JD_RifleShot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"JD_Suppressed_RifleShot_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"JD_Suppressed_RifleShot_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00125;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"JD_RifleShot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"JD_Suppressed_RifleShot_SoundSet",
					"M4_silencerTail_SoundSet",
					"M4_silencerInteriorTail_SoundSet"
				},
				
				{
					"JD_Suppressed_RifleShot_SoundSet",
					"M4_silencerHomeMadeTail_SoundSet",
					"M4_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.0857;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00125;
			magazineSlot="magazine";
		};
		
	};
};
