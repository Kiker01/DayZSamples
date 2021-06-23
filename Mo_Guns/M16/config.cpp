class CfgPatches
{
	class JD_M16
	{
		units[]=
		{
			"JD_M16"
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
	class WE_HK416_Base;
	class JD_M16: WE_HK416_Base
	{
		scope=2;
		displayName="M16A4";
		descriptionShort="The M4 Carbine is an air-cooled, gas-operated, direct impingement, magazine-fed carbine. It has a 14.5 in (370 mm) barrel and a telescoping stock. It is essentially a lighter and shorter variant of the M16A2 assault rifle. Chambered in 5.56x45mm NATO rounds and accepts compatible magazines."  \n "Can be switched to burst fire." \n "Property of BLACKOUT";
		model="Blackout_Mo_Guns\M16\M16A4.p3d";
		simpleHiddenSelections[] = {"folding_raised","folding_lowered"};
		attachments[]=
		{
			"weaponOptics",
			"weaponWrap",
			"weaponMuzzleM4",
			"weaponFlashlight"
		};
		itemSize[]={8,3};
		recoilModifier[]={0.5,0.25,0.5};
		swayModifier[]={0.15,0.3,0.15};
		modes[]=
		{
			"Burst",
			"SemiAuto"
		};
		class Burst: Mode_Burst
		{
			soundSetShot[]=
			{
				"AssaultRifle_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
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
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.06333333334;
			burst=3;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00125;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"AssaultRifle_Shot_SoundSet",
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AssaultRifle_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.06333333334;
			burst=3;
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
				"M4_Tail_SoundSet",
				"M4_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AssaultRifle_silencer_SoundSet",
					"AUG_silencerTail_SoundSet",
					"AUG_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.125;
			recoil="recoil_m4";
			recoilProne="recoil_m4_prone";
			dispersion=0.00125;
			magazineSlot="magazine";
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
								"blackout_mo_guns\m16\data\m16_ex.rvmat",
								"blackout_mo_guns\m16\data\m16_rec.rvmat",
								"blackout_mo_guns\m16\data\m16_sight.rvmat"
							}
						},
						
						{
							0.7,
							
							{
								"blackout_mo_guns\m16\data\m16_ex.rvmat",
								"blackout_mo_guns\m16\data\m16_rec.rvmat",
								"blackout_mo_guns\m16\data\m16_sight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"blackout_mo_guns\m16\data\m16_ex_damage.rvmat",
								"blackout_mo_guns\m16\data\m16_rec_damage.rvmat",
								"blackout_mo_guns\m16\data\m16_sight.rvmat"
							}
						},
						
						{
							0.3,
							
							{
								"blackout_mo_guns\m16\data\m16_ex_damage.rvmat",
								"blackout_mo_guns\m16\data\m16_rec_damage.rvmat",
								"blackout_mo_guns\m16\data\m16_sight.rvmat"
							}
						},
						
						{
							0.0,
							
							{
								"blackout_mo_guns\m16\data\m16_ex_destruct.rvmat",
								"blackout_mo_guns\m16\data\m16_rec_destruct.rvmat",
								"blackout_mo_guns\m16\data\m16_sight.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

