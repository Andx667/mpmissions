// ACE Sanitäter
force ace_medical_statemachine_cardiacArrestTime = 600;

force ace_medical_treatment_medicEpinephrine = 2;
force ace_medical_treatment_locationEpinephrine = 0;

force ace_medical_treatment_consumeSurgicalKit = 2;
force ace_medical_treatment_medicSurgicalKit = 2;
force ace_medical_treatment_locationSurgicalKit = 2;

force ace_medical_treatment_consumePAK = 1;
force ace_medical_treatment_medicPAK = 2;
force ace_medical_treatment_locationPAK = 2;

force ace_medical_treatment_locationIV = 0;
force ace_medical_treatment_medicIV = 1;

/// TTT Medic Backpack
force ttt_medic_backpack_enable = true;                                                                                     //default: false;
force ttt_medic_backpack_supportedBackpacks = '["BWA3_Kitbag_Fleck_Medic"]';                                                           //default: [];
force ttt_medic_backpack_facitlityObject = "Land_MedicalTent_01_floor_dark_F";                                              //default: "Land_MedicalTent_01_floor_dark_F";
force ttt_medic_backpack_additionalItems = '["Land_FirstAidKit_01_open_F","Land_Defibrillator_F"]';  //default: [];
force ttt_medic_backpack_buildTime = 12;                                                                                     //default: 20;
force ttt_medic_backpack_useAnimation = true;                                                                               //default: true;
force ttt_medic_backpack_buildAnimation = "Acts_carFixingWheel";                                                            //default: "Acts_carFixingWheel";


//
force ttt_signalpanel_enable = true;                                                   //default: false;
force ttt_signalpanel_supportedBackpacks = '["ttt_backpack_radio_olive"]';   //default: [];