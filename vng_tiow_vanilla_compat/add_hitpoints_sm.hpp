/*
    Usage:

    #include "add_hitpoints_sm.hpp"

    class CfgWeapons 
	{
        class TIOW_Mk7Limbs_UM: TIOW_Mk7Vest
		{
			ADD_HITPOINTS_SM_VEST();
		};
    };
*/

/*
Use the armor = value; and passThrough = percentage value; to modify the 
strength of the vests and helmets.
*/
#define ADD_HITPOINTS_SM_VEST()\
    class ItemInfo: ItemInfo\
	{\
		class HitpointsProtectionInfo\
		{\
			class Neck\
			{\
				hitpointName = "HitNeck";\
				armor = 100;\
				passThrough = 0.1;\
			};\
			class Arms\
			{\
				hitpointName = "HitArms";\
				armor = 50;\
				passThrough = 0.1;\
			};\
			class Chest\
			{\
				hitpointName = "HitChest";\
				armor = 100;\
				passThrough = 0.1;\
			};\
			class Diaphragm\
			{\
				hitpointName = "HitDiaphragm";\
				armor = 100;\
				passThrough = 0.1;\
			};\
			class Abdomen\
			{\
				hitpointName = "HitAbdomen";\
				armor = 50;\
				passThrough = 0.1;\
			};\
			class Pelvis\
			{\
				hitpointName = "HitPelvis";\
				armor = 50;\
				passThrough = 0.1;\
			};\
			class Body\
			{\
				hitpointName = "HitBody";\
				armor = 50;\
				passThrough = 0.1;\
			};\
		};\
	};\

// This helmet needs balancing
#define ADD_HITPOINTS_SM_HELMET()\
	class ItemInfo: HeadgearItem\
	{\
		class HitpointsProtectionInfo\
		{\
			class Head\
			{\
				hitpointName = "HitHead";\
				armor = 35;\
				passThrough = 0.1;\
			};\
		};\
	};\