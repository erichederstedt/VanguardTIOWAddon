#include "add_hitpoints.hpp"

class CfgVehicles
{
	class Tank_F;
	
	/*
	class APC_Tracked_03_base_F: Tank_F
	{
		forceHideDriver = 0;
		armor = 900;
		armorStructural = 6;
		armorLights = 0.075;
		crewExplosionProtection = 0.9995;
		damageResistance = 0.00547;
		crewVulnerable = 1;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 0.3;
				material = -1;
				armorComponent = "hit_hull";
				name = "hit_hull_point";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.35;
			};
			class HitEngine: HitEngine
			{
				armor = 0.8;
				material = -1;
				armorComponent = "hit_engine";
				name = "hit_engine_point";
				visual = "-";
				passThrough = 0.4;
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
				armor = -400;
				minimalHit = 0.09;
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
				armor = -400;
				minimalHit = 0.09;
				explosionShielding = 0.8;
				passThrough = 0;
			};
			class HitSLAT_Left_1
			{
				simulation = "Armor_SLAT";
				armorComponent = "cage_left_1_geo";
				name = "cage_left_1_point";
				armor = -200;
				minimalHit = 0.3;
				passThrough = 0;
				visual = "-";
				explosionShielding = 2;
				radius = 0.25;
			};
			class HitSLAT_Left_2: HitSLAT_Left_1
			{
				armorComponent = "cage_left_2_geo";
				name = "cage_left_2_point";
			};
			class HitSLAT_Left_3: HitSLAT_Left_1
			{
				armorComponent = "cage_left_3_geo";
				name = "cage_left_3_point";
			};
			class HitSLAT_Right_1: HitSLAT_Left_1
			{
				armorComponent = "cage_right_1_geo";
				name = "cage_right_1_point";
			};
			class HitSLAT_Right_2: HitSLAT_Left_1
			{
				armorComponent = "cage_right_2_geo";
				name = "cage_right_2_point";
			};
			class HitSLAT_Right_3: HitSLAT_Left_1
			{
				armorComponent = "cage_right_3_geo";
				name = "cage_right_3_point";
			};
			class HitSLAT_top_back: HitSLAT_Left_1
			{
				armorComponent = "cage_top_back_geo";
				name = "cage_top_back_point";
			};
			class HitSLAT_top_left: HitSLAT_Left_1
			{
				armorComponent = "cage_top_left_geo";
				name = "cage_top_left_point";
			};
			class HitSLAT_top_right: HitSLAT_Left_1
			{
				armorComponent = "cage_top_right_geo";
				name = "cage_top_right_point";
			};
			class HitSLAT_back: HitSLAT_Left_1
			{
				armorComponent = "cage_back_geo";
				name = "cage_back_point";
			};
			class HitSLAT_front: HitSLAT_Left_1
			{
				armorComponent = "cage_front_geo";
				name = "cage_front_point";
			};
		};

		// Volume inside vehicle
		insideSoundCoef = 0.9;

		// Smoke Screen
		smokeLauncherGrenadeCount = 10;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class HitPoints
						{
							class HitComTurret
							{
								armor = 0.1;
								material = -1;
								armorComponent = "hit_com_turret";
								name = "hit_com_turret_point";
								visual = "vezVelitele";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.15;
								isTurret = 1;
							};
							class HitComGun
							{
								armor = 0.1;
								material = -1;
								armorComponent = "hit_com_gun";
								name = "hit_com_gun_point";
								visual = "zbranVelitele";
								passThrough = 0;
								minimalHit = 0.1;
								explosionShielding = 1;
								radius = 0.15;
								isGun = 1;
							};
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						armorComponent = "hit_main_turret";
						name = "hit_main_turret_point";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.3;
						isTurret = 1;
					};
					class HitGun
					{
						armor = 0.6;
						material = -1;
						armorComponent = "hit_main_gun";
						name = "hit_main_gun_point";
						visual = "zbran";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.2;
						isGun = 1;
					};
				};
			};
		};
		ace_refuel_fuelCapacity = 660;
		fuelCapacity = "660 * 0.165";
	};
	*/
	
	class _1489thChimAuto: Tank_F // APC_Tracked_03_base_F.
	{
		// Fuel.
		ace_refuel_fuelCapacity = 1885;
		fuelCapacity = 1885;

		// Smoke Screen.
		smokeLauncherGrenadeCount = 10;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;

		// Armor.
		forceHideDriver = 0;
		armor = 900;
		armorStructural = 6;
		armorLights = 0.075;
		crewExplosionProtection = 1;
		damageResistance = 0.00547;
		crewVulnerable = 1;

		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 2;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.25;
			};

			class HitEngine: HitEngine
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				passThrough = 0.4;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.51;
			};

			class HitLTrack: HitLTrack
			{
				material = -1;
				name = "pas_L";
				visual = "pas_L";
				radius = 0.14;
				armor = -400;
				minimalHit = 0.09;
				explosionShielding = 0.8;
				passThrough = 0;
			};

			class HitRTrack: HitRTrack
			{
				material = -1;
				name = "pas_P";
				visual = "pas_P";
				radius = 0.14;
				armor = -400;
				minimalHit = 0.09;
				explosionShielding = 0.8;
				passThrough = 0;
			};

			class HitAmmoRack
			{
				armor = 0.25;
				material = -1;
				name = "ammoRackHP";
				visual = "commander_turret_hit";
				passThrough = 1;
				minimalHit = 0.175;
				explosionShielding = 0.1;
				radius = 0.2;
			};

			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "fuelTankHP";
				visual = "commander_turret_hit";
				passThrough = 0.3;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.42;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"TIOW_AutoCannon60mm", "TIOW_HeavyStubber_cargo_vehicle"};
				magazines[] = {"TIOW_Autocannon60mmAPCRMag", "TIOW_Autocannon60mmAPMag", "TIOW_Autocannon60mmAPMag", "TIOW_Autocannon60mmHEMag", "TIOW_Autocannon60mmHEMag", "TIOW_Autocannon60mmHEMag", "TIOW_200Rnd_Stubber_mag", "TIOW_200Rnd_Stubber_mag_Tracer", "TIOW_200Rnd_Stubber_amput", "TIOW_200Rnd_Stubber_manstop", "TIOW_200Rnd_Stubber_expander"};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "otochlaven";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.23;
					};
				};
			};
			class HullGun: NewTurret
			{
				forceHideGunner = 0;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.3;
						material = -1;
						name = "HullTurretHP";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "HullGunHP";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.23;
					};
				};
			};
			class lasg_front_left: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_front_left";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_front_left";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_middle_left: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_middle_left";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_middle_left";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_back_left: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_back_left";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_back_left";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_front_right: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_front_right";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_front_right";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_middle_right: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_middle_right";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_middle_right";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_back_right: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_back_right";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};
					
					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_back_right";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
		};
	};

	
	class TIOW_CadianChimAuto_836: _1489thChimAuto // APC_Tracked_03_base_F.
	{
		// Fuel.
		ace_refuel_fuelCapacity = 1885;
		fuelCapacity = 1885;

		// Smoke Screen.
		smokeLauncherGrenadeCount = 10;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;

		// Armor.
		forceHideDriver = 0;
		armor = 900;
		armorStructural = 6;
		armorLights = 0.075;
		crewExplosionProtection = 1;
		damageResistance = 0.00547;
		crewVulnerable = 1;

		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 2;
				material = -1;
				name = "telo";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.25;
			};
			class HitEngine: HitEngine
			{
				armor = 0.8;
				material = -1;
				name = "motor";
				passThrough = 0.4;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.51;
			};
			class HitLTrack: HitLTrack
			{
				material = -1;
				name = "pas_L";
				visual = "pas_L";
				radius = 0.14;
				armor = -400;
				minimalHit = 0.09;
				explosionShielding = 0.8;
				passThrough = 0;
			};
			class HitRTrack: HitRTrack
			{
				material = -1;
				name = "pas_P";
				visual = "pas_P";
				radius = 0.14;
				armor = -400;
				minimalHit = 0.09;
				explosionShielding = 0.8;
				passThrough = 0;
			};
			class HitAmmoRack
			{
				armor = 0.25;
				material = -1;
				name = "ammoRackHP";
				visual = "commander_turret_hit";
				passThrough = 1;
				minimalHit = 0.175;
				explosionShielding = 0.1;
				radius = 0.2;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "fuelTankHP";
				visual = "commander_turret_hit";
				passThrough = 0.3;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.42;
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"TIOW_AutoCannon60mm", "TIOW_HeavyStubber_cargo_vehicle"};
				magazines[] = {"TIOW_Autocannon60mmAPCRMag", "TIOW_Autocannon60mmAPMag", "TIOW_Autocannon60mmAPMag", "TIOW_Autocannon60mmHEMag", "TIOW_Autocannon60mmHEMag", "TIOW_Autocannon60mmHEMag", "TIOW_200Rnd_Stubber_mag", "TIOW_200Rnd_Stubber_mag_Tracer", "TIOW_200Rnd_Stubber_amput", "TIOW_200Rnd_Stubber_manstop", "TIOW_200Rnd_Stubber_expander"};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.6;
						material = -1;
						name = "otochlaven";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.4;
						radius = 0.23;
					};
				};
			};

			class HullGun: NewTurret
			{
				forceHideGunner = 0;
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.3;
						material = -1;
						name = "HullTurretHP";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "HullGunHP";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.23;
					};
				};
			};
			class lasg_front_left: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_front_left";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_front_left";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_middle_left: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_middle_left";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_middle_left";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_back_left: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_back_left";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_back_left";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_front_right: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_front_right";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_front_right";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_middle_right: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_middle_right";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_middle_right";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
			class lasg_back_right: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.25;
						material = -1;
						name = "lasball_back_right";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "lasg_back_right";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.1;
					};
				};
			};
		};
	};
	
	class TIOW_CadianHydra_836: TIOW_CadianChimAuto_836
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.1;
						explosionShielding = 0.2;
						radius = 0.33;
					};

					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "otochlaven";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.23;
					};
				};
			};
			class HullGun: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.3;
						material = -1;
						name = "HullTurretHP";
						visual = "commander_turret_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};
					
					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "HullGunHP";
						visual = "commander_gun_hit";
						passThrough = 0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.23;
					};
				};
			};
		};
	};
};