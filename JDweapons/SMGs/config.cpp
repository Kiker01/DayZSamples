class CfgPatches
{
	class BlackoutWE_SMGs
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
	class BlackoutWE_SMGs
	{
		dir="BlackoutWE_SMGs";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="BlackoutWE_SMGs";
		credits="CashewSan";
		author="CashewSan";
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
					"BlackoutWE\SMGs\Scripts"
				};
			};
		};
	};
};