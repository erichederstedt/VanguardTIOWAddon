/*
    Usage:

    #include "add_hitpoints_krieg.hpp"

    class CfgWeapons 
	{
        class DKoK_Eng_Armor: DKoK_Gear
		{
			ADD_HITPOINTS_KRIEG_GREN_VEST();
		};
    };
*/

/*
Use the armor = value; and passThrough = percentage value; to modify the 
strength of the vests and helmets.
*/
#define ADD_HITPOINTS_REN_VEST()\
    class ItemInfo: ItemInfo\
	{\
		class HitpointsProtectionInfo\
		{\
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
				armor = 0;\
				passThrough = 0.4;\
			};\
			class Body\
			{\
				hitpointName = "HitBody";\
				passThrough = 0.3;\
			};\
		};\
	};\

#define ADD_HITPOINTS_REN_HELMET()\
	class ItemInfo: HeadgearItem\
	{\
		class HitpointsProtectionInfo\
		{\
			class Head\
			{\
				hitpointName = "HitHead";\
				armor = 4;\
				passThrough = 0.5;\
			};\
		};\
	};\

#define ADD_HITPOINTS_REN_MASK()\
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
