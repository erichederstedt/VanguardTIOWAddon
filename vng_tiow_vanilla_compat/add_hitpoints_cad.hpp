/*
    Usage:

    #include "add_hitpoints_cad.hpp"

    class CfgWeapons 
	{
        class Cad_Gear2: Cad_Gear_Vest2
		{
			ADD_HITPOINTS_CAD_FLAK_VEST();
		};
    };
*/

/*
Use the armor = value; and passThrough = percentage value; to modify the 
strength of the vests and helmets.
*/
#define ADD_HITPOINTS_CAD_FLAK_VEST()\
    class ItemInfo: ItemInfo\
	{\
		class HitpointsProtectionInfo\
		{\
			class Neck\
			{\
				hitpointName = "HitNeck";\
				armor = 0;\
				passThrough = 0.5;\
			};\
			class Arms\
			{\
				hitpointName = "HitArms";\
				armor = 0;\
				passThrough = 0.5;\
			};\
			class Chest\
			{\
				HitpointName = "HitChest";\
				armor = 20;\
				PassThrough = 0.2;\
			};\
			class Diaphragm\
			{\
				HitpointName = "HitDiaphragm";\
				armor = 20;\
				PassThrough = 0.2;\
			};\
			class Abdomen\
			{\
				hitpointName = "HitAbdomen";\
				armor = 20;\
				passThrough = 0.2;\
			};\
			class Pelvis\
			{\
				hitpointName = "HitPelvis";\
				armor = 0;\
				passThrough = 0.3;\
			};\
			class Body\
			{\
				hitpointName = "HitBody";\
				passThrough = 0.2;\
			};\
		};\
	};\

#define ADD_HITPOINTS_CAD_FLAK_HELMET()\
	class ItemInfo: HeadgearItem\
	{\
		class HitpointsProtectionInfo\
		{\
			class Head\
			{\
				hitpointName = "HitHead";\
				armor = 6;\
				passThrough = 0.5;\
			};\
		};\
	};\

#define ADD_HITPOINTS_CAD_MASK()\
	class ItemInfo: HeadgearItem\
	{\
		class HitpointsProtectionInfo\
		{\
			class Head\
			{\
				hitpointName = "HitHead";\
				armor = 6;\
				passThrough = 0.5;\
			};\
		};\
	};\

#define ADD_HITPOINTS_CAD_KAS_VEST()\
    class ItemInfo: ItemInfo\
	{\
		class HitpointsProtectionInfo\
		{\
			class Neck\
			{\
				hitpointName = "HitNeck";\
				armor = 8;\
				passThrough = 0.5;\
			};\
			class Arms\
			{\
				hitpointName = "HitArms";\
				armor = 8;\
				passThrough = 0.5;\
			};\
			class Chest\
			{\
				hitpointName = "HitChest";\
				armor = 24;\
				passThrough = 0.1;\
			};\
			class Diaphragm\
			{\
				hitpointName = "HitDiaphragm";\
				armor = 24;\
				passThrough = 0.1;\
			};\
			class Abdomen\
			{\
				hitpointName = "HitAbdomen";\
				armor = 24;\
				passThrough = 0.1;\
			};\
			class Pelvis\
			{\
				hitpointName = "HitPelvis";\
				armor = 0;\
				passThrough = 0.1;\
			};\
			class Body\
			{\
				hitpointName = "HitBody";\
				armor = 0;\
				passThrough = 0.1;\
			};\
		};\
	};\

	/*
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
	*/

#define ADD_HITPOINTS_CAD_KAS_HELMET()\
	class ItemInfo: HeadgearItem\
	{\
		class HitpointsProtectionInfo\
		{\
			class Head\
			{\
				hitpointName = "HitHead";\
				armor = 10;\
				passThrough = 0.5;\
			};\
		};\
	};\
	

#define ADD_HITPOINTS_CAD_TANK_VEST()\
    class ItemInfo: ItemInfo\
	{\
		class HitpointsProtectionInfo\
		{\
			class Neck\
			{\
				hitpointName = "HitNeck";\
				armor = 0;\
				passThrough = 0.3;\
			};\
			class Arms\
			{\
				hitpointName = "HitArms";\
				armor = 0;\
				passThrough = 0.3;\
			};\
			class Chest\
			{\
				hitpointName = "HitChest";\
				armor = 16;\
				passThrough = 0.3;\
			};\
			class Diaphragm\
			{\
				hitpointName = "HitDiaphragm";\
				armor = 16;\
				passThrough = 0.3;\
			};\
			class Abdomen\
			{\
				hitpointName = "HitAbdomen";\
				armor = 16;\
				passThrough = 0.3;\
			};\
			class Pelvis\
			{\
				hitpointName = "HitPelvis";\
				armor = 16;\
				passThrough = 0.3;\
			};\
			class Body\
			{\
				hitpointName = "HitBody";\
				passThrough = 0.3;\
			};\
		};\
	};\
