

class CfgPatches
{
	class JD_Salvo12
	{
		requiredAddons[] = {"DZ_Data", "DZ_Weapons_Muzzles"};
		units[] = {};
		weapons[] = {};
	};
};		
class CfgVehicles
{
	class AK_Suppressor;
	class JD_Salvo12: AK_Suppressor
	{
		scope = 0;
		displayName = "JD_Salvo12";
		descriptionShort = "JD_Salvo12";
		model = "JDweapons\Attachments\Muzzle\Salvo12\Salvo12.p3d";
		inventorySlot[]={"Salvo12"};
		muzzlePos = "usti hlavne";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = "300 * 20";
					healthLevels[] = {{1.0,{"JDweapons\Attachments\Muzzle\Salvo12\Data\Salvo12.rvmat"}},{0.7,{"JDweapons\Attachments\Muzzle\Salvo12\Data\Salvo12.rvmat"}},{0.5,{"JDweapons\Attachments\Muzzle\Salvo12\Data\Salvo12_damage.rvmat"}},{0.3,{"JDweapons\Attachments\Muzzle\Salvo12\Data\Salvo12_damage.rvmat"}},{0.0,{"JDweapons\Attachments\Muzzle\Salvo12\Data\Salvo12_destruct.rvmat"}}};
				};
			};
		};
	};	
};	
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxySalvo12: ProxyAttachment
	{
		scope=2;
		inventorySlot="Salvo12";
		model="JDweapons\Attachments\Muzzle\Salvo12\Salvo12.p3d";
	};
};
class CfgSlots
{
	class Slot_Salvo12
	{
		name = "Salvo12";
		displayName = "Salvo12";
		ghostIcon = "supressor";
	};
};	