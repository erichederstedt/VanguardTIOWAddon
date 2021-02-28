#include "script_macros_config.hpp"

class CfgWeapons 
{
	class Rifle_Base_F;
	class launch_RPG7_F;
	class GunParticles;
	class WeaponSlotsInfo;
	class UGL_F;
	
	class HeadgearItem;
	class NVGoggles;
	class TIOW_pulse_carbine_ML_VL;
	class CowsSlot_tau;
	class InventoryOpticsItem_Base_F;
	class U_TIOW_Fire_Warrior_VL;
	class arifle_MX_Base_F;
	class ItemCore;
	class VestItem;
	class Pistol_Base_F;
	class SM_Gear;
	class EventHandlers;

	class Single;

	class LMG_coax;
	
	
	
	class KriegHeavyStubber: Rifle_Base_F
	{
		magazines[]=
		{
			"TIOW_50Rnd_Stubber_mag",
			"TIOW_50Rnd_Stubber_mag_Tracer",
			"TIOW_50Rnd_Stubber_amput",
			"TIOW_50Rnd_Stubber_manstop",
			"TIOW_50Rnd_Stubber_expander",
			"VNG_100Rnd_Stubber_mag",
			"VNG_100Rnd_Stubber_mag_Tracer",
			"VNG_100Rnd_Stubber_amput",
			"VNG_100Rnd_Stubber_manstop",
			"VNG_100Rnd_Stubber_expander",
			"VNG_150Rnd_Stubber_mag",
			"VNG_150Rnd_Stubber_mag_Tracer",
			"VNG_150Rnd_Stubber_amput",
			"VNG_150Rnd_Stubber_manstop",
			"VNG_150Rnd_Stubber_expander"
		};
	};
	
	class M36KantRifleBase: arifle_MX_Base_F
	{
		magazines[]=
		{
			"M36KantRifle_mag",
			"VNG_HighPoweredM36KantRifle_mag"
		};
		class OpticsModes
		{
			class TWS
			{
				visionMode[] = {"Normal", "NVG"};
			};
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1200;
		};
	};
	
	class Cad_Gear_Vest2: ItemCore
	{
		scope=1;
		allowedSlots[]={901};
		hiddenSelections[]=
		{
			"camo",
			"camoB",
			"RegimentCamo"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo",
				"camoB",
				"RegimentCamo"
			};
		};
	};
	
    class Cad_Gear2;
	
	class VNG_Gear: Cad_Gear2
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[Vanguard] Flak Armor";
		picture="\CadFoot\Icon\KasrkinArmor_ca.paa";
		model="\CadFoot\Model\CadianKasrkinArmor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camoB",
			"RegimentCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"CadFoot\Data\Textures\KasrArmor1_776_co.paa",
			"CadFoot\Data\Textures\KasrArmor2_776_co.paa",
			"vanguardtiowaddon\Data\Textures\GM_FlakArmorReg_Vanguard_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CadFoot\Model\CadianKasrkinArmor.p3d";
			containerClass="Supply80";
			vestType = "Rebreather"; // THIS IS WHAT YOU WANT
			overlaySelectionsInfo[]=
			{
				"ghillie_hide"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20;
					passThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					armor = 20;
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	/*
	class V_PlateCarrier2_rgr: V_PlateCarrier1_rgr
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	*/
	class VNG_MedGear: Cad_Gear2
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[Vanguard] Medicae Flak Armor";
		picture="\CadFoot\Icon\KasrkinArmor_ca.paa";
		model="\CadFoot\Model\CadianKasrkinArmor.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camoB",
			"RegimentCamo"
		};
		hiddenSelectionsTextures[]=
		{
			"CadFoot\Data\Textures\KasrArmor1_776_co.paa",
			"CadFoot\Data\Textures\KasrArmor2_776_co.paa",
			"vanguardtiowaddon\Data\Textures\MED_FlakArmorReg_Vanguard_ca.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\CadFoot\Model\CadianKasrkinArmor.p3d";
			containerClass="Supply80";
			overlaySelectionsInfo[]=
			{
				"ghillie_hide"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20;
					passThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20;
					passThrough = 0.3;
				};
				class Body
				{
					armor = 20;
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	
	class Cad_Inf_Helm2;
	
	class VNG_Inf_Helm: Cad_Inf_Helm2
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[Vanguard] Helmet";
		picture="\CadFoot\Icon\CadianHelmet_ca.paa";
		model="\CadFoot\Model\CadianHelmet.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"CadFoot\Data\Textures\GM_Helmet_776_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\CadFoot\Model\CadianHelmet.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=78.75; //125% buff
					passThrough=0.1;
				};
			};
		};
	};
	
	class VNG_Integrated_NVG: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal", "NVG"};
		modelOptics = "";
	};
	
	class VNG_InfBreather_Helm: Cad_Inf_Helm2
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="[Vanguard] Helmet, Hostile Environment";
		picture="\CadFoot\Icon\CadianKasrkinHelmet_ca.paa";
		model="\CadFoot\Model\CadianKasrkinHelmet.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camoB",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"CadFoot\Data\Textures\KasrHelmet_776_co.paa",
			"CadFoot\Data\Textures\KasrRebreather_776_co.paa",
			"CadFoot\Data\Textures\KasrArmor2_776_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=45;
			uniformModel="\CadFoot\Model\CadianKasrkinHelmet.p3d";
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
			hiddenSelections[]=
			{
				"camo",
				"camoB",
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"CadFoot\Data\Textures\KasrHelmet_776_co.paa",
				"CadFoot\Data\Textures\KasrRebreather_776_co.paa",
				"CadFoot\Data\Textures\KasrArmor2_776_co.paa"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=78.75;
					passThrough=0.05;
				};
			};
		};
		subItems[]=
		{
			"VNG_Integrated_NVG"
		};
	};
	
	class VNG_LasLMGBase: M36KantRifleBase
	{
		author="Dolf";
		displayName="Unknown Pattern Las-LMG";
		magazines[]=
		{
			"VNG_150RndLasLmg_mag",
			"VNG_200RndLasLmg_mag",
			"VNG_75RndHighPoweredLasLmg_mag",
			"VNG_100RndHighPoweredLasLmg_mag"
		};
		modes[]=
		{
			"Single",
			/*"FullAuto",*/
			"Burst",
			"FullAutoSuppression",
			"single_medium_optics1",
			"single_far_optics2"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.096;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.00035;
			minRange=200;
			minRangeProbab=0.5;
			midRange=400;
			midRangeProbab=0.7;
			maxRange=750;
			maxRangeProbab=0.3;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"\DKoK_Weapons\Sound\close_2.ogg",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Lasgun_Shot_SoundSet",
					"Lasgun_Tail_SoundSet",
					"Lasgun_InteriorTail_SoundSet"
				};
				begin1[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\DKoK_Weapons\Sound\close_2.ogg",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\DKoK_Weapons\Sound\close_3.ogg",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		
		/*
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					2.8183801,
					1,
					1200
				};
				begin2[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					2.8183801,
					1,
					1200
				};
				begin3[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					2.8183801,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1.58489,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[]=
				{
					"Lasgun_Shot_SoundSet",
					"Lasgun_Tail_SoundSet",
					"Lasgun_InteriorTail_SoundSet"
				};
			};
			soundBurst=0;
			burst=0;
			reloadTime=0.075;
			dispersion=0.00035;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=2;
			minRangeProbab=0.3;
			midRange=50;
			midRangeProbab=0.7;
			maxRange=200;
			maxRangeProbab=0.05;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
		};
		*/
		
		class FullAutoSuppression: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					2.8183801,
					1,
					1200
				};
				begin2[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					2.8183801,
					1,
					1200
				};
				begin3[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					2.8183801,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1.58489,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[]=
				{
					"Lasgun_Shot_SoundSet",
					"Lasgun_Tail_SoundSet",
					"Lasgun_InteriorTail_SoundSet"
				};
			};
			//textureType = "fastAuto"; Never delete this. It was a pain to find.
			soundBurst=0;
			burst=0;
			reloadTime=0.075;
			dispersion=0.008;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=2;
			minRangeProbab=0.3;
			midRange=50;
			midRangeProbab=0.7;
			maxRange=200;
			maxRangeProbab=0.05;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
		};	
		
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					1,
					1,
					10
				};
				closure2[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					1,
					1.1,
					10
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					2.8183801,
					1,
					1200
				};
				begin2[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					2.8183801,
					1,
					1200
				};
				begin3[]=
				{
					"\DKoK_Weapons\Sound\close_1.ogg",
					2.8183801,
					1,
					1200
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1.58489,
							1,
							1200
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\close_1.ogg",
							1,
							1,
							1200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
				SoundSetShot[]=
				{
					"Lasgun_Shot_SoundSet",
					"Lasgun_Tail_SoundSet",
					"Lasgun_InteriorTail_SoundSet"
				};
			};
			soundBurst=0;
			burst=6;
			reloadTime=0.075;
			dispersion=0.00035;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=2;
			minRangeProbab=0.3;
			midRange=50;
			midRangeProbab=0.7;
			maxRange=200;
			maxRangeProbab=0.05;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
		};
		
	};
	
	class VNG_MemeLMG: VNG_LasLMGBase
	{
		author="Dolf";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[Vanguard] Boom Pattern Las-LMG";
		hiddenSelections[]=
		{
			"casing_camo",
			"wording_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Cadian_Weapons\Data\Textures\M36KantRifle_casing_776_co.paa",
			"Cadian_Weapons\Data\Textures\M36KantRifle_wording_co.paa"
		};
		model="\Cadian_Weapons\Model\M36KantRifle.p3d";
		modes[]=
		{
			"Single",
			"Burst",
			"FullAutoSuppression"
		};
		
		class Single: Mode_SemiAuto
		{
			reloadTime=0.096;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			dispersion=0.00035;
			minRange=200;
			minRangeProbab=0.5;
			midRange=400;
			midRangeProbab=0.7;
			maxRange=750;
			maxRangeProbab=0.3;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				/*
				soundSetShot[]=
				{
					"Lasgun_Shot_SoundSet",
					"Lasgun_Tail_SoundSet",
					"Lasgun_InteriorTail_SoundSet"
				};
				*/
				begin1[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					3.162,
					1,
					1800
				};
				begin2[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					3.162,
					1,
					1800
				};
				begin3[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					3.16,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33,
					"begin2",
					0.33,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							2.23,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		
		class FullAutoSuppression: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				/*
				soundSetShot[]=
				{
					"Lasgun_Shot_SoundSet",
					"Lasgun_Tail_SoundSet",
					"Lasgun_InteriorTail_SoundSet"
				};
				*/
				begin1[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					3.162,
					1,
					1800
				};
				begin2[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					3.162,
					1,
					1800
				};
				begin3[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					3.16,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33,
					"begin2",
					0.33,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							2.23,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			//textureType = "fastAuto"; Never delete this. It was a pain to find.
			soundBurst=0;
			burst=0;
			reloadTime=0.075;
			dispersion=0.008; // This is what you are looking for.
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=2;
			minRangeProbab=0.3;
			midRange=50;
			midRangeProbab=0.7;
			maxRange=200;
			maxRangeProbab=0.05;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
		};	
		
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					0.316228,
					1,
					10
				};
				closure2[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					0.316228,
					1.1,
					10
				};
				soundClosure[]={};
			};
			class StandardSound: BaseSoundModeType
			{
				/*
				soundSetShot[]=
				{
					"Lasgun_Shot_SoundSet",
					"Lasgun_Tail_SoundSet",
					"Lasgun_InteriorTail_SoundSet"
				};
				*/
				begin1[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					3.162,
					1,
					1800
				};
				begin2[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					3.162,
					1,
					1800
				};
				begin3[]=
				{
					"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
					3.16,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33,
					"begin2",
					0.33,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							2.23,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"vanguardtiowaddon\Sound\Dolf_Boom.ogg",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			soundBurst=0;
			burst=6;
			reloadTime=0.075;
			dispersion=0.00035;
			recoil="recoil_pistol_light";
			recoilProne="recoil_prone_pistol_light";
			minRange=2;
			minRangeProbab=0.3;
			midRange=50;
			midRangeProbab=0.7;
			maxRange=200;
			maxRangeProbab=0.05;
			aiRateOfFire=1;
			aiRateOfFireDistance=250;
		};
	};
	
	class VNG_LasLMG: VNG_LasLMGBase
	{
		author="Dolf";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="[Vanguard] Unknown Pattern Las-LMG";
		hiddenSelections[]=
		{
			"casing_camo",
			"wording_camo"
		};
		hiddenSelectionsTextures[]=
		{
			"Cadian_Weapons\Data\Textures\M36KantRifle_casing_776_co.paa",
			"Cadian_Weapons\Data\Textures\M36KantRifle_wording_co.paa"
		};
		model="\Cadian_Weapons\Model\M36KantRifle.p3d";
	};
	
	
	
	class MissileLauncherDKOK: launch_RPG7_F
	{
		class OpticsModes
		{
			class optic
			{
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]=
				{
					4,
					5
				};
			};
		};
		magazines[]=
		{
			"MLAT_Mag",
			"MLHE_Mag",
			"VNG_MLSmoke_Mag",
			"VNG_MLMelta_Mag"
		};
	};
	class VNG_UniformArmorBase: ItemCore
	{
		scope=0;
		allowedSlots[]={901};
		class ItemInfo: VestItem
		{
			maximumLoad=0;
			mass=0;
		};
	};
	class TIOW_Priest_Gear: ItemCore
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		class ItemInfo: VestItem
		{
			class HitpointsProtectionInfo
			{
				class Neck {
					hitpointName = "HitNeck"; // reference to the hit point class defined in the man base class
					//pen = 0.4; // Mod exclusive caculation
					armor = 8; // addition to armor of referenced hitpoint
					passThrough = 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
				
				class Arms {
					hitpointName = "HitArms";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Chest {
					hitpointName = "HitChest";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Body {
					hitpointName = "HitBody";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class TIOW_Cultist_Gear: ItemCore
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		class ItemInfo: VestItem
		{
			class HitpointsProtectionInfo
			{
				class Neck {
					hitpointName = "HitNeck"; // reference to the hit point class defined in the man base class
					//pen = 0.4; // Mod exclusive caculation
					armor = 8; // addition to armor of referenced hitpoint
					passThrough = 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
				
				class Arms {
					hitpointName = "HitArms";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Chest {
					hitpointName = "HitChest";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Body {
					hitpointName = "HitBody";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class TIOW_Cultist_Gear2: ItemCore
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		class ItemInfo: VestItem
		{
			class HitpointsProtectionInfo
			{
				class Neck {
					hitpointName = "HitNeck"; // reference to the hit point class defined in the man base class
					//pen = 0.4; // Mod exclusive caculation
					armor = 8; // addition to armor of referenced hitpoint
					passThrough = 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
				
				class Arms {
					hitpointName = "HitArms";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Chest {
					hitpointName = "HitChest";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Diaphragm {
					hitpointName = "HitDiaphragm";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Abdomen {
					hitpointName = "HitAbdomen";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Pelvis {
					hitpointName = "HitPelvis";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
				
				class Body {
					hitpointName = "HitBody";
					//pen = 0.4; // Mod exclusive caculation
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class TIOW_Mordian_Belt: ItemCore
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		class ItemInfo: VestItem
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class TIOW_Valhallan_Belt: ItemCore
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		class ItemInfo: VestItem
		{
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class VNG_Captain_Armor: ItemCore
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		//picture="";
		model="\A3\Weapons_F\empty.p3d";
		displayName="[Cadian] Captain Armor";
		descriptionShort="Armor for the Cadian Captains";
		class ItemInfo: VestItem
		{
			containerClass="Supply140";
			uniformModel="\A3\Weapons_F\empty.p3d";
			maximumLoad=0;
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class VNG_Commissar_Armor: ItemCore
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		//picture="";
		model="\A3\Weapons_F\empty.p3d";
		displayName="[Imperium] Commissar Armor";
		descriptionShort="Armor for the Imperial Commissars";
		class ItemInfo: VestItem
		{
			containerClass="Supply140";
			uniformModel="\A3\Weapons_F\empty.p3d";
			maximumLoad=0;
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class VNG_Krieg_Armor: ItemCore
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		//picture="vanguardtiowaddon\Icon\empty.paa";
		model="\A3\Weapons_F\empty.p3d";
		displayName="[Krieg] Uniform Armor";
		descriptionShort="Armor for the unarmored Krieg Units";
		class ItemInfo: VestItem
		{
			containerClass="Supply140";
			uniformModel="\A3\Weapons_F\empty.p3d";
			maximumLoad=0;
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	
	class TIOW_IG_GL: Rifle_Base_F
	{
		author="Sokolonko";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		baseWeapon="TIOW_IG_GL";
		displayName="[Cadian] Grenade Launcher";
		type = 1;
		model="\TIOW_Spec_Weps\GL\IG_GL.p3d";
		picture="\TIOW_Spec_Weps\GL\data\IG_GLicon_ca.paa";
		UiPicture="\TIOW_Spec_Weps\GL\data\IG_GLicon_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]=
		{
			"TIOW_IG_GL_Frag_mag",
			"TIOW_IG_GL_Krak_mag",
			"TIOW_IG_GL_Smoke_mag",
			"TIOW_IG_GL_Buck_mag",
			"TIOW_IG_GL_Flare_mag",
			"TIOW_IG_GL_Flame_mag"
		};
		cameraDir="OP_look";
		discreteDistance[]={100,200,300,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye2",
			"OP_eye3",
			"OP_eye4"
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		discreteDistanceInitIndex=0;
		distanceZoomMin=300;
		distanceZoomMax=300;
		magazineWell[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\TIOW_Spec_Weps\GL\Anims\GL_handanim.rtm"
		};
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\Reload_MX",
			1,
			1,
			10
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.45};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.35};
				iconScale=0.2;
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.45};
				iconScale=0.25;
				compatibleItems[]={};
			};
			mass=100;
		};
		inertia=0.4;
		aimTransitionSpeed=1.2;
		dexterity=1.6;
		recoil="recoil_mx";
		maxZeroing=400;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="Grenade Launcher for Cadian Forces";
		selectionFireAnim="muzzleFlash";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.4;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00035;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.7;
			maxRange=400;
			maxRangeProbab=0.3;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63,
					1,
					20
				};
				closure2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63,
					1.2,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"TIOW_Lucius_Shotgun_Shot_SoundSet",
					"TIOW_Lucius_Shotgun_tail_SoundSet"
				};
				begin1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33,
					"begin2",
					0.33,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							2.24,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		aiDispersionCoefY=4;
		aiDispersionCoefX=6;
	};
	class VNG_IG_GL: Rifle_Base_F
	{
		author="Sokolonko";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		//baseWeapon="TIOW_IG_GL";
		displayName="[Vanguard] Grenade Launcher";
		type=2;
		model="\TIOW_Spec_Weps\GL\IG_GL.p3d";
		picture="\TIOW_Spec_Weps\GL\data\IG_GLicon_ca.paa";
		UiPicture="\TIOW_Spec_Weps\GL\data\IG_GLicon_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]=
		{
			"TIOW_IG_GL_Frag_mag",
			"TIOW_IG_GL_Krak_mag",
			"TIOW_IG_GL_Smoke_mag",
			"TIOW_IG_GL_Buck_mag",
			"TIOW_IG_GL_Flare_mag",
			"TIOW_IG_GL_Flame_mag"
		};
		cameraDir="OP_look";
		discreteDistance[]={100,200,300,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye2",
			"OP_eye3",
			"OP_eye4"
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		discreteDistanceInitIndex=0;
		distanceZoomMin=300;
		distanceZoomMax=300;
		magazineWell[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton"/*,
			"\TIOW_Spec_Weps\GL\Anims\GL_handanim.rtm"*/
		};
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\Reload_MX",
			1,
			1,
			10
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.45};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.35};
				iconScale=0.2;
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.45};
				iconScale=0.25;
				compatibleItems[]={};
			};
			mass=100;
		};
		inertia=0.4;
		aimTransitionSpeed=1.2;
		dexterity=1.6;
		recoil="recoil_mx";
		maxZeroing=400;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="Grenade Launcher for Cadian Forces";
		selectionFireAnim="muzzleFlash";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.4;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00035;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.7;
			maxRange=400;
			maxRangeProbab=0.3;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63,
					1,
					20
				};
				closure2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63,
					1.2,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"TIOW_Lucius_Shotgun_Shot_SoundSet",
					"TIOW_Lucius_Shotgun_tail_SoundSet"
				};
				begin1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33,
					"begin2",
					0.33,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							2.24,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		aiDispersionCoefY=4;
		aiDispersionCoefX=6;
	};
	/* 
	class VNG_MissileLauncher: launch_RPG7_F // One day I will finish this fucking thing
	{
		author="Dolf";
		model="vanguardtiowaddon\Model\VanguardDisposableLauncher.p3d";
		scope=0;
		displayName="[Vanguard] Disposable Launcher";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\DKoK_Weapons\Anim\MissileLauncher.rtm"
		};
		descriptionShort="Vanguard Disposable Launcher";
		lockingTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locking_NLAW",
			0.316228,
			1
		};
		lockedTargetSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locked_NLAW",
			0.316228,
			2.5
		};
		changeFiremodeSound[]=
		{
			"A3\sounds_f\dummysound",
			0.56234097,
			1,
			20
		};
		modelOptics="\A3\Weapons_F\acc\reticle_NLAW";
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		opticsZoomMin=0.0623;
		opticsZoomMax=0.0623;
		opticsZoomInit=0.0623;
		class OpticsModes
		{
			class optic
			{
				opticsID=1;
				useModelOptics=1;
				opticsZoomMin=0.0623;
				opticsZoomMax=0.0623;
				opticsZoomInit=0.0623;
				distanceZoomMin=300;
				distanceZoomMax=300;
				memoryPointCamera="cam";
				opticsFlare=1;
				opticsDisablePeripherialVision=1;
				cameraDir="look";
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[]=
				{
					4,
					5
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
			};
			class Hamr2Collimator
			{
				opticsID=1;
				useModelOptics=0;
				opticsPPEffects[]=
				{
					"Default"
				};
				opticsFlare=0;
				opticsDisablePeripherialVision=0;
				opticsZoomMin=0.25;
				opticsZoomMax=1.25;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=200;
				distanceZoomMax=200;
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=100;
		};
		magazines[]=
		{
			"MLAT_Mag",
			"MLHE_Mag",
			"MLSmoke_Mag",
			"MLMelta_Mag"
		};
		canLock=2;
		weaponLockDelay=5;
		lockAcquire=0;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\DKoK_Weapons\Data\Textures\MissileLauncherBlack_co.paa"
		};
	};
	*/
	class VNG_MeltaGun: Rifle_Base_F
	{
		scope=2;
		author="There is Only War";
		displayName="[Vanguard] Meltagun";
		type=2;
		model="\Cadian_Weapons\Model\MeltaGun_01.p3d";
		reloadAction="GestureReloadPistolHeavy02";
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		recoil="";
		recoilProne="";
		magazineWell[]={};
		magazines[]=
		{
			"TIOW_Meltagun_Mag"
		};
		optics=1;
		modelOptics="-";
		distanceZoomMin=50;
		distanceZoomMax=50;
		maxZeroing=100;
		soundBullet[]=
		{
			"emptySound",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",
			0.31622776,
			1,
			10
		};
		fireSpreadAngle=0.78482503;
		aiDispersionCoefY=5;
		aiDispersionCoefX=3;
		selectionFireAnim="muzzleFlash";
		picture="\Cadian_Weapons\Icon\Meltagun_ca.paa";
		class GunParticles: GunParticles
		{
			class RifleAmmoCloud
			{
				positionName="Nabojnicestart";
				directionName="Nabojniceend";
				effectName="TIOW_Meltagun_RifleAmmoCloud";
			};
			class SmokeEffect
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="TIOW_Meltagun_RifleSmokeTrail";
			};
			class BarrelRefract
			{
				positionName="usti hlavne";
				directionName="usti hlavne";
				effectName="TIOW_Meltagun_BarrelRefract";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
				compatibleItems[]={};
			};
			mass=80;
		};
		modes[]=
		{
			"Burst"
		};
		class Burst: Mode_Burst
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"\Cadian_Weapons\Sound\Meltagun.ogg",
					2.2,
					1,
					750
				};
				begin2[]=
				{
					"\Cadian_Weapons\Sound\Meltagun.ogg",
					2,
					0.89999998,
					750
				};
				soundBegin[]=
				{
					"begin1",
					0.5,
					"begin2",
					0.5
				};
			};
			burst=1;
			soundContinuous="false";
			reloadSound[]=
			{
				"",
				1,
				1
			};
			dispersion=0.00034999999;
			reloadTime=6;
			recoil="recoil_empty";
			recoilProne="recoil_empty";
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.89999998;
			maxRange=95;
			maxRangeProbab=0.89999998;
			aiRateOfFire=6;
		};
	};
	class VNG_KriegLauncher: Rifle_Base_F
	{
		author="E_50_Panzer";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		//baseWeapon="TIOW_KriegLauncher";
		displayName="[Vanguard] Lucius Pattern Grenade Launcher";
		type=2;
		model="\DKoK_Weapons\model\KriegLauncher.p3d";
		reloadAction="GestureReloadPistolHeavy02";
		picture="\DKoK_Weapons\Icon\KriegLauncher_ca.paa";
		UiPicture="\DKoK_Weapons\Icon\KriegLauncher_ca.paa";
		muzzles[]=
		{
			"this"
		};
		magazines[]=
		{
			"TIOW_Krieg_LauncherFrag_mag"
		};
		cameraDir="OP_look";
		discreteDistance[]={100,200,300,400};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye2",
			"OP_eye3",
			"OP_eye4"
		};
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		discreteDistanceInitIndex=0;
		distanceZoomMin=300;
		distanceZoomMax=300;
		magazineWell[]={};
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		caseless[]=
		{
			"",
			1,
			1,
			1
		};
		soundBullet[]=
		{
			"caseless",
			1
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
			0.56234097,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\MX\Reload_MX",
			1,
			1,
			10
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]={};
				iconPosition[]={0,0.44999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.34999999};
				iconScale=0.2;
				compatibleItems[]={};
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.2,0.44999999};
				iconScale=0.25;
				compatibleItems[]={};
			};
			mass=100;
		};
		inertia=0.40000001;
		aimTransitionSpeed=1.2;
		dexterity=1.6;
		initSpeed=720;
		recoil="recoil_mx";
		maxZeroing=400;
		class ItemInfo
		{
			priority=1;
		};
		descriptionShort="Grenade Launcher for Death Korps of Krieg Troopers";
		selectionFireAnim="muzzleFlash";
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime=0.25;
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
			dispersion=0.00034999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=200;
			midRangeProbab=0.69999999;
			maxRange=400;
			maxRangeProbab=0.30000001;
			soundContinuous=0;
			soundBurst=0;
			sounds[]=
			{
				"StandardSound"
			};
			class BaseSoundModeType
			{
				closure1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63095701,
					1,
					20
				};
				closure2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					0.63095701,
					1.2,
					20
				};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"TIOW_Lucius_Shotgun_Shot_SoundSet",
					"TIOW_Lucius_Shotgun_tail_SoundSet"
				};
				begin1[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				begin2[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				begin3[]=
				{
					"\DKoK_Weapons\Sound\KriegShotgun",
					3.1622801,
					1,
					1800
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin1",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							2.2387199,
							1,
							1800
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"\DKoK_Weapons\Sound\KriegShotgun",
							1,
							1,
							1800
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
		aiDispersionCoefY=4;
		aiDispersionCoefX=6;
	};
	
	class TIOW_ion_rifle: Rifle_Base_F
	{
		recoil = "recoil_mxm";
		magazines[]=
		{
			"TIOW_ionrifle_shot_mag",
			"TIOW_ionrifle_overcharge_mag",
			"VNG_ionrifle_at_mag"
		};
	};
	
	class TIOW_pulse_carbine: Rifle_Base_F
	{
		swayDecaySpeed = 10.25;
		recoil = "recoil_mxm";
		modes[]=
		{
			"Single", "Burst"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.096;
			dispersion = 0.00065;
		};
        class Burst: Mode_Burst
        {
            sounds[]=
            {
                "StandardSound"
            };
            class StandardSound
            {
                soundSetShot[]=
                {
                    "TIOW_pulse_carbine_Shot_SoundSet",
                    "TIOW_pulse_carbine_Tail_SoundSet"
                };
            };
            soundBurst=0;
            burst=3;
            reloadTime=0.096;
            dispersion=0.00065;
            minRange=2;
            minRangeProbab=0.3;
            midRange=50;
            midRangeProbab=0.7;
            maxRange=200;
            maxRangeProbab=0.05;
            aiRateOfFire=1;
            aiRateOfFireDistance=250;
        };
		class VNG_Tau_GL: UGL_F /// Some grenade launcher to have some more fun
		{
			displayName = "Underbarrel Grenade Launcher";
			descriptionShort = "UGL";
			useModelOptics = false;
			useExternalOptic = false; /// Doesn't use optics from the attachment, has it's own
			magazines[] = {"VNG_pulse_grenade_mag"};
			cameraDir = "OP_look";
			discreteDistance[] = {200};
			discreteDistanceCameraPoint[] = {"OP_look"}; // the angle of gun changes with zeroing
			discreteDistanceInitIndex = 0; // 200 is the default zero
		};
		muzzles[] = {this, VNG_Tau_GL};
	};
	
	class TIOW_pulse_carbine_ML: Rifle_Base_F
    {
		swayDecaySpeed = 10.25;
		inertia = 0.5;
		recoil = "recoil_mxm";
        modes[]=
        {
            "Single",
            "Burst"
        };
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.096;
			dispersion = 0.00065;
		};
        class Burst: Mode_Burst
        {
            sounds[]=
            {
                "StandardSound"
            };
            class StandardSound
            {
                soundSetShot[]=
                {
                    "TIOW_pulse_carbine_Shot_SoundSet",
                    "TIOW_pulse_carbine_Tail_SoundSet"
                };
            };
            soundBurst=0;
            burst=3;
            reloadTime=0.096;
            dispersion=0.00065;
            minRange=2;
            minRangeProbab=0.3;
            midRange=50;
            midRangeProbab=0.7;
            maxRange=200;
            maxRangeProbab=0.05;
            aiRateOfFire=1;
            aiRateOfFireDistance=250;
        };
		class VNG_Tau_GL: UGL_F /// Some grenade launcher to have some more fun
		{
			displayName = "Underbarrel Grenade Launcher";
			descriptionShort = "UGL";
			useModelOptics = false;
			useExternalOptic = false; /// Doesn't use optics from the attachment, has it's own
			magazines[] = {"VNG_pulse_grenade_mag"};
			cameraDir = "OP_look";
			discreteDistance[] = {200};
			discreteDistanceCameraPoint[] = {"OP_look"}; // the angle of gun changes with zeroing
			discreteDistanceInitIndex = 0; // 200 is the default zero
		};
		muzzles[] = {this, VNG_Tau_GL};
    };
	
	class TIOW_pulse_rifle: Rifle_Base_F
	{
		recoil = "recoil_mxm";
		/*
		initSpeed = 2000;
		*/
		magazines[] = {"VNG_pulse_rifle_mag"};
		
		mass = 3;
	};
	
	class TIOW_rail_rifle: Rifle_Base_F
	{
		ACE_barrelLength=60005;
		dispersion=0.00000029;
		recoil = "recoil_mxm";
		class Single: Mode_SemiAuto
		{
			reloadTime=0.5;
			minRange=0;
			minRangeProbab=0.9;
			midRange=250;
			midRangeProbab=0.7;
			maxRange=600;
			maxRangeProbab=0.3;
			aiRateOfFireDistance=600;
			aiRateOfFire=6;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"TIOW_rail_rifle_Shot_SoundSet",
					"TIOW_rail_rifle_Tail_SoundSet"
				};
			};
		};
	};
	
	class TIOW_Tau_optics_Mk_zoom: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Tau_ScopeB
				{
					discretefov[] = {0.0625, 0.025, 0.005};
				};
			};
		};
	};
	
	class VNG_pulse_lmg: TIOW_pulse_carbine_ML_VL
	{
		author="Dolf";
		baseWeapon = "VNG_pulse_lmg";
		displayName="[Tau] Light Pulse Repeater";
		recoil = "recoil_mxm";
		magazines[]=
		{
			"VNG_100rnd_pulse_mag",
			"VNG_200rnd_pulse_mag",
			"TIOW_pulse_mag"
		};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 300;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"TIOW_pulse_carbine_Shot_SoundSet", "TIOW_pulse_carbine_Tail_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			soundBurst = 0;
			burst = 0;
			reloadTime = 0.075;
			dispersion = 0.002;
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				soundSetShot[] = {"TIOW_pulse_carbine_Shot_SoundSet", "TIOW_pulse_carbine_Tail_SoundSet"};
			};
		};
		muzzles[] = {this};
		
		/*
		class EventHandlers: EventHandlers
		{
			fired = "(_this select 0) execVM ""vanguardtiowaddon\Scripts\smite.sqf"";";
			//fired = "(_this select 0) spawn VNG_fnc_smite;";
		};
		*/
	};
	
	class U_TIOW_Fire_Warrior_VIor: U_TIOW_Fire_Warrior_VL
	{
		displayName="Tau Fire Warrior [VIor sept]";
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
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_Fire_Warrior_VIor";
		};
	};
	
	class TIOW_U_Fire_Warrior_VIor_O: U_TIOW_Fire_Warrior_VIor
	{
		scope=1;
		scopeCurator=1;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_FireWarrior_Base_VIor_O";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	
	class TIOW_U_Fire_Warrior_VIor_B: TIOW_U_Fire_Warrior_VIor_O
	{
		scope=2;
		scopeCurator=2;
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_FireWarrior_Base_VIor_B";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	
	class TIOW_U_Fire_Warrior_VIor_I: TIOW_U_Fire_Warrior_VIor_O
	{
		class ItemInfo: ItemInfo
		{
			uniformClass="TIOW_FireWarrior_Base_VIor_I";
			uniformModel="-";
			containerClass="Supply200";
			mass=150;
		};
	};
	
	class TIOW_pulse_pistol: Pistol_Base_F
	{
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
		};
	};
	
	class TIOW_Tau_Gear_Base: ItemCore
    {
        class ItemInfo: VestItem
		{
            vestType = "Rebreather";
		};
    };
	
    class TIOW_Mk7Vest: SM_Gear
	{
        class ItemInfo: ItemInfo
		{
            vestType = "Rebreather";
        };
    };
	
	class srifle_LRR_F;
	class asdg_OpticRail1913;
	class VNG_smite: srifle_LRR_F
	{
		scope=0;
		scopeCurator=0;
		scopeArsenal=0;
		author="Dolf";
		baseWeapon = "VNG_smite";
		displayName="[Warp] Smite";
		recoil = "recoil_mxm";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {""};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot
			{
			};
			class PointerSlot
			{
			};
			class CowsSlot: asdg_OpticRail1913
			{
				compatibleItems[] = {};
			};
			mass = 310;
		};
		magazines[]=
		{
			"VNG_warp_mag"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 10;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"M320_Shot_SoundSet", "M320_Tail_SoundSet", "M320_InteriorTail_SoundSet"};
			};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 500;
		};
		
		class EventHandlers: EventHandlers
		{
			fired = "(_this select 0) execVM ""vanguardtiowaddon\Scripts\smite.sqf"";";
		};
	};
	
	class hgun_P07_F;
	class LuciusLaspistolBase: hgun_P07_F
	{
		magazines[] = {"VNG_LuciusLaspistol_mag", "VNG_LuciusLaspistol_High_mag"};
	};
	
	class TIOW_LongLas_Base: arifle_MX_Base_F
	{
		class OpticsModes
		{
			class TWS
			{
				visionMode[] = {"Normal", "NVG"};
			};
		};
		class Single: Mode_SemiAuto
		{
			reloadTime = 2.2;
		};
	};
	
	class VNG_Tau_Railgun_12_7mm_APDS: LMG_coax
	{
		displayName = "Co-axial Railgun";
		magazines[] = {"VNG_Tau_Railgun_12_7mm_APDS_mag"};
		magazineReloadTime = 8;
		class manual: MGun
		{
			displayName = "Co-axial Railgun";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				SoundSetShot[] = {"TIOW_pulse_rifle_Shot_SoundSet", "TIOW_pulse_rifle_Tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.075;
			dispersion = 0.0016;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 16;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 3;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
};