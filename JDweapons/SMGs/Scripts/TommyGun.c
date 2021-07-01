class JD_M1928_Base : RifleBoltLock_Base
{
    override RecoilBase SpawnRecoilObject()
	{
		return new Cz61Recoil(this);
	}
};