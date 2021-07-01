class CfgPatches
{
	class JD_MP5_Sounds
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
class CfgSoundShaders
{
    class baseCharacter_SoundShader;
    class MP5SD_SoundShaderClose
    {
        samples[] = {{"JDweapons\SMGs\MP5\Sounds\MP5SDClose",1}}; 
        volume = 1.2; 
        range = 40; 
        rangeCurve = "closeShotCurve"; 
    };
    class MP5SD_SoundShaderMid
    {
        samples[] = {{"JDweapons\SMGs\MP5\Sounds\MP5SDMid",1}}; 
        volume = 0.56234133; 
        range = 400; 
        rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{75,0},
			{400,0}
		}; 
    };
    class MP5SD_SoundShaderLong
    {
        samples[] = {{"JDweapons\SMGs\MP5\Sounds\MP5SDLong",1}}; 
        volume = 0.5; 
        range = 400; 
        rangeCurve[]=
		{
			{0,0},
			{50,0},
			{75,1},
			{400,1}
		}; 
    };
	
	
	
	class base_closeShot_SoundShader;
	class MP5_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[]=
		{
			{
				"JDweapons\SMGs\MP5\Sounds\MP5_close",
				1
			}
		};
		volume=1.25;
	};
	class base_midShot_SoundShader;
	class MP5_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[]=
		{
			{
				"JDweapons\SMGs\MP5\Sounds\MP5_mid",
				1
			}
		};
		volume=1.29125091;
	};
	class base_distShot_SoundShader;
	class MP5_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[]=
		{
			{
				"JDweapons\SMGs\MP5\Sounds\MP5_far",
				1
			}
		};
		volume=1.5125376;
	};
	
	
	
	
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
	class Pistol_Shot_Base_SoundSet;
    class MP5SD_SoundSet: Pistol_Shot_Base_SoundSet
    {
        soundShaders[] = {"MP5SD_SoundShaderClose","MP5SD_SoundShaderMid","MP5SD_SoundShaderLong"}; 
    };
	
	class MP5_Shot_SoundSet: Pistol_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MP5_closeShot_SoundShader",
			"MP5_midShot_SoundShader",
			"MP5_distShot_SoundShader",
			"MP5K_Closure_SoundShader"
		};
	};
};