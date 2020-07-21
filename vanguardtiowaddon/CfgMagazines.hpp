class CfgMagazines
{
    class Default;
	class CA_Magazine: Default{};

	class Type14_mag: CA_Magazine
	{
		scope=2;
		model="\DKoK_Weapons\Model\Type14_mag.p3d";
		displayName="[Krieg] Type 14 (Heavy) Battery Pack";
		picture="\DKoK_Weapons\Icon\Type14Mag_ca.paa";
		ammo="Type14_LasBolt";
		count=200;
		mass=160;
		initSpeed=10000;
		tracersEvery=1;
		allowedslots[] = {901};
		lastRoundsTracer=999;
		descriptionShort="[Krieg] Type 14 (Heavy) Battery Pack";
		magazineGroup[]=
		{
			"Type14_mags"
		};
	};

	class TIOW_CadianHellgun_Mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Cadian] Kasrkin Hellgun Powerpack";
		picture="\Cadian_Weapons\Icon\CadianHellgun_ca.paa";
		ammo="Type14_LasBolt";
		count=200;
		mass=160;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		allowedslots[] = {901};
		descriptionShort="[Cadian] Kasrkin Hellgun Powerpack";
		magazineGroup[]=
		{
			"TIOW_CadianHellgun_mags"
		};
	};

    class VNG_HighPoweredM36KantRifle_mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Cadian] High Powered M36 Kantrael Lasrifle Powerpack";
		picture="\Cadian_Weapons\Icon\KantLasriflePowerpack_ca.paa";
		ammo="VNG_HighPoweredM36KantRifle_LasBolt";
		count=25;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="[Cadian] High Powered M36 Kantrael Lasrifle Powerpack";
		magazineGroup[]=
		{
			"M36KantRifle_mags"
		};
	};

	/*
	class Experimental_mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Cadian] Experimental M36 Kantrael Lasrifle Powerpack";
		picture="\Cadian_Weapons\Icon\KantLasriflePowerpack_ca.paa";
		ammo="ExperimentalM36KantRifle_LasBolt";
		count=25;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="";
		magazineGroup[]=
		{
			"M36KantRifle_mags"
		};
	};
	*/

	class VNG_150RndLasLmg_mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Vanguard] 150 Round Las-LMG Powerpack";
		picture="\Cadian_Weapons\Icon\KantLasriflePowerpack_ca.paa";
		ammo="M36KantRifle_LasBolt";
		count=150;
		mass=16;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="[Vanguard] 150 Round Las-LMG Powerpack";
		magazineGroup[]=
		{
			"M36KantRifle_mags"
		};
	};

	class VNG_200RndLasLmg_mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Vanguard] 200 Round Las-LMG Powerpack";
		picture="\Cadian_Weapons\Icon\KantLasriflePowerpack_ca.paa";
		ammo="M36KantRifle_LasBolt";
		count=200;
		mass=24;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="[Vanguard] 200 Round Las-LMG Powerpack";
		magazineGroup[]=
		{
			"M36KantRifle_mags"
		};
	};

	class VNG_75RndHighPoweredLasLmg_mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Vanguard] 75 Round High Powered Las-LMG Powerpack";
		picture="\Cadian_Weapons\Icon\KantLasriflePowerpack_ca.paa";
		ammo="VNG_HighPoweredM36KantRifle_LasBolt";
		count=75;
		mass=16;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="[Vanguard] 75 Round High Powered Las-LMG Powerpack";
		magazineGroup[]=
		{
			"M36KantRifle_mags"
		};
	};

	class VNG_100RndHighPoweredLasLmg_mag: CA_Magazine
	{
		scope=2;
		model="\Cadian_Weapons\Model\M36KantRifleMag.p3d";
		displayName="[Vanguard] 100 Round High Powered Las-LMG Powerpack";
		picture="\Cadian_Weapons\Icon\KantLasriflePowerpack_ca.paa";
		ammo="VNG_HighPoweredM36KantRifle_LasBolt";
		count=100;
		mass=24;
		initSpeed=10000;
		tracersEvery=1;
		lastRoundsTracer=999;
		descriptionShort="[Vanguard] 100 Round High Powered Las-LMG Powerpack";
		magazineGroup[]=
		{
			"M36KantRifle_mags"
		};
	};

    class VNG_100Rnd_Stubber_mag: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="100 Round Box Magazine.";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HS";
		count=100;
        mass=16;
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class VNG_100Rnd_Stubber_mag_Tracer: VNG_100Rnd_Stubber_mag
	{
		tracersEvery=5;
		lastRoundsTracer=100;
		displayName="100 Round Box. Tracers";
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber. Tracers.";
		displaynameshort="100 Round Box. Tracers";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class VNG_100Rnd_Stubber_amput: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="100 Round Box Magazine. Amputators";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSA";
		count=100;
        mass=16;
		initSpeed=720;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber. Amputators";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class VNG_100Rnd_Stubber_manstop: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="100 Round Box Magazine. Man Stopper";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSMS";
		count=100;
        mass=16;
		initSpeed=920;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class VNG_100Rnd_Stubber_expander: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="100 Round Box Magazine. Expander Rounds";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSER";
		count=100;
        mass=16;
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="100 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
    class VNG_150Rnd_Stubber_mag: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="150 Round Box Magazine.";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HS";
		count=150;
        mass=24;
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class VNG_150Rnd_Stubber_mag_Tracer: VNG_150Rnd_Stubber_mag
	{
		tracersEvery=5;
		lastRoundsTracer=50;
		displayName="150 Round Box. Tracers";
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber. Tracers.";
		displaynameshort="150 Round Box. Tracers";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class VNG_150Rnd_Stubber_amput: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="150 Round Box Magazine. Amputators";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSA";
		count=150;
        mass=24;
		initSpeed=720;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber. Amputators";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class VNG_150Rnd_Stubber_manstop: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="150 Round Box Magazine. Man Stopper";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSMS";
		count=150;
        mass=24;
		initSpeed=920;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};
	class VNG_150Rnd_Stubber_expander: CA_Magazine
	{
		scope=2;
		scopeArsenal=2;
		scopeCurator=2;
		displayName="150 Round Box Magazine. Expander Rounds";
		picture="\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo="TIOW_Long825HSER";
		count=150;
        mass=24;
		initSpeed=820;
		tracersEvery=0;
		lastRoundsTracer=4;
		descriptionShort="150 Round box for Lucius Pattern Heavy Stubber.";
		magazineGroup[]=
		{
			"Stub_mag_group"
		};
	};

	class RPG32_F;

	class VNG_MLSmoke_Mag: RPG32_F
	{
		author="O. Dolf";
		scope=2;
		displayName="Smoke Missile";
		displaynameShort="Smoke";
		descriptionShort="";
		model="\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7_item.p3d";
		picture="\A3\Weapons_F_Exp\Launchers\RPG7\Data\UI\icon_rocket_RPG7_CA.paa";
		initSpeed=140;
		ammo="VNG_MLSmoke";
		type="2*  256";
		mass=30;
	};
	class VNG_MLMelta_Mag: RPG32_F
	{
		author="O. Dolf";
		scope=2;
		displayName="Melta Missile";
		displaynameShort="Melta";
		descriptionShort="";
		model="\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7_item.p3d";
		picture="\A3\Weapons_F_Exp\Launchers\RPG7\Data\UI\icon_rocket_RPG7_CA.paa";
		initSpeed=140;
		ammo="VNG_MLMelta";
		type="2*  256";
		mass=60;
	};
	class VNG_ionrifle_at_mag: CA_Magazine
	{
		scope=2;
		displayName="Ion rifle Anti-Tank ammo";
		descriptionShort="Get flexed on tank";
		picture="\40k_tau\Weapons\Definitions\UI\Ion_mag.paa";
		mass=10;
		ammo="VNG_ionrifle_at";
		count=1;
		initSpeed=500;
		tracersEvery=1;
		lastRoundsTracer=0;
	};
	class VNG_100rnd_pulse_mag: CA_Magazine
	{
		scope = 2;
		displayName = "100rnd Pulse Repeater Pack";
		descriptionShort = "100 silicon-ferromagnetic charges";
		picture = "\40k_tau\Weapons\Definitions\UI\Magazine.paa";
		mass = 10;
		ammo = "TIOW_rifle_pulseshot";
		count = 100;
		initSpeed = 1000;
		tracersEvery = 1;
		lastRoundsTracer = 0;
	};
	class VNG_200rnd_pulse_mag: VNG_100rnd_pulse_mag
	{
		displayName = "200rnd Pulse Repeater Pack";
		descriptionShort = "200 silicon-ferromagnetic charges";
		mass = 20;
		count = 200;
	};
	class TIOW_pulse_pistol_mag: CA_Magazine
	{
		count = 18;
	};

	class VNG_warp_mag: CA_Magazine
	{
		scope = 2;
		displayName = "UNLIMITED POWWWWAAAAAAA";
		descriptionShort = "UNLIMITED POWWWWAAAAAAA";
		picture = "";
		mass = 0;
		ammo = "VNG_warp_ammo";
		count = 100;
		initSpeed = 10;
		tracersEvery = 0;
		lastRoundsTracer = 0;
	};
	class VNG_pulse_grenade_mag: CA_Magazine
	{
		scope = 2;
		displayName = "Photon Grenade(UGL)";
		descriptionShort = "A single Pulse Grenade";
		picture = "\40k_tau\Weapons\Definitions\UI\Magazine.paa";
		model = "40k_tau\Grenades\photon_grenade.p3d";
		mass = 19;
		ammo = "VNG_pulse_grenade";
		count = 1;
		initSpeed = 200;
		tracersEvery = 1;
		lastRoundsTracer = 0;
	};
	class VNG_pulse_rifle_mag: CA_Magazine
	{
		scope = 2;
		displayName = "Pulse Rifle ammo";
		descriptionShort = "24 silicon-ferromagnetic charges";
		picture = "\40k_tau\Weapons\Definitions\UI\Magazine.paa";
		mass = 5;
		ammo = "VNG_rifle_pulseshot";
		count = 24;
		initSpeed = 2000;
		tracersEvery = 1;
		lastRoundsTracer = 0;
	};
};