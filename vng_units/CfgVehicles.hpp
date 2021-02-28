class CfgVehicles 
{
	class TIOW_Cad_GM776th;
	class TIOW_Vox_Caster_Green;
	class TIOW_CadMedicaeBackpack;
	class TIOW_CadBackpack;
	class VNG_CadATBackpack;
	class TIOW_CadianChimAuto_776;
	class TIOW_Centaur_01_Cadian_776_Blu;
	class TIOW_CadianTrojan_776;
	class TIOW_Cad_LR_Annihilator_776th_Blu;
	class TIOW_Cad_LR_Battlecannon_776th_Blu;
	class TIOW_Cad_LR_Conqueror_776th_Blu;
	class TIOW_Cad_LR_Demolisher_776th_Blu;
	class TIOW_Cad_LR_Executioner_776th_Blu;
	class TIOW_Cad_LR_Punisher_776th_Blu;
	class TIOW_Cad_LR_Vanquisher_776th_Blu;
	class TIOW_IG_MissileLauncher_AT_776_Blu;
	class TIOW_IG_Autocannon_776_Blu;
	class TIOW_IG_HeavyBolter_776_Blu;
	class TIOW_IG_Lascannon_776_Blu;
	class TIOW_IG_Mortar_776_Blu;
	class TIOW_IG_MissileLauncher_AA_776_Blu;

	class VNG_Vanguard_Vox_Operator: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Vox Operator";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"M36KantRifle776","Put","Throw"};
		respawnWeapons[]={"M36KantRifle776","Put","Throw"};
		items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		backpack="VNG_Vanguard_Vox_Operator_pack";
	};

	class VNG_Vanguard_Medicae: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Medicae";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"M36KantRifle776","Binocular","Put","Throw"};
		respawnWeapons[]={"M36KantRifle776","Binocular","Put","Throw"};
		items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_personalAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_surgicalKit","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_Flashlight_XL50","ACE_EarPlugs","ACE_personalAidKit","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_surgicalKit","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_salineIV_500","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","Binocular","VNG_InfBreather_Helm","VNG_MedGear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","Binocular","VNG_InfBreather_Helm","VNG_MedGear"};
		backpack="VNG_Vanguard_Medicae_pack";
	};

	class VNG_Vanguard_AT_Rifleman: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard AT Rifleman";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"M36KantRifle776","MissileLauncherDKOKBlack","Put","Throw"};
		respawnWeapons[]={"M36KantRifle776","MissileLauncherDKOKBlack","Put","Throw"};
		items[]={"ACE_Flashlight_XL50","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		respawnItems[]={"ACE_Flashlight_XL50","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","VNG_MLMelta_Mag","VNG_MLSmoke_Mag","VNG_MLSmoke_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","VNG_HighPoweredM36KantRifle_mag","VNG_HighPoweredM36KantRifle_mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","VNG_MLMelta_Mag","VNG_MLSmoke_Mag","VNG_MLSmoke_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","VNG_HighPoweredM36KantRifle_mag","VNG_HighPoweredM36KantRifle_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		backpack="VNG_Vanguard_AT_Rifleman_pack";
	};

	class VNG_Vanguard_Captain: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Captain";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"TIOW_Bolt_Pistol","Rangefinder","Put","Throw"};
		respawnWeapons[]={"TIOW_Bolt_Pistol","Rangefinder","Put","Throw"};
		items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_Flashlight_XL50","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_Flashlight_XL50","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		magazines[]={"TIOW_ig_krak_grenade_mag","TIOW_ig_smoke_grenade_mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_ig_melta_bomb_mag","TIOW_ig_frag_grenade_mag","TIOW_ig_krak_grenade_mag"};
		respawnMagazines[]={"TIOW_ig_krak_grenade_mag","TIOW_ig_smoke_grenade_mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_IGBoltPistol_Mag","TIOW_ig_melta_bomb_mag","TIOW_ig_frag_grenade_mag","TIOW_ig_krak_grenade_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","Rangefinder","TIOW_IG_Officer_Cap3_776","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","Rangefinder","TIOW_IG_Officer_Cap3_776","VNG_Gear"};
		backpack="";
	};

	class VNG_Vanguard_Flamer: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Flamer";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"TIOW_IG_Flamer","LuciusLaspistolBlack","Put","Throw"};
		respawnWeapons[]={"TIOW_IG_Flamer","LuciusLaspistolBlack","Put","Throw"};
		items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_ig_frag_grenade_mag","TIOW_ig_frag_grenade_mag","TIOW_ig_frag_grenade_mag","TIOW_ig_krak_grenade_mag","TIOW_ig_krak_grenade_mag","TIOW_ig_krak_grenade_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_ig_frag_grenade_mag","TIOW_ig_frag_grenade_mag","TIOW_ig_frag_grenade_mag","TIOW_ig_krak_grenade_mag","TIOW_ig_krak_grenade_mag","TIOW_ig_krak_grenade_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag","TIOW_Krieg_Flamer_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		backpack="VNG_Vanguard_Flamer_pack";
	};

	class VNG_Vanguard_Grenadier: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Grenadier";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"M36KantRifle776","VNG_IG_GL","Put","Throw"};
		respawnWeapons[]={"M36KantRifle776","VNG_IG_GL","Put","Throw"};
		items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","TIOW_IG_GL_Krak_mag","TIOW_IG_GL_Krak_mag","TIOW_IG_GL_Krak_mag","TIOW_IG_GL_Krak_mag","TIOW_IG_GL_Frag_mag","TIOW_IG_GL_Frag_mag","TIOW_IG_GL_Frag_mag","TIOW_IG_GL_Frag_mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","TIOW_IG_GL_Krak_mag","TIOW_IG_GL_Krak_mag","TIOW_IG_GL_Krak_mag","TIOW_IG_GL_Krak_mag","TIOW_IG_GL_Frag_mag","TIOW_IG_GL_Frag_mag","TIOW_IG_GL_Frag_mag","TIOW_IG_GL_Frag_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		backpack="VNG_Vanguard_Grenadier_pack";
	};

	class VNG_Vanguard_Rifleman: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Rifleman";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"M36KantRifle776","Put","Throw"};
		respawnWeapons[]={"M36KantRifle776","Put","Throw"};
		items[]={"ACE_Flashlight_XL50","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		respawnItems[]={"ACE_Flashlight_XL50","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		backpack="VNG_Vanguard_Rifleman_pack";
	};

	class VNG_Vanguard_Meltagunner: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Meltagunner";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"M36KantRifle776","VNG_MeltaGun","Put","Throw"};
		respawnWeapons[]={"M36KantRifle776","VNG_MeltaGun","Put","Throw"};
		items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag","TIOW_Meltagun_Mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		backpack="VNG_Vanguard_Meltagunner_pack";
	};

	class VNG_Vanguard_Ammo_Carrier_AT: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Ammo Carrier AT";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"M36KantRifle776","Put","Throw"};
		respawnWeapons[]={"M36KantRifle776","Put","Throw"};
		items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","VNG_MLMelta_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","M36KantRifle_mag","M36KantRifle_mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","M36KantRifle_mag","VNG_MLMelta_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","MLAT_Mag","M36KantRifle_mag","M36KantRifle_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		backpack="VNG_Vanguard_Ammo_Carrier_AT_pack";
	};

	class VNG_Vanguard_Sniper: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Sniper";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"TIOW_LongLas_776","LuciusLaspistolBlack","Put","Throw"};
		respawnWeapons[]={"TIOW_LongLas_776","LuciusLaspistolBlack","Put","Throw"};
		items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","LuciusLaspistol_mag","LuciusLaspistol_mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","LuciusLaspistol_mag","LuciusLaspistol_mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","TIOW_LongLas_Mag","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		backpack="VNG_Vanguard_Sniper_pack";
	};

	class VNG_Vanguard_Plasmagunner: TIOW_Cad_GM776th
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Plasmagunner";
		uniformClass="DKoK_Gren_Uniform_1491st";
		weapons[]={"TIOW_IG_Plasmagun_01","LuciusLaspistolBlack","Put","Throw"};
		respawnWeapons[]={"TIOW_IG_Plasmagun_01","LuciusLaspistolBlack","Put","Throw"};
		items[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		respawnItems[]={"ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_morphine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_EarPlugs"};
		magazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_Overcharge_PlasmaGun_Flask","DK_Overcharge_PlasmaGun_Flask","DK_Overcharge_PlasmaGun_Flask","DK_Overcharge_PlasmaGun_Flask","LuciusLaspistol_mag","LuciusLaspistol_mag"};
		respawnMagazines[]={"TIOW_ig_smoke_grenade_mag","TIOW_ig_smoke_grenade_mag","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","LuciusLaspistol_mag","LuciusLaspistol_mag","LuciusLaspistol_mag","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_PlasmaGun_Flask","DK_Overcharge_PlasmaGun_Flask","DK_Overcharge_PlasmaGun_Flask","DK_Overcharge_PlasmaGun_Flask","DK_Overcharge_PlasmaGun_Flask","LuciusLaspistol_mag","LuciusLaspistol_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","VNG_InfBreather_Helm","VNG_Gear"};
		backpack="VNG_Vanguard_Plasmagunner_pack";
	};

	class VNG_Vanguard_Chimera_w_Autocannon: TIOW_CadianChimAuto_776
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Chimera w Autocannon";
		hiddenSelectionsTextures[]={"apcs\data\textures\chimera776th_co.paa","apcs\data\textures\chimerainsigniacadian776_ca.paa","apcs\data\textures\chimera_track_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Centaur: TIOW_Centaur_01_Cadian_776_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Centaur";
		hiddenSelectionsTextures[]={"whtransports\data\tiow_centaur_grey_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Trojan: TIOW_CadianTrojan_776
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Trojan";
		hiddenSelectionsTextures[]={"apcs\data\textures\chimera776th_co.paa","apcs\data\textures\chimerainsigniacadian776_ca.paa","apcs\data\textures\tiow_expansion_chassis_776_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Leman_Russ_Annihilator: TIOW_Cad_LR_Annihilator_776th_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Leman Russ Annihilator";
		hiddenSelectionsTextures[]={"apcs\data\textures\chimerainsigniacadian776_ca.paa","whtracked\lrmiv\data\lr_cad776th_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Leman_Russ_Battlecannon: TIOW_Cad_LR_Battlecannon_776th_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Leman Russ Battlecannon";
		hiddenSelectionsTextures[]={"apcs\data\textures\chimerainsigniacadian776_ca.paa","whtracked\lrmiv\data\lr_cad776th_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Leman_Russ_Conqueror: TIOW_Cad_LR_Conqueror_776th_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Leman Russ Conqueror";
		hiddenSelectionsTextures[]={"apcs\data\textures\chimerainsigniacadian776_ca.paa","whtracked\lrmiv\data\lr_cad776th_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Leman_Russ_Demolisher: TIOW_Cad_LR_Demolisher_776th_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Leman Russ Demolisher";
		hiddenSelectionsTextures[]={"apcs\data\textures\chimerainsigniacadian776_ca.paa","whtracked\lrmiv\data\lr_cad776th_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Leman_Russ_Executioner: TIOW_Cad_LR_Executioner_776th_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Leman Russ Executioner";
		hiddenSelectionsTextures[]={"apcs\data\textures\chimerainsigniacadian776_ca.paa","whtracked\lrmiv\data\lr_cad776th_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Leman_Russ_Punisher: TIOW_Cad_LR_Punisher_776th_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Leman Russ Punisher";
		hiddenSelectionsTextures[]={"apcs\data\textures\chimerainsigniacadian776_ca.paa","whtracked\lrmiv\data\lr_cad776th_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Leman_Russ_Vanquisher: TIOW_Cad_LR_Vanquisher_776th_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Leman Russ Vanquisher";
		hiddenSelectionsTextures[]={"apcs\data\textures\chimerainsigniacadian776_ca.paa","whtracked\lrmiv\data\lr_cad776th_co.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_AT_Missile_Launcher_Emplacement: TIOW_IG_MissileLauncher_AT_776_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard AT Missile Launcher Emplacement";
		hiddenSelectionsTextures[]={"whturret\ig\data\bipod_launcher_ca.paa","whturret\ig\data\launcher_ca.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Autocannon_Emplacement: TIOW_IG_Autocannon_776_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Autocannon Emplacement";
		hiddenSelectionsTextures[]={"whturret\ig\data\bipod_autocanon_ca.paa","whturret\ig\data\autocanon_ca.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Heavy_Bolter_Emplacement: TIOW_IG_HeavyBolter_776_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Heavy Bolter Emplacement";
		hiddenSelectionsTextures[]={"whturret\ig\data\bipod_bolter_ca.paa","whturret\ig\data\bolter_ca.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Lascannon_Emplacement: TIOW_IG_Lascannon_776_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Lascannon Emplacement";
		hiddenSelectionsTextures[]={"whturret\ig\data\bipod_lasscannon_ca.paa","whturret\ig\data\lasscannon_ca.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Mortar_Emplacement: TIOW_IG_Mortar_776_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard Mortar Emplacement";
		hiddenSelectionsTextures[]={"whturret\ig\data\bipod_mortar_ca.paa","whturret\ig\data\mortar_ca.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_AA_Missile_Launcher_Emplacement: TIOW_IG_MissileLauncher_AA_776_Blu
	{
		faction="VNG_34th_Vanguard";
		side=1;
		displayName="Vanguard AA Missile Launcher Emplacement";
		hiddenSelectionsTextures[]={"whturret\ig\data\bipod_launcher_ca.paa","whturret\ig\data\launcher_ca.paa"};
		crew="VNG_Vanguard_Vox_Operator";
		typicalCargo[]={"VNG_Vanguard_Vox_Operator"};
	};

	class VNG_Vanguard_Vox_Operator_pack: TIOW_Vox_Caster_Green
	{
		scope=1;
		class TransportMagazines{};
		class TransportItems{};
		class TransportWeapons{};
	};

	class VNG_Vanguard_Medicae_pack: TIOW_CadMedicaeBackpack
	{
		scope=1;
		class TransportMagazines{};
		class TransportItems
		{
			class _xx_ACE_elasticBandage {count=70;name="ACE_elasticBandage";};
			class _xx_ACE_surgicalKit {count=1;name="ACE_surgicalKit";};
			class _xx_ACE_salineIV {count=10;name="ACE_salineIV";};
			class _xx_ACE_salineIV_500 {count=5;name="ACE_salineIV_500";};
			class _xx_ACE_splint {count=12;name="ACE_splint";};
			class _xx_ACE_tourniquet {count=6;name="ACE_tourniquet";};
		};
		class TransportWeapons{};
	};

	class VNG_Vanguard_Lieutenant_pack: TIOW_CadBackpack
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_Type14_mag {count=1;magazine="Type14_mag";};
		};
		class TransportItems{};
		class TransportWeapons{};
	};

	class VNG_Vanguard_AT_Rifleman_pack: VNG_CadATBackpack
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_VNG_MLMelta_Mag {count=1;magazine="VNG_MLMelta_Mag";};
			class _xx_VNG_MLSmoke_Mag {count=2;magazine="VNG_MLSmoke_Mag";};
			class _xx_MLAT_Mag {count=6;magazine="MLAT_Mag";};
			class _xx_VNG_HighPoweredM36KantRifle_mag {count=2;magazine="VNG_HighPoweredM36KantRifle_mag";};
		};
		class TransportItems
		{
			class _xx_ACE_EarPlugs {count=1;name="ACE_EarPlugs";};
		};
		class TransportWeapons{};
	};

	class VNG_Vanguard_Flamer_pack: TIOW_CadBackpack
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_TIOW_ig_frag_grenade_mag {count=3;magazine="TIOW_ig_frag_grenade_mag";};
			class _xx_TIOW_ig_krak_grenade_mag {count=3;magazine="TIOW_ig_krak_grenade_mag";};
			class _xx_LuciusLaspistol_mag {count=4;magazine="LuciusLaspistol_mag";};
			class _xx_TIOW_Krieg_Flamer_mag {count=8;magazine="TIOW_Krieg_Flamer_mag";};
		};
		class TransportItems{};
		class TransportWeapons{};
	};

	class VNG_Vanguard_Grenadier_pack: TIOW_CadBackpack
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_TIOW_IG_GL_Krak_mag {count=4;magazine="TIOW_IG_GL_Krak_mag";};
			class _xx_TIOW_IG_GL_Frag_mag {count=4;magazine="TIOW_IG_GL_Frag_mag";};
		};
		class TransportItems{};
		class TransportWeapons{};
	};

	class VNG_Vanguard_Rifleman_pack: TIOW_CadBackpack
	{
		scope=1;
		class TransportMagazines{};
		class TransportItems
		{
			class _xx_ACE_EarPlugs {count=1;name="ACE_EarPlugs";};
		};
		class TransportWeapons{};
	};

	class VNG_Vanguard_Meltagunner_pack: TIOW_CadBackpack
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_TIOW_Meltagun_Mag {count=20;magazine="TIOW_Meltagun_Mag";};
		};
		class TransportItems{};
		class TransportWeapons{};
	};

	class VNG_Vanguard_Ammo_Carrier_AT_pack: VNG_CadATBackpack
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_VNG_MLMelta_Mag {count=1;magazine="VNG_MLMelta_Mag";};
			class _xx_MLAT_Mag {count=8;magazine="MLAT_Mag";};
			class _xx_M36KantRifle_mag {count=2;magazine="M36KantRifle_mag";};
		};
		class TransportItems
		{
			class _xx_ACE_EarPlugs {count=1;name="ACE_EarPlugs";};
		};
		class TransportWeapons{};
	};

	class VNG_Vanguard_Sniper_pack: TIOW_CadBackpack
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_TIOW_LongLas_Mag {count=4;magazine="TIOW_LongLas_Mag";};
			class _xx_LuciusLaspistol_mag {count=4;magazine="LuciusLaspistol_mag";};
		};
		class TransportItems{};
		class TransportWeapons{};
	};

	class VNG_Vanguard_Plasmagunner_pack: VNG_CadATBackpack
	{
		scope=1;
		class TransportMagazines
		{
			class _xx_DK_PlasmaGun_Flask {count=7;magazine="DK_PlasmaGun_Flask";};
			class _xx_DK_Overcharge_PlasmaGun_Flask {count=4;magazine="DK_Overcharge_PlasmaGun_Flask";};
			class _xx_LuciusLaspistol_mag {count=2;magazine="LuciusLaspistol_mag";};
		};
		class TransportItems{};
		class TransportWeapons{};
	};
};