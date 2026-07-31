//ACE Sanität
force ace_medical_statemachine_cardiacArrestTime = 600;    			// Lifetime 15 min
force ace_medical_treatment_medicEpinephrine = 2;   				// (Medics)
force ace_medical_treatment_locationEpinephrine = 0;   				// (überall)
force ace_medical_treatment_consumeSurgicalKit = 1;   				// (verbrauchen sich)
force ace_medical_treatment_medicSurgicalKit = 1;   				// (Medics)
force ace_medical_treatment_locationSurgicalKit = 3;  				// (Facility/Vehicle)
force ace_medical_treatment_consumePAK = 1;   						// (verbraucht sich)
force ace_medical_treatment_medicPAK = 2;   						// (Doctor) 
force ace_medical_treatment_locationPAK = 1;   						// (Fahrzeuge)
force ace_medical_treatment_locationIV = 3;							// (Facility/Fahrzeug)
force ace_medical_treatment_medicIV = 2;							// (Doctor)

force ace_medical_playerDamageThreshold = 1.75;

force V1_adv_ace_maxTime = 900;

// ACE Logistik
force ace_refuel_hoseLength = 15;
force ace_refuel_rate = 0.75;

force ace_repair_engineerSetting_repair = 0;						//Jeder kann was reparieren
force ace_repair_repairDamageThreshold = 0.6; 						//Mit Werkzeugkasten alleine (60% Schaden bleiben)
force ace_repair_repairDamageThreshold_engineer = 0.0; 				//Als Pionier (0% Schaden bleiben)

force ace_repair_wheelRepairRequiredItems = ["ace_repair_anyToolKit"];
force ace_repair_miscRepairRequiredItems = ["ace_repair_anyToolKit"];
force ace_repair_fullRepairRequiredItems = ["ace_repair_anyToolKit"];

force ace_repair_fullRepairLocation = 4; 							//Fullrepair am Fhz
force ace_repair_engineerSetting_fullRepair = 2; 					//2 = Instanzsetzer hat Zugriff auf Full repair

// ACE Durchzündung
force ace_cookoff_enable = 0;
force ace_cookoff_enableAmmobox = false;
force ace_cookoff_enableAmmoCookoff = false;

// LAMBS Danger WP
force lambs_wp_autoAddArtillery = false;

// ACE Headless
force acex_headless_enabled = true;
