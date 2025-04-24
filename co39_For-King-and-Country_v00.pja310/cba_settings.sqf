// ACE Sanitäter
force ace_medical_statemachine_cardiacArrestTime = 600;

force ace_medical_treatment_medicEpinephrine = 1;
force ace_medical_treatment_locationEpinephrine = 0;

force ace_medical_treatment_consumeSurgicalKit = 2;
force ace_medical_treatment_medicSurgicalKit = 1;
force ace_medical_treatment_locationSurgicalKit = 3;

force ace_medical_treatment_consumePAK = 1;
force ace_medical_treatment_medicPAK = 2;
force ace_medical_treatment_locationPAK = 3;

force ace_medical_treatment_locationIV = 3;
force ace_medical_treatment_medicIV = 1;

// Med. Rucksack
force ttt_medic_backpack_enable = true;                                                                                     //default: false;
force ttt_medic_backpack_supportedBackpacks = '["CUP_B_Predator_MTP"]';                                                           //default: [];
force ttt_medic_backpack_facitlityObject = "Land_MedicalTent_01_floor_dark_F";                                              //default: "Land_MedicalTent_01_floor_dark_F";
force ttt_medic_backpack_additionalItems = '["Land_FirstAidKit_01_open_F","Land_Defibrillator_F"]';  //default: [];
force ttt_medic_backpack_buildTime = 12;                                                                                     //default: 20;
force ttt_medic_backpack_useAnimation = true;                                                                               //default: true;
force ttt_medic_backpack_buildAnimation = "Acts_carFixingWheel";                                                            //default: "Acts_carFixingWheel";


// Dismantle
force ttt_dismantle_enable = true; //default false
force ttt_dismantle_supportedObjects = "['Land_CzechHedgehog_01_old_F']";
force ttt_dismantle_neededItem = "ACE_Wirecutter"; //"" for no item needed
force ttt_dismantle_neededSkill = 1; // 0 = None, 1 = Engineer, 2 = Advanced Engineer

//ACE Cookoff
force ace_cookoff_enableAmmobox = false;