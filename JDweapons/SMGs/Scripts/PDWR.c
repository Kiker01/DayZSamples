class JD_PDWR_Base : AKM_Base
{
    override RecoilBase SpawnRecoilObject()
	{
		return new Ak74Recoil(this);
	}
};