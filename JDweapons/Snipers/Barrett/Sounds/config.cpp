class CfgPatches
{
	class JD_BARRETT_SOUNDS
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Sounds_Effects",
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
	};
};
class CfgSoundCurves
{
	class closureShotBarrettSuppressedCurve
	{
		points[]=
		{
			{0,1},
			{5,1},
			{6,0.894},
			{7,0.776},
			{8,0.632},
			{9,0.447},
			{10,0.2},
			{200,0.1}
		};
	};
	class closeShotBarrettSuppressedCurve
	{
		points[]=
		{
			{0,1},
			{50,1},
			{80,0.894},
			{140,0.776},
			{200,0.632},
			{250,0.447},
			{300,0},
			{350,0}
		};
	};
	class midShotBarrettSuppressedCurve
	{
		points[]=
		{
			{0,0},
			{50,0},
			{60,0.325},
			{70,0.475},
			{80,0.606},
			{90,0.743},
			{100,1},
			{200,1},
			{225,0.894},
			{250,0.775},
			{275,0.447},
			{300,0.125},
			{325,0.075}
		};
	};
	class distShotBarrettSuppressedCurve
	{
		points[]=
		{
			{0,0},
			{200,0},
			{225,0.325},
			{250,0.474},
			{300,0.125},
			{350,0},
			{400,0}
		};
	};
	class closureShotBarrettCurve
	{
		points[]=
		{
			{0,1},
			{5,1},
			{8,0.894},
			{9,0.776},
			{11,0.632},
			{14,0.447},
			{17,0},
			{3500,0}
		};
	};
	class closeShotBarrettCurve
	{
		points[]=
		{
			{0,1},
			{150,1},
			{200,0.894},
			{300,0.632},
			{400,0.475},
			{500,0.235},
			{550,0},
			{3500,0}
		};
	};
	class midShotBarrettCurve
	{
		points[]=
		{
			{0,0},
			{150,0},
			{250,0.235},
			{300,0.475},
			{350,0.632},
			{400,0.894},
			{450,1},
			{550,1},
			{700,0.754},
			{850,0.475},
			{1200,0.237},
			{1300,0},
			{3500,0}
		};
	};
	class distShotBarrettCurve
	{
		points[]=
		{
			{0,0},
			{400,0},
			{600,0.235},
			{900,0.585},
			{1200,0.732},
			{1300,1},
			{1700,1},
			{1900,0.835},
			{2100,0.415},
			{2700,0.112},
			{2900,0.1},
			{3500,0}
		};
	};
};
class CfgSoundShaders
{
	class reloadWeapon_SoundShader;
	class SVD_charge_open_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			{
				"JDweapons\Snipers\Barrett\Sounds\BarrettChargeOpen",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_charge_open_release_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			{
				"JDweapons\Snipers\Barrett\Sounds\BarrettChargeOpenRelease",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_charge_close_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\Snipers\Barrett\Sounds\BarrettChargeClose",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_charge_close_release_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\Snipers\Barrett\Sounds\BarrettChargeCloseRelease",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_chamber_load2_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\Snipers\Barrett\Sounds\BarrettChamberLoad2",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_mag_in_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\Snipers\Barrett\Sounds\BarrettMagIn",
				1
			}
		};
		volume=0.56234133;
	};
	class SVD_mag_load_SoundShader: reloadWeapon_SoundShader
	{
		samples[]=
		{
			
			{
				"JDweapons\Snipers\Barrett\Sounds\BarrettMagLoad",
				1
			}
		};
		volume=0.56234133;
	};
	class Barrett_SoundShaderClosureSuppressed
	{
		samples[] = {{"JDweapons\Snipers\Barrett\Sounds\M82ShotSuppressedClosure",1}};
		volume=1.2;
		range=150;
		rangeCurve="closureShotBarrettSuppressedCurve";
	};
	class Barrett_SoundShaderCloseSuppressed
    {
        samples[] = {{"JDweapons\Snipers\Barrett\Sounds\M82ShotSuppressed",1}};
        volume = 1.5;
        range = 325; 
        rangeCurve="closeShotBarrettSuppressedCurve";
    };
    class Barrett_SoundShaderMidSuppressed
    {
        samples[] = {{"JDweapons\Snipers\Barrett\Sounds\M82ShotSuppressedMid",1}};
        volume = 1.25;
        range = 400; 
        rangeCurve="midShotBarrettSuppressedCurve";
    };
	class Barrett_SoundShaderLongSuppressed
    {
        samples[] = {{"JDweapons\Snipers\Barrett\Sounds\M82ShotSuppressedLong",1}};
        volume = 1.15;
        range = 450; 
        rangeCurve="distShotBarrettSuppressedCurve";
    };
	class Barrett_ClosureShot_SoundShader
	{
		samples[] = {{"JDweapons\Snipers\Barrett\Sounds\M82ShotClosure",1}};
		volume = 1.2;
        range = 3500; 
        rangeCurve="closureShotBarrettCurve";
	};
	class Barrett_CloseShot_SoundShader
	{
		samples[] = {{"JDweapons\Snipers\Barrett\Sounds\M82ShotClose",1}};
		volume = 1.5;
        range = 3500; 
        rangeCurve="closeShotBarrettCurve";
	};
	class Barrett_MidShot_SoundShader
	{
		samples[] = {{"JDweapons\Snipers\Barrett\Sounds\M82ShotMid",1}};
		volume = 1.25;
		range = 3500; 
        rangeCurve="midShotBarrettCurve";
	};
	class Barrett_LongShot_SoundShader
	{
		samples[] = {{"JDweapons\Snipers\Barrett\Sounds\M82ShotLong",1}};
		volume = 1.15;
		range = 3500; 
        rangeCurve="distShotBarrettCurve";
	};

};
class CfgSoundSets
{
    class Rifle_Shot_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
    class Barrett_Suppressed_SoundSet: Rifle_silencerShot_Base_SoundSet
    {
        soundShaders[]=
		{
			"Barrett_SoundShaderCloseSuppressed",
			"Barrett_SoundShaderMidSuppressed",
			"Barrett_SoundShaderLongSuppressed"
		};
    };
	class Barrett_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Barrett_CloseShot_SoundShader",
			"Barrett_MidShot_SoundShader",
			"Barrett_LongShot_SoundShader"
		};
	};
};	