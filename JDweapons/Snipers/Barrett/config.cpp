class CfgPatches
{
	class JD_BARRETT
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
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
	class JD_Barrett_Base: Rifle_Base
	{
		scope=0;
		weight=3150;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.5,20,170,4,10};
		WeaponLength=0.65222802;
		chamberSize=1;
		chamberedRound="";
		simpleHiddenSelections[]=
		{
			"hide_barrel",
			"muzzlebrake_temp"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		ironsightsExcludingOptics[]={};
		chamberableFrom[]=
		{
			"Ammo_AE127x99"
		};
		magazines[]=
		{
			"JD_Mag_Barrett_10Rnd"
		};
		magazineSwitchTime=0.45;
		ejectType=1;
		recoilModifier[]={3,3,3};
		swayModifier[]={2,2,1};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\SKS\SKS_dry",
			0.5,
			1,
			20
		};
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\svd\svd_reload",
			1,
			1,
			30
		};
		reloadAction="ReloadFal";
		modes[]=
		{
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Barrett_Shot_SoundSet",
				"SVD_Tail_SoundSet",
				"SVD_InteriorTail_SoundSet"
			};
			soundSetShotExt[] = 
			{
				{
					"Barrett_Suppressed_SoundSet",
					"SVD_silencerHomeMadeTail_SoundSet",
					"SVD_silencerInteriorHomeMadeTail_SoundSet"
				},
				{	
					"Barrett_Suppressed_SoundSet",
					"SVD_silencerHomeMadeTail_SoundSet",
					"SVD_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			
			reloadTime=0.425;
			recoil="recoil_svd";
			recoilProne="recoil_svd_prone";
			dispersion=0.00075;
			magazineSlot="magazine";
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
					overrideParticle="weapon_shot_sks_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=20;
				shotsToStartOverheating=1;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
					healthLevels[] = 
					{
						{1.0,
						{
							"JDweapons\Snipers\Barrett\Data\m82a2.rvmat","JDweapons\Snipers\Barrett\Data\cheek.rvmat"
						}},
						{0.7,
						{
							"JDweapons\Snipers\Barrett\Data\m82a2.rvmat","JDweapons\Snipers\Barrett\Data\cheek.rvmat"
						}},
						{0.5,
						{
							"JDweapons\Snipers\Barrett\Data\m82a2_damage.rvmat","JDweapons\Snipers\Barrett\Data\cheek_damage.rvmat"
						}},
						{0.3,
						{
							"JDweapons\Snipers\Barrett\Data\m82a2_damage.rvmat","JDweapons\Snipers\Barrett\Data\cheek_damage.rvmat"
						}},
						{0.0,
						{
							"JDweapons\Snipers\Barrett\Data\m82a2_destruct.rvmat","JDweapons\Snipers\Barrett\Data\cheek_destruct.rvmat"
						}}
					};
				};
			};
		};
	};
	class JD_Barrett: JD_Barrett_Base
	{
		scope=2;
		displayName="Barrett M82";
		descriptionShort="The Barrett M82 is a recoil-operated, semi-automatic anti-materiel sniper system developed by the American Barrett Firearms Manufacturing company. Despite its designation as an anti-materiel rifle, it is used by some armed forces as an anti-personnel system. Chambered in .50BMG";
		model="JDweapons\Snipers\Barrett\barrett.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"weaponOptics",
			"BarrettSuppressor"
		};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\Snipers\Barrett\Data\Barrett M82_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"JDweapons\Snipers\Barrett\Data\m82a2.rvmat"
		};
		itemSize[]={10,3};
		
	};
	class JD_Barrett_Black: JD_Barrett
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\Snipers\Barrett\Data\Barrett M82_Black_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"JDweapons\Snipers\Barrett\Data\m82a2.rvmat"
		};
	};
	class JD_Barrett_Desert: JD_Barrett
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\Snipers\Barrett\Data\Barrett M82_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"JDweapons\Snipers\Barrett\Data\m82a2.rvmat"
		};
	};
	class JD_Barrett_Gold: JD_Barrett
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\Snipers\Barrett\Data\Barrett M82_g_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"JDweapons\Snipers\Barrett\Data\Barrett_g.rvmat"
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
  	class JD_Mag_Barrett_10Rnd: Magazine_Base
 	{
		scope=2;
		displayName="10rnd M82 Magazine";
		descriptionShort="A 10 round magazine for the M82, loaded with .50BMG";
		model="JDweapons\Snipers\Barrett\barrett_magazine.p3d";
		weight=300;
		itemSize[]={2,2};
		count=10;
		ammo="Bullet_AE127x99";
		ammoItems[]=
		{
			"Ammo_AE127x99"
		};
		tracersEvery=0;
		mass=10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {{1.0,{"JDweapons\Snipers\Barrett\Data\m82a2.rvmat"}},{0.7,{"JDweapons\Snipers\Barrett\Data\m82a2.rvmat"}},{0.5,{"JDweapons\Snipers\Barrett\Data\m82a2_damage.rvmat"}},{0.3,{"JDweapons\Snipers\Barrett\Data\m82a2_damage.rvmat"}},{0.0,{"JDweapons\Snipers\Barrett\Data\m82a2_destruct.rvmat"}}};
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
class CfgVehicles 
{
	class ItemSuppressor;
	class JD_Barrett_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="M82 Large Bore Suppressor";
		descriptionShort="Suppressor for the M82 chambered in .50BMG";
		model="JDweapons\Snipers\Barrett\BarrettSuppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={3,2};
		itemModelLength=0.148;
		barrelArmor=30281.25;
		lootCategory="Attachments";
		inventorySlot[] = {"BarrettSuppressor"};
		simulation="ItemSuppressor";
		dispersionModifier=-9.9999997e-005;
		noiseShootModifier=-0.9;
		dispersionCondition="true";
		recoilModifier[]={0.9,0.9,0.9};
		swayModifier[]={0.95,0.95,0.95};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 800;
					healthLevels[] = {{1.0,{"JDweapons\Snipers\Barrett\Data\Barrett_Suppressor.rvmat"}},{0.7,{"JDweapons\Snipers\Barrett\Data\Barrett_Suppressor.rvmat"}},{0.5,{"JDweapons\Snipers\Barrett\Data\Barrett_Suppressor_damage.rvmat"}},{0.3,{"JDweapons\Snipers\Barrett\Data\Barrett_Suppressor_damage.rvmat"}},{0.0,{"JDweapons\Snipers\Barrett\Data\Barrett_Suppressor_destruct.rvmat"}}};
				};
			};
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
				class Ruined
				{
					onlyWithinHealthLabel[]={4,4};
					illuminateWorld=1;
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
	};
	class JD_Barrett_Suppressor_Desert: JD_Barrett_Suppressor
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\Snipers\Barrett\Data\Barrett_Suppressor_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"JDweapons\Snipers\Barrett\Data\Barrett_Suppressor.rvmat"
		};
	};
	class JD_Barrett_Suppressor_Gold: JD_Barrett_Suppressor
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\Snipers\Barrett\Data\Barrett_Suppressor_g_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"JDweapons\Snipers\Barrett\Data\Barrett_Suppressor_g.rvmat"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyBarrettSuppressor: ProxyAttachment
	{
		scope=2;
		inventorySlot="BarrettSuppressor";
		model="JDweapons\Snipers\Barrett\BarrettSuppressor.p3d";
	};
};	
class CfgSlots
{
	class Slot_BarrettSuppressor
	{
		name = "BarrettSuppressor";
		displayName = "BarrettSuppressor";
		ghostIcon = "supressor";
	};
};


	
