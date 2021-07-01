class CfgPatches
{
	class JD_Rifle_Sounds
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
    class JD_SoundShaderClose
    {
        samples[] = {{"JDweapons\Rifles\Sounds\Rifle1Close",1}}; 
        volume = 1; 
        range = 50; 
        rangeCurve = "closeShotCurve"; 
    };
    class JD_SoundShaderMid
    {
        samples[] = {{"JDweapons\Rifles\Sounds\Rifle1Mid",1}}; 
        volume = 0.56234133; 
        range = 1500; 
        rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		}; 
    };
    class JD_SoundShaderLong
    {
        samples[] = {{"JDweapons\Rifles\Sounds\Rifle1Long",1}}; 
        volume = 1; 
        range = 1500; 
        rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		}; 
    };
	
	
	class JD_RifleShot_SoundShaderClose
    {
        samples[] = {{"JDweapons\Rifles\Sounds\RifleShot1",1}}; 
        volume = 1; 
        range = 50; 
        rangeCurve = "closeShotCurve"; 
    };
    class JD_RifleShot_SoundShaderMid
    {
        samples[] = {{"JDweapons\Rifles\Sounds\RifleShot2",1}}; 
        volume = 0.56234133; 
        range = 1500; 
        rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{1500,0}
		}; 
    };
    class JD_RifleShot_SoundShaderLong
    {
        samples[] = {{"JDweapons\Rifles\Sounds\RifleShot3",1}}; 
        volume = 1; 
        range = 1500; 
        rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{1500,1}
		}; 
    };
	
	
	class JD_Suppressed_RifleShot_SoundShaderClose
	{
		samples[] = {{"JDweapons\Rifles\Sounds\RifleShot1Suppressed",1}};
		range = 50;
		volume = 1.166836;
	};
	class JD_Suppressed_RifleShot_SoundShaderMid
	{
		samples[] = {{"JDweapons\Rifles\Sounds\RifleShot2Suppressed",1}};
		volume = 0.9;
		range = 150;
	};
	
	
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class AssaultRifle_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"JDweapons\Rifles\Sounds\AR_close",1}};
		volume = 1.0;
	};
	class AssaultRifle_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"JDweapons\Rifles\Sounds\AR_mid",1}};
		volume = 0.56234133;
	};
	class AssaultRifle_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"JDweapons\Rifles\Sounds\AR_far",1}};
		volume = 1.0;
	};
	
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class AssaultRifle_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\Rifles\Sounds\AR_silenced_close",
				1
			}
		};
		volume=1;
	};
	class base_ProfessionalSilenced_midShot_SoundShader;
	class AssaultRifle_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\Rifles\Sounds\AR_silenced_mid",
				1
			}
		};
		volume=0.56234133;
	};
	class base_ProfessionalSilenced_distShot_SoundShader;
	class AssaultRifle_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\Rifles\Sounds\AR_silenced_mid",
				1
			}
		};
		volume=0.25;
	};
};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
    class JD_Rifle1_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"JD_SoundShaderClose","JD_SoundShaderMid","JD_SoundShaderLong"}; 
    };
	class JD_RifleShot_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"JD_RifleShot_SoundShaderClose","JD_RifleShot_SoundShaderMid","JD_RifleShot_SoundShaderLong"}; 
    };
	class JD_Suppressed_RifleShot_SoundSet: Rifle_Shot_Base_SoundSet
    {
        soundShaders[] = {"JD_Suppressed_RifleShot_SoundShaderClose","JD_Suppressed_RifleShot_SoundShaderMid"}; 
    };
	class AssaultRifle_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"AssaultRifle_closeShot_SoundShader","AssaultRifle_midShot_SoundShader","AssaultRifle_distShot_SoundShader"};
	};
	class Rifle_silencerShot_Base_SoundSet;
	class AssaultRifle_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"AssaultRifle_silencerCloseShot_SoundShader",
			"AssaultRifle_silencerMidShot_SoundShader",
			"AssaultRifle_silencerDistShot_SoundShader",
			"M4_Closure_SoundShader"
		};
	};
};