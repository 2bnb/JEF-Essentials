
class display3DEN {
    class Controls {
        class MenuStrip: ctrlMenuStrip {
            class Items {
                class Tools {
                    items[] += {"JEF_Tools"};
                };
                class JEF_Tools {
                    text = "JEF Tools...";
                    items[] = {"JEF_Settings", "JEF_Assets"};
                };
                class JEF_Settings {
                    text = "Load JEF Settings";
                    action = "['Are you sure you want to overwrite current settings with JEF defaults?', 'Load JEF Settings', ['Overwrite', {[] call bnb_es_core_fnc_edenLoadSettings}], true] call BIS_fnc_3DENShowMessage";
                };
                class JEF_Assets {
                    text = "Load JEF Slots & Modules";
                    action = "findDisplay 313 createDisplay 'bnb_es_edenGUI'";
                };
            };
        };
    };
};

#include "\x\bnb_es\core\configs\CfgEdenToolMenu.hpp"