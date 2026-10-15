/*
	description = fills arsenalBox_1 with the items of the arsenal booths, local on every client
	the booth triggers (triggerArsenal_N) open it with [arsenalBox_1, player] call ace_arsenal_fnc_openBox
	items of mods that are not loaded are skipped by ACE, so optional mods (e.g. Immersive Cigs) do no harm
*/

if (!hasInterface) exitWith {};
if (isNil "arsenalBox_1") exitWith {diag_log "reim_arsenal: arsenalBox_1 is missing, arsenal booths stay empty";};

//civilian clothing, vanilla + CUP
//no IDAP, parade uniforms, looters, police or the bus driver outfit
//no work wear: mechanic, worker, coveralls, fireman, rescue/paramedic, lab coat/scientist, pilot, farmer
private _uniforms = [
	"CUP_U_C_Citizen_01","CUP_U_C_Citizen_02","CUP_U_C_Citizen_03",
	"CUP_U_C_Citizen_04","CUP_U_C_Functionary_jacket_01","CUP_U_C_Functionary_jacket_02",
	"CUP_U_C_Functionary_jacket_03","CUP_U_C_Priest_01","CUP_U_C_Profiteer_01",
	"CUP_U_C_Profiteer_02","CUP_U_C_Profiteer_03","CUP_U_C_Profiteer_04",
	"CUP_U_C_racketeer_01","CUP_U_C_racketeer_02","CUP_U_C_racketeer_03",
	"CUP_U_C_racketeer_04","CUP_U_C_Rocker_01","CUP_U_C_Rocker_02",
	"CUP_U_C_Rocker_03","CUP_U_C_Rocker_04","CUP_U_C_Suit_01",
	"CUP_U_C_Suit_02","CUP_U_C_Suit_03","CUP_U_C_Tracksuit_01",
	"CUP_U_C_Tracksuit_02","CUP_U_C_Tracksuit_03","CUP_U_C_Tracksuit_04",
	"CUP_U_C_Villager_01","CUP_U_C_Villager_02","CUP_U_C_Villager_03",
	"CUP_U_C_Villager_04","CUP_U_C_Woodlander_01","CUP_U_C_Woodlander_02",
	"CUP_U_C_Woodlander_03","CUP_U_C_Woodlander_04",
	"U_C_ArtTShirt_01_v1_F","U_C_ArtTShirt_01_v2_F","U_C_ArtTShirt_01_v3_F",
	"U_C_ArtTShirt_01_v4_F","U_C_ArtTShirt_01_v5_F","U_C_ArtTShirt_01_v6_F",
	"U_C_Driver_1","U_C_Driver_1_black","U_C_Driver_1_blue",
	"U_C_Driver_1_green","U_C_Driver_1_orange","U_C_Driver_1_red",
	"U_C_Driver_1_white","U_C_Driver_1_yellow","U_C_Driver_2",
	"U_C_Driver_3","U_C_Driver_4","U_C_E_LooterJacket_01_F",
	"U_C_FormalSuit_01_black_F","U_C_FormalSuit_01_blue_F","U_C_FormalSuit_01_gray_F",
	"U_C_FormalSuit_01_khaki_F","U_C_FormalSuit_01_tshirt_black_F","U_C_FormalSuit_01_tshirt_gray_F",
	"U_C_HunterBody_grn","U_C_Journalist",
	"U_C_Man_casual_1_F","U_C_Man_casual_2_F","U_C_Man_casual_3_F",
	"U_C_Man_casual_4_F","U_C_Man_casual_5_F","U_C_Man_casual_6_F",
	"U_C_man_sport_1_F","U_C_man_sport_2_F","U_C_man_sport_3_F",
	"U_C_Poloshirt_blue","U_C_Poloshirt_burgundy","U_C_Poloshirt_redwhite",
	"U_C_Poloshirt_salmon","U_C_Poloshirt_stripped","U_C_Poloshirt_tricolour",
	"U_C_Poor_1","U_OrestesBody"
];

//headgear worn by civilian units (no helmets, camo, specops or police caps, no construction helmets)
private _headgear = [
	"CUP_H_C_Beanie_01","CUP_H_C_Beanie_02","CUP_H_C_Beanie_03","CUP_H_C_Beanie_04",
	"CUP_H_C_Beret_01","CUP_H_C_Beret_02","CUP_H_C_Beret_03","CUP_H_C_Beret_04",
	"CUP_H_C_Ushanka_01","CUP_H_C_Ushanka_02","CUP_H_C_Ushanka_03","CUP_H_C_Ushanka_04",
	"CUP_H_TKI_Lungee_Open_02","CUP_H_TKI_Lungee_Open_03","CUP_H_TKI_Lungee_Open_05","CUP_H_TKI_Lungee_Open_06",
	"CUP_H_TKI_Pakol_1_01","CUP_H_TKI_Pakol_1_03","CUP_H_TKI_Pakol_1_04","CUP_H_TKI_Pakol_2_01",
	"CUP_H_TKI_Pakol_2_02","CUP_H_TKI_Pakol_2_03","CUP_H_TKI_SkullCap_01","CUP_H_TKI_SkullCap_02",
	"CUP_H_TKI_SkullCap_03","CUP_H_TKI_SkullCap_04","CUP_H_TKI_SkullCap_05","H_Bandanna_blu",
	"H_Bandanna_cbr","H_Bandanna_gry","H_Bandanna_khk","H_Bandanna_khk_hs",
	"H_Bandanna_sand","H_Bandanna_sgg","H_Bandanna_surfer","H_Bandanna_surfer_blk",
	"H_Bandanna_surfer_grn","H_Beret_blk","H_Booniehat_khk","H_Booniehat_khk_hs",
	"H_Booniehat_oli","H_Booniehat_tan","H_Cap_blk","H_Cap_blk_CMMG",
	"H_Cap_blk_ION","H_Cap_blk_Raven","H_Cap_blu","H_Cap_grn",
	"H_Cap_grn_BI","H_Cap_headphones","H_Cap_oli","H_Cap_oli_hs",
	"H_Cap_press","H_Cap_red","H_Cap_tan","H_Hat_blue","H_Hat_brown","H_Hat_checker","H_Hat_grey",
	"H_Hat_Safari_olive_F","H_Hat_Safari_sand_F","H_Hat_tan","H_Helmet_Skate",
	"H_RacingHelmet_1_F","H_RacingHelmet_2_F","H_RacingHelmet_3_F","H_RacingHelmet_4_F",
	"H_Shemag_olive","H_Shemag_olive_hs","H_ShemagOpen_khk","H_ShemagOpen_tan",
	"H_StrawHat","H_StrawHat_dark","H_Watchcap_blk","H_Watchcap_cbr",
	"H_Watchcap_khk"
];

//glasses and face bandanas (no balaclavas, combat goggles, respirators, blindfolds or safety glasses)
private _goggles = [
	"G_Aviator","G_Lady_Blue",
	"G_Shades_Black","G_Shades_Blue","G_Shades_Green","G_Shades_Red",
	"G_Spectacles","G_Spectacles_Tinted","G_Sport_BlackWhite","G_Sport_Blackred",
	"G_Sport_Blackyellow","G_Sport_Checkered","G_Sport_Greenblack","G_Sport_Red",
	"G_Squares","G_Squares_Tinted","G_WirelessEarpiece_F",
	"G_Bandanna_aviator","G_Bandanna_beast","G_Bandanna_blk","G_Bandanna_BlueFlame1",
	"G_Bandanna_BlueFlame2","G_Bandanna_CandySkull","G_Bandanna_khk","G_Bandanna_oli",
	"G_Bandanna_OrangeFlame1","G_Bandanna_RedFlame1","G_Bandanna_shades","G_Bandanna_Skull1",
	"G_Bandanna_Skull2","G_Bandanna_sport","G_Bandanna_tan","G_Bandanna_Vampire_01"
];

//only real belts by classname, the CPC/JPC/Osprey "w/ belt" plate carriers are left out. No backpack is a belt.
private _vests = [
	"V_Rangemaster_belt",
	"CUP_V_CDF_CrewBelt","CUP_V_CDF_OfficerBelt","CUP_V_CDF_OfficerBelt2",
	"CUP_V_O_TK_CrewBelt","CUP_V_O_TK_OfficerBelt","CUP_V_O_TK_OfficerBelt2",
	"CUP_V_I_Carrier_Belt","CUP_V_O_SLA_Carrier_Belt","CUP_V_O_SLA_Carrier_Belt02","CUP_V_O_SLA_Carrier_Belt03"
];

//minor party items
private _misc = [
	"ItemMap","ItemCompass","ItemWatch",
	"ACE_EarPlugs","ACE_Flashlight_XL50",
	"Chemlight_blue","Chemlight_green","Chemlight_red","Chemlight_yellow",
	"ACE_Can_Franta","ACE_Can_RedGull","ACE_Can_Spirit","ACE_WaterBottle","ACE_Banana","ACE_Sunflower_Seeds"
];

//USP rugby shirts, read from config instead of listing them
private _rugby = ("getNumber (_x >> 'scope') == 2 && {(toUpper configName _x) find 'USP_RUGBY' == 0}" configClasses (configFile >> "CfgWeapons")) apply {configName _x};
//without the glove (MX/OR) and kneepad (KP/KP2) variants, judged by the classname
_rugby = _rugby select {
	private _parts = (toUpper _x) splitString "_";
	(_parts arrayIntersect ["MX","OR","KP","KP2"]) isEqualTo []
};

[arsenalBox_1, _uniforms + _headgear + _goggles + _vests + _misc + _rugby, false] call ace_arsenal_fnc_addVirtualItems;
