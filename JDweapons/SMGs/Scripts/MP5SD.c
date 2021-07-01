class JD_MP5SD_Base : RifleBoltLock_Base
{
    override RecoilBase SpawnRecoilObject()
	{
		return new Ump45Recoil(this);
	}
};