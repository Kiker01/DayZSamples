modded class ModItemRegisterCallbacks
{
    override void RegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.RegisterFireArms( pType, pBehavior );
		pType.AddItemInHandsProfileIK("JD_Barrett_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_svd.asi", pBehavior, "dz/anims/anm/player/ik/weapons/svd.anm",  "dz/anims/anm/player/reloads/svd/w_svd_states.anm");
		pType.AddItemInHandsProfileIK("BO_M110_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_m4a1.asi", pBehavior, "dz/anims/anm/player/ik/weapons/m4a1_ik.anm",  "dz/anims/anm/player/reloads/m4a1/w_m4a1_states.anm");
    }
};   