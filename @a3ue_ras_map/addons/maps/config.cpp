#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(MAIN_ADDON),"A3A_core","A3A_maps"};
        author = ECSTRING(main,Extender_Author);
        authors[] = {};
        authorUrl = ECSTRING(main,Extender_AuthorUrl);
        VERSION_CONFIG;
    };
};

class A3A {
    class mapInfo {
        #include "Antistasi_RAS_WideSpacing.RAS_WideSpacing\mapInfo.hpp"
    };
    class NavGrid {
        RAS_WideSpacing = QPATHTO_F(Antistasi_RAS_WideSpacing.RAS_WideSpacing\navGrid);
    };
};

class CfgMissions {
    class MPMissions {
        class Antistasi_RAS_WideSpacing {
            briefingName = CSTRING(MapName_Text);
            //directory = QPATHTO_C(Antistasi_RAS_WideSpacing.RAS_WideSpacing); // ! why tf doesn't this work?
            directory = "z\a3ue_ras\addons\maps\Antistasi_RAS_WideSpacing.RAS_WideSpacing";
        };
    };
};
