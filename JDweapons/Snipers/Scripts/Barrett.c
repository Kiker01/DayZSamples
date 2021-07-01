class JD_Barrett_Base : RifleBoltLock_Base
{
	
	void JD_Barrett_Base()
	{	
		ShowMuzzleBrakeJayDizzle(this);
	}
	
	override RecoilBase SpawnRecoilObject()
	{
		return new SvdRecoil(this);
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
	{	
		super.EEItemAttached(item,slot_name);

		if (ItemSuppressor.Cast(item))
		{ 
			HideMuzzleBrakeJayDizzle(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemSuppressor.Cast(item))
		{ 
			ShowMuzzleBrakeJayDizzle(this);
		}
	}
	
};