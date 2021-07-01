 class CfgPatches
{
	class JD_MP5
	{
		units[]=
		{
			"JD_MP5"
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
class cfgWeapons
{
	class Rifle_Base;
	class JD_MP5SD_Base: Rifle_Base
	{
		scope=0;
		weight=2700;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.75,40,180,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic"
		};
		WeaponLength=0.583269;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		magazines[]=
		{
			"Mag_MP5_15Rnd",
			"Mag_MP5_30Rnd",
			"JD_Mag_MP5_100Rnd"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={0.7,0.8,0.7};
		swayModifier[]={1.,1.15,1};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\mp5k\handling\mag_load",
			0.8,
			1,
			20
		};
		reloadAction="ReloadMP5";
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MP5SD_SoundSet",
				"MP5K_silencerTail_SoundSet",
				"MP5K_silencerInteriorTail_SoundSet"
			};
			reloadTime=0.125;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"MP5SD_SoundSet",
				"MP5K_silencerTail_SoundSet",
				"MP5K_silencerInteriorTail_SoundSet"
			};
			reloadTime=0.057;
			recoil="recoil_mp5";
			recoilProne="recoil_mp5_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.80000001};
					onlyWithinRainLimits[]={0,0.2};
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
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
		};
	};
	class JD_MP5SD: JD_MP5SD_Base
	{
		scope=2;
		displayName="H&K MP5SD";
		descriptionShort="Despite its integrated silencer element, it has the same length and shape as an unsilenced submachine gun. Unlike most conventional silenced submachine guns, it fires standard ammunition types with the same effect. Chambered in 9x19mm rounds.";
		model="JDweapons\SMGs\MP5\MP5SD.p3d";
		attachments[]=
		{
			"weaponOptics",
			"weaponWrap",
			"weaponTag"
		};
		itemSize[]={6,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"JDweapons\SMGs\MP5\data\body.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a1.rvmat","JDweapons\SMGs\MP5\data\stck_a1.rvmat","JDweapons\SMGs\MP5\data\stck_a2.rvmat"}},{0.7,{"JDweapons\SMGs\MP5\data\body.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a1.rvmat","JDweapons\SMGs\MP5\data\stck_a1.rvmat","JDweapons\SMGs\MP5\data\stck_a2.rvmat"}},{0.5,{"JDweapons\SMGs\MP5\data\body_damage.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2_damage.rvmat","JDweapons\SMGs\MP5\data\stck_a1_damage.rvmat"}},{0.3,{"JDweapons\SMGs\MP5\data\body_damage.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2_damage.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a1_damage.rvmat","JDweapons\SMGs\MP5\data\stck_a1_damage.rvmat","JDweapons\SMGs\MP5\data\stck_a2_damage.rvmat"}},{0.0,{"JDweapons\SMGs\MP5\data\body_destruct.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a1_destruct.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2_destruct.rvmat","JDweapons\SMGs\MP5\data\stck_a1_destruct.rvmat","JDweapons\SMGs\MP5\data\stck_a2_destruct.rvmat"}}};
				};
			};
		};
	};
	class JD_MP5A1: JD_MP5SD_Base
	{
		scope=2;
		displayName="H&K MP5A1";
		descriptionShort="H&K MP5A1 fully automatic sub machine made in Germany. Chambered in 9x19mm rounds.";
		model="JDweapons\SMGs\MP5\MP5A1.p3d";
		PPDOFProperties[]={1,0.75,40,180,4,10};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic"
		};
		WeaponLength=0.583269;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		magazines[]=
		{
			"Mag_MP5_15Rnd",
			"Mag_MP5_30Rnd",
			"JD_Mag_MP5_100Rnd"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={0.7,0.8,0.7};
		swayModifier[]={1.,1.15,1};
		attachments[]=
		{
			"weaponOptics",
			"weaponWrap",
			"weaponTag",
			"weaponMuzzleMP5",
			"pistolMuzzle"
		};
		itemSize[]={6,3};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MP5_Shot_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5SD_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5SD_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.125;
			recoil="recoil_auto_primary_7outof10";
			recoilProne="recoil_auto_primary_prone_7outof10";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"MP5_Shot_SoundSet",
				"MP5K_Tail_SoundSet",
				"MP5K_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"MP5SD_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				},
				
				{
					"MP5SD_SoundSet",
					"MP5K_silencerTail_SoundSet",
					"MP5K_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.057;
			recoil="recoil_auto_primary_7outof10";
			recoilProne="recoil_auto_primary_prone_7outof10";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"JDweapons\SMGs\MP5\data\body.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a1.rvmat","JDweapons\SMGs\MP5\data\stck_a1.rvmat","JDweapons\SMGs\MP5\data\stck_a2.rvmat"}},{0.7,{"JDweapons\SMGs\MP5\data\body.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a1.rvmat","JDweapons\SMGs\MP5\data\stck_a1.rvmat","JDweapons\SMGs\MP5\data\stck_a2.rvmat"}},{0.5,{"JDweapons\SMGs\MP5\data\body_damage.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2_damage.rvmat","JDweapons\SMGs\MP5\data\stck_a1_damage.rvmat"}},{0.3,{"JDweapons\SMGs\MP5\data\body_damage.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2_damage.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a1_damage.rvmat","JDweapons\SMGs\MP5\data\stck_a1_damage.rvmat","JDweapons\SMGs\MP5\data\stck_a2_damage.rvmat"}},{0.0,{"JDweapons\SMGs\MP5\data\body_destruct.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a1_destruct.rvmat","JDweapons\SMGs\MP5\data\hndgrd_a2_destruct.rvmat","JDweapons\SMGs\MP5\data\stck_a1_destruct.rvmat","JDweapons\SMGs\MP5\data\stck_a2_destruct.rvmat"}}};
				};
			};
		};
	
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp5k_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
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
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.80000001};
					onlyWithinRainLimits[]={0,0.2};
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
	};	
};

class cfgMagazines
{
	class Mag_MP5_30Rnd;
	class JD_Mag_MP5_100Rnd: Mag_MP5_30Rnd
	{
		scope=2;
		displayName="MP5 100 Rnd Drum Mag";
		descriptionShort="A 100 round drum mag for the MP5. Take 9x19mm";
		model="JDweapons\SMGs\MP5\drum\mp5_drum.p3d";
		weight=170;
		itemSize[]={3,2};
		count=100;
		ammo="Bullet_9x19";
		ammoItems[]=
		{
			"Ammo_9x19"
		};
		tracersEvery=0;
		mass=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"JDweapons\SMGs\MP5\drum\data\MP5Drum.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"JDweapons\SMGs\MP5\drum\data\MP5Drum.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\MP5\drum\data\MP5Drum_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\MP5\drum\data\MP5Drum_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\MP5\drum\data\MP5Drum_destruct.rvmat"
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