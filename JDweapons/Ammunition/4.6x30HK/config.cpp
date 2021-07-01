class CfgPatches
{
	class AE_Ammunition_46x30
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class cfgAmmoTypes
{
	class AType_Bullet_AE46x30
	{
		name="Bullet_AE46x30";
	};
	class AType_Bullet_AE46x30AP
	{
		name="Bullet_AE46x30AP";
	};
};
class cfgAmmo
{
    class Bullet_Base;
    class Bullet_AE46x30: Bullet_Base
    {
        scope=2;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="Ammo_AE46x30";
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.34999999;
		deflecting=30;
		initSpeed=685;
		typicalSpeed=685;
		airFriction=-0.00303;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		weight=0.002;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=29;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=29;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
    };
	class Bullet_AE46x30AP: Bullet_Base
    {
        scope=2;
		casing="FxCartridge_9mm";
		round="FxRound_9mm";
		spawnPileType="Ammo_AE46x30AP";
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		tracerScale=1;
		caliber=0.34999999;
		deflecting=20;
		initSpeed=685;
		typicalSpeed=685;
		airFriction=-0.00303;
		supersonicCrackNear[]={};
		supersonicCrackFar[]={};
		weight=0.002;
		class DamageApplied
		{
			type="Projectile";
			dispersion=0;
			bleedThreshold=1;
			defaultDamageOverride[]=
			{
				{0.5,1}
			};
			class Health
			{
				damage=70;
				armorDamage=3;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=40;
			};
		};
		class NoiseHit
		{
			strength=10;
			type="shot";
		};
    };
};
class cfgVehicles
{
	class Box_Base;
	class AE_AmmoBox_46x30_30rnd: Box_Base
	{
		scope=2;
		displayName="Boxed 4.6x30mm HK Rounds";
		descriptionShort="4.6x30mm HK boxed ammunition, 30 rounds.";
		model="\dz\weapons\ammunition\22_50RoundBox.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\Ammunition\4.6x30HK\4.6x30HK_box_co.paa"
		};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=100;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
		class Resources
		{
			class Ammo_AE46x30
			{
				value=30;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
	class AE_AmmoBox_46x30_30rndAP: Box_Base
	{
		scope=2;
		displayName="Boxed 4.6x30mm HK AP Rounds";
		descriptionShort="4.6x30mm HK boxed AP ammunition, 30 rounds.";
		model="\dz\weapons\ammunition\22_50RoundBox.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"JDweapons\Ammunition\4.6x30HK\4.6x30HK_box_co.paa"
		};
		rotationFlags=17;
		lootCategory="Ammo";
		weight=100;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[]= {{1.0,{""}},{0.7,{""}},{0.5,{""}},{0.3,{""}},{0.0,{""}}};
				};
			};
		};
		class Resources
		{
			class Ammo_AE46x30AP
			{
				value=30;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};
class cfgMagazines
{
	class Ammunition_Base;
	class Ammo_AE46x30: Ammunition_Base
	{
		scope=2;
		displayName="4.6x30mm HK Rounds";
		descriptionShort="The HK 4.6×30mm cartridge is a type of ammunition primarily used in the Heckler & Koch MP7 Personal defense weapon. It is designed to minimize weight and recoil while increasing penetration of body armor. It features a bottlenecked case and a pointed, steel-core, brass-jacketed bullet.";
		model="JDweapons\Ammunition\4.6x30HK\4.6x30HK.p3d";
		weight=7;
		count=50;
		ammo="Bullet_AE46x30";
		
	};
	class Ammo_AE46x30AP: Ammunition_Base
	{
		scope=2;
		displayName="4.6x30mm HK AP Rounds";
		descriptionShort="The HK 4.6×30mm AP cartridge is a type of ammunition primarily used in the Heckler & Koch MP7 Personal defense weapon. It is designed to minimize weight and recoil while increasing penetration of body armor. It features a bottlenecked case and a pointed, steel-core, brass-jacketed bullet.";
		
		model="JDweapons\Ammunition\4.6x30HK\4.6x30AP.p3d";
		weight=7;
		count=50;
		ammo="Bullet_AE46x30AP";
	};
};