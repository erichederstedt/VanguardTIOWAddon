class CfgAmmo
{
    class Default;
	class BulletBase;
	class RocketBase;
	class ammo_Penetrator_Base;
	class G_40mm_HE;

	class VNG_MLSmoke: RocketBase
	{
		model="\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		hit=20;
		indirectHit=20;
		indirectHitRange=4;
		explosive=1;
		cost=350;
		caliber=0;
		airFriction=0.085;
		sideAirFriction=0.085;
		maxSpeed=500;
		initTime=0;
		thrustTime=1;
		thrust=1600;
		fuseDistance=15;
		CraterEffects="";
		explosionEffects="smokeMissileSmokeEffect";
		effectsMissileInit="";
		effectsMissile="EmptyEffect";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="128 + 512";
		irLock=0;
		timeToLive=10;
		maneuvrability=0;
		allowAgainstInfantry=1;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118899,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118899,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118899,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		class CamShakeExplode
		{
			power="(35*0.2)";
			duration="((round (35^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((4 + 35^0.5)*8)";
		};
		class CamShakeHit
		{
			power=85;
			duration="((round (85^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(15^0.25)";
			duration="((round (15^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((15^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};

	class TIOW_MLAT: RocketBase
	{
		model="\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		hit=690;
		indirectHit=3;
		indirectHitRange=1;
		explosive=0.1;
		cost=350;
		airFriction=0.085;
		sideAirFriction=0.085;
		maxSpeed=700;
		initTime=0;
		thrustTime=1;
		thrust=1600;
		fuseDistance=15;
		submunitionAmmo="TIOW_MLAT_Penetrator";
		CraterEffects="ATMissileCrater";
		explosionEffects="ATMissileExplosion";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=820;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		effectsMissileInit="";
		effectsMissile="EmptyEffect";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="128 + 512";
		irLock=1;
		timeToLive=10;
		maneuvrability=0;
		allowAgainstInfantry=0;
		caliber=0;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118899,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118899,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118899,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		class CamShakeExplode
		{
			power="(35*0.2)";
			duration="((round (35^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((4 + 35^0.5)*8)";
		};
		class CamShakeHit
		{
			power=85;
			duration="((round (85^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(15^0.25)";
			duration="((round (15^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((15^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};
	class TIOW_MLAT_Penetrator: ammo_Penetrator_Base
	{
		caliber=60;
		hit=700;
		indirectHit=12;
		indirectHitRange=2;
	};

	class VNG_MLMelta: RocketBase
	{
		model="\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		hit=1200;
		indirectHit=3;
		indirectHitRange=1;
		explosive=0.1;
		cost=350;
		airFriction=0.085;
		sideAirFriction=0.085;
		maxSpeed=700;
		initTime=0;
		thrustTime=1;
		thrust=1600;
		fuseDistance=15;
		submunitionAmmo="TIOW_MLAT_Penetrator";
		CraterEffects="ATMissileCrater";
		explosionEffects="TIOW_Meltagun_flameExplosion";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=820;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
		effectsMissileInit="";
		effectsMissile="EmptyEffect";
		simulationStep=0.02;
		airLock=0;
		aiAmmoUsageFlags="128 + 512";
		irLock=1;
		timeToLive=10;
		maneuvrability=0;
		allowAgainstInfantry=0;
		caliber=0;
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_01",
			2.5118899,
			1,
			1800
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_02",
			2.5118899,
			1,
			1800
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\Titan\Explosion_titan_missile_03",
			2.5118899,
			1,
			1800
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.34,
			"soundHit2",
			0.33000001,
			"soundHit3",
			0.33000001
		};
		class CamShakeExplode
		{
			power="(35*0.2)";
			duration="((round (35^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((4 + 35^0.5)*8)";
		};
		class CamShakeHit
		{
			power=85;
			duration="((round (85^0.25))*0.2 max 0.2)";
			frequency=20;
			distance=1;
		};
		class CamShakeFire
		{
			power="(15^0.25)";
			duration="((round (15^0.5))*0.2 max 0.2)";
			frequency=20;
			distance="((15^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power=1;
			duration=0.1;
			frequency=20;
			distance=1;
		};
	};

	class VNG_HighPoweredM36KantRifle_LasBolt: BulletBase
	{
		allowAgainstInfantry=1;
		hit=30;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		cost=1;
		visibleFire=8;
		audibleFire=12;
		visibleFireTime=3;
		airFriction=0;
		coefGravity=0;
		timetolive=6;
		typicalSpeed=1000;
		deflecting=0;
		explosive=0;
		fuseDistance=0;
		caliber=1.6;
		model="\a40k_wepbase\LasgunFlashes\lasbolt";
		nvgOnly=0;
		tracerStartTime=0.001;
		tracerEndTime=10;
		class CamShakeFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
		class CamShakePlayerFire
		{
			power=0;
			duration=0;
			frequency=0;
			distance=0;
		};
	};
	
	class TIOW_KriegLauncher_60mmFrag: G_40mm_HE
	{
		hit=140;
		indirectHit=30;
		indirectHitRange=7.5;
		ace_frag_enabled = 1;
		ace_frag_metal = 210;
		ace_frag_charge = 185;
		ace_frag_gurney_c = 2843;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_huge"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
};
