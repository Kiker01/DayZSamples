class JD_New_M110_Suppressor extends Inventory_Base
{
    override bool CanPutAsAttachment( EntityAI parent )
    {
        if ( parent.IsKindOf("JD_M110_Base") )
        {
            return true;
        }
        return super.CanPutAsAttachment(parent);
    }
	override bool CanDetachAttachment( EntityAI attachment )
	{
		return true;
	}
}