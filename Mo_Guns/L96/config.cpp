 class CfgPatches
{
	class JD_L96
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
	class CZ527;
	class JD_L96_Base: CZ527
	{
		scope=0;
		animName="cz527";
		weight=5490;
		absorbency=0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		opticsFlare=0;
		ironsightsExcludingOptics[]=
		{
			"HuntingOptic"
		};
		WeaponLength=0.934214;
		value=0;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"JD_Mag_L96_10rnd"
		};
		magazineSwitchTime=0.38;
		barrelArmor=900;
		ejectType=0;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1};
		
		reloadAction="Reloadcz527";
		shotAction="Reloadcz527Shot";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M1903_Shot_SoundSet",
				"Mosin_Tail_SoundSet",
				"Mosin_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Mosin_silencerHomeMade_SoundSet",
					"Mosin_silencerHomeMadeTail_SoundSet",
					"Mosin_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			
			reloadTime=1;
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
	};	
	
	class JD_L96: CZ527
	{
		scope=2;
		displayName="L96";
		descriptionShort="The L96 sniper rifle was entered into a British competition in the early 1980s as a replacement for the Lee–Enfield derived sniper rifles then in use by the British Army. The L96 sniper rifle was selected over the Parker Hale M85. The British Army adopted the L96 into service in 1982. Chambered in .308 Winchester rounds.";
		
		model="Mo_Guns\L96\L96.p3d";
		chamberableFrom[]=
		{
			"Ammo_308Win",
			"Ammo_308WinTracer"
		};
		magazines[]=
		{
			"JD_Mag_L96_10rnd"
		};
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"weaponOptics"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"M1903_Shot_SoundSet",
				"Mosin_Tail_SoundSet",
				"Mosin_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Mosin_silencerHomeMade_SoundSet",
					"Mosin_silencerHomeMadeTail_SoundSet",
					"Mosin_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			
			reloadTime=1;
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		itemSize[]={9,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.0,
							
							{
								"Mo_Guns\L96\Data\L96.rvmat",
								"Mo_Guns\L96\Data\L96_2.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"Mo_Guns\L96\Data\L96.rvmat",
								"Mo_Guns\L96\Data\L96_2.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Mo_Guns\L96\Data\L96_damage.rvmat",
								"Mo_Guns\L96\Data\L96_2_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"Mo_Guns\L96\Data\L96_damage.rvmat",
								"Mo_Guns\L96\Data\L96_2_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"Mo_Guns\L96\Data\L96_destruct.rvmat",
								"Mo_Guns\L96\Data\L96_2_destruct.rvmat"
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
	class Mag_CZ527_5rnd;
  	class JD_Mag_L96_10rnd: Mag_CZ527_5rnd
 	{
		scope=2;
		displayName="10rnd L96 Magazine";
		descriptionShort="A 10 round magazine for the L96, loaded with .308 Winchester rounds." \n "Property of BLACKOUT";
		model="Mo_Guns\L96\L96_mag.p3d";
		weight=250;
		itemSize[]={1,2};
		count=10;
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
								"Mo_Guns\L96\Data\L96.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"Mo_Guns\L96\Data\L96.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"Mo_Guns\L96\Data\L96_damage.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"Mo_Guns\L96\Data\L96_damage.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"Mo_Guns\L96\Data\L96_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		
	};
};