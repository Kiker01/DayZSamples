	void HideMuzzleBrakeJayDizzle (EntityAI ParentItem)
	{
		protected int hideMuzzlebrakeId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideMuzzlebrakeId = selectionNames.Find("muzzlebrake_temp");
			
		ParentItem.SetSimpleHiddenSelectionState(hideMuzzlebrakeId,false);
	};

	void ShowMuzzleBrakeJayDizzle (EntityAI ParentItem)
	{
		protected int hideMuzzlebrakeId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideMuzzlebrakeId = selectionNames.Find("muzzlebrake_temp");

		ParentItem.SetSimpleHiddenSelectionState(hideMuzzlebrakeId,true);
	};
	