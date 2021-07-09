modded class JMAnimRegister
{
    override void OnRegisterFireArms( DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior )
    {
        super.OnRegisterFireArms( pType, pBehavior );   
        pType.AddItemInHandsProfileIK("WE_MP5SD_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_ump45.asi", pBehavior, "dz/anims/anm/player/ik/weapons/ump.anm", "dz/anims/anm/player/reloads/ump45/w_ump45_states.anm");
		pType.AddItemInHandsProfileIK("JD_PDWR_Base", "dz/anims/workspaces/player/player_main/weapons/player_main_cz61.asi", pBehavior, "dz/anims/anm/player/ik/weapons/cz61.anm", "dz/anims/anm/player/reloads/cz61/w_cz61_states.anm");
    }    
};