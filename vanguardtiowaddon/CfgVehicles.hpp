#include "add_hitpoints.hpp"

class CfgVehicles 
{
	class SoldierWB;
    class B_Soldier_F;
	class B_Soldier_base_F;
	class B_AssaultPack_Base;
	class TIOW_Fire_Warrior_VL;
	class TIOW_Tau_Bck_Breacher;
	class TIOW_Tau_Bck_Breacher_Shasui;
	class TIOW_Tau_Bck_Breacher_Shasui_DY;
	class TIOW_Tau_Bck_Breacher_Shasui_SC;
	class TIOW_Tau_Bck_Breacher_Shasui_FE;
	class TIOW_Tau_Bck_Breacher_Shasui_VL;
    class Tank_F;
	class Plane_CAS_02_base_F;
	
	class TIOWSpaceMarine_Base : SoldierWB 
	{
		class HitPoints
		{
			ADD_HITPOINTS // If ADD_HITPOINTS(); is used Armake will create error thinking that you are passing a argument.
		};
	};

    class TIOW_CadBackpack: B_AssaultPack_Base
	{
		displayName="[Cadian] Infantry Backpack";
	};

    class TIOW_CadMedicaeBackpack: B_AssaultPack_Base
	{
		maximumLoad = 240;
	};

	class TIOW_CadMedicaeBackpack_Winter: B_AssaultPack_Base
	{
		maximumLoad = 240;
	};

    class VNG_CadATBackpack: TIOW_CadBackpack
	{
		displayName="[Cadian] Infantry AT Backpack";
		maximumLoad = 320;
	};

    class DKoK_GM_1: B_Soldier_F
	{
		class HitPoints
		{
			ADD_HITPOINTS
		};
		linkedItems[]=
		{
			"DKOKTroopMask",
			"DKoK_GM_Helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VNG_Krieg_Armor"
		};
		RespawnLinkedItems[]=
		{
			"DKOKTroopMask",
			"DKoK_GM_Helm",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"VNG_Krieg_Armor"
		};
	};

    class TIOW_Comissar: B_Soldier_base_F
	{
		respawnLinkedItems[]=
		{
			"TIOW_Bionic_Eye",
			"TIOW_Comissar_Cap",
			"VNG_Commissar_Armor"
		};
		class HitPoints
		{
			ADD_HITPOINTS
		};

	};
    class TIOW_IG_Captain_667: B_Soldier_base_F
	{
		respawnLinkedItems[]=
		{
			"TIOW_Bionic_Eye",
			"TIOW_Comissar_Cap",
			"VNG_Captain_Armor"
		};
		class HitPoints
		{
			ADD_HITPOINTS
		};
	};

    class TIOW_Priest: B_Soldier_base_F
	{
		class HitPoints
		{
			ADD_HITPOINTS
		};
	};

    class TIOW_Mordian_Trooper_1_Blu: B_Soldier_base_F
	{
		class HitPoints
		{
			ADD_HITPOINTS
		};
		/*
		class UserActions
		{
			class DevestatorAbility
			{
				//condition="((this getvariable [""DevestatorAbilityEnabled"",false]))";
				displayName="Hold the Line";
				onlyForPlayer=1;
				priority=100;
				position="";
				radius=1; // 100000
				showWindow=0;
				statement="0 = this spawn VNG_fnc_DevestatorAbility";
				userActionID=50;
			};
		};
		*/
	};

	class CadTroopBase: B_Soldier_F
	{
		class HitPoints
		{
			ADD_HITPOINTS
		};
	};

	class TIOW_Fire_Warrior: B_Soldier_base_F
	{
		class HitPoints
		{
			ADD_HITPOINTS
		};
	};

	class TIOW_Valhallan_Trooper_1_Blu: B_Soldier_base_F
	{
		class HitPoints
		{
			ADD_HITPOINTS
		};
	};
	
	class TIOW_Pathfinder: B_Soldier_base_F
	{
		camouflage = 0.4;
		class HitPoints
		{
			ADD_HITPOINTS
		};
	};

	class TIOW_Air_Caste_Pilot_B: B_Soldier_base_F
	{
		class HitPoints
		{
			ADD_HITPOINTS
		};
	};
	
	class VNG_Tau_radioback: TIOW_Tau_Bck_Breacher_Shasui
	{
        displayName = "[Tau-T'au] Longrange Backpack Radio";
        author = "firdon and dolf";
        mass = 50;
        maximumLoad = 260;
        tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
    };

	class VNG_Dalyth_radioback: TIOW_Tau_Bck_Breacher_Shasui_DY
	{
		displayName = "[Tau-Dal'Yth] Longrange Backpack Radio";
        author = "firdon and dolf";
        mass = 50;
        maximumLoad = 260;
        tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};

	class VNG_Sacea_radioback: TIOW_Tau_Bck_Breacher_Shasui_SC
	{
		displayName = "[Tau-Sa'Cea] Longrange Backpack Radio";
        author = "firdon and dolf";
        mass = 50;
        maximumLoad = 260;
        tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};

	class VNG_Farsight_radioback: TIOW_Tau_Bck_Breacher_Shasui_FE
	{
		displayName = "[Tau-Farsight] Longrange Backpack Radio";
        author = "firdon and dolf";
        mass = 50;
        maximumLoad = 260;
        tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};

    class VNG_Viorla_radioback: TIOW_Tau_Bck_Breacher_Shasui_VL
    {
        displayName = "[Tau-Vior'la] Longrange Backpack Radio";
        author = "firdon and dolf";
        mass = 50;
        maximumLoad = 260;
        tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
    };

	class TIOW_Tau_Bck_Phndr_Ion: TIOW_Tau_Bck_Breacher
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};
	class TIOW_Tau_Bck_Phndr_Shasui: TIOW_Tau_Bck_Breacher
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};
	class TIOW_Tau_Bck_Phndr_Rail: TIOW_Tau_Bck_Breacher
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};
	class TIOW_Tau_Bck_Phndr: TIOW_Tau_Bck_Breacher
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};

	class TIOW_CadKasrkinBackpack_836th: B_AssaultPack_Base
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};

	class TIOW_CadKasrkinBackpack_776th: B_AssaultPack_Base
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};

	class TIOW_CadKasrkinBackpack_700th: B_AssaultPack_Base
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};

	class TIOW_CadKasrkinBackpack_667th: B_AssaultPack_Base
	{
		tf_dialog = "rt1523g_radio_dialog";
        tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_hasLRradio = 1;
        tf_range = 40000;
        tf_subtype = "airborne";
	};

	class TIOW_Fire_Warrior_VIor: TIOW_Fire_Warrior_VL
	{
		uniformClass="U_TIOW_Fire_Warrior_VIor";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\vanguardtiowaddon\Data\Textures\FW_Armour_VIor_CA",
			"\40k_tau\Fire_Warrior\data\FW_Cloth_VL_CA"
		};
	};

	class TIOW_FireWarrior_Base_VIor_O: TIOW_Fire_Warrior_VIor
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
		side=0;
		icon="iconMan";
		picture="";
		identityTypes[]=
		{
			"Tau",
			"LanguageCHI_F"
		};
		faction="Tau_O";
		editorSubcategory="VL_Sept";
		uniformClass="TIOW_U_Pathfinder_VIor_O";
		backpack="TIOW_Tau_Bck_Strike_VL";
		weapons[]=
		{
			"TIOW_pulse_rifle_VL",
			"Throw",
			"Put"
		};
		Items[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		RespawnItems[]=
		{
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]=
		{
			"TIOW_pulse_mag",
			"TIOW_pulse_mag",
			"TIOW_pulse_mag",
			"TIOW_pulse_mag",
			"TIOW_pulse_mag",
			"TIOW_tau_photon_grenade_mag",
			"TIOW_tau_photon_grenade_mag"
		};
		linkedItems[]=
		{
			"TIOW_Tau_Belt_VL",
			"TIOW_Tau_HelmetS_VL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"TIOW_Tau_Belt_VL",
			"TIOW_Tau_HelmetS_VL",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnMagazines[]=
		{
			"TIOW_pulse_mag",
			"TIOW_pulse_mag",
			"TIOW_pulse_mag",
			"TIOW_pulse_mag",
			"TIOW_pulse_mag",
			"TIOW_tau_photon_grenade_mag",
			"TIOW_tau_photon_grenade_mag"
		};
		respawnWeapons[]=
		{
			"TIOW_pulse_rifle_VL",
			"Throw",
			"Put"
		};
	};
	class TIOW_FireWarrior_Base_VIor_B: TIOW_FireWarrior_Base_VIor_O
	{
		side=1;
		faction="Tau_B";
		uniformClass="TIOW_U_Fire_Warrior_VIor_B";
	};
	class TIOW_FireWarrior_Base_VIor_I: TIOW_FireWarrior_Base_VIor_O
	{
		side=2;
		faction="Tau_I";
		uniformClass="TIOW_U_Fire_Warrior_VIor_I";
	};
	class TIOW_Strike_VIor_O: TIOW_FireWarrior_Base_VIor_O
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Tau Fire Warrior";
	};
	class TIOW_Strike_VIor_B: TIOW_FireWarrior_Base_VIor_B
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Tau Fire Warrior";
	};
	class TIOW_Strike_VIor_I: TIOW_FireWarrior_Base_VIor_I
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Tau Fire Warrior";
	};

	class Heli_Light_01_armed_base_F;
	
	class testHelo: Heli_Light_01_armed_base_F
	{
		//helmetMountedDisplay = 1;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName="Test helo";
		armor = 350;
		model = "\WHair\Val\model\Valkyrie.p3d";
		driverAction = "pilot_plane_Valkyrie";
		driverRightHandAnimName = "flight_stick";
		driverLeftHandAnimName = "throttle_stick";
		driverRightLegAnimName = "pedal_r";
		driverLeftLegAnimName = "pedal_l";
		extCameraPosition[] = {0, 1, -25};
		gun = "TIOW_MultiLaser_Valk";
		gunBeg = "Lascannon_muzzle";
		gunEnd = "Lascannon_chamber";
		gunAimDown = 0;
		headAimDown = 0;
		memoryPointGun = "Lascannon_muzzle";
		memoryPointLRocket = "Rocket_1";
		memoryPointRRocket = "Rocket_2";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		weapons[] = {"TIOW_MultiLaser_Valk", "TIOW_rockets_Skyfire_v", "CMFlareLauncher"};
		magazines[] = {"TIOW_Mlaser_valk", "TIOW_38Rnd_80mm_rockets_v", "120Rnd_CMFlare_Chaff_Magazine"};
		cargoAction[] = {"passenger_apc_narrow_generic03", "passenger_apc_generic02", "passenger_apc_narrow_generic01", "passenger_apc_generic04", "passenger_apc_narrow_generic02", "passenger_generic01_leanright", "passenger_generic01_leanleft", "passenger_generic01_foldhands"};
		cargoGetInAction[] = {"GetInHigh"};
		cargoGetOutAction[] = {"GetOutHigh"};
		cargoCompartments[] = {"Compartment2"};
		hiddenSelections[] = {"camo", "valkyrie_low_res_parts"};
		hiddenSelectionsTextures[] = {"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa", "\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		lockDetectionSystem = 8;
		laserScanner = 0;
		transportSoldier = 13;
		hideWeaponsCargo = 1;
		cargoCanEject = 1;
		cargoProxyIndexes[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
		attenuationEffectType = "HeliAttenuation";
		soundGetIn[] = {"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin", 1, 1, 40};
		soundGetOut[] = {"A3\Sounds_F\air\Plane_Fighter_03\getout", 1, 1, 40};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_int", 1, 1};
		soundEngineOnExt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_ext", 1.77828, 1, 500};
		soundEngineOffInt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int", 1, 1};
		soundEngineOffExt[] = {"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext", 1.77828, 1, 500};
		soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\locked_1", 0.1, 1};
		soundIncommingMissile[] = {"\A3\Sounds_F\weapons\Rockets\locked_3", 0.1, 1.5};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_02\gear_up", 0.794328, 1, 150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_02\gear_down", 0.794328, 1, 150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up", 0.630957, 1, 100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down", 0.630957, 1, 100};
		class Sounds
		{
			class EngineLowOut
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_idle_ext", 1, 1, 2100};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_max_ext", 1, 1.2, 2500};
				frequency = 1;
				volume = "camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_forsage_ext", 1.41254, 1.2, 2800};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.4, 1.0])";
				cone[] = {3.14, 3.92, 2, 0.5};
			};
			class TurbineOut
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_ext", 1, 1, 1800};
				frequency = "rpm * (thrust/4 + 0.5)";
				volume = "camPos * 2 * rpm * thrust * (rpm factor[0, 0.4])";
			};
			class TurbineHighOut
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_ext", 1, 1, 1800};
				frequency = "1.7 * (rpm factor[-5,1])";
				volume = "0.8 * camPos * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class WindNoiseOut
			{
				sound[] = {"A3\Sounds_F_EPC\CAS_02\noise", 0.562341, 1, 150};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
			class EngineLowInt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_idle_int", 0.630957, 1, 2100};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighInt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_engine_max_int", 0.630957, 1.2, 2500};
				frequency = 1;
				volume = "(1-camPos)*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageInt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_forsage_int", 0.794328, 1.2, 2800};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(thrust factor[0.4, 1.0])";
				cone[] = {3.14, 3.92, 2, 0.5};
			};
			class TurbineInt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_int", 0.630957, 1, 1800};
				frequency = "rpm * (thrust/4 + 0.5)";
				volume = "(1-camPos) * 2 * rpm * thrust * (rpm factor[0, 0.4])";
			};
			class TurbineHighInt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\VTOL_02\VTOL_02_turbine_int", 0.630957, 1, 1800};
				frequency = "1.7 * (rpm factor[-5,1])";
				volume = "0.8 * (1-camPos) * (rpm factor[-1,1]) * (rpm factor[0, 0.4])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", 1, 1, 100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound", 1, 1, 100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1.77828, 1, 100};
				frequency = 1;
				volume = "camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos) * rain * (speed factor[50, 0])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed", 0.562341, 1, 50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 50])*(speed factor[5, 50])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2c", 1.99526, 1, 50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * (gmeterZ factor[1.0, 2.5])";
			};
			class SpeedStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3", 0.501187, 1, 50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[60,80])";
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(30 / 120)";
					minFov = "(30 / 120)";
					maxFov = "(30 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov = "(6 / 120)";
					minFov = "(6 / 120)";
					maxFov = "(6 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov = "(2 / 120)";
					minFov = "(2 / 120)";
					maxFov = "(2 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn = -30;
			maxTurn = 160;
			initTurn = 0;
			minElev = -5;
			maxElev = 90;
			initElev = 5;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};
		class ViewPilot: ViewPilot
		{
			initAngleX = 0;
		};
		class VNG_BaseTurrets
		{
			class GunnerTurret: NewTurret
			{
				animationSourceBody = "Gunner_rotH_source";
				animationSourceGun = "Gunner_rotV_source";
				body = "Cannon_turret_rot";
				castGunnerShadow = 1;
				commanding = -1;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 1000, 1200, 1500, 1800, 2100, 2400};
				discreteDistanceInitIndex = 5;
				enableManualFire = 0;
				gun = "Cannon_rot";
				gunBeg = "Cannon_barrel_end";
				gunEnd = "Cannon_barrel_beg";
				gunnerAction = "gunner_01_VTOL_02";
				gunnerCompartments = "Compartment2";
				gunnerForceOptics = 0;
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerInAction = "gunner_01_VTOL_02";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerLeftLegAnimName = "Pedals_2_left_2";
				gunnerRightLegAnimName = "Pedals_2_right_2";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerUsesPilotView = 0;
				isCopilot = 1;
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.5;
				memoryPointGunnerOptics = "Cannon_pip_pos";
				memoryPointsGetInGunner = "GetIn_gunner_pos";
				memoryPointsGetInGunnerDir = "GetIn_gunner_dir";
				minElev = -30;
				maxElev = 20;
				initElev = 5;
				minTurn = -120;
				maxTurn = 120;
				initTurn = 0;
				outGunnerMayFire = 1;
				particlesDir = "Cannon_barrel_end";
				particlesPos = "Cannon_barrel_beg";
				primaryGunner = 1;
				proxyIndex = 1;
				selectionFireAnim = "Cannon_muzzleflash";
				showAllTargets = 4;
				stabilizedInAxes = 3;
				startEngine = 0;
				turretInfoType = "RscOptics_VTOL_02_gunner";
				magazines[] = {"250Rnd_30mm_HE_shells_Tracer_Green", "250Rnd_30mm_APDS_shells_Tracer_Green", "8Rnd_LG_scalpel", "38Rnd_80mm_rockets", "Laserbatteries"};
				weapons[] = {"gatling_30mm_VTOL_02", "missiles_SCALPEL", "rockets_Skyfire", "Laserdesignator_mounted"};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 10;
						minAngleX = -45;
						maxAngleX = 25;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
						opticsDisplayName = "W";
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
						opticsDisplayName = "M";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
						opticsDisplayName = "N";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX = 10;
						minAngleX = -45;
						maxAngleX = 25;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						minFov = 0.25;
						maxFov = 1.25;
						initFov = 0.75;
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
						visionMode[] = {"Normal", "NVG"};
					};
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000, 2000, 16000, 8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						defaultDisplay = "SensorDisplay";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType = "MinimapDisplayComponent";
								resource = "RscCustomInfoAirborneMiniMap";
							};
							class CrewDisplay
							{
								componentType = "CrewDisplayComponent";
								resource = "RscCustomInfoCrew";
							};
							class UAVDisplay
							{
								componentType = "UAVFeedDisplayComponent";
							};
							class VehiclePrimaryGunnerDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "PrimaryGunner";
							};
							class VehicleMissileDisplay
							{
								componentType = "TransportFeedDisplayComponent";
								source = "Missile";
							};
							class SensorDisplay
							{
								componentType = "SensorsDisplayComponent";
								range[] = {4000, 2000, 16000, 8000};
								resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class ViewGunner
			{
			};
		};
		class Turrets: VNG_BaseTurrets
		{
			class GunnerTurret: GunnerTurret
			{
				animationSourceBody = "pilotcamera_roth_axis";
				animationSourceGun = "pilotcamera_rotv_axis";
				gunnerAction = "pilot_plane_Valkyrie";
				gunnerInAction = "pilot_plane_Valkyrie";
				precisegetinout = 1;
				body = "pilotcamera";
				gun = "pilotcamera_dir";
				memoryPointGun = "Lascannon_muzzle";
				selectionFireAnim = "";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				memoryPointGunnerOptics = "PilotCamera_pos";
				proxyIndex = 3;
				canEject = 0;
				minElev = -50;
				maxElev = 30;
				initElev = 11;
				minTurn = -170;
				maxTurn = 170;
				initTurn = 0;
				gunnerLeftHandAnimName = "flight_stick_copilot";
				gunnerRightHandAnimName = "throttle_stick_copilot";
				maxHorizontalRotSpeed = 3;
				maxVerticalRotSpeed = 3;
				weapons[] = {};
				magazines[] = {};
				class OpticsIn
				{
					class Wide
					{
						opticsDisplayName = "WFOV";
						initAngleX = 10;
						minAngleX = -45;
						maxAngleX = 25;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						directionStabilized = 1;
						visionMode[] = {"Normal", "NVG", "Ti"};
						thermalMode[] = {0, 1};
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					};
					class Medium: Wide
					{
						opticsDisplayName = "MFOV";
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
					};
					class Narrow: Wide
					{
						opticsDisplayName = "NFOV";
						initFov = "(2 / 120)";
						minFov = "(2 / 120)";
						maxFov = "(2 / 120)";
						gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
					};
				};
			};
			class LeftDoorGun: GunnerTurret
			{
				canEject = 1;
				canUseScanner = 0;
				isCopilot = 0;
				gunnerName = "Left Heavy Bolter";
				primaryObserver = 0;
				commanding = -3;
				body = "mainTurret_2";
				gun = "mainGun_2";
				animationSourceBody = "mainTurret_2";
				animationSourceGun = "mainGun_2";
				proxyType = "CPGunner";
				proxyIndex = 1;
				gunBeg = "HB_gun_beg_l";
				gunEnd = "HB_gun_end_l";
				memoryPointGun = "HB_muzzle_l";
				selectionFireAnim = "HB_muzzleflash_l";
				memoryPointGunnerOutOptics = "gunnerview_l";
				memoryPointGunnerOptics = "gunnerview_l";
				LODTurnedIn = 1000;
				LODTurnedOut = 1000;
				minElev = -18;
				maxElev = 40;
				minTurn = 0;
				maxTurn = 180;
				initTurn = 0;
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
				gunnerForceOptics = 0;
				weapons[] = {"TIOW_LMHb_v"};
				magazines[] = {"TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag", "TIOW_IG_HeavyBolter_Mag"};
				soundServo[] = {};
				gunnerAction = "hb_gunner_valkyrie";
				gunnerInAction = "hb_gunner_valkyrie";
				canHideGunner = 0;
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {400, 500, 600, 700, 800};
				discreteDistanceInitIndex = 0;
				gunnerOutOpticsShowCursor = 1;
				gunnerOutForceOptics = 0;
				viewGunnerInExternal = 0;
				maxHorizontalRotSpeed = 3;
				gunnerRightHandAnimName = "HB_right_hand_l";
				gunnerLeftHandAnimName = "HB_left_hand_l";
				stabilizedInAxes = 3;
				memoryPointsGetInGunner = "pos left gunner";
				memoryPointsGetInGunnerDir = "pos left gunner dir";
				OutGunnerMayFire = 1;
				InGunnerMayFire = 0;
				isPersonTurret = 0;
				disableSoundAttenuation = 1;
				startEngine = 0;
				primaryGunner = 0;
				gunnerUsesPilotView = 0;
				gunnerCompartments = "Compartment2";
				castGunnerShadow = 1;
				ejectDeadGunner = 1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 10;
						minAngleX = -45;
						maxAngleX = 25;
						initAngleY = 0;
						minAngleY = -90;
						maxAngleY = 90;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_wide_F";
						opticsDisplayName = "W";
						visionMode[] = {"Normal"};
						thermalMode[] = {0, 1};
					};
					class Medium: Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_medium_F";
						opticsDisplayName = "M";
					};
					class Narrow: Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_02_Optics_Gunner_narrow_F";
						opticsDisplayName = "N";
					};
				};
			};
			class RightDoorGun: LeftDoorGun
			{
				isCopilot = 0;
				gunnerName = "Right Heavy Bolter";
				body = "Turret_2";
				gun = "Gun_2";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				proxyIndex = 2;
				gunBeg = "HB_gun_beg_r";
				gunEnd = "HB_gun_end_r";
				memoryPointGun = "HB_muzzle_r";
				selectionFireAnim = "HB_muzzleflash_r";
				memoryPointGunnerOutOptics = "gunnerview_r";
				memoryPointGunnerOptics = "gunnerview_r";
				minTurn = -180;
				maxTurn = 0;
				initTurn = 0;
				weapons[] = {"TIOW_RMHb_v"};
				gunnerRightHandAnimName = "HB_right_hand_r";
				gunnerLeftHandAnimName = "HB_left_hand_r";
				memoryPointsGetInGunner = "pos right gunner";
				memoryPointsGetInGunnerDir = "pos right gunner dir";
			};
		};
		class TextureSources
		{
			class Green
			{
				displayName = "Green";
				author = "13th Legion";
				factions[] = {"Imperial_Navy_B", "Imperial_Navy_I", "Imperial_Navy_O"};
				textures[] = {"\WHair\Val\DATA\Valkyrie_dkok_1490th_ca.paa", "\WHair\Val\DATA\Valkyrie_dkok_1490th_low_res_ca.paa"};
			};
			class Black
			{
				displayName = "Black";
				author = "13th Legion";
				factions[] = {"Imperial_Navy_B", "Imperial_Navy_I", "Imperial_Navy_O"};
				textures[] = {"\WHair\Val\DATA\Valkyrie_dkok_1489th_ca.paa", "\WHair\Val\DATA\Valkyrie_dkok_1489th_low_res_ca.paa"};
			};
			class Grey
			{
				displayName = "Grey";
				author = "13th Legion";
				factions[] = {"Imperial_Navy_B", "Imperial_Navy_I", "Imperial_Navy_O"};
				textures[] = {"\WHair\Val\DATA\Valkyrie_dkok_1491th_ca.paa", "\WHair\Val\DATA\Valkyrie_dkok_1491th_low_res_ca.paa"};
			};
		};
		textureList[] = {"Green", 1, "Black", 1, "Grey", 1};
		class Exhausts: Exhausts
		{
			class Exhaust_rear_L
			{
				position = "exhaust_l";
				direction = "exhaust_l_dir";
				effect = "ExhaustsEffectPlane";
			};
			class Exhaust_rear_R: Exhaust_rear_L
			{
				position = "exhaust_r";
				direction = "exhaust_r_dir";
			};
			class Exhaust_left_1_L: Exhaust_rear_L
			{
				position = "exhaust_1_l";
				direction = "exhaust_1_l_dir";
			};
			class Exhaust_right_1_L: Exhaust_rear_L
			{
				position = "exhaust_1_r";
				direction = "exhaust_1_r_dir";
			};
		};
		class AnimationSources
		{
			class muzzle_rot_LC
			{
				source = "ammorandom";
				weapon = "TIOW_LsCnn_mkII_v";
			};
			class muzzle_rot_LC_u
			{
				source = "user";
				animPeriod = 0.25;
				initPhase = 0;
			};
			class muzzle_rot_HB_L
			{
				source = "ammorandom";
				weapon = "TIOW_LMHb_v";
			};
			class muzzle_rot_HB_R
			{
				source = "ammorandom";
				weapon = "TIOW_RMHb_v";
			};
			class recoil_HB_L
			{
				source = "reload";
				weapon = "TIOW_LMHb_v";
			};
			class recoil_HB_R
			{
				source = "reload";
				weapon = "TIOW_RMHb_v";
			};
			class Missiles_revolving
			{
				source = "revolving";
				weapon = "TIOW_rockets_Skyfire_v";
			};
			class SideDoors
			{
				source = "user";
				animPeriod = 3;
				initPhase = 1;
			};
			class GunnerPosHide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class HB_Turn_out
			{
				source = "user";
				animPeriod = 4;
				initPhase = 1;
			};
			class HB_Real_hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class HB_Dummy_hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class RearDoorSrc
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class BurnerVibr_L
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class BurnerVibr_R
			{
				source = "user";
				animPeriod = 0.0001;
				initPhase = 0;
			};
			class BurnersStretch
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class BurnersWingsStretch
			{
				source = "user";
				animPeriod = 3;
				initPhase = 1;
			};
			class BurnersHide
			{
				source = "user";
				animPeriod = 4;
				initPhase = 1;
			};
			class HideRocketPods
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class HideFuelPods
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class laser_mf_hide
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
			class canopy_src
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class HidePossessedParts
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
		};
		class UserActions
		{
			class OpenRearDoor
			{
				displayName = "Open rear door";
				position = "pilot_control";
				radius = 5;
				onlyForPlayer = 1;
				condition = "this animationSourcePhase ""RearDoorSrc"" < 0.1";
				statement = "this animateSource [""RearDoorSrc"",1];playSound3D [""WHair\Val\sounds\door_01.ogg"", this, false, getPosASL this, 2];";
			};
			class CloseRearDoor: OpenRearDoor
			{
				displayName = "Close rear door";
				condition = "this animationSourcePhase ""RearDoorSrc"" > 0.9";
				statement = "this animateSource [""RearDoorSrc"",0];playSound3D [""WHair\Val\sounds\door_01.ogg"", this, false, getPosASL this, 2];";
			};
			class ForwardThrustersStart
			{
				//animPeriod=5;
				condition="(!(this getvariable [""forwardThrusterEnabled"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="Start Forward Thrusters";
				onlyForPlayer=1;
				priority=100;
				position="";
				radius=1; // 100000
				showWindow=0;
				statement="0 = this spawn VNG_fnc_ForwardThrustersStart";
				userActionID=50;
			};
			class ForwardThrustersStop
			{
				//animPeriod=5;
				condition="(this getvariable [""forwardThrusterEnabled"",false]) AND (player == driver this) AND (alive this)";
				displayName="Stop Forward Thrusters";
				onlyForPlayer=1;
				priority=100;
				position="";
				radius=1;
				showWindow=0;
				statement="0 = this spawn VNG_fnc_ForwardThrustersStop";
				userActionID=51;
			};
		};
		class Eventhandlers
		{
			getin = "_this execVM '\WHair\Val\scripts\get_in.sqf';";
			getout = "_this execVM '\WHair\Val\scripts\get_out.sqf';";
		};
	};
	class TIOW_Mk4Powerpack_Ultra: B_AssaultPack_Base
	{
		maximumLoad=350;
		tf_dialog = "rt1523g_radio_dialog";
		tf_dialogUpdate = "[""CH:1""] call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode = "tf_west_radio_code";
		tf_hasLRradio = 1;
		tf_range = 15000;
		tf_subtype = "airborne";
	};

	class TIOW_Mk4Powerpack_IF: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_BA: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_BR: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_SL: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_RG: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_IH: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_WS: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_DA: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_DA_HH: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_SW: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_BT: TIOW_Mk4Powerpack_Ultra
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_WB: B_AssaultPack_Base
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_IW: B_AssaultPack_Base
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_BL: B_AssaultPack_Base
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_WE: B_AssaultPack_Base
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_EC: B_AssaultPack_Base
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_AL: B_AssaultPack_Base
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_TS: B_AssaultPack_Base
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_NL: B_AssaultPack_Base
	{
		maximumLoad=350;
	};

	class TIOW_Mk4Powerpack_DG: B_AssaultPack_Base
	{
		maximumLoad=350;
	};

	class testHelo_Rocket_Las: testHelo
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName="Test helo(Rocket, Lascannon)";
		//faction = "Imperial_Navy_B";
		crew = "TIOW_Cad_Tnk836th";
		side = 1;
		weapons[] = {"TIOW_LsCnn_mkII_v", "TIOW_rockets_Skyfire_v", "CMFlareLauncher"};
		magazines[] = {"TIOW_LsCnn_pc_v", "TIOW_38Rnd_80mm_rockets_v", "120Rnd_CMFlare_Chaff_Magazine"};
		editorPreview = "\WHair\Val\ui\editor_pic_valk_rp_ca.paa";
		fuelCapacity = 800;
		class AnimationSources: AnimationSources
		{
			class HideRocketPods
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
	};

	class testHelo_Rocket_Auto: testHelo_Rocket_Las
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName="Test helo(Rocket, Auto-cannon)";
		//faction = "Imperial_Navy_B";
		crew = "TIOW_Cad_Tnk836th";
		side = 1;
		weapons[] = {"TIOW_AutoCannon60mm", "TIOW_rockets_Skyfire_v", "CMFlareLauncher"};
		magazines[] = {"TIOW_Autocannon60mmAPMag", "TIOW_Autocannon60mmHEMag", "TIOW_38Rnd_80mm_rockets_v", "120Rnd_CMFlare_Chaff_Magazine"};
		editorPreview = "\WHair\Val\ui\editor_pic_valk_rp_ca.paa";
		fuelCapacity = 800;
		class AnimationSources: AnimationSources
		{
			class HideRocketPods
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
		};
	};
	
	/*
	class TIOW_NecronLord_Sautekh: SoldierWB
	{
		class HitPoints
		{
			ADD_HITPOINTS
		};
	};
	class TIOW_NecronWarrior_Sautekh: SoldierWB
	{
		class HitPoints
		{
			ADD_HITPOINTS
		};
	};
	*/
	
	class TIOW_Tau_Hammerhead_TA: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				weapons[] = {"TIOW_Tau_Railgun", "VNG_Tau_Railgun_12_7mm_APDS"};
				magazines[] = {"TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_AP_mag", "TIOW_Tau_Railgun_Airburst_mag", "TIOW_Tau_Railgun_Airburst_mag", "VNG_Tau_Railgun_12_7mm_APDS_mag", "VNG_Tau_Railgun_12_7mm_APDS_mag", "VNG_Tau_Railgun_12_7mm_APDS_mag"};
			};
		};
	};
	
	class TIOW_Tau_Hammerhead_Ioncannon_TA: TIOW_Tau_Hammerhead_TA
	{
		vehicleClass = "Armored";
		displayName = "Tau Ion Cannon Hammerhead";
		editorSubcategory = "TA_Sept";
		accuracy = 0.5;
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		model = "\40k_tau\Vehicles\Hammerhead\Hammerhead_Ioncannon.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"TIOW_Tau_Ioncannon", "VNG_Tau_Railgun_12_7mm_APDS"};
				magazines[] = {"TIOW_Ioncannon_mag", "TIOW_Ioncannon_mag", "TIOW_Ioncannon_mag", "VNG_Tau_Railgun_12_7mm_APDS_mag", "VNG_Tau_Railgun_12_7mm_APDS_mag", "VNG_Tau_Railgun_12_7mm_APDS_mag"};
			};
		};
	};

	class ACE_Explosives_Place;
    class vng_melta_bomb_place: ACE_Explosives_Place
	{
        displayName = "Melta Bomb";  // Name of the item
        model = "TIOW_IG_Explosives\tiow_ig_melta_bomb_placeable\ig_melta_bomb_placeable_mag.p3d";  // Path to your model
        ACE_offset[] = {0, 0, 0};  // Offset of the interaction point from the model in meters on the X,Y,Z axis. Try setting this to the place where it makes most sense (e.g. to buttons/switches/pins)
    };
	class vng_Tau_ExpSmall_place: ACE_Explosives_Place
	{
        displayName = "Small Fusion Bomb";  // Name of the item
        model = "40k_tau\Explosives\ExplosiveSmall.p3d";  // Path to your model
        ACE_offset[] = {0, 0, 0};  // Offset of the interaction point from the model in meters on the X,Y,Z axis. Try setting this to the place where it makes most sense (e.g. to buttons/switches/pins)
    };
	class vng_Tau_ExpBig_place: ACE_Explosives_Place
	{
        displayName = "Large Fusion Bomb";  // Name of the item
        model = "40k_tau\Explosives\ExplosiveBig.p3d";  // Path to your model
        ACE_offset[] = {0, 0, 0};  // Offset of the interaction point from the model in meters on the X,Y,Z axis. Try setting this to the place where it makes most sense (e.g. to buttons/switches/pins)
    };

	class TIOW_Thunderbolt_Base: Plane_CAS_02_base_F
	{
		crew = "TIOW_Cad_Tnk776th";
	};
	class TIOW_Thunderbolt_Base_I: TIOW_Thunderbolt_Base
	{
		crew = "TIOW_Cad_Tnk776th_Indep";
	};
	class TIOW_Thunderbolt_Base_O: TIOW_Thunderbolt_Base
	{
		crew = "TIOW_Cad_Tnk776th_OP";
	};
};