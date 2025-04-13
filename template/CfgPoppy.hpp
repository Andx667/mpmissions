class CfgPoppy {
    forceShowInfos = 0;
    forceShowWarnings = 0;
    forceShowErrors = 1;
    showLoadoutInBriefing = 1;
    enableAILoadoutsSP = 1;

    class ACRE {
        distributeGroupLeaderRadios = 0;
        groupLeaderRadio = "";
        channelNames[] = {
            "EMERGENCY",    //Channel 1
            "PLTNET 1", 	//Main Channel for Combat, Dismounted Combat
            "PLTNET 2",     //Alternate Channel for Combat, Mounted Combat
            "COYNET",       //HQ/Zeus
            "CASNET",       //Air to Ground
            "ATC",          //Air to Air
            "FIRES",        //Artillery
            "LOGISTICS",    //Supply and Medics
            "SUPPORT",      //Supporting Units like Recon, Engineer, ...
            "Plt HQ",       //Channel 10
            "Group 1",
            "Group 2",
            "Group 3",
            "Group 4",
            "Group 5",
            "Group 6",
            "Group 7",
            "Group 8",
            "Group 9"
            };
    };
};

#include "Poppy\Dialog.hpp"
