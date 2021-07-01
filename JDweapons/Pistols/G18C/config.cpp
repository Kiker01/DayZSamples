class CfgPatches
{
	class JD_G18C
	{
		units[]=
		{
			"JD_G18C"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoPistol;
class cfgWeapons
{
	class Glock19;
	class JD_G18C_Base: Glock19
	{
		scope=0;
		PPDOFProperties[]={0,0,0,0,0,0};
		ironsightsExcludingOptics[]=
		{
			"FNP45_MRDSOptic"
		};
		magazines[]=
		{
			"JD_Mag_G18C_17rnd",
			"JD_Mag_G18C_17rnd_Tracer",
			"JD_Mag_G18C_17rnd_AP",
			"JD_Mag_G18C_17rnd_HP",
			"JD_Mag_G18C_33rnd",
			"JD_Mag_G18C_33rnd_tracer",
			"JD_Mag_G18C_33rnd_AP",
			"JD_Mag_G18C_33rnd_HP",
			"JD_Mag_G18C_50rnd",
			"JD_Mag_G18C_50rnd_tracer",
			"JD_Mag_G18C_50rnd_AP",
			"JD_Mag_G18C_50rnd_HP"
			
		};
		chamberableFrom[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
		ejectType=1;
		recoilModifier[]={0.75,0.75,0.75};
		swayModifier[]={0.75,0.75,0.75};
		reloadAction="ReloadGlock";
		modes[]=
		{
			"FullAuto","Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Glock19_Shot_SoundSet",
				"Glock19_Tail_SoundSet",
				"Glock19_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Glock19_silencerPro_SoundSet",
					"Glock19_silencerTail_SoundSet",
					"Glock19_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.13;
			recoil="recoil_Glock";
			recoilProne="recoil_Glock_prone";
			dispersion=0.005;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Glock19_Shot_SoundSet",
				"Glock19_Tail_SoundSet",
				"Glock19_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Glock19_silencerPro_SoundSet",
					"Glock19_silencerTail_SoundSet",
					"Glock19_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.059000002;
			recoil="recoil_fnx";
			recoilProne="recoil_fnx_prone";
			dispersion=0.0060000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					overrideParticle="weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=7;
				overheatingDecayInterval=1;
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
	};
	class JD_G18C: JD_G18C_Base
	{
		scope=2;
		displayName = "Glock G18C";
		descriptionShort = "The Glock G18C is a selective-fire variant of the Glock-17, developed at the request of the Austrian counter-terrorist unit EKO Cobra, and as a way to internally test Glock components under high strain conditions. Originally produced in 1986, this machine pistol–class firearm has a lever-type fire-control selector switch, installed on the serrated portion of the rear left side of the slide. With the selector lever in the bottom position, the pistol fires fully automatically, and with the selector lever in the top position, the pistol fires semi-automatically. Chambered with 9x19mm rounds." ;
		
		model="JDweapons\Pistols\G18C\G18C.p3d";
		attachments[]=
		{
			"pistolOptics",
			"pistolFlashlight"
		};
		itemSize[]={3,2};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1500;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"DZ\weapons\pistols\glock\data\glock19.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\pistols\glock\data\glock19.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\pistols\glock\data\glock19_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\pistols\glock\data\glock19_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\weapons\pistols\glock\data\glock19_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Mag_Glock_15Rnd;
	class JD_Mag_G18C_17rnd: Mag_Glock_15Rnd
	{
		scope=2;
		displayName="17rnd Glock G18C Magazine";
		descriptionShort="A 17 round magazine for the Glock G18C, loaded with 9x19mm rounds.";
		
		model="JDweapons\Pistols\G18C\G18C_mag.p3d";
		weight=110;
		itemSize[]={1,2};
		count=17;
		ammo="Bullet_9x19";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
		tracersEvery=0;
		mass=10;
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
								"DZ\weapons\attachments\data\cz75_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\data\cz75_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\cz75_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\data\cz75_mag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\weapons\attachments\data\cz75_mag_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
	class JD_Mag_G18C_17rnd_Tracer: JD_Mag_G18C_17rnd
	{
		scope=2;
		count=17;
		ammo="Bullet_9x19_tracer";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
	};
	class JD_Mag_G18C_17rnd_AP: JD_Mag_G18C_17rnd
	{
		scope=2;
		count=17;
		ammo="Bullet_9x19_AP";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
	};
	class JD_Mag_G18C_17rnd_HP: JD_Mag_G18C_17rnd
	{
		scope=2;
		count=17;
		ammo="Bullet_9x19_HP";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
	};	
	class JD_Mag_G18C_33rnd: Mag_Glock_15Rnd
	{
		scope=2;
		displayName="33rnd Glock G18C Magazine";
		descriptionShort="A 33 round magazine for the Glock G18C, loaded with 9x19mm rounds.";
		
		model="JDweapons\Pistols\G18C\Glock33rndMag.p3d";
		weight=110;
		itemSize[]={1,2};
		count=33;
		ammo="Bullet_9x19";
        ammoItems[]=
		{
			"Ammo_9x19"
		};
		tracersEvery=0;
		mass=10;
	};
	class JD_Mag_G18C_33rnd_Tracer: JD_Mag_G18C_33rnd
	{
		scope=2;
		count=33;
		ammo="Bullet_9x19_tracer";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
	};
	class JD_Mag_G18C_33rnd_AP: JD_Mag_G18C_33rnd
	{
		scope=2;
		count=33;
		ammo="Bullet_9x19_AP";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
	};
	class JD_Mag_G18C_33rnd_HP: JD_Mag_G18C_33rnd
	{
		scope=2;
		count=33;
		ammo="Bullet_9x19_HP";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
	};
	class JD_Mag_G18C_50rnd: Mag_Glock_15Rnd
	{
		scope=2;
		displayName="50rnd Glock G18C Magazine";
		descriptionShort="A 50 round magazine for the Glock G18C, loaded with 9x19mm rounds.";
		
		model="JDweapons\Pistols\G18C\Glock50rndMag.p3d";
		weight=110;
		itemSize[]={2,2};
		recoilModifier[]={0.8,0.8,0.8};
		count=50;
		ammo="Bullet_9x19";
        ammoItems[]=
		{
			"Ammo_9x19"
		};
		tracersEvery=0;
		mass=10;
	};
	class JD_Mag_G18C_50rnd_Tracer: JD_Mag_G18C_50rnd
	{
		scope=2;
		count=50;
		ammo="Bullet_9x19_tracer";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
	};
	class JD_Mag_G18C_50rnd_AP: JD_Mag_G18C_50rnd
	{
		scope=2;
		count=50;
		ammo="Bullet_9x19_AP";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
	};
	class JD_Mag_G18C_50rnd_HP: JD_Mag_G18C_50rnd
	{
		scope=2;
		count=50;
		ammo="Bullet_9x19_HP";
        ammoItems[]=
		{
			"Ammo_9x19",
			"Ammo_9x19_Tracer",
			"Ammo_9x19_AP",
			"Ammo_9x19_HP"
		};
	};
};
