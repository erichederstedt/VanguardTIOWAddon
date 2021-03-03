class CfgAmmo
{
    class Default;
	class BulletBase;
	class RocketBase;
	class ammo_Penetrator_Base;
	class G_40mm_HE;
	class TIOW_MLAT;
	class Grenade;
	class B_127x108_APDS;
	class TIOW_Tau_Railgun_AP;
	
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

	/*
	class TIOW_MLAT: RocketBase
	{
		hit=690;
		maxSpeed=700;
		thrust=1600;
		submunitionAmmo="TIOW_MLAT_Penetrator";
	};
	class TIOW_MLAT_Penetrator: ammo_Penetrator_Base
	{
		caliber=60;
		hit=700;
		indirectHit=12;
		indirectHitRange=2;
	};
	*/

	/*
	class TIOW_MLAT: RocketBase
	{
		hit = 80;
		indirectHit = 15;
		indirectHitRange = 4;
		thrust = 1600;
		warheadName = "TandemHEAT";
		submunitionAmmo = "TIOW_MLAT_Penetrator";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		caliber = 0;
	};
	class TIOW_MLAT_Penetrator: ammo_Penetrator_Base
	{
		warheadName = "TandemHEAT";
		caliber = 100;
		hit = 512;
		indirectHit = 12;
		indirectHitRange = 2;
	};
	*/

	class VNG_MLMelta: TIOW_MLAT // TODO: Rebalance needed
	{
		model="\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7.p3d";
		hit=400;
		indirectHit=3;
		indirectHitRange=1;
		submunitionAmmo="VNG_MLMelta_Penetrator";
		CraterEffects="ATMissileCrater";
		explosionEffects="TIOW_Meltagun_flameExplosion";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=820;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
	};
	class VNG_MLMelta_Penetrator: ammo_Penetrator_Base
	{
		warheadName = "TandemHEAT";
		caliber = 300;
		hit = 512;
		indirectHit = 12;
		indirectHitRange = 2;
	};

	class M36KantRifle_LasBolt;
	class VNG_HighPoweredM36KantRifle_LasBolt: M36KantRifle_LasBolt
	{
		hit = 16;
		caliber = 2;
		typicalSpeed = 890;
		ACE_caliber = 8.585;
		ACE_bulletLength = 39.573;
		ACE_bulletMass = 16.2;
		ACE_muzzleVelocityVariationSD = 0.3;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.322};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {880, 915, 925};
		ACE_barrelLengths[] = {508, 660.4, 711.2};
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
		ace_frag_gurney_k = "1/2";
		ace_frag_classes[] = {"ACE_frag_huge"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};

	class B_127x99_Ball;
	class TIOW_ionrifle_shot;
	class VNG_ionrifle_at: TIOW_ionrifle_shot
	{
		/*
		typicalSpeed=700;
		model="\40k_tau\Effects\pulse_tracer\Pulse_tracer.p3d";
		tracerStartTime=0.001;
		tracerEndTime=10;
		tracersevery=1;
		caliber = 20;
		deflecting = 30;
		hit = 250;
		*/
		//airFriction = -0.0001;

		triggerOnImpact = 1;
		submunitionAmmo="VNG_ionrifle_at_penetrator";
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitSpeed=820;
		submunitionParentSpeedCoef=0;
		submunitionInitialOffset[]={0,0,-0.2};
	};

	class VNG_ionrifle_at_penetrator: ammo_Penetrator_Base
	{
		warheadName = "TandemHEAT";
		caliber = 60;
		hit = 512;
	};

	class ShellBase;
	class TIOW_ionrifle_overcharge: ShellBase
	{
		indirectHit=200;
		indirectHitRange=20;
		suppressionRadiusHit=30;
		ace_frag_enabled = 1;
		ace_frag_metal = 210;
		ace_frag_charge = 45;
		ace_frag_gurney_c = 2830;
		ace_frag_gurney_k = "1/2";
		ace_frag_classes[] = {"ACE_frag_medium_HD"};
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};

	class TIOW_railrifle_shot: B_127x99_Ball
	{
		coefGravity = 0.4;
	};
	
	class TIOW_ionrifle_nuke: TIOW_ionrifle_overcharge
	{
		ace_frag_metal = 140000;
        ace_frag_charge = 87000;
		ace_frag_classes[] = {"ACE_frag_huge"};
        ace_frag_gurney_c = 2960;
        ace_frag_gurney_k = 1/2;
	};
	
	class TIOW_ig_smoke_grenade_ammo: Grenade
	{
		effectsSmoke = "VNG_SmokeShellWhiteEffect";
	};

	class TIOW_sm_smoke_grenade_ammo: Grenade
	{
		effectsSmoke = "VNG_SmokeShellWhiteEffect";
	};

	class VNG_warp_ammo: M36KantRifle_LasBolt
	{
		timeToLive = 0;
	};

	class VNG_pulse_grenade: G_40mm_HE
	{
		model = "40k_tau\Grenades\photon_grenade.p3d";
		explosionEffects = "TIOW_photon_ExplosionEffect";
	};

	class TIOW_rifle_pulseshot;
	class VNG_rifle_pulseshot: TIOW_rifle_pulseshot
	{
		//typicalSpeed = 2000;
		//airFriction = -0.000808; // Why is this lower then the normal -0.00002?
		
		submunitionAmmo = "VNG_rifle_pulseshot_under";
		submunitionDirectionType="SubmunitionModelDirection";
		triggerSpeedCoef = 1;
		submunitionParentSpeedCoef=1;
		submunitionInitialOffset[]={0,-0.1,0};
		triggerTime = 0;
		deleteParentWhenTriggered = false;
	};
	class VNG_rifle_pulseshot_under: TIOW_rifle_pulseshot
	{
		//typicalSpeed = 2000;
		airFriction = -0.000808;
	};

	class VNG_LasPistol_LasBolt: M36KantRifle_LasBolt
	{
		hit=11.6;
		caliber=1.6;
		typicalSpeed = 820;
		ACE_caliber=6.706;
        ACE_bulletLength=32.893;
        ACE_bulletMass=7.9704;
        ACE_ammoTempMuzzleVelocityShifts[]={-26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19};
        ACE_ballisticCoefficients[]={0.263};
        ACE_velocityBoundaries[]={};
        ACE_standardAtmosphere="ICAO";
		ACE_dragModel = 1;
        ACE_muzzleVelocities[]={730, 760, 788, 800, 810, 830};
        ACE_barrelLengths[]={254.0, 406.4, 508.0, 609.6, 660.4, 762.0};
		airFriction = -0.0001;
		timetolive = 3;
	};
	class VNG_LasPistol_High_LasBolt: VNG_LasPistol_LasBolt
	{
		hit = 16;
		caliber = 2;
		airFriction = -0.001;
		timetolive = 3;
	};
	
	class VNG_Tau_Railgun_12_7mm_APDS_ammo: B_127x108_APDS
	{
		author = "O. Dolf";
		model = "\40k_tau\Effects\pulse_tracer\Pulse_tracer.p3d";
		class HitEffects
		{
			vehicle = "ImpactMetal";
			object = "ImpactMetal";
			hitMan = "ImpactMetal";
		};
	};
	
	
	class SubmunitionBase;
	class TIOW_Tau_Railgun_Airburst: SubmunitionBase
	{
		submunitionAmmo = "VNG_Tau_Railgun_12_7mm_APDS_ammo";
		submunitionConeType[] = {"poissondisc", 20};
		submunitionConeAngle = 0.8;
		triggerSpeedCoef[] = {0.85, 1};
		triggerTime = 0.008;
	};
	
	/*
	// Change this to actually be useful
	class TIOW_Tau_Railgun_Airburst_mag: TIOW_Tau_Railgun_AP
	{
		submunitionAmmo = "TIOW_rifle_pulseshot";
		submunitionConeType[] = {"poissondisc", 100};
		submunitionConeAngle = 10;
		triggerDistance = 10;
		triggerOnImpact = false;
		aiAmmoUsageFlags = "16 + 64 + 128";
		cost = 300;
	};
	*/
};
