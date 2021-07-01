class BarrettSuppressor extends ItemSuppressor
{
    override bool CanPutAsAttachment( EntityAI parent )
    {
        if ( parent.IsKindOf("JD_Barrett_Base") )
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