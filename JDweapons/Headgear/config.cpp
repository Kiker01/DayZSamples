class CfgPatches
{
	class JD_Headgear
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
	class JD_Headgear
	{
		dir="JD_Headgear";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="JD_Headgear";
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
					"JDweapons\Headgear\Scripts"
				};
			};
		};
	};
};