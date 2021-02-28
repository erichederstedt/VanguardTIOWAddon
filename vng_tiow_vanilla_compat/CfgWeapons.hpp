#include "add_hitpoints_cad.hpp"
#include "add_hitpoints_krieg.hpp"
#include "add_hitpoints_renegade.hpp"
#include "add_hitpoints_tau.hpp"
#include "add_hitpoints_sm.hpp"
//#include "add_hitpoints_bloodpact.hpp"

/*

		Each faction has it's own header where the armor values for the 
		different vests and helmets are defined in macros. This decision
		was made to cut down on the code and be better organized.

*/

class Mode_SemiAuto;
class VestItem;

class CfgWeapons 
{
	class Cad_Gear_Vest2;
	class TIOW_Gear_Vest_Base_2;
	class TIOW_OCC_Helmet_Base_1;
	class DKoK_Gear;
	class Ren_Gear;
	class TIOW_Tau_Gear_Base;
	class Vest_Camo_Base;
	class H_HelmetB;
	class TIOW_Mk7Vest;
	class TIOW_NecronLord_Helm_base;
	class TIOW_NecronWarrior_Helm_base;
	class arifle_MX_Base_F;
	
	//Cadian vests and helmets.
	class Cad_Gear2: Cad_Gear_Vest2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class Cad_KasrGear836th: Cad_Gear2 // V_PlateCarrierSpec_rgr
	{
		ADD_HITPOINTS_CAD_KAS_VEST
	};
	class Cad_KasrGear776th: Cad_Gear2 // V_PlateCarrierSpec_rgr
	{
		ADD_HITPOINTS_CAD_KAS_VEST
	};
	class Cad_KasrGear700th: Cad_Gear2 // V_PlateCarrierSpec_rgr
	{
		ADD_HITPOINTS_CAD_KAS_VEST
	};
	class Cad_KasrGear667th: Cad_Gear2 // V_PlateCarrierSpec_rgr
	{
		ADD_HITPOINTS_CAD_KAS_VEST
	};
	class Cad_Gear836th: Cad_Gear2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class Cad_Gear700th: Cad_Gear2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class Cad_Gear776th: Cad_Gear2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class Cad_Gear667th: Cad_Gear2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class Cad_TnkGear836th: Cad_Gear2 // V_PlateCarrier1_rgr
	{
		ADD_HITPOINTS_CAD_TANK_VEST
	};
	class Cad_MedGear836th: Cad_Gear2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class Cad_MedGear700th: Cad_Gear2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class Cad_MedGear776th: Cad_Gear2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class Cad_MedGear667th: Cad_Gear2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class Cad_Inf_Helm2: ItemCore // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_Kasr_Helm836th: Cad_Inf_Helm2 // H_HelmetSpecB
	{
		ADD_HITPOINTS_CAD_KAS_HELMET
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class Cad_Kasr_Helm776th: Cad_Inf_Helm2 // H_HelmetSpecB
	{
		ADD_HITPOINTS_CAD_KAS_HELMET
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class Cad_Kasr_Helm700th: Cad_Inf_Helm2 // H_HelmetSpecB
	{
		ADD_HITPOINTS_CAD_KAS_HELMET
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class Cad_Kasr_Helm667th: Cad_Inf_Helm2 // H_HelmetSpecB
	{
		ADD_HITPOINTS_CAD_KAS_HELMET
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class Cad_RebreatherMask836th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_MASK
	};
	class Cad_RebreatherMask776th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_MASK
	};
	class Cad_RebreatherMask700th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_MASK
	};
	class Cad_RebreatherMask667th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_MASK
	};
	class Cad_RebreatherMaskPhoto836th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_MASK
	};
	class Cad_RebreatherMaskPhoto776th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_MASK
	};
	class Cad_RebreatherMaskPhoto700th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_MASK
	};
	class Cad_RebreatherMaskPhoto667th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_MASK
	};
	class Cad_InfPhoto_Helm836th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_InfPhoto_Helm776th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_InfPhoto_Helm700th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_InfPhoto_Helm667th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_InfBreather_Helm836th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_InfBreather_Helm776th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_InfBreather_Helm700th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_InfBreather_Helm667th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_Inf_Helm836th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_Inf_Helm700th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_Inf_Helm667th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_Inf_Helm776th: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class Cad_Tnk_Helm: Cad_Inf_Helm2 // H_HelmetB
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	class TIOW_IG_Sergeant_Armour_836: Cad_Gear_Vest2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class TIOW_IG_Sergeant_Armour_776: Cad_Gear_Vest2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class TIOW_IG_Sergeant_Armour_700: Cad_Gear_Vest2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class TIOW_IG_Sergeant_Armour_667: Cad_Gear_Vest2 // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};

	//Cadmae PDF vests and helmets
	class TIOW_OCC_Vest_1: TIOW_Gear_Vest_Base_2
	{
		ADD_HITPOINTS_CAD_FLAK_VEST
	};
	class TIOW_OCC_Helmet_1: TIOW_OCC_Helmet_Base_1
	{
		ADD_HITPOINTS_CAD_FLAK_HELMET
	};
	
	//Krieg vests and helmets
	class DKoK_Eng_Armor: DKoK_Gear // V_PlateCarrierGL_rgr
	{
		ADD_HITPOINTS_KRIEG_ENG_VEST
	};
	class DKoK_Gren_Armor: DKoK_Gear // V_PlateCarrierSpec_rgr
	{
		ADD_HITPOINTS_KRIEG_GREN_VEST
	};
	class DKoK_GM_Helm: ItemCore // H_HelmetB
	{
		ADD_HITPOINTS_KRIEG_HELMET
	};

	//Renegade vests and helmets
	class Ren_ArmorSet_00: Ren_Gear // V_PlateCarrier1_rgr
	{
		ADD_HITPOINTS_REN_VEST
	};
	class Ren_Helm_00: ItemCore // H_HelmetB_light
	{
		ADD_HITPOINTS_REN_HELMET
	};
	class TIOW_RenEnforcerMask_1: Ren_Helm_00 // H_HelmetB
	{
		ADD_HITPOINTS_REN_MASK
	};
	
	/*
	//Bloodpact vests and helmets
	class TIOW_Bloodpact_vest_01: Vest_Camo_Base
	{
		ADD_HITPOINTS_BP_FLAK_VEST
	};
	class TIOW_Bloodpact_vest_02: Vest_Camo_Base
	{
		ADD_HITPOINTS_BP_GREN_VEST
	};
	class TIOW_Bloodpact_vest_03: Vest_Camo_Base
	{
		ADD_HITPOINTS_BP_HEAVY_VEST
	};
	class TIOW_Bloodpact_vest_04: Vest_Camo_Base
	{
		ADD_HITPOINTS_BP_MEDIUM_VEST
	};
	class TIOW_Bloodpact_helmet_01: H_HelmetB
	{
		ADD_HITPOINTS_BP_HELMET
	};
	*/

	//Tau vests and helmets
	class TIOW_Tau_Belt: TIOW_Tau_Gear_Base // V_PlateCarrierSpec_rgr
	{
		ADD_HITPOINTS_TAU_FIRE_VEST
	};
	class TIOW_Tau_BeltP: TIOW_Tau_Belt // V_PlateCarrier2_rgr
	{
		ADD_HITPOINTS_TAU_PATH_VEST
	};
	class TIOW_Tau_HelmetB2: H_HelmetB // H_HelmetSpecB
	{
		ADD_HITPOINTS_TAU_FIRE_HELMET
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class TIOW_Tau_HelmetS: H_HelmetB // H_HelmetB
	{
		ADD_HITPOINTS_TAU_PATH_HELMET
	};

	// Space Marine vests (and helmets in the future)
	class TIOW_Mk7Limbs_UM: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_IF: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_WB: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_IW: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_BL: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_WE: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_EC: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_AL: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_TS: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_NL: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	class TIOW_Mk7Limbs_DG: TIOW_Mk7Vest
	{
		ADD_HITPOINTS_SM_VEST
	};
	// todo: Do the SM Helmets. They are fairly fine already so low priority.
	// Random starting point: TIOW_MK7Helmet_BT
	
	
	// Necrons
	/*
	class VNG_Necron_Lord_Armor: ItemCore
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		model="\A3\Weapons_F\empty.p3d";
		displayName="[Necrons] Necron Lord Armor";
		descriptionShort="Armor for the Necron Lords";
		class ItemInfo: VestItem
		{
			containerClass="Supply140";
			uniformModel="\A3\Weapons_F\empty.p3d";
			maximumLoad=0;
			mass=0;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};
	class VNG_Necron_Warrior_Armor: ItemCore
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		allowedSlots[]={901};
		model="\A3\Weapons_F\empty.p3d";
		displayName="[Necrons] Necron Warrior Armor";
		descriptionShort="Armor for the Necron Warriors";
		class ItemInfo: VestItem
		{
			containerClass="Supply140";
			uniformModel="\A3\Weapons_F\empty.p3d";
			maximumLoad=0;
			mass=0;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 100;
					passThrough = 0.1;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 50;
					passThrough = 0.1;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 100;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 100;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 50;
					passThrough = 0.1;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 50;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 50;
					passThrough = 0.1;
				};
			};
		};
	};
	
	class TIOW_NecronLord_Helm: TIOW_NecronLord_Helm_base
	{
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0; // TODO(Dolf): Buff this
					passThrough = 0;
				};
			};
		};
	};
	class TIOW_NecronWarrior_Helm: TIOW_NecronWarrior_Helm_base
	{
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 0; // TODO(Dolf): Buff this
					passThrough = 0;
				};
			};
		};
	};
	*/
	
	/*
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo: ItemInfo
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
	class V_PlateCarrierSpec_rgr: Vest_NoCamo_Base
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 24;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 24;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 24;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
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
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo: ItemInfo
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
	class V_PlateCarrierGL_rgr: Vest_NoCamo_Base
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};

	class H_HelmetSpecB: H_HelmetB_plain_mcamo
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	class H_HelmetB: ItemCore
	{
		class ItemInfo: HeadgearItem
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class H_HelmetB_light: H_HelmetB
	{
		class ItemInfo: ItemInfo
		{
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
		ace_hearing_protection = 0.75;
		ace_hearing_lowerVolume = 0;
	};
	*/
	
	class TIOW_LongLas_Base: arifle_MX_Base_F
	{
		initSpeed = 1000;
		class Single: Mode_SemiAuto
		{
			reloadTime = 2.2;
		};
	};
};