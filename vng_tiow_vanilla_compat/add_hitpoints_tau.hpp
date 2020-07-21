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
#define ADD_HITPOINTS_TAU_FIRE_VEST()\
    class ItemInfo: ItemInfo\
	{\
		class HitpointsProtectionInfo\
		{\
			class Neck\
			{\
				hitpointName = "HitNeck";\
				armor = 12;\
				passThrough = 0.5;\
			};\
			class Arms\
			{\
				hitpointName = "HitArms";\
				armor = 30;\
				passThrough = 0.1;\
			};\
			class Chest\
			{\
				hitpointName = "HitChest";\
				armor = 30;\
				passThrough = 0.1;\
			};\
			class Diaphragm\
			{\
				hitpointName = "HitDiaphragm";\
				armor = 30;\
				passThrough = 0.1;\
			};\
			class Abdomen\
			{\
				hitpointName = "HitAbdomen";\
				armor = 30;\
				passThrough = 0.1;\
			};\
			class Pelvis\
			{\
				hitpointName = "HitPelvis";\
				armor = 30;\
				passThrough = 0.1;\
			};\
			class Body\
			{\
				hitpointName = "HitBody";\
				armor = 0;\
				passThrough = 0.1;\
			};\
			class Legs: Body\
			{\
				hitpointName = "HitLegs";\
				armor = 30;\
				passThrough = 0.1;\
			};\
		};\
	};\

#define ADD_HITPOINTS_TAU_PATH_VEST()\
    class ItemInfo: ItemInfo\
	{\
		class HitpointsProtectionInfo\
		{\
			class Neck\
			{\
				hitpointName = "HitNeck";\
				armor = 0;\
				passThrough = 0.2;\
			};\
			class Arms\
			{\
				hitpointName = "HitArms";\
				armor = 0;\
				passThrough = 0.2;\
			};\
			class Chest\
			{\
				hitpointName = "HitChest";\
				armor = 24;\
				passThrough = 0.2;\
			};\
			class Diaphragm\
			{\
				hitpointName = "HitDiaphragm";\
				armor = 24;\
				passThrough = 0.2;\
			};\
			class Abdomen\
			{\
				hitpointName = "HitAbdomen";\
				armor = 24;\
				passThrough = 0.2;\
			};\
			class Pelvis\
			{\
				hitpointName = "HitPelvis";\
				armor = 0;\
				passThrough = 0.2;\
			};\
			class Body\
			{\
				hitpointName = "HitBody";\
				passThrough = 0.2;\
			};\
			class Legs: Body\
			{\
				hitpointName = "HitLegs";\
				armor = 0;\
				passThrough = 0.2;\
			};\
		};\
	};\

#define ADD_HITPOINTS_TAU_FIRE_HELMET()\
	class ItemInfo: ItemInfo\
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

#define ADD_HITPOINTS_TAU_PATH_HELMET()\
	class ItemInfo: ItemInfo\
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
	