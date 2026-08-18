// ACE Sanitäter
force ace_medical_statemachine_cardiacArrestTime = 1800;

force ace_medical_treatment_medicEpinephrine = 1;
force ace_medical_treatment_locationEpinephrine = 0;

force ace_medical_treatment_consumeSurgicalKit = 2;
force ace_medical_treatment_medicSurgicalKit = 1;
force ace_medical_treatment_locationSurgicalKit = 0;

force ace_medical_treatment_consumePAK = 1;
force ace_medical_treatment_medicPAK = 2;
force ace_medical_treatment_locationPAK = 2;

force ace_medical_treatment_locationIV = 0;
force ace_medical_treatment_medicIV = 1;

//ACE Repair
ace_repair_repairDamageTreshhold_engineer = 0;

//ACE Cookoff
force ace_cookoff_enableAmmobox = false;
force ace_cookoff_probabilityCoef = 0;

///TTT
force ttt_medic_backpack_enable = true;                                                             //default: false;
force ttt_medic_backpack_supportedBackpacks = '["ttt_backpack_medic_rgr_01"]';                                   //default: [];
force ttt_medic_backpack_facilityObject = "Land_MedicalTent_01_floor_dark_F";                       //default: "Land_MedicalTent_01_floor_dark_F";
force ttt_medic_backpack_additionalItems = '["Land_FirstAidKit_01_open_F"]'; //default: [];
force ttt_medic_backpack_buildTime = 6;                                                             //default: 20;
force ttt_medic_backpack_useAnimation = true;                                                       //default: true;
force ttt_medic_backpack_buildAnimation = "Acts_carFixingWheel";                                    //default: "Acts_carFixingWheel";

force ttt_dronepanel_enable = true;                                                                    //default: false;
force ttt_dronepanel_supportedBackpacks = '["CUP_B_GER_Pack_Flecktarn"]';                                          //default: '[]';
force ttt_dronepanel_tarpColor = 1;                                                                    //default: 2; (0 = Black, 1 = Green, 2 = Red, 3 = Yellow)