class CfgPatches
{
	class JD_FNFAL
	{
		units[]={};
		weapons[]=
		{
			"JD_FNFAL"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Magazines",
			"DZ_Weapons_Muzzles",
			"DZ_Weapons_Optics"
		};
		magazines[]={};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class FAL;
	class Rifle_Base;
	class JD_FNFAL_Base: FAL
	{
		scope=0;
		weight=2500;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={0,0,0,0,0,0};
		WeaponLength=0.75222802;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"Mag_FAL_20Rnd",
			"JD_Mag_FAL_20Rnd",
			"JD_Mag_FAL_30Rnd",
			"JD_Mag_FAL_40Rnd"
		};
		magazineSwitchTime=0.44999999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1};
		reloadAction="ReloadFal";
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"FNFAL_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.085000001;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"FNFAL_Shot_SoundSet",
				"FNFAL_Tail_SoundSet",
				"FNFAL_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNFAL_silencerHomeMade_SoundSet",
					"FNFAL_silencerHomeMadeTail_SoundSet",
					"FNFAL_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.085000001;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={50};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=50;
			distanceZoomMax=50;
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed=1;
					overrideDirectionVector[]={0,45,0};
					positionOffset[]={0.0099999998,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=7;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.40000001};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.40000001,0.89999998};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.89999998,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.2,0,0};
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
	};
	class JD_FNFAL: JD_FNFAL_Base
	{
		scope=2;
		displayName="LAR";
		descriptionShort="The LAR is one of the most widely used rifles in history. The battle rifle was designed by Belgian small arms designer Dieudonné Saive and manufactured by FN Herstal. During the Cold War the LAR was adopted by many countries of the North Atlantic Treaty Organization, with the notable exception of the United States.  Due to its prevalence and widespread usage among the militaries of many NATO and first world countries during the Cold War, it received the title 'The right arm of the Free World'. Chambered in .308 Winchester rounds.";
		model="Mo_Guns\FNFAL\FAL.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponFlashlight",
			"weaponMuzzleAK",
			"suppressorImpro",
			"HuntingOptic",
			"weaponOptics"
		};
		itemSize[]={8,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"Mo_Guns\FNFAL\data\FNFAL.rvmat",
								"Mo_Guns\FNFAL\data\FNFALRailCover.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"Mo_Guns\FNFAL\data\FNFAL.rvmat",
								"Mo_Guns\FNFAL\data\FNFALRailCover.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Mo_Guns\FNFAL\data\FNFAL.rvmat",
								"Mo_Guns\FNFAL\data\FNFALRailCover_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"Mo_Guns\FNFAL\data\FNFAL_damage.rvmat",
								"Mo_Guns\FNFAL\data\FNFALRailCover_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"Mo_Guns\FNFAL\data\FNFAL_destruct.rvmat",
								"Mo_Guns\FNFAL\data\FNFALRailCover_destruct.rvmat"
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
	class Mag_FAL_20Rnd;
	class JD_Mag_FAL_20Rnd: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="LAR 20 Round Mag";
		descriptionShort = "A 20 round detachable box magazine for the LAR, loaded with .308 Winchester rounds." \n "Property of BLACKOUT";
		
		model="Mo_Guns\FNFAL\SmallMag.p3d";
		weight=110;
		itemSize[]={1,2};
		count=20;
		ammo="Bullet_308Win";
        ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
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
							}
						},
						
						{
							0.69999999,
							
							{
							}
						},
						
						{
							0.5,
							
							{
							}
						},
						
						{
							0.30000001,
							
							{
							}
						},
						
						{
							0.0,
							
							{
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
	class JD_Mag_FAL_30Rnd: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="LAR 30 Round Mag";
		descriptionShort = "A 30 round detachable box magazine for the LAR, loaded with .308 Winchester rounds." \n "Property of BLACKOUT";
		model="Mo_Guns\FNFAL\MediumMag.p3d";
		weight=110;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_308Win";
        ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
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
								"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"
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
	class JD_Mag_FAL_40Rnd: Mag_FAL_20Rnd
	{
		scope=2;
		displayName="LAR 40 Round Mag";
		descriptionShort = "A 40 round detachable box magazine for the LAR, loaded with .308 Winchester rounds." \n "Property of BLACKOUT";
		model="Mo_Guns\FNFAL\Mag_Long.p3d";
		weight=110;
		itemSize[]={1,4};
		count=40;
		ammo="Bullet_308Win";
        ammoItems[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
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
								"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\weapons\attachments\magazine\data\fal_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\attachments\magazine\data\fal_mag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\weapons\attachments\magazine\data\fal_mag_destruct.rvmat"
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
};
