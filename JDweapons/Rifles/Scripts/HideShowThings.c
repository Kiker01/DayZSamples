	void HideIronSightsJayDizzle (EntityAI ParentItem)
	{
		protected int hideIronsightsId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideIronsightsId = selectionNames.Find("ironsights_temp");
			
		ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,false);
	};

	void ShowIronSightsJayDizzle (EntityAI ParentItem)
	{
		protected int hideIronsightsId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideIronsightsId = selectionNames.Find("ironsights_temp");

		ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,true);
	};
	
	void FoldSightsJayDizzle (EntityAI ParentItem)
	{
		protected int foldingOpticRaisedId = -1;
		protected int foldingOpticLoweredId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		foldingOpticRaisedId = selectionNames.Find("folding_raised");
		foldingOpticLoweredId = selectionNames.Find("folding_lowered");  
			
		ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,false);
		ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,true);
	};

	void UnfoldSightsJayDizzle(EntityAI ParentItem)
	{
		protected int foldingOpticRaisedId = -1;
		protected int foldingOpticLoweredId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		foldingOpticRaisedId = selectionNames.Find("folding_raised");
		foldingOpticLoweredId = selectionNames.Find("folding_lowered");  

		ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,true);
		ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,false);
	};	