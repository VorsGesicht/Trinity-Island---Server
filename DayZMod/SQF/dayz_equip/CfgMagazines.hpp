class CfgMagazines {
	class CA_Magazine;	// External class reference
	
	class 20Rnd_556x45_Stanag : CA_Magazine {
		scope = public;
		displayName = "20Rnd. STANAG";
		picture = "\ca\weapons\data\equip\m_20stanag_CA.paa";
		ammo = "B_556x45_Ball";
		count = 20;
		initSpeed = 930;
		tracersEvery = 0;
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 20  <br/>Used in: M249 SAW, M4A1, M16A4";
	};
	
	class 20Rnd_762x51_DMR : CA_Magazine {
		scope = public;
		displayName = "DMR mag";
		picture = "\ca\weapons\data\equip\M_US_DMR_CA.paa";
		model = "\dayz_equip\models\mag20.p3d";
		count = 20;
		ammo = "B_762x51_noTracer";
		initSpeed = 900;
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4", 0.01, 1, 20};
		descriptionShort = "Caliber:7.62x51 mm NATO <br/>Rounds: 20 <br/>Used in: DMR";
		
		class ItemActions {
			class ReloadMag {
				text = "Split into 4 x M24";
				script = "spawn player_reloadMag;";
				use[] = {"20Rnd_762x51_DMR"};
				output[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
			};
		};
	};
	
	class 30Rnd_556x45_Stanag : 20Rnd_556x45_Stanag {
		displayName = "30Rnd. STANAG";
		picture = "\ca\weapons\data\equip\m_30stanag_CA.paa";
		model = "\dayz_equip\models\mag30.p3d";
		count = 30;
		tracersEvery = 0;
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 30  <br/>Used in: M4A1, M249, M16A4, Mk12";
	};
	
	class 10x_303 : CA_Magazine {
		scope = public;
		displayName = "Lee Enfield Mag.";
		model = "\dayz_equip\models\mag10rnd.p3d";
		descriptionShort = "Caliber: .303<br/>Rounds: 10<br/>Used in: Lee Enfield Mk III";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		count = 10;
		ammo = "B_303_Ball";
		initSpeed = 750;
	};
	
	class 5x_22_LR_17_HMR : CA_Magazine {
		scope = public;
		displayName = "CZ 550 Magazine";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		model = "\dayz_equip\models\mag5rnd.p3d";
		count = 5;
		ammo = "B_762x51_noTracer";
		initSpeed = 870;
		sound[] = {"Ca\sounds\Weapons\rifles\M24_single3", 10, 1, 1800};
		reloadMagazineSound[] = {"Ca\sounds\Weapons\rifles\M1014-reload", 0.01, 1, 20};
		descriptionShort = "Caliber: 7x64 mm <BR/>Rounds: 5 <BR/>Used in: CZ 550";
	};
	
	class 5Rnd_762x51_M24 : CA_Magazine {
		scope = public;
		displayName = "5Rnd. M24";
		picture = "\Ca\weapons\Data\Equip\m_M24_CA.paa";
		model = "\dayz_equip\models\mag5rnd.p3d";
		count = 5;
		ammo = "B_762x51_noTracer";
		initSpeed = 900;
		sound[] = {"\ca\Weapons\Data\Sound\M21_single_shot_v3", 10, 1, 1600};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\M21_reload_v4", 0.01, 1, 10};
		descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 5 <br/>Used in: M24, M40A3";
		
		class ItemActions {
			class ReloadMag {
				text = "Combine for DMR";
				script = "spawn player_reloadMag;";
				use[] = {"5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24", "5Rnd_762x51_M24"};
				output[] = {"20Rnd_762x51_DMR"};
			};
		};
	};
	
	class 10Rnd_127x99_m107 : CA_Magazine {
		scope = public;
		displayName = "10Rnd. M107";
		ammo = "B_127x99_Ball_noTracer";
		model = "\dayz_equip\models\mag10rnd.p3d";
		count = 10;
		initSpeed = 850;
		picture = "\CA\weapons\data\Equip\M_107_CA.paa";
		descriptionShort = "Caliber: 12.7x99mm NATO <br/>Rounds: 10 <br/>Used in: M107";
	};
	
	class AmmoBox_300x556 : CA_Magazine {
		scope = public;
		displayName = "Ammo 300 x 5.56mm";
		picture = "\CA\weapons\data\equip\m_m249_ca.paa";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		count = 300;
		type = 2*		256;
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 300";
		
		class ItemActions {
			class CreateMag1 {
				text = "Load %1";
				script = "spawn player_loadMag;";
				outputOriented = "true";
				output[] = {"20Rnd_556x45_Stanag", "cfgMagazines"};
			};
			
			class CreateMag2 : CreateMag1 {
				output[] = {"30Rnd_556x45_Stanag", "cfgMagazines"};
			};
			
			class CreateMag3 : CreateMag1 {
				output[] = {"30Rnd_556x45_G36", "cfgMagazines"};
			};
			
			class CreateMag4 : CreateMag1 {
				output[] = {"200Rnd_556x45_M249", "cfgMagazines"};
			};
		};
	};
	
	class 200Rnd_556x45_M249 : CA_Magazine {
		scope = public;
		displayName = "200Rnd. M249 Belt";
		picture = "\CA\weapons\data\equip\m_m249_ca.paa";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		ammo = "B_556x45_Ball";
		count = 200;
		type = 2*		256;
		initSpeed = 915;
		sound[] = {"\ca\Weapons\Data\Sound\M249_1_SS", db25, 1, 1300};
		reloadMagazineSound[] = {"\ca\Weapons\Data\Sound\FAL_reload", 0.01, 1, 20};
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 5.56x45 mm NATO <br/>Rounds: 200  <br/>Used in: M249 SAW";
	};
	
	class 100Rnd_762x51_M240 : CA_Magazine {
		scope = public;
		displayName = "100Rnd. M240";
		picture = "\CA\weapons\data\equip\m_m240_ca.paa";
		model = "\ca\weapons\AmmoBoxes\Proxy_UsBasicAmmoBoxSmall.p3d";
		count = 100;
		type = 2*		256;
		ammo = "B_762x51_Ball";
		initSpeed = 900;
		tracersEvery = 4;
		lastRoundsTracer = 4;
		nameSound = "mgun";
		descriptionShort = "Caliber: 7.62x51mm NATO <br/>Rounds: 100 <br/>Used in: M240, Mk 48 Mod 0";
	};
	
	class 6Rnd_45ACP : CA_Magazine {
		scope = public;
		displayName = ".45 ACP";
		ammo = "B_45ACP_noCartridge_Ball";
		count = 6;
		initSpeed = 260;
		picture = "\dayz_equip\textures\equip_45acp_ca.paa";
		model = "\dayz_equip\models\ammo_acp45.p3d";
		type = 16;
		descriptionShort = "Caliber: .45 ACP<br/>Rounds: 6<br/>Used in: Revolver .45";
		
		class ItemActions {
			class ReloadMag {
				text = "Combine for M1911";
				script = "spawn player_reloadMag;";
				use[] = {"6Rnd_45ACP"};
				output[] = {"7Rnd_45ACP_1911"};
			};
		};
	};
	
	class 7Rnd_45ACP_1911 : CA_Magazine {
		scope = public;
		displayName = "M1911 Mag.";
		ammo = "B_45ACP_Ball";
		count = 7;
		initSpeed = 260;
		picture = "\dayz_equip\textures\equip_1911_ca.paa";
		model = "\dayz_equip\models\ammo_1911.p3d";
		type = 16;
		descriptionShort = "Caliber: .45 ACP <br/>Rounds: 7 <br/>Used in: M1911A1";
		
		class ItemActions {
			class ReloadMag {
				text = "Combine for Revolver";
				script = "spawn player_reloadMag;";
				use[] = {"7Rnd_45ACP_1911"};
				output[] = {"6Rnd_45ACP"};
			};
		};
	};
//Start Trinity Island Clothing	
	class SkinBase : CA_Magazine {
		scope = private;
		count = 1;
		type = 256;
		displayName = "Clothes";
		model = "\dayz_equip\models\cloth_parcel.p3d";
		picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";
		descriptionShort = "Clothes Parcel";
		
		class ItemActions {
			class Use {
				text = "Wear %1";
				script = "spawn player_wearClothes;";
			};
		};
	};
	//BlackOps Clothes
	class Skin_Merc_Balaclava_DZT: SkinBase {
		scope = public;
		displayName = "BlackOp (Balaclava) Outfit";
		descriptionShort = "A Outfit from the BlackOp'swith a Black Mask";
	};
	class Skin_Merc_GasMask_DZT: SkinBase {
		scope = public;
		displayName = "BlackOp (gas mask) Outfit";
		descriptionShort = "A Outfit from the BlackOp's with a gas mask";
	};
	//Military
	class Skin_SF_Survivor_DZT: SkinBase {
	scope = public;
	displayName = "Pathfinder Outfit";
	descriptionShort = "(Warm) Looks like the Jungle-Camo Outfit";
	};
	//2 new Bandit Outfits
	class Skin_Bandit_DZT: SkinBase {
	scope = public;
	displayName = "Survivor (Mask) Outfit";
	descriptionShort = "Looks like a normal survivor outfit, but maybe he isn't. CAREFUL!";
	};
	class Skin_Coach_DZT: SkinBase {
	scope = public;
	displayName = "Coach Outfit";
	descriptionShort = "Looks like a coach from the russian nationalteam *LOL*";
	};
	// Standard Skinz
	class Skin_Sniper1_DZ : SkinBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_43;
		descriptionShort = $STR_EQUIP_DESC_43;
	};
	
	class Skin_Camo1_DZ : SkinBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_44;
		descriptionShort = $STR_EQUIP_DESC_44;
	};
	
	class Skin_Survivor2_DZ : SkinBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_45;
		descriptionShort = $STR_EQUIP_DESC_45;
	};
	
	class Skin_Soldier1_DZ : SkinBase {
		scope = public;
		displayName = $STR_EQUIP_NAME_46;
		descriptionShort = $STR_EQUIP_DESC_46;
	};
// end skinz
	class ItemBandage : CA_Magazine {
		scope = public;
		count = 1;
		type = 16;
		displayName = $STR_EQUIP_NAME_7;
		model = "\dayz_equip\models\fad.p3d";
		picture = "\dayz_equip\textures\equip_fad_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_7;
		
		class ItemActions {
			class Use {
				text = $STR_BANDAGE_SELF;
				script = "spawn player_useMeds;";
			};
		};
	};
	
	class PartFueltank : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 4);
		displayName = $STR_EQUIP_NAME_8;
		model = "\dayz_equip\models\fueltank.p3d";
		picture = "\dayz_equip\textures\equip_fueltank_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_8;
	};
	
	class PartWheel : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 6);
		displayName = $STR_EQUIP_NAME_9;
		model = "\dayz_equip\models\wheel.p3d";
		picture = "\dayz_equip\textures\equip_wheel_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_9;
	};
	
	class PartGeneric : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 3);
		displayName = $STR_EQUIP_NAME_10;
		model = "\dayz_equip\models\genericparts.p3d";
		picture = "\dayz_equip\textures\equip_genericparts_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_10;
	};
	
	class PartEngine : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 6);
		displayName = $STR_EQUIP_NAME_11;
		model = "\dayz_equip\models\engine.p3d";
		picture = "\dayz_equip\textures\equip_engine_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_11;
	};
	
	class PartWoodPile : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 2);
		displayName = $STR_EQUIP_NAME_40;
		model = "\dayz_equip\models\woodPile.p3d";
		picture = "\dayz_equip\textures\equip_woodPile_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_40;
	};
	
	class PartVRotor : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 6);
		displayName = $STR_EQUIP_NAME_32;
		model = "\dayz_equip\models\vrotor.p3d";
		picture = "\dayz_equip\textures\equip_vrotor_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_32;
	};
	
	class PartGlass : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 2);
		displayName = $STR_EQUIP_NAME_30;
		model = "\dayz_equip\models\carglass.p3d";
		picture = "\dayz_equip\textures\equip_carglass_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_30;
	};
	
	class TrapBear : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = "Bear Trap";
		model = "\dayz_equip\models\bear_trap_gear.p3d";
		picture = "\dayz_equip\textures\equip_bear_trap_ca.paa";
		descriptionShort = "Place to add a bear trap";
		
		class ItemActions {
			class Build {
				text = "Place Trap";
				script = "spawn player_setTrap;";
				create = "BearTrap_DZ";
			};
		};
	};
	
	class FoodDrink : CA_Magazine {
		isWater = 1;
		count = 1;
		type = 256;
		
		class ItemActions {
			class Drink {
				text = $STR_ACTIONS_DRINK;
				script = "spawn player_drink;";
			};
		};
	};
	
	class ItemWaterbottle : FoodDrink {
		scope = public;
		refillable = 1;
		sfx = "drink";
		displayName = $STR_EQUIP_NAME_12;
		model = "\dayz_equip\models\waterbottle_gear.p3d";
		picture = "\dayz_equip\textures\equip_waterbottle_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_12;
	};
	
	class ItemWaterbottleUnfilled : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_13;
		model = "\dayz_equip\models\waterbottle_gear.p3d";
		picture = "\dayz_equip\textures\equip_waterbottle_empty_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_13;
		
		class ItemActions {
			class Fill {
				text = $STR_ACTIONS_FILL_W;
				script = "spawn player_fillWater;";
			};
		};
	};
	
	class ItemSodaCoke : FoodDrink {
		scope = public;
		sfx = "soda";
		displayName = "$STR_EQUIP_NAME_36a";
		model = "\dayz_equip\models\soda_coke.p3d";
		picture = "\dayz_equip\textures\equip_soda_coke_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_36;
	};
	
	class ItemSodaPepsi : ItemSodaCoke {
		displayName = "$STR_EQUIP_NAME_36b";
		model = "\dayz_equip\models\soda_pepsi.p3d";
		picture = "\dayz_equip\textures\equip_soda_pepsi_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_36;
	};
	
	class ItemSodaMdew : ItemSodaCoke {
		displayName = $STR_EQUIP_NAME_37;
		model = "\dayz_equip\models\soda_mdew.p3d";
		picture = "\dayz_equip\textures\equip_soda_mdew_ca.paa";
		descriptionShort = $STR_EQUIP_NAME_37;
	};
	
	class ItemEpinephrine : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_14;
		model = "\dayz_equip\models\epi.p3d";
		picture = "\dayz_equip\textures\equip_epi_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_14;
	};
	
	class ItemMorphine : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_15;
		model = "\dayz_equip\models\morphine.p3d";
		picture = "\dayz_equip\textures\equip_morphine_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_15;
		
		class ItemActions {
			class Use {
				text = $STR_TAKE_MORPHINE;
				script = "spawn player_useMeds;";
			};
		};
	};
	
	class ItemHeatPack : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_42;
		model = "\dayz_equip\models\Heat_pack.p3d";
		picture = "\dayz_equip\textures\equip_heat_pack_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_42;
		
		class ItemActions {
			class Use {
				text = $STR_ACTIONS_HEATPACK;
				script = "spawn player_useMeds;";
			};
		};
	};
	
	class ItemBloodbag : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_16;
		model = "\dayz_equip\models\bloodbag.p3d";
		picture = "\dayz_equip\textures\equip_bloodbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_16;
	};
	
	class ItemAntibiotic : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_17;
		model = "\dayz_equip\models\med_antibiotic_gear.p3d";
		picture = "\dayz_equip\textures\equip_antibiotics_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_17;
		
		class ItemActions {
			class Use {
				text = $STR_TAKE_ANTIBIOTIC;
				script = "spawn player_useMeds;";
			};
		};
	};
	
	class ItemPainkiller : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_18;
		model = "\dayz_equip\models\med_painkiller_gear.p3d";
		picture = "\dayz_equip\textures\equip_painkiller_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_18;
		
		class ItemActions {
			class Use {
				text = $STR_TAKE_PAINKILLER;
				script = "spawn player_useMeds;";
			};
		};
	};
	
	class ItemJerrycan : CA_Magazine {
		scope = public;
		count = 1;
		fuelQuantity = 20;
		type = (256 * 3);
		displayName = $STR_EQUIP_NAME_19;
		model = "\dayz_equip\models\jerrycan.p3d";
		picture = "\dayz_equip\textures\equip_jerrycan_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_19;
	};
	
	class ItemJerrycanEmpty : ItemJerrycan {
		fuelQuantity = 0;
		type = (256 * 3);
		displayName = $STR_EQUIP_NAME_39;
		picture = "\dayz_equip\textures\equip_jerrycan_e_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_39;
	};
	
	class ItemGenerator : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 6);
		displayName = $STR_EQUIP_NAME_31;
		model = "\dayz_equip\models\generator_gear.p3d";
		picture = "\dayz_equip\textures\equip_generator_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_31;
	};
	
	class ItemTent : CA_Magazine {
		scope = public;
		count = 1;
		type = (256 * 3);
		displayName = $STR_EQUIP_NAME_20;
		model = "\dayz_equip\models\tentbag_gear.p3d";
		picture = "\dayz_equip\textures\equip_tentbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_20;
		
		class ItemActions {
			class Pitch {
				text = $STR_PITCH_TENT;
				script = "spawn player_tentPitch;";
			};
		};
	};
	
	class ItemSandbag : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_21;
		model = "\dayz_equip\models\sandbags.p3d";
		picture = "\dayz_equip\textures\equip_sandbag_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_21;
		
		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemEtool"};
				create = "Sandbag1_DZ";
			};
		};
	};
	
	class ItemTankTrap : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_22;
		model = "\dayz_equip\models\tank_trap_kit.p3d";
		picture = "\dayz_equip\textures\equip_tanktrap_kit_CA.paa";
		descriptionShort = $STR_EQUIP_DESC_22;
		
		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Hedgehog_DZ";
			};
		};
	};
	
	class ItemWire : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_23;
		model = "\dayz_equip\models\Fence_wire_kit.p3d";
		picture = "\dayz_equip\textures\equip_fencewire_kit_CA.paa";
		descriptionShort = $STR_EQUIP_DESC_23;
		
		class ItemActions {
			class Build {
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "Wire_cat1";
			};
		};
	};
	
	class FoodSteakRaw : CA_Magazine {
		scope = public;
		count = 1;
		type = 256;
		displayName = $STR_EQUIP_NAME_24;
		model = "\dayz_equip\models\food_steak_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_24;
	};
	
	class FoodEdible : CA_Magazine {
		isFood = 1;
		count = 1;
		type = 256;
		bloodRegen = 200;
		
		class ItemActions {
			class Eat {
				text = $STR_EAT_FOOD;
				script = "spawn player_eat;";
			};
		};
	};
	
	class FoodSteakCooked : FoodEdible {
		scope = public;
		displayName = $STR_EQUIP_NAME_25;
		model = "\dayz_equip\models\food_steak_cooked_gear.p3d";
		picture = "\dayz_equip\textures\equip_steak_cooked_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_25;
		bloodRegen = 800;
	};
	
	class FoodCanBakedBeans : FoodEdible {
		scope = public;
		displayName = $STR_EQUIP_NAME_26;
		model = "\dayz_equip\models\food_bbtin.p3d";
		picture = "\dayz_equip\textures\equip_bbtin_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_26;
	};
	
	class FoodCanSardines : FoodEdible {
		scope = public;
		displayName = $STR_EQUIP_NAME_27;
		model = "\dayz_equip\models\food_sardinestin.p3d";
		picture = "\dayz_equip\textures\equip_Sardinestin_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_27;
	};
	
	class FoodCanFrankBeans : FoodEdible {
		scope = public;
		displayName = $STR_EQUIP_NAME_28;
		model = "\dayz_equip\models\food_fbtin.p3d";
		picture = "\dayz_equip\textures\equip_fbtin_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_28;
	};
	
	class FoodCanPasta : FoodEdible {
		scope = public;
		displayName = $STR_EQUIP_NAME_29;
		model = "\dayz_equip\models\food_pastatin.p3d";
		picture = "\dayz_equip\textures\equip_pastatin_ca.paa";
		descriptionShort = $STR_EQUIP_DESC_29;
	};
};
