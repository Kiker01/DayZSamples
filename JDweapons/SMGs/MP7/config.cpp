class CfgPatches
{
	class JD_MP7
	{
		units[]=
		{
			"JD_MP7"
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
	class CZ61;
	class JD_MP7_Base: CZ61
	{
		scope=0;
		weight=3500;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[] = {0,0,0,0,0,0};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength=0.54108799;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_AE46x30AP",
			"Ammo_AE46x30"
		};
		magazines[]=
		{
			"JD_Mag_MP7_40Rnd",
			"JD_Mag_MP7_40Rnd_AP"
		};
		magazineSwitchTime=0.3;
		barrelArmor=800;
		ejectType=1;
		recoilModifier[]={0.4,0.5,0.4};
		swayModifier[]={1,1,1};
		
		reloadAction="ReloadCZ61";
		
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"MP7_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP7_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"MP7_silencer_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerInteriorHomeMadeTail_SoundSet"}};
			
			reloadTime = 0.125;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MP7_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP7_silencer_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"MP7_silencer_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerInteriorHomeMadeTail_SoundSet"}};
			
			
			reloadTime = 0.066;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
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
			discreteDistance[]={75,150};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
	};
	class JD_MP7: JD_MP7_Base
	{
		scope=2;
		displayName = "MP7";
		descriptionShort = "Heckler & Koch MP7 is a personal defense weapon chambered in HK 4.6×30mm";
		model="JDweapons\SMGs\MP7\MP7.p3d";
		attachments[]=
		{
			"pistolMuzzle",
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight"
		};
		itemSize[]={4,3};
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
								"JDweapons\SMGs\MP7\data\MP7.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"JDweapons\SMGs\MP7\data\MP7.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\MP7\data\MP7_damage.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\MP7\data\MP7_damage.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\MP7\data\MP7_destruct.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Mag_CZ61_20Rnd;
  	class JD_Mag_MP7_40Rnd: Mag_CZ61_20Rnd
 	{
		scope=2;
		displayName="40rnd MP7 Magazine";
		descriptionShort="A 40 round magazine for the MP7, loaded with 4.6x30mm HK rounds.";
		model="JDweapons\SMGs\MP7\MP7_Mag.p3d";
		weight=150;
		itemSize[]={1,3};
		count=40;
		ammo="Bullet_AE46x30";
		ammoItems[]=
		{
			"Ammo_AE46x30AP",
			"Ammo_AE46x30"
		};
		tracersEvery=0;
		mass=10;
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
								"JDweapons\SMGs\MP7\data\MP7.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"JDweapons\SMGs\MP7\data\MP7.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\MP7\data\MP7_damage.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\MP7\data\MP7_damage.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\MP7\data\MP7_destruct.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1_destruct.rvmat"
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
	class JD_Mag_MP7_40Rnd_AP: Mag_CZ61_20Rnd
 	{
		scope=2;
		displayName="40rnd MP7 Magazine";
		descriptionShort="A 40 round magazine for the MP7, loaded with 4.6x30mm HK rounds.";
		model="JDweapons\SMGs\MP7\MP7_Mag.p3d";
		weight=150;
		itemSize[]={1,3};
		count=40;
		ammo="Bullet_AE46x30AP";
		ammoItems[]=
		{
			"Ammo_AE46x30AP",
			"Ammo_AE46x30"
		};
		tracersEvery=0;
		mass=10;
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
								"JDweapons\SMGs\MP7\data\MP7.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"JDweapons\SMGs\MP7\data\MP7.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\MP7\data\MP7_damage.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\MP7\data\MP7_damage.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\MP7\data\MP7_destruct.rvmat",
								"JDweapons\SMGs\MP7\data\MP7A1_destruct.rvmat"
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
class CfgSoundShaders
{
	class base_closeShot_SoundShader;
	class MP7_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			{
				"JDweapons\SMGs\MP7\sounds\MP7_close",
				1
			}
		};
		volume=1.25;
	};
	class base_midShot_SoundShader;
	class MP7_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			{
				"JDweapons\SMGs\MP7\sounds\MP7_mid",
				1
			}
		};
		volume=1.29125091;
	};
	class base_distShot_SoundShader;
	class MP7_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[]=
		{
			{
				"JDweapons\SMGs\MP7\sounds\MP7_far",
				1
			}
		};
		volume=1.5125376;
	};
	
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class MP7_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\SMGs\MP7\sounds\MP7_Surpressed_close",
				1
			}
		};
		volume=1;
	};
	class base_ProfessionalSilenced_midShot_SoundShader;
	class MP7_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\SMGs\MP7\sounds\MP7_Surpressed_mid",
				1
			}
		};
		volume=0.56234133;
	};
	
};
class CfgSoundSets
{
	class Pistol_Shot_Base_SoundSet; 
    class MP7_SoundSet: Pistol_Shot_Base_SoundSet
    {
        soundShaders[] = {"MP7_closeShot_SoundShader","MP7_midShot_SoundShader","MP7_distShot_SoundShader"}; 
    };
	
	
	class Rifle_silencerShot_Base_SoundSet;
	class MP7_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MP7_silencerCloseShot_SoundShader",
			"MP7_silencerMidShot_SoundShader"
		};
	};
	
};	