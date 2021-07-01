class JD_M4BCM7_Base : RifleBoltLock_Base
{ 
	void JD_M4BCM7_Base()
	{	
		UnfoldSightsJayDizzle(this);
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
			FoldSightsJayDizzle(this);
		}
	}

	override void EEItemDetached(EntityAI item, string slot_name)
	{	
		super.EEItemDetached(item,slot_name);

		if (ItemOptics.Cast(item))
		{ 
			UnfoldSightsJayDizzle(this);
		}
	}		
};
class JD_M4BCM7: JD_M4BCM7_Base {};