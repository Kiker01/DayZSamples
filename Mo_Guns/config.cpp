class CfgPatches
{
	class Mo_Guns
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class Mo_Guns
	{
		dir="Mo_Guns";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Mo_Guns";
		credits="jdfnc24";
		author="jdfnc24";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Mo_Guns\Scripts"
				};
			};
		};
	};
};