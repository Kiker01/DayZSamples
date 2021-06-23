class JD_FNFAL_Base : RifleBoltFree_Base
{
	override RecoilBase SpawnRecoilObject()
	{
		return new FALRecoil(this);
	}
	
	override bool IsShowingChamberedBullet()
	{
		return false;
	}
};

class BlackoutWE_FNFAL : JD_FNFAL_Base {};
class BlackoutWE_FNFAL_TEST : JD_FNFAL_Base {};
class BlackoutWE_FNFAL_TEST2 : JD_FNFAL_Base {};