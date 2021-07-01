

class CfgPatches
{
	class JD_OSPREY
	{
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Muzzles"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class PistolSuppressor;
	class JD_OSPREY_Suppressor: PistolSuppressor
	{
		scope = 2;
		displayName = "SilencerCo Osprey Suppressor";
		descriptionShort = "A suppressor with a unique offset design which offers 30% more suppression than regular pistol suppressors";
		model = "JDweapons\Attachments\Muzzle\Osprey\osprey45k.p3d";
		muzzlePos = "usti hlavne";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = "300 * 20";
					healthLevels[] = {{1.0,{"JDweapons\Attachments\Muzzle\Osprey\Data\Osprey.rvmat"}},{0.7,{"JDweapons\Attachments\Muzzle\Osprey\Data\Osprey.rvmat"}},{0.5,{"JDweapons\Attachments\Muzzle\Osprey\Data\Osprey_damage.rvmat"}},{0.3,{"JDweapons\Attachments\Muzzle\Osprey\Data\Osprey_damage.rvmat"}},{0.0,{"JDweapons\Attachments\Muzzle\Osprey\Data\Osprey_destruct.rvmat"}}};
				};
			};
		};
	};	
};	