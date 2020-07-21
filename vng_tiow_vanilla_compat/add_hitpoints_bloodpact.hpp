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
#define ADD_HITPOINTS_BP_FLAK_VEST()\
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

#define ADD_HITPOINTS_BP_GREN_VEST()\
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
				armor = 78;\
				passThrough = 0.6;\
			};\
			class Diaphragm\
			{\
				hitpointName = "HitDiaphragm";\
				armor = 78;\
				passThrough = 0.6;\
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
				passThrough = 0.6;\
			};\
		};\
	};\

#define ADD_HITPOINTS_BP_HEAVY_VEST()\
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
				armor = 0;\
				hitpointName = "HitBody";\
				passThrough = 0.1;\
			};\
		};\
	};\

#define ADD_HITPOINTS_BP_MEDIUM_VEST()\
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
				armor = 20;\
				passThrough = 0.1;\
			};\
			class Diaphragm\
			{\
				hitpointName = "HitDiaphragm";\
				armor = 20;\
				passThrough = 0.1;\
			};\
			class Abdomen\
			{\
				hitpointName = "HitAbdomen";\
				armor = 20;\
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
				armor = 0;\
				hitpointName = "HitBody";\
				passThrough = 0.1;\
			};\
		};\
	};\

#define ADD_HITPOINTS_BP_HELMET()\
	class ItemInfo: ItemInfo\
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
	};