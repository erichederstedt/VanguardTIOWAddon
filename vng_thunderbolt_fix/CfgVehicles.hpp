class CfgVehicles
{
	/*
	class TIOW_Thunderbolt_Base: Plane_CAS_02_base_F
	{
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor=4;
				explosionShielding=3;
				name="HitHull";
				passThrough=1;
				visual="Hit_Hull";
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
				material=-1;
			};
			class HitEngine: HitHull
			{
				armor=4;
				explosionShielding=3.5;
				name="HitEngine";
				passThrough=1;
				visual="Hit_Engine";
				radius=0.30000001;
				minimalHit=0.050000001;
				depends="0";
			};
			class HitFuel: HitHull
			{
				armor=4.5;
				explosionShielding=4;
				name="HitFuel";
				passThrough=0.80000001;
				visual="";
				radius=0.30000001;
				minimalHit=0.1;
				depends="0";
			};
			class HitFuel_Lead_Left: HitFuel
			{
				armor=1.8;
				explosionShielding=3;
				name="HitFuel1_Leads";
				passThrough=0;
				visual="Hit_AileronL";
				radius=0.13;
				minimalHit=0.1;
			};
			class HitFuel_Lead_Right: HitFuel
			{
				armor=1.8;
				explosionShielding=3;
				name="HitFuel2_leads";
				passThrough=0;
				visual="Hit_AileronR";
				radius=0.13;
				minimalHit=0.1;
			};
			class HitFuel_Left: HitFuel
			{
				armor=2.5;
				explosionShielding=5;
				name="HitFuel1";
				passThrough=0.2;
				visual="Hit_Fuel2a";
				radius=0.2;
				minimalHit=0.1;
				depends="HitFuel_Lead_Left";
			};
			class HitFuel_Right: HitFuel
			{
				armor=2.5;
				explosionShielding=5;
				name="HitFuel2";
				passThrough=0.2;
				visual="Hit_Fuel2b";
				radius=0.2;
				minimalHit=0.1;
				depends="HitFuel_Lead_Right";
			};
			class HitFuel2: HitFuel
			{
				armor=999;
				explosionShielding=0;
				name="HitFuel2";
				passThrough=0.2;
				visual="";
				radius=0.2;
				minimalHit=0.1;
				depends="(HitFuel_Left + HitFuel_Right)*0.5";
			};
			class HitLAileron_Link: HitHull
			{
				armor=1.8;
				explosionShielding=3.5;
				name="HitLAileron_Link";
				passThrough=0;
				visual="Hit_AileronL";
				radius=0.090000004;
				minimalHit=0.1;
				depends="0";
			};
			class HitRAileron_Link: HitHull
			{
				armor=1.8;
				explosionShielding=3.5;
				name="HitRAileron_Link";
				passThrough=0;
				visual="Hit_AileronR";
				radius=0.090000004;
				minimalHit=0.1;
				depends="0";
			};
			class HitLAileron: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLAileron";
				passThrough=0.30000001;
				visual="Hit_AileronL";
				radius=0.2;
				minimalHit=0.1;
				depends="HitLAileron_Link";
			};
			class HitRAileron: HitLAileron
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRAileron";
				passThrough=0.30000001;
				visual="Hit_AileronR";
				radius=0.2;
				minimalHit=0.1;
				depends="HitRAileron_Link";
			};
			class HitLCRudder: HitHull
			{
				armor=2;
				explosionShielding=3;
				name="HitLCRudder";
				passThrough=0.30000001;
				visual="Hit_RudderC";
				radius=0.2;
				minimalHit=0.1;
				depends="0";
			};
			class HitLCElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitLCElevator";
				passThrough=0.30000001;
				visual="Hit_ElevatorL";
				radius=0.2;
				minimalHit=0.1;
				depends="0";
			};
			class HitRElevator: HitHull
			{
				armor=1.5;
				explosionShielding=3;
				name="HitRElevator";
				passThrough=0.30000001;
				visual="Hit_ElevatorR";
				radius=0.2;
				minimalHit=0.1;
				depends="0";
			};
		};
		maxSpeed=950;
		acceleration=750;
		landingAoa="6*3.1415/180";
		landingSpeed=215;
		stallSpeed=160;
		stallWarningTreshold=0.1;
		wheelSteeringSensitivity=2;
		airBrake=1;
		airBrakeFrictionCoef=3;
		flaps=1;
		flapsFrictionCoef=3;
		gearsUpFrictionCoef=0.5;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0066};
		airFrictionCoefs2[]={0.001,0.0049999999,6.8000001e-005};
		angleOfIndicence="-2*3.1415/180";
		envelope[]={0,0.050000001,0.2,0.46000001,0.81999999,1.28,1.84,2.4000001,2.8800001};
		altNoForce=13000;
		altFullForce=2000;
		thrustCoef[]={4.4000001,3.9000001,3.75,3.2,2.8,2.5999999,2.4000001,2.1500001,2,1.9,1.83,1.83,1.8,0.5,0.1,0,0};
		aileronSensitivity=1;
		aileronCoef[]={0,0.2,0.89999998,1.5,1.7,1.9,2.0999999,2.3,2.2,2,1.8,1.5,1.2,0.89999998,0.60000002,0.40000001,0.1};
		elevatorSensitivity=1.1;
		elevatorCoef[]={0,0.25,1.5,1.85,1,0.60000002,0.54000002,0.5,0.41999999,0.38,0.33000001,0.28,0.22,0.18000001,0.15000001,0.1,0.050000001};
		rudderInfluence=0.866;
		rudderCoef[]={0,1,2.2,2.5,2.6500001,2.8,2.6500001,2.5,2.4000001,2.2,1.35};
		aileronControlsSensitivityCoef=3.5999999;
		elevatorControlsSensitivityCoef=3.4000001;
		rudderControlsSensitivityCoef=3.8;
		draconicForceXCoef=8;
		draconicForceYCoef=3;
		draconicForceZCoef=0.1;
		draconicTorqueXCoef[]={7,7.1999998,7.6999998,8.3999996,9.1999998,9.8999996,11.6,13.3,14.2,16.200001,17.200001};
		draconicTorqueYCoef[]={14.2,12.2,8.1999998,4.1999998,2.4000001,0,0,0,0,0,0,0,0,0,0,0,0};
		maxOmega=2000;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=50;
		antiRollbarSpeedMax=300;
		class Wheels
		{
			class Rear_Wheel
			{
				boneName="Rear_Wheel";
				steering=1;
				side="left";
				center="Rear_Wheel_center";
				boundary="Rear_Wheel_rim";
				width=0.40000001;
				mass=20;
				MOI=0.40000001;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=1700;
				maxHandBrakeTorque=3000;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="Rear_Wheel_center";
				tireForceAppPointOffset="Rear_Wheel_center";
				maxCompression=0.30000001;
				maxDroop=0.30000001;
				sprungMass=1500;
				springStrength=150000;
				springDamperRate=30000;
				longitudinalStiffnessPerUnitGravity=300;
				latStiffX=3;
				latStiffY=20;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class Left_Wheel: Rear_Wheel
			{
				steering=0;
				boneName="Left_Wheel";
				center="Left_Wheel_center";
				boundary="Left_Wheel_rim";
				mass=35;
				MOI=1.575;
				width=0.60000002;
				maxBrakeTorque=1700;
				maxCompression=0.30000001;
				maxDroop=0.30000001;
				sprungMass=3350;
				springStrength=335000;
				springDamperRate=67000;
				longitudinalStiffnessPerUnitGravity=500;
				suspForceAppPointOffset="Left_Wheel_center";
				tireForceAppPointOffset="Left_Wheel_center";
			};
			class Right_Wheel: Left_Wheel
			{
				boneName="Right_Wheel";
				side="right";
				center="Right_Wheel_center";
				boundary="Right_Wheel_rim";
				suspForceAppPointOffset="Right_Wheel_center";
				tireForceAppPointOffset="Right_Wheel_center";
			};
		};
	};
	*/
	class Plane_CAS_02_base_F;
	class TIOW_Thunderbolt_Base: Plane_CAS_02_base_F
	{
		maxOmega = 2000;
		clutchStrength = 100;
		dampingRateFullThrottle = 0.5;
		maxSpeed=950;
		acceleration=750;
		landingAoa = 0.113446;
		landingSpeed = 260;
		stallSpeed = 110;
		stallWarningTreshold = 0.04;
		wheelSteeringSensitivity = 1.8;
		airBrake = 1;
		airBrakeFrictionCoef = 5;
		flaps = 1;
		flapsFrictionCoef = 0.36;
		gearsUpFrictionCoef = 0.55;
		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.1, 0.6, 0.0067};
		airFrictionCoefs2[] = {0.001, 0.006, 7e-005};
		angleOfIndicence = -0.0174533;
		envelope[] = {0, 0.04, 0.16, 0.36, 0.64, 1, 1.43, 1.95, 2.55, 3.22, 3.98, 4.82, 5.73, 6.73, 7.8, 8.96, 9.3, 9.4, 9.4, 9, 7};
		altNoForce = 13000;
		altFullForce = 2000;
		thrustCoef[] = {1.1, 1.14, 1.18, 1.21, 1.2, 1.19, 1.17, 1.15, 1.13, 1.1, 1.04, 0.6, 0.1, 0, 0};
		aileronSensitivity = 0.8;
		aileronCoef[] = {0, 0.1, 0.25, 0.55, 0.8, 0.95, 1.04, 1.08, 1.1, 1.11, 1.12, 1.12, 1.1, 0.9, 0.2};
		elevatorSensitivity = 0.75;
		elevatorCoef[] = {0, 0.1, 0.45, 0.55, 0.56, 0.56, 0.55, 0.54, 0.52, 0.5, 0.48, 0.45, 0.4, 0.32, 0.15};
		rudderInfluence = 0.866;
		rudderCoef[] = {0, 0.4, 1.1, 1.6, 2.1, 2.3, 2.5, 2.6, 2.6, 2.7, 2.7, 2.4, 2, 1.1, 0.2};
		aileronControlsSensitivityCoef = 3.5;
		elevatorControlsSensitivityCoef = 4;
		rudderControlsSensitivityCoef = 3;
		draconicForceXCoef = 9;
		draconicForceYCoef = 1.2;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = {4.5, 6, 7.2, 8.3, 9.1, 10, 10.6, 11.1, 11.3, 11.5, 11.6};
		draconicTorqueYCoef[] = {11, 7, 3.5, 1.75, 0.1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	};
	/*
	class Plane_CAS_01_base_F
	{
		armor = 800;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1.6;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitEngine: HitEngine
			{
				armor = 0.6;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.5;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 0.5;
				material = -1;
				armorComponent = "hit_fuel";
				name = "hit_fuel_point";
				visual = "-";
				passThrough = 0.3;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.3;
			};
			class HitLTrack: HitLTrack
			{
				material = -1;
				armorComponent = "hit_trackL";
				name = "hit_trackL_point";
				visual = "pas_L";
				radius = 0.2;
				armor = -650;
				minimalHit = 0.0738462;
				explosionShielding = 0.8;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack
			{
				material = -1;
				armorComponent = "hit_trackR";
				name = "hit_trackR_point";
				visual = "pas_P";
				radius = 0.2;
				armor = -650;
				minimalHit = 0.0738462;
				explosionShielding = 0.8;
				passThrough = 0;
			};
			class HitSLAT_Left
			{
				simulation = "Armor_SLAT";
				armorComponent = "cage_left_geo";
				name = "cage_left_point";
				armor = -200;
				minimalHit = 0.3;
				passThrough = 0;
				visual = "-";
				explosionShielding = 2;
				radius = 0.25;
			};
			class HitSLAT_Right: HitSLAT_Left
			{
				armorComponent = "cage_right_geo";
				name = "cage_right_point";
			};
			class HitSLAT_back: HitSLAT_Left
			{
				armorComponent = "cage_back_geo";
				name = "cage_back_point";
			};
			class HitSLAT_top_left: HitSLAT_Left
			{
				armorComponent = "cage_top_right_geo";
				name = "hit_main_turret_point";
			};
			class HitSLAT_top_right: HitSLAT_Left
			{
				armorComponent = "cage_top_right_geo";
				name = "hit_main_turret_point";
			};
			class HitSLAT_top_back: HitSLAT_Left
			{
				armorComponent = "cage_top_back_geo";
				name = "hit_main_turret_point";
			};
		};
		maxOmega = 2000;
		clutchStrength = 100;
		dampingRateFullThrottle = 0.5;
		maxSpeed = 700;
		landingAoa = 0.113446;
		landingSpeed = 260;
		stallSpeed = 210;
		stallWarningTreshold = 0.04;
		wheelSteeringSensitivity = 1.8;
		airBrake = 1;
		airBrakeFrictionCoef = 2.6;
		flaps = 1;
		flapsFrictionCoef = 0.36;
		gearsUpFrictionCoef = 0.55;
		airFrictionCoefs0[] = {0, 0, 0};
		airFrictionCoefs1[] = {0.1, 0.6, 0.0067};
		airFrictionCoefs2[] = {0.001, 0.006, 7e-005};
		angleOfIndicence = -0.0174533;
		envelope[] = {0, 0.04, 0.16, 0.36, 0.64, 1, 1.43, 1.95, 2.55, 3.22, 3.98, 4.82, 5.73, 6.73, 7.8, 8.96, 9.3, 9.4, 9.4, 9, 7};
		altNoForce = 13000;
		altFullForce = 2000;
		thrustCoef[] = {1.1, 1.14, 1.18, 1.21, 1.2, 1.19, 1.17, 1.15, 1.13, 1.1, 1.04, 0.6, 0.1, 0, 0};
		aileronSensitivity = 0.8;
		aileronCoef[] = {0, 0.1, 0.25, 0.55, 0.8, 0.95, 1.04, 1.08, 1.1, 1.11, 1.12, 1.12, 1.1, 0.9, 0.2};
		elevatorSensitivity = 0.75;
		elevatorCoef[] = {0, 0.1, 0.45, 0.55, 0.56, 0.56, 0.55, 0.54, 0.52, 0.5, 0.48, 0.45, 0.4, 0.32, 0.15};
		rudderInfluence = 0.866;
		rudderCoef[] = {0, 0.4, 1.1, 1.6, 2.1, 2.3, 2.5, 2.6, 2.6, 2.7, 2.7, 2.4, 2, 1.1, 0.2};
		aileronControlsSensitivityCoef = 3.5;
		elevatorControlsSensitivityCoef = 4;
		rudderControlsSensitivityCoef = 3;
		draconicForceXCoef = 9;
		draconicForceYCoef = 1.2;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = {4.5, 6, 7.2, 8.3, 9.1, 10, 10.6, 11.1, 11.3, 11.5, 11.6};
		draconicTorqueYCoef[] = {11, 7, 3.5, 1.75, 0.1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
		class Wheels
		{
			class Wheel_1
			{
				boneName = "Wheel_1";
				steering = 1;
				side = "left";
				center = "Wheel_1_center";
				boundary = "Wheel_1_rim";
				width = 0.16;
				mass = 80;
				MOI = 6.69997;
				dampingRate = 0.25;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 800;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "Wheel_1_center";
				tireForceAppPointOffset = "Wheel_1_center";
				maxCompression = 0.1;
				maxDroop = 0.15;
				sprungMass = 4000;
				springStrength = 395000;
				springDamperRate = 120000;
				longitudinalStiffnessPerUnitGravity = 1500;
				latStiffX = 2;
				latStiffY = 18;
				frictionVsSlipGraph[] = {{0, 0.5}, {0.2, 0.9}, {0.6, 0.7}};
			};
			class Wheel_2: Wheel_1
			{
				boneName = "Wheel_2";
				steering = 0;
				center = "Wheel_2_center";
				boundary = "Wheel_2_rim";
				width = 0.28;
				maxCompression = 0.15;
				maxDroop = 0.15;
				sprungMass = 7750;
				maxBrakeTorque = 4000;
				suspForceAppPointOffset = "Wheel_2_center";
				tireForceAppPointOffset = "Wheel_2_center";
			};
			class Wheel_3: Wheel_2
			{
				boneName = "Wheel_3";
				side = "right";
				center = "Wheel_3_center";
				boundary = "Wheel_3_rim";
				suspForceAppPointOffset = "Wheel_3_center";
				tireForceAppPointOffset = "Wheel_3_center";
			};
		};
	};
	*/
};