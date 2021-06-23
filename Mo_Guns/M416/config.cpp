class CfgPatches
{
	class JD_M416
	{
		units[]=
		{
			"JD_M416"
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
	class M4A1;
	class JD_M416_Base: M4A1
	{
		scope=0;
		weight=1746;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={0,0,0,0,0,0};
		simpleHiddenSelections[] = {"folding_raised","folding_lowered"};
		ironsightsExcludingOptics[]=
		{
			"M4_CarryHandleOptic",
			"BUISOptic",
			"M68Optic",
			"M4_T3NRDSOptic",
			"ReflexOptic",
			"ACOGOptic"
		};
		WeaponLength=0.41478399;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"Mag_STANAG_30Rnd"
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
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={0.75,0.75,0.75};
		swayModifier[]={1.25,1.25,1};
		drySound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_dry",
			0.5,
			1,
			20
		};
		reloadAction="ReloadM4";
		reloadMagazineSound[]=
		{
			"dz\sounds\weapons\firearms\m4a1\m4_reload_0",
			0.8,
			1,
			20
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"AssaultRifle_Shot_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AssaultRifle_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AssaultRifle_silencer_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.067;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00125;
			magazineSlot="magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"AssaultRifle_Shot_SoundSet",
				"AUG_Tail_SoundSet",
				"AUG_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AssaultRifle_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				},
				
				{
					"AssaultRifle_silencer_SoundSet",
					"AUG_silencerHomeMadeTail_SoundSet",
					"AUG_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.115;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00125;
			magazineSlot="magazine";
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
					onlyWithinOverheatLimits[]={0,0.2};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.2,0.60000002};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.60000002,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.34999999,0,0};
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
	class JD_M416: JD_M416_Base
	{
		scope=2;
		displayName="HK416";
		descriptionShort="The Heckler & Koch HK416 is an assault rifle designed and manufactured by the German company Heckler & Koch. Although its design is based on the AR-15 class of weapons, specifically the Colt M4 carbine family issued to the U.S. military, it uses a proprietary short-stroke gas piston system derived from the ArmaLite AR-18 (the same system was also used in Heckler & Koch's earlier G36 family of rifles). Chambered in 5.56x45mm NATO rounds and accepts compatible magazines.";
		model="Mo_Guns\M416\HKM416.p3d";
		attachments[]=
		{
			"weaponOptics",
			"weaponFlashlight",
			"weaponWrap",
			"weaponMuzzleM4"
		};
		itemSize[]={5,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1.0,{"Mo_Guns\M416\data\HK416_Body.rvmat","Mo_Guns\M416\data\HK416_Material.rvmat","Mo_Guns\M416\data\HK416_Material_Plastic.rvmat"}},{0.7,{"Mo_Guns\M416\data\HK416_Body.rvmat","Mo_Guns\M416\data\HK416_Material.rvmat","Mo_Guns\M416\data\HK416_Material_Plastic.rvmat"}},{0.5,{"Mo_Guns\M416\data\HK416_Body_Damage.rvmat","Mo_Guns\M416\data\HK416_Material_Damage.rvmat","Mo_Guns\M416\data\HK416_Material_Plastic_Damage.rvmat"}},{0.3,{}},{0.0,{"Mo_Guns\M416\data\HK416_Body_Destruct.rvmat","Mo_Guns\M416\data\HK416_Material_Destruct.rvmat","Mo_Guns\M416\data\HK416_Material_Plastic_Destruct.rvmat"}}};
				};
			};
		};

	};
};
class cfgVehicles
{
	class ItemSuppressor;
	class JD_556_Suppressor: ItemSuppressor
	{
		scope=2;
		displayName="AAC 5.56 Rifle Supppressor";
		descriptionShort="AAC 5.56 Rifle Supppressor";
		model="Mo_Guns\M416\AACsuppressor.p3d";
		rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={3,1};
		itemModelLength=0.102;
		barrelArmor=3281.25;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_west"
		};
		inventorySlot[]=
		{
			"weaponMuzzleM4"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-9.9999997e-005;
		noiseShootModifier=-0.9;
		dispersionCondition="true";
		recoilModifier[]={0.8,0.8,0.8};
		swayModifier[]={1,1,1};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=4500;
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
	class ProxyAACsuppressor: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponMuzzleM4";
		model="Mo_Guns\M416\AACsuppressor.p3d";
	};
};	