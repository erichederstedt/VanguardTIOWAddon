class CfgAmmo
{
	/*
		Potential future changes:
			Maybe change out the B_127x108_Ball balances for the B_127x99_Ball.
			Buff for TIOW_blaster_pulseshot.
			Rebalance ork weapons when they get fixid.
			Vehicle weapons("Autocannon60mmAPMag", "Autocannon60mmAPCRMag", "Autocannon60mmHEMag").
	*/
	class BulletBase;
	class Sh_120mm_HE;
	class B_30mm_HE;
	class B_127x99_Ball;
	class B_12Gauge_Pellets;
	class ShellBase;
	class ammo_Penetrator_Base;
	class B_20mm;
	class B_30mm_APFSDS;
	class B_40mm_APFSDS;
	class B_40mm_GPR;
	class BulletCore;
	
	class VNG_pen_base: BulletBase
	{
		model = "\A3\weapons_f\empty";
		caliber = 40;
		//warheadName = "HEAT";
		hit = 300;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		typicalSpeed = 1000;
		timeToLive = 0.2;
		simulationStep = 0.05;
		airFriction = -0.28;
		deflecting = 0;
		deflectionDirDistribution = 0;
		penetrationDirDistribution = 0;
		aiAmmoUsageFlags = "128 + 512";
		dangerRadiusHit = 60;
		suppressionRadiusHit = 30;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactMetalSabotSmall";
			hitGlassArmored = "ImpactMetalSabotSmall";
			hitWood = "ImpactMetalSabotSmall";
			hitHay = "ImpactMetalSabotSmall";
			hitMetal = "ImpactMetalSabotSmall";
			hitMetalPlate = "ImpactMetalSabotSmall";
			hitBuilding = "ImpactMetalSabotSmall";
			hitPlastic = "ImpactMetalSabotSmall";
			hitRubber = "ImpactMetalSabotSmall";
			hitTyre = "ImpactMetalSabotSmall";
			hitConcrete = "ImpactMetalSabotSmall";
			hitMan = "ImpactMetalSabotSmall";
			hitGroundSoft = "ImpactMetalSabotSmall";
			hitGroundRed = "ImpactMetalSabotSmall";
			hitGroundHard = "ImpactMetalSabotSmall";
			hitWater = "ImpactEffectsWater";
			default_mat = "ImpactMetalSabotSmall";
		};
		whistleOnFire = 1;
		whistleDist = 14;
	};
	
	// Human stuff
	class Long825: BulletBase // B_556x45_Ball
	{
		hit = 9;
		typicalSpeed = 920;
		caliber = 0.869565;
		airFriction = -0.001;
		ACE_caliber = 5.69;
		ACE_bulletLength = 23.012;
		ACE_bulletMass = 4.0176;
		ACE_ammoTempMuzzleVelocityShifts[] = {-27.2, -26.44, -23.76, -21, -17.54, -13.1, -7.95, -1.62, 6.24, 15.48, 27.75};
		ACE_ballisticCoefficients[] = {0.151};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900};
		ACE_barrelLengths[] = {210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508, 609.6};
	};
	class TIOW_Long825HS: Long825 // Normal stubber round raplaced stats with that off B_762x51_Ball
	{
		hit = 11.6;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=2;
		cartridge="FxCartridge_65";
		tracerScale=0.6;
		tracerStartTime=0.0075;
		tracerEndTime=5;
		caliber = 1.8;
		airFriction = -0.00101071;
		typicalSpeed = 835;
		ACE_caliber = 7.925;
		ACE_bulletLength = 28.956;
		ACE_bulletMass = 9.8496;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.4};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {760, 795, 835, 865};
		ACE_barrelLengths[] = {406.4, 508, 604.5, 736.6};
	};
	class TIOW_Long825HSA: TIOW_Long825HS // Amputator stubber round added the ace stats from the B_762x51_Ball
	{
		hit=8.5;
		indirectHit=5;
		indirectHitRange=1;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=2;
		explosive=0.25;
		cartridge="FxCartridge_65";
		explosionSoundEffect="DefaultExplosion";
		CraterEffects="";
		explosionEffects="AmputatorRoundExplosion";
		typicalSpeed=720;
		caliber=1.5;
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=5;
	};
	class TIOW_Long825HSER: TIOW_Long825HS // Expander stubber round tuned based on the B_762x51_Ball
	{
		hit=14;
		indirectHit=0;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=2;
		indirectHitRange=0;
		cartridge="FxCartridge_65";
		typicalSpeed=820;
		caliber=1.9;
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=5;
	};
	class TIOW_Long825HSMS: TIOW_Long825HS // Manstopper stubber round tuned based on the B_762x51_Ball
	{
		hit=12.5;
		indirectHit=0;
		visibleFire=32;
		audibleFire=32;
		visibleFireTime=2;
		indirectHitRange=0;
		cartridge="FxCartridge_65";
		typicalSpeed=920;
		caliber=2;
		tracerScale=0.60000002;
		tracerStartTime=0.0074999998;
		tracerEndTime=5;
	};
	class TIOW_IGBoltRound: BulletBase // Based on B_45ACP_Ball
	{
		hit=25;
		indirectHit=5;
		indirectHitRange=0.3;
		caliber=1.4;
		ACE_caliber = 11.481;
		ACE_bulletLength = 17.272;
		ACE_bulletMass = 14.904;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
		ACE_ballisticCoefficients[] = {0.195};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {230, 250, 285};
		ACE_barrelLengths[] = {101.6, 127, 228.6};
	};
	class M36KantRifle_LasBolt: BulletBase // B_762x51_Ball
	{
		//ACE_damageType = "lasBolt";
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
	};
	class VNG_HighPoweredM36KantRifle_LasBolt: M36KantRifle_LasBolt // B_338_Ball
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
	class TIOW_LongLas_LasBolt: BulletBase // B_408_Ball 
	{
		initSpeed = 1000;
		hit = 48; // 24 @SpecialWeaponRebalance
		caliber = 2.4;
		typicalSpeed = 910;
		ACE_caliber = 10.363;
		ACE_bulletLength = 55.1942;
		ACE_bulletMass = 27.1507;
		ACE_transonicStabilityCoef = 1;
		ACE_muzzleVelocityVariationSD = 0.2;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.434};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 7;
		ACE_muzzleVelocities[] = {867};
		ACE_barrelLengths[] = {736.6};
	};
	class Lucius98_LasBolt: BulletBase // B_338_Ball
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
	class TIOW_Antioc43_LasBolt: Lucius98_LasBolt // B_762x51_Ball
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
		//model = "\a40k_wepbase\LasgunFlashes\lasbolt_chaos_red"; 
	};
	class TIOW_Antioc43_LasBoltHeavy: Lucius98_LasBolt // B_338_Ball
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
		//model = "\a40k_wepbase\LasgunFlashes\lasbolt_chaos_violet";
	};
	class Type14_LasBolt: BulletBase // B_93x64_Ball
	{
		hit = 18;
		caliber = 2.2;
		typicalSpeed = 785;
		ACE_caliber = 9.28;
		ACE_bulletLength = 35.56;
		ACE_bulletMass = 17;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.515};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {768, 788, 798};
		ACE_barrelLengths[] = {508, 620, 660.4};
	};
	class TIOW_PlasmagunRound: Sh_120mm_HE // B_127x108_Ball TODO: Change from shell to bullet
	{
		hit = 70; // 35 @SpecialWeaponRebalance
		indirectHit = 20; // 0 @SpecialWeaponRebalance
		indirectHitRange = 0.2; // 0 @SpecialWeaponRebalance
		caliber = 2.8;
		typicalSpeed = 820;
		ACE_caliber = 12.979;
		ACE_bulletLength = 64.008;
		ACE_bulletMass = 48.276;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820};
		ACE_barrelLengths[] = {728.98};
		
		simulation = "shotBullet";
		
		submunitionAmmo = "VNG_PlasmagunRound_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 0;
	};
	class TIOW_Overcharge_PlasmagunRound: TIOW_PlasmagunRound // B_20mm
	{
		hit = 180; // 80 @SpecialWeaponRebalance
		typicalSpeed = 1050;
		indirectHit = 60; // 25 @SpecialWeaponRebalance
		indirectHitRange = 5; // 2 @SpecialWeaponRebalance
		warheadName = "AT";
		caliber = 1.4;
		explosive = 0.65;
		ACE_caliber = 20;
		ACE_bulletLength = 102;
		ACE_bulletMass = 102.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
		
		simulation = "shotBullet";
		
		submunitionAmmo = "VNG_PlasmagunRound_Penetrator"; // @SpecialWeaponRebalance
		submunitionDirectionType = "SubmunitionModelDirection"; // @SpecialWeaponRebalance
		submunitionInitSpeed = 1000; // @SpecialWeaponRebalance
		submunitionParentSpeedCoef = 0; // @SpecialWeaponRebalance
		submunitionInitialOffset[] = {0, 0, -0.2}; // @SpecialWeaponRebalance
		triggerOnImpact = 1; // @SpecialWeaponRebalance
		deleteParentWhenTriggered = 0; // @SpecialWeaponRebalance
	};
	class VNG_PlasmagunRound_Penetrator: BulletBase // @SpecialWeaponRebalance
	{
		warheadName = "AT";
		simulation = "shotBullet";
		ACE_damageType = "bullet";
		caliber = 20;
		hit = 390;
	};
	class TIOW_Melta_Ammo: BulletBase
	{
		hit=615;
	};
	
	//Space Marine stuff
	class TIOW_SmBoltRound: BulletBase // B_127x108_Ball
	{
		hit = 41; // 41-6=35
		caliber = 2.8;
		indirectHit = 6;
		indirectHitRange = 0.3;
		explosive = 0.25;
		typicalSpeed = 820;
		ACE_caliber = 12.979;
		ACE_bulletLength = 64.008;
		ACE_bulletMass = 48.276;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820};
		ACE_barrelLengths[] = {728.98};
	};
	class TIOW_IG_HeavyBolter_Rnd: B_30mm_HE // B_127x108_APDS
	{
		hit = 60;
		indirectHit = 6;
		indirectHitRange = 2.5;
		explosive = 0.5;
		caliber = 3.6;
		typicalSpeed = 820;
		ACE_caliber = 12.979;
		ACE_bulletLength = 64.008;
		ACE_bulletMass = 48.276;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820};
		ACE_barrelLengths[] = {728.98};
	};
	class TIOW_SM_PlasmagunRound: Sh_120mm_HE // B_20mm
	{
		hit = 80;
		typicalSpeed = 1050;
		indirectHit = 25;
		indirectHitRange = 2;
		warheadName = "HE";
		caliber = 1.4;
		explosive = 0.65;
		ACE_caliber = 20;
		ACE_bulletLength = 102;
		ACE_bulletMass = 102.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1050};
		ACE_barrelLengths[] = {728.98};
	};
	class TIOW_SM_Overcharge_PlasmagunRound: TIOW_SM_PlasmagunRound // B_40mm_APFSDS
	{
		hit = 350; // hit - indirectHit = actual hit which would be 150 in this case.
		indirectHit = 200;
		indirectHitRange = 2.5;
		typicalSpeed = 1140;
		warheadName = "AP";
		caliber = 8;
		explosive = 0.65;
		ACE_caliber = 40;
		ACE_bulletLength = 365;
		ACE_bulletMass = 930;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
	};
	
	//T'au stuff
	class TIOW_rifle_pulseshot: B_127x99_Ball // B_93x64_Ball but way lower pen
	{
		hit = 18; // 18
		caliber = 2.2;
		typicalSpeed = 820; // 785
		ACE_caliber = 9.28;
		ACE_bulletLength = 35.56;
		ACE_bulletMass = 17;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.515};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {768, 788, 798};
		ACE_barrelLengths[] = {508, 620, 660.4};
	};
	class TIOW_blaster_pulseshot: B_12Gauge_Pellets // B_12Gauge_Pellets TODO: Needs check
	{
		hit = 10;
		indirectHit = 2;
		indirectHitRange = 0.4;
		caliber = 1;
		fireSpreadAngle=9;
		trackLead=1.0;
		trackOversteer=1.0;
	};
	class TIOW_ionrifle_shot: B_127x99_Ball // B_30mm_AP
	{
		typicalSpeed = 1120;
		caliber = 4.2;
		hit = 80;
		indirectHit = 8;
		indirectHitRange = 0.2;
		warheadName = "AP";
		ACE_caliber = 30;
		ACE_bulletLength = 173;
		ACE_bulletMass = 227;
		ACE_muzzleVelocityVariationSD = 0.4;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.515};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ICAO";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {768, 788, 798};
		ACE_barrelLengths[] = {508, 620, 660.4};
	};
	class TIOW_ionrifle_overcharge: ShellBase // B_40mm_APFSDS
	{
		hit = 230; // hit - indirectHit = actual hit which would be 150 in this case.
		indirectHit = 80;
		indirectHitRange = 2;
		typicalSpeed = 1140;
		warheadName = "AP";
		caliber = 8;
		explosive = 0.65;
		ACE_caliber = 40;
		ACE_bulletLength = 365;
		ACE_bulletMass = 930;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
	};
	class TIOW_railrifle_shot: B_127x99_Ball // B_127x108_APDS
	{
		hit = 60;
		caliber = 3.6;
		typicalSpeed = 820;
		ACE_caliber = 12.979;
		ACE_bulletLength = 64.008;
		ACE_bulletMass = 48.276;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {820};
		ACE_barrelLengths[] = {728.98};
	};
	class TIOW_pulse_pistol_shot: TIOW_rifle_pulseshot // B_45ACP_Ball
	{
		hit=14;
		indirectHit=0;
		indirectHitRange=0;
		caliber=1.4;
		ACE_caliber = 11.481;
		ACE_bulletLength = 17.272;
		ACE_bulletMass = 14.904;
		ACE_ammoTempMuzzleVelocityShifts[] = {-2.655, -2.547, -2.285, -2.012, -1.698, -1.28, -0.764, -0.153, 0.596, 1.517, 2.619};
		ACE_ballisticCoefficients[] = {0.195};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {230, 250, 285};
		ACE_barrelLengths[] = {101.6, 127, 228.6};
	};
	
	//Human vehicle
	class TIOW_Autocannon60mmAP: B_30mm_APFSDS // B_30mm_APFSDS
	{
		/*
		hit = 200;
		indirectHit = 8;
		indirectHitRange = 0.2;
		typicalSpeed = 1320;
		warheadName = "AP";
		caliber = 8;
		explosive = 0;
		deflecting = 15;
		ACE_caliber = 40;
		ace_rearm_caliber = 40;
		ACE_bulletLength = 365;
		ACE_bulletMass = 930;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
		*/
	};
	class TIOW_Autocannon60mmAPCR: B_40mm_APFSDS // B_40mm_APFSDS, +50% hit, +20% caliber
	{
		/*
		hit = 225;
		indirectHit = 0;
		indirectHitRange = 0;
		typicalSpeed = 1140;
		warheadName = "AP";
		caliber = 9.6;
		explosive = 0;
		ACE_caliber = 40;
		ACE_bulletLength = 365;
		ACE_bulletMass = 930;
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19};
		ACE_ballisticCoefficients[] = {0.63};
		ACE_velocityBoundaries[] = {};
		ACE_standardAtmosphere = "ASM";
		ACE_dragModel = 1;
		ACE_muzzleVelocities[] = {1140};
		ACE_barrelLengths[] = {728.98};
		*/
	};
	class TIOW_Autocannon60mmHE: B_40mm_GPR // B_40mm_GPR
	{
		/*
		hit = 200;
		indirectHit = 25;
		indirectHitRange = 4;
		explosive = 1;
		warheadName = "HE";
		caliber = 7;
		*/
	};
	
	class TIOW_HydraCannon_Rnd: BulletCore // B_35mm_AA
	{
		hit = 120;
		indirectHit = 30;
		indirectHitRange = 5;
		warheadName = "HE";
		caliber = 2.8;
		typicalSpeed = 1800;
		ACE_damageType = "explosive";
		ace_rearm_caliber = 35;
		
		dangerRadiusBulletClose = 20;
		dangerRadiusHit = 60;
		suppressionRadiusBulletClose = 12;
		suppressionRadiusHit = 24;
	};
	
	/*
	class TIOW_Battlecannon_120mm_APCBC: ShellBase // TODO: Sh_120mm_APFSDS
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		explosive = 0;
		hit = 512;
		indirectHit = 12;
		indirectHitRange = 0.4;
		dangerRadiusHit = 100;
		suppressionRadiusHit = 18;
		typicalSpeed = 1500;
		cost = 300;
		airFriction = -3.96e-005;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		caliber = 42;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		aiAmmoUsageFlags = "128 + 256 + 512";
		deflecting = 15;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(180^0.5)";
			duration = "((round (180^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 180;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class TIOW_Battlecannon_120mm_HEAT: ShellBase // TODO: Sh_120mm_HEAT_MP
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		explosive = 0.5;
		hit = 575;
		indirectHit = 75;
		indirectHitRange = 7.5;
		dangerRadiusHit = 100;
		suppressionRadiusHit = 18;
		typicalSpeed = 1800;
		cost = 300;
		airFriction = -3.96e-005;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		caliber = 30;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
		deflecting = 0;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(180^0.5)";
			duration = "((round (180^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 180;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class TIOW_Battlecannon_120mm_HE: ShellBase // TODO: Sh_120mm_HE
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 350;
		indirectHit = 100;
		indirectHitRange = 15;
		dangerRadiusHit = 160;
		suppressionRadiusHit = 32;
		typicalSpeed = 1000;
		explosive = 1;
		cost = 300;
		airFriction = -0.000275;
		caliber = 5;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256";
		deflecting = 0;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class CamShakeExplode
		{
			power = "(120*0.2)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((7 + 120^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 120;
			duration = "((round (120^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class TIOW_Demolisher_HEAT: ShellBase // TODO: Something
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		explosive = 0.5;
		hit = 1100;
		indirectHit = 100;
		indirectHitRange = 10;
		dangerRadiusHit = 100;
		suppressionRadiusHit = 18;
		typicalSpeed = 750;
		cost = 300;
		airFriction = -3.96e-005;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		explosionSoundEffect = "DefaultExplosion";
		caliber = 250;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
		deflecting = 0;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(180^0.5)";
			duration = "((round (180^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 180;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class TIOW_Demolisher_HE: ShellBase // TODO: Something
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 1000;
		indirectHit = 950;
		indirectHitRange = 22.5;
		dangerRadiusHit = 160;
		suppressionRadiusHit = 32;
		typicalSpeed = 850;
		explosive = 1;
		cost = 300;
		airFriction = -0.000275;
		caliber = 10;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		explosionSoundEffect = "DefaultExplosion";
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256";
		deflecting = 0;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class CamShakeExplode
		{
			power = "(120*0.2)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((7 + 120^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 120;
			duration = "((round (120^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class TIOW_Vanquisher_120mm_APFSDS: ShellBase // TODO: Sh_125mm_APFSDS
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		explosive = 0;
		hit = 662;
		indirectHit = 12;
		indirectHitRange = 0.4;
		dangerRadiusHit = 100;
		suppressionRadiusHit = 18;
		typicalSpeed = 1900;
		cost = 300;
		airFriction = -3.96e-005;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		caliber = 50;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		aiAmmoUsageFlags = "128 + 256 + 512";
		deflecting = 15;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(180^0.5)";
			duration = "((round (180^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 180;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class TIOW_Vanquisher_120mm_HE: ShellBase // TODO: Sh_125mm_HE
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		hit = 350;
		indirectHit = 100;
		indirectHitRange = 15;
		dangerRadiusHit = 160;
		suppressionRadiusHit = 32;
		typicalSpeed = 1300;
		explosive = 1;
		cost = 300;
		airFriction = -0.000275;
		caliber = 5;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256";
		deflecting = 0;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class CamShakeExplode
		{
			power = "(120*0.2)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((7 + 120^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 120;
			duration = "((round (120^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class TIOW_LemanRuss_Lascannon_Rnd: BulletBase // TODO: Something
	{
		allowAgainstInfantry = 1;
		hit = 675;
		indirectHit = 25;
		indirectHitRange = 0.5;
		cartridge = "";
		cost = 300;
		visibleFire = 32;
		audibleFire = 32;
		airFriction = 0;
		coefGravity = 0;
		submunitionAmmo = "TIOW_LemanRuss_Lascannon_Penetrator";
		submunitionDirectionType = "SubmunitionModelDirection";
		submunitionInitSpeed = 820;
		submunitionParentSpeedCoef = 0;
		submunitionInitialOffset[] = {0, 0, -0.2};
		triggerOnImpact = 1;
		deleteParentWhenTriggered = 1;
		timetolive = 6;
		typicalSpeed = 1000;
		explosive = 0.5;
		fuseDistance = 0;
		caliber = 105;
		explosionEffects = "";
		model = "\A3\weapons_f\empty";
		effectFly = "TIOW_LascannonBeam_flametrail";
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
		deflecting = 0;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class TIOW_LemanRuss_Lascannon_Penetrator: ammo_Penetrator_Base // TODO: Something
	{
		caliber = 105;
		warheadName = "TandemHEAT";
		hit = 675;
		explosive = 0.1;
		indirectHit = 25;
		indirectHitRange = 0.5;
		deflecting = 0;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitTyre = "ImpactTyre";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundRed = "ImpactEffectsRed";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class TIOW_PunisherGatlingCannon_Rnd: B_20mm // TODO: B_40mm_APFSDS
	{
		hit = 50;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 4;
		explosive = 0;
		cost = 0.5;
		airLock = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.5;
		tracerStartTime = 0.01;
		tracerEndTime = 1;
		airFriction = -0.00086;
		muzzleEffect = "";
		caliber = 2.5;
	};
	class TIOW_ExterminatorCannon_Rnd: ShellBase // TODO: Something
	{
		SoundSetExplosion[] = {"Shell105mm130mm_Exp_SoundSet", "Shell105mm130mm_Tail_SoundSet", "Explosion_Debris_SoundSet"};
		explosive = 0.5;
		hit = 330;
		indirectHit = 30;
		indirectHitRange = 5;
		dangerRadiusHit = 100;
		suppressionRadiusHit = 18;
		typicalSpeed = 1800;
		cost = 150;
		airFriction = -3.96e-005;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		CraterWaterEffects = "ImpactEffectsWaterHE";
		caliber = 20;
		timeToLive = 15;
		whistleOnFire = 1;
		whistleDist = 14;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_white";
		tracerScale = 3;
		tracerStartTime = 0.1;
		tracerEndTime = 3;
		muzzleEffect = "";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_01", 1.77828, 1, 1800};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_02", 1.77828, 1, 1800};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_03", 1.77828, 1, 1800};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Tank_shell_explosion_04", 1.77828, 1, 1800};
		multiSoundHit[] = {"soundHit1", 0.25, "soundHit2", 0.25, "soundHit3", 0.25, "soundHit4", 0.25};
		allowAgainstInfantry = 1;
		aiAmmoUsageFlags = "16 + 64 + 128 + 256 + 512";
		deflecting = 0;
		deflectionDirDistribution = 0.1;
		penetrationDirDistribution = 0.1;
		class HitEffects
		{
			hitMetal = "ImpactMetalSabotBig";
			hitMetalPlate = "ImpactMetalSabotBig";
			hitBuilding = "ImpactConcreteSabot";
			hitConcrete = "ImpactConcreteSabot";
			hitGroundSoft = "ImpactEffectsGroundSabot";
			hitGroundHard = "ImpactEffectsGroundSabot";
			default_mat = "ImpactEffectsGroundSabot";
		};
		class CamShakeExplode
		{
			power = "(180^0.5)";
			duration = "((round (180^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((180^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 180;
			duration = "((round (180^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(120^0.25)";
			duration = "((round (120^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((120^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	*/
};