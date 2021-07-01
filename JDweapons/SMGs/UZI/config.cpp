class CfgPatches
{
	class JD_UZI
	{
		units[]=
		{
			"JD_UZI"
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
	class JD_UZI_Base: CZ61
	{
		scope=0;
		weight=3500;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[] = {0,0,0,0,0,0};
		WeaponLength=0.44108799;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		magazines[]=
		{
			"JD_Mag_UZI_20Rnd",
			"JD_Mag_UZI_32Rnd"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		magazineSwitchTime=0.3;
		barrelArmor=800;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1};
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
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"MAT49_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ61_silencer_SoundSet",
					"CZ61_silencerTail_SoundSet",
					"CZ61_silencerInteriorTail_SoundSet"
				},
				
				{
					"CZ61_silencerHomeMade_SoundSet",
					"CZ61_silencerHomeMadeTail_SoundSet",
					"CZ61_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.125;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.003;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"MAT49_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"CZ61_silencer_SoundSet",
					"CZ61_silencerTail_SoundSet",
					"CZ61_silencerInteriorTail_SoundSet"
				},
				
				{
					"CZ61_silencerHomeMade_SoundSet",
					"CZ61_silencerHomeMadeTail_SoundSet",
					"CZ61_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.035;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
			dispersion=0.003;
			magazineSlot="magazine";
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
	class JD_UZI: JD_UZI_Base
	{
		scope=2;
		displayName = "Mini UZI";
		descriptionShort = "This mini UZI runs the standard 9x19mm rounds. Great for those indoor encounters" \n "UZI goes Brrrrrrrrrrrrrt";
		model="JDweapons\SMGs\UZI\UZI.p3d";
		attachments[]=
		{
			"pistolMuzzle"
		};
		itemSize[]={4,3};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\SMGs\UZI\data\UZI_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"JDweapons\SMGs\UZI\data\UZI.rvmat"
		};
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
								"JDweapons\SMGs\UZI\data\UZI.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"JDweapons\SMGs\UZI\data\UZI.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class JD_UZI_Gold: JD_UZI
	{
		scope=2;
		displayName = "Gold Mini UZI";
		descriptionShort = "This mini UZI runs the standard 9x19mm rounds. Great for those indoor encounters" \n "UZI goes Brrrrrrrrrrrrrt... Oh, shiny :)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\SMGs\UZI\data\UZIGold_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"JDweapons\SMGs\UZI\data\UZI_Gold.rvmat"
		};
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
								"JDweapons\SMGs\UZI\data\UZI_Gold.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_Gold.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_Gold_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_Gold_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_Gold_destruct.rvmat"
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
  	class JD_Mag_UZI_20Rnd: Mag_CZ61_20Rnd
 	{
		scope=2;
		displayName="Mini UZI 20 Rnd Mag";
		descriptionShort="Chambered in 9x19mm and fits the Mini UZI";
		model="JDweapons\SMGs\UZI\UZI\Uzi_Mag_20.p3d";
		weight=150;
		itemSize[]={1,2};
		count=20;
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
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_Mag.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_Mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_Mag_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_Mag_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\UZI\data\UZI_Mag_destruct.rvmat"
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
	class JD_Mag_UZI_32Rnd: JD_Mag_UZI_20Rnd
 	{
		scope=2;
		displayName="Mini UZI 32 Rnd Mag";
		descriptionShort="Chambered in 9x19mm and fits the Mini UZI";
		model="JDweapons\SMGs\UZI\UZI\Uzi_mag_32.p3d";
		weight=150;
		itemSize[]={1,3};
		count=32;
		ammo="Bullet_9x19";
		ammoItems[]=
		{
			"Ammo_9x19"
		};
	};
};