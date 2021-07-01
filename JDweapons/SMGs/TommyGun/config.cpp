 class CfgPatches
{
	class TommyGun1928
	{
		units[]=
		{
			"TommyGun1928"
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
    class M1928_SoundShaderClose
    {
        samples[] = {{"JDweapons\SMGs\TommyGun\sounds\M1928_close",1}}; 
        volume = 1.3; 
        range = 50; 
        rangeCurve = "closeShotCurve"; 
    };
    class M1928_SoundShaderMid
    {
        samples[] = {{"JDweapons\SMGs\TommyGun\sounds\M1928_mid",1}}; 
        volume = 0.56234133; 
        range = 1500; 
        rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		};
    };
    class M1928_SoundShaderLong
    {
        samples[] = {{"JDweapons\SMGs\TommyGun\sounds\M1928_far",1}}; 
        volume = 1; 
        range = 1500; 
        rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		}; 
    };
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class M1928_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"M1928_SoundShaderClose","M1928_SoundShaderMid","M1928_SoundShaderLong"}; 
        
    };
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class CZ61;
	class JD_M1928_Base: CZ61
	{
		scope=0;
		weight=2700;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={0,0,0,0,0,0};
		WeaponLength=0.403269;
		barrelArmor=3.75;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_45ACP"
		};
		magazines[]=
		{
			"JD_Mag_M1928_50Rnd"
		};
		magazineSwitchTime=0.5;
		ejectType=1;
		recoilModifier[]={0.5,0.6,0.5};
		swayModifier[]={1,0.85,1};
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
				"M1928_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet"
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
				"M1928_SoundSet",
				"CZ61_Tail_SoundSet",
				"CZ61_InteriorTail_SoundSet"
			};
			reloadTime=0.057;
			recoil="recoil_cz61";
			recoilProne="recoil_cz61_prone";
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
			distanceZoomMin=50;
			distanceZoomMax=50;
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
		};
	};
	class JD_M1928: JD_M1928_Base
	{
		scope=2;
		displayName="Thompson M1928";
		descriptionShort="The Thompson submachine gun is an American submachine gun first invented by John T. Thompson in 1918 during World War I that became infamous during the Prohibition era, being a signature weapon of various organized crime syndicates in the United States. Chambered in .45";
		model="JDweapons\SMGs\TommyGun\TommyGun1928.p3d";
		attachments[]=
		{
		};
		itemSize[]={6,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1200;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"JDweapons\SMGs\TommyGun\data\M1A1.rvmat",
								"JDweapons\SMGs\TommyGun\data\TommyGun.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"JDweapons\SMGs\TommyGun\data\M1A1.rvmat",
								"JDweapons\SMGs\TommyGun\data\TommyGun.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\TommyGun\data\M1A1_damage.rvmat",
								"JDweapons\SMGs\TommyGun\data\TommyGun_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\TommyGun\data\M1A1_damage.rvmat",
								"JDweapons\SMGs\TommyGun\data\TommyGun_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\TommyGun\data\M1A1_destruct.rvmat",
								"JDweapons\SMGs\TommyGun\data\TommyGun_destruct.rvmat"
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
	class Mag_UMP_25Rnd;
	class JD_Mag_M1928_50Rnd: Mag_UMP_25Rnd
	{
		scope=2;
		displayName="Thompson M1928";
		descriptionShort="A 50 round magazine for the Thompson M1928 chambered in .45";
		model="JDweapons\SMGs\TommyGun\proxy\drum_magazine.p3d";
		weight=350;
		itemSize[]={3,3};
		count=50;
		ammo="Bullet_45ACP";
		ammoItems[]=
		{
			"Ammo_45ACP"
		};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1200;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{	
								"JDweapons\SMGs\TommyGun\data\TommyGun.rvmat"
							}
						},
						
						{
							0.7,
							
							{	
								"JDweapons\SMGs\TommyGun\data\TommyGun.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"JDweapons\SMGs\TommyGun\data\TommyGun_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"JDweapons\SMGs\TommyGun\data\TommyGun_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"JDweapons\SMGs\TommyGun\data\TommyGun_destruct.rvmat"
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