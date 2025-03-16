class RscText;
class RscButton;
class RscPicture;
class RscListBox;
class RscActivePicture;
class RscButtonMenu;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscEdit;
class RscBackground;
class RscCombo;
class RscCheckbox;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscFrame;

class JEF_edenGUI {
	idd = 1901;
	movingEnable = 1;
	class Controls{
		class JEF_frame: RscFrame {
			idc = 1800;
			x = 0.1;
			y = 0.02;
			w = 0.734999;
			h = 0.58;
		};
		class JEF_background: RscBackground {
			idc = 1000;
			x = 0.1;
			y = 0.02;
			w = 0.7375;
			h = 0.58;
			colorBackground[] = {0,0,0,0.6};
			sizeEx = 1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
		};
		class JEF_callsignSectionText: RscText {
			idc = 1001;
			text = "Section Callsign :";
			x = 0.112499;
			y = 0.12;
			w = 0.24;
			h = 0.04;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class JEF_callsignSectionEdit: RscEdit {
			idc = 1400;
			x = 0.124999;
			y = 0.18;
			w = 0.225;
			h = 0.06;
			colorBackground[] = {0.5,0.5,0.5,0.6};
			tooltip = "Callsign of sections. Default: Raider";
			sizeEx = 1.1 * GUI_GRID_H;
			canModify = 1;
		};
		class JEF_callsignZeusText: RscText {
			idc = 1002;
			text = "HQ Callsign :";
			x = 0.1125;
			y = 0.28;
			w = 0.2375;
			h = 0.04;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class JEF_callsignZeusEdit: RscEdit {
			idc = 1461;
			x = 0.124999;
			y = 0.34;
			w = 0.225;
			h = 0.06;
			colorBackground[] = {0.5,0.5,0.5,0.6};
			tooltip = "Callsign for zeus. Default: Monarch";
			sizeEx = 1.1 * GUI_GRID_H;
			canModify = 1;
		};
		class JEF_camoSelectionText: RscText {
			idc = 1033;
			text = "Camo Selection:";
			x = 0.4;
			y = 0.12;
			w = 0.225;
			h = 0.06;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class JEF_camoSelectionDropdown: RscCombo {
			idc = 1902;
			x = 0.4;
			y = 0.18;
			w = 0.225;
			h = 0.06;
			colorBackground[] = {0.5,0.5,0.5,0.6};
			tooltip = "Select camo option";
			sizeEx = 1.1 * GUI_GRID_H;
		};
		class JEF_spawnDefaultsText: RscText {
			idc = 1023;
			text = "Create Defaults?";
			x = 0.4;
			y = 0.28;
			w = 0.225;
			h = 0.06;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class JEF_spawnDefaultsCheckbox: RscCheckbox {
			idc = 1903;
			x = 0.4;
			y = 0.34;
			w = 0.05;
			h = 0.05;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class JEF_sectionAmountText: RscText {
			idc = 1003;
			text = "Number of Sections";
			x = 0.112499;
			y = 0.46;
			w = 0.225;
			h = 0.04;
			sizeEx = 1.2 * GUI_GRID_H;
		};
		class JEF_title: RscText {
			idc = 1004;
			text = "Load JEF Slots & Modules";
			x = 0.112499;
			y = 0.04;
			w = 0.554999;
			h = 0.04;
			sizeEx = 1.5  * GUI_GRID_H;
		};
		class JEF_okButton: RscButtonMenuOK {
			x = 0.562499;
			y = 0.54;
			w = 0.12;
			h = 0.04;
			onButtonClick = "[] call jef_core_fnc_edenCreateAssets;";
		};
		class JEF_cancelButton: RscButtonMenuCancel {
			x = 0.7;
			y = 0.54;
			w = 0.12;
			h = 0.04;
		};
	};
};
