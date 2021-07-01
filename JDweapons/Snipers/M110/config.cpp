class CfgPatches
{
	class JD_M110
	{
		units[]=
		{
			"JD_M110"
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
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class jd_m110_closeShot_SoundShader
	{
		samples[] = {{"JDweapons\Snipers\M110\sound\M110_close_shot_01",1}};
		volume = 2.1;
		range = 50; // This is how close/far you have to be in order to hear said sound
        rangeCurve = "closeShotCurve";
	};
	class jd_m110_midShot_SoundShader
	{
		samples[] = {{"JDweapons\Snipers\M110\sound\M110_mid_shot_01",1}};
		volume = 1.46234133;
		range = 700;
		rangeCurve[]=
		{
			{0,0.2},
			{200,1},
			{700,0},
			{2000,0}
		};
	};
	class jd_m110_distShot_SoundShader
	{
		samples[] = {{"JDweapons\Snipers\M110\sound\M110_far_shot_01",1}};
		volume = 1.2; // Edit this
        range = 1700; // This is how close/far you have to be in order to hear said sound
        rangeCurve[]=
		{
			{0,0},
			{200,0},
			{700,1},
			{2000,1}
		};
	};
	class jd_m110_Silenced_Closure_SoundShader
	{
		samples[] = {{"JDweapons\Snipers\M110\sound\Silencer_M110_1",1}};
		range = 25;
		volume = 1.166836;
	};
	class jd_m110_Silenced_closeShot_SoundShader
	{
		samples[] = {{"JDweapons\Snipers\M110\sound\Silencer_M110_3",1}};
		volume = 0.9;
		range = 150;
	};
};
class CfgSoundSets
{
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_Shot_Base_SoundSet;
	class jd_m110_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"jd_m110_closeShot_SoundShader","jd_m110_midShot_SoundShader","jd_m110_distShot_SoundShader"};
	};
	class jd_m110_Silenced_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"jd_m110_Silenced_Closure_SoundShader","jd_m110_Silenced_closeShot_SoundShader"};
	};
};	
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class M4A1;
	class JD_M110_Base: M4A1
	{
		scope = 0;
		weight = 1746;
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {0.5,0.3,25,100,2,5};
		WeaponLength = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_308Win","Ammo_308WinTracer"};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"jdweapons\snipers\m110\data\m110_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"jdweapons\snipers\m110\data\m110.rvmat"
		};
		magazines[] = 
		{
			"JD_Mag_M4110_20rnd"
		};
		attachments[] = 
		{
			"M110Suppressor",
			"weaponWrap",
			"weaponOptics",
			"weaponFlashlight",
			"MassScoutLRS",
			"weaponOpticsLRS",
			"weaponOpticsHunting"
		};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1.1,1.6,1.4};
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"jd_m110_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {"jd_m110_Silenced_Shot_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorHomeMadeTail_SoundSet"};
			reloadTime = 0.115;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.2};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinRainLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_Rifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_Rifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_Rifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_Rifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_Rifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_Rifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_Rifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_Rifle_Walk
				{
					soundSet = "Weapon_Movement_Rifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_Rifle_Run
				{
					soundSet = "Weapon_Movement_Rifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_Rifle_Sprint
				{
					soundSet = "Weapon_Movement_Rifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_Rifle_Land
				{
					soundSet = "Weapon_Movement_Rifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
				class drop
				{
					soundset = "rifle_drop_SoundSet";
					id = 898;
				};
				class bodyfall_rifle_light
				{
					soundSet = "pickUpRifleLight_SoundSet";
					id = 13400;
				};
				class bodyfall_rifle
				{
					soundset = "pickUpRifle_SoundSet";
					id = 13401;
				};
			};
		};
	};
	class JD_M110: JD_M110_Base
	{
		scope=2;
		displayName = "M110 DMR";
		descriptionShort = "M110 is for when meanies come around rippin on your drip. This is chambered in .308 so you can snap 'em properly.";
		model="JDweapons\Snipers\M110\M4110.p3d";
		magazines[] = 
		{
			"JD_Mag_M4110_20rnd"
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
						{1.0,{"JDweapons\Snipers\M110\data\m110.rvmat","JDweapons\Snipers\M110\data\ironsights.rvmat"}},
						{0.7,{"JDweapons\Snipers\M110\data\m110.rvmat","JDweapons\Snipers\M110\data\ironsights.rvmat"}},
						{0.5,{"JDweapons\Snipers\M110\data\m110_damage.rvmat","JDweapons\Snipers\M110\data\ironsights_damage.rvmat"}},
						{0.3,{"JDweapons\Snipers\M110\data\m110_damage.rvmat","JDweapons\Snipers\M110\data\ironsights_damage.rvmat"}},
						{0.0,{"JDweapons\Snipers\M110\data\m110_destruct.rvmat","JDweapons\Snipers\M110\data\ironsights_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class JD_M110_Black: JD_M110
	{
		scope=2;
		model="JDweapons\Snipers\M110\M4110_Black\M4110_Black.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"jdweapons\snipers\m110\data\m110_black_co.paa"
		};		
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class JD_M110_Mag_20Rnd_Base: Magazine_Base
	{
		scope = 0;
		weight = 90;
		itemSize[] = {2,2};
		count = 20;
		tracersEvery = 0;
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
	class JD_Mag_M4110_20rnd: JD_M110_Mag_20Rnd_Base
	{
		scope = 2;
		displayName = "20rd M110 Mag";
		descriptionShort = "Detachable box magazine for M110 rifle. Holds up to 20 rounds of .308 cal.";
		model = "JDweapons\Snipers\M110\M411_magazine.p3d";
		weight = 75;
		itemSize[] = {1,2};
		count = 20;
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win","Ammo_308WinTracer"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"JDweapons\Snipers\M110\data\m110.rvmat"}},
						{0.7,{"JDweapons\Snipers\M110\data\m110.rvmat"}},
						{0.5,{"JDweapons\Snipers\M110\data\m110_damage.rvmat"}},
						{0.3,{"JDweapons\Snipers\M110\data\m110_damage.rvmat"}},
						{0.0,{"JDweapons\Snipers\M110\data\m110_destruct.rvmat"}}
					};
				};
			};
		};
	};
};	
class CfgVehicles 
{
	class ItemSuppressor;
	class JD_New_M110_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="M110 Suppressor";
		descriptionShort="M110 Suppressor";
		model="JDweapons\Snipers\M110\M110Suppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={3,1};
		itemModelLength=0.148;
		barrelArmor=30281.25;
		inventorySlot[] = {"M110Suppressor"};
		simulation="ItemSuppressor";
		dispersionModifier=-9.9999997e-005;
		noiseShootModifier=-0.9;
		dispersionCondition="true";
		recoilModifier[]={0.7,0.4,0.7};
		swayModifier[]={0.8,0.7,0.8};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"DZ\weapons\attachments\data\suppressor556.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"DZ\weapons\attachments\data\suppressor556_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"DZ\weapons\attachments\data\suppressor556_destruct.rvmat"
							}
						}
					};
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
};	


class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyM110Suppressor: ProxyAttachment
	{
		scope=2;
		inventorySlot="M110Suppressor";
		model="JDweapons\Snipers\M110\M110Suppressor.p3d";
	};
};	
class CfgSlots
{
	class Slot_M110Suppressor
	{
		name = "M110Suppressor";
		displayName = "M110Suppressor";
		ghostIcon = "supressor";
	};
};