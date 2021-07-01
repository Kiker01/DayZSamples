class BlackoutWE_M4_Base : RifleBoltLock_Base
{ 
	void BlackoutWE_M4_Base()
	{	
		ShowIronSightsJayDizzle(this);
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new M4a1Recoil(this);
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			HideIronSightsJayDizzle(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			ShowIronSightsJayDizzle(this);
		}
	}		
};