class bnb_es_edenGUI {
	idd = 1901;
	movingEnable = 1;
	class Controls{
		class bnb_es_frame: RscFrame {
			idc = 1800;
			x = 0.1;
			y = 0.02;
			w = 0.734999;
			h = 0.58;
		};
		class bnb_es_background: RscBackground {
			idc = 1000;
			x = 0.1;
			y = 0.02;
			w = 0.7375;
			h = 0.58;
			colorBackground[] = {0,0,0,0.6};
			sizeEx = 1.5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * GUI_GRID_H;
		};
		class bnb_es_callsignSectionText: RscText {
			idc = 1001;
			text = "Section Callsign :";
			x = 0.1125;
			y = 0.12;
			w = 0.24;
			h = 0.04;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class bnb_es_callsignSectionEdit: RscEdit {
			idc = 1400;
			x = 0.125;
			y = 0.18;
			w = 0.225;
			h = 0.06;
			colorBackground[] = {0.5,0.5,0.5,0.6};
			tooltip = "Callsign of sections. Default: Raider";
			sizeEx = 1.1 * GUI_GRID_H;
			canModify = 1;
		};
		class bnb_es_callsignZeusText: RscText {
			idc = 1002;
			text = "HQ Callsign :";
			x = 0.1125;
			y = 0.28;
			w = 0.2375;
			h = 0.04;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class bnb_es_callsignZeusEdit: RscEdit {
			idc = 1461;
			x = 0.125;
			y = 0.34;
			w = 0.225;
			h = 0.06;
			colorBackground[] = {0.5,0.5,0.5,0.6};
			tooltip = "Callsign for zeus. Default: Monarch";
			sizeEx = 1.1 * GUI_GRID_H;
			canModify = 1;
		};

		class bnb_es_factionSelectionText: RscText {
			idc = 1034;
			text = "Faction Selection:";
			x = 0.4;
			y = 0.10;
			w = 0.225;
			h = 0.06;
			sizeEx = 1.2  * GUI_GRID_H;
		};

		class bnb_es_factionSelectionDropdown: RscCombo {
		idc = 1904;
		x = 0.4;
		y = 0.16;
		w = 0.225;
		h = 0.06;
		colorBackground[] = {0.5,0.5,0.5,0.6};
		tooltip = "Select faction";
		sizeEx = 1.1 * GUI_GRID_H;
		
		onLBSelChanged = "private _factionCtrl = findDisplay 1901 displayCtrl 1904;	private _faction = _factionCtrl lbData (lbCurSel _factionCtrl);	[_faction] call bnb_fa_arsenals_fnc_updateNationOptions;";

		class Items {
			class Baltic {
				text = "Baltic";
				data = "Bal";
				};
			class Nordic {
				text = "Nordic";
				data = "Nor";
				};
			class UK {
				text = "UK";
				data = "UK";
				};
			};
		};
		class bnb_es_nationSelectionText: RscText {
			idc = 1039;
			text = "Nation Selection:";
			x = 0.4;
			y = 0.22;
			w = 0.225;
			h = 0.06;
			sizeEx = 1.2  * GUI_GRID_H;
		};
		class bnb_es_nationSelectionDropdown: RscCombo {
		idc = 1909;
		x = 0.4;
		y = 0.28;
		w = 0.225;
		h = 0.06;
		colorBackground[] = {0.5,0.5,0.5,0.6};
		tooltip = "Select faction";
		sizeEx = 1.1 * GUI_GRID_H;
		
		onLBSelChanged = "private _nationCtrl = findDisplay 1901 displayCtrl 1909;	private _nation = _nationCtrl lbData (lbCurSel _nationCtrl);[_nation] call bnb_fa_arsenals_fnc_updateCamoOptions;";

		class Items {
			class Empty {
				text = "No faction selected";
				data = "NoFaction";
				};
			};
		};

		class bnb_es_camoSelectionText: RscText {
			idc = 1033;
			text = "Camo Selection:";
			x = 0.4;
			y = 0.36;
			w = 0.225;
			h = 0.06;
			sizeEx = 1.2  * GUI_GRID_H;
		};

		class bnb_es_camoSelectionDropdown: RscCombo {
			idc = 1902;
			x = 0.4;
			y = 0.42;
			w = 0.225;
			h = 0.06;
			colorBackground[] = {0.5,0.5,0.5,0.6};
			tooltip = "Select camo option";
			sizeEx = 1.1 * GUI_GRID_H;


		class Items {
       			class Empty {
				text = "No nation selected";
				data = "NoNation";
				};
			};
		};


		class bnb_es_spawnDefaultsText: RscText {
			idc = 1023;
			text = "Create Defaults?";
			x = 0.4;
			y = 0.48;
			w = 0.225;
			h = 0.06;
			sizeEx = 1.2  * GUI_GRID_H;
		};

		class bnb_es_spawnDefaultsCheckbox: RscCheckbox {
			idc = 1903;
			x = 0.4;
			y = 0.54;
			w = 0.05;
			h = 0.05;
			sizeEx = 1.2  * GUI_GRID_H;
		};

		class bnb_es_sectionAmountSlider: RscXSliderH {
			idc = 1900;
			x = 0.112499;
			y = 0.52;
			w = 0.225;
			h = 0.04;
			color[] = {1,1,1,0.6};
			colorActive[] = {1,1,1,1};
			colorDisable[] = {1,1,1,0.4};
			sliderRange[] = {0, 9};
			sliderPosition = 3;
			tooltip = "Number of sections to spawn. Default: 3";
			sliderStep = 1;
			arrowEmpty = "\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
			onSliderPosChanged = "(findDisplay 1901 displayCtrl 1006) ctrlSetText str sliderPosition (findDisplay 1901 displayCtrl 1900)";
			};
		class bnb_es_sectionAmountCounter: RscText {
			idc = 1006;
			text = "3";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class bnb_es_sectionAmountText: RscText {
			idc = 1003;
			text = "Number of Sections";
			x = 0.112499;
			y = 0.46;
			w = 0.225;
			h = 0.04;
			sizeEx = 1.2 * GUI_GRID_H;
		};
		class bnb_es_title: RscText {
			idc = 1004;
			text = "Load JEF Slots & Modules";
			x = 0.112499;
			y = 0.04;
			w = 0.554999;
			h = 0.04;
			sizeEx = 1.5  * GUI_GRID_H;
		};
		class bnb_es_okButton: RscButtonMenuOK {
			x = 0.562499;
			y = 0.54;
			w = 0.12;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
			onButtonClick = "private _callsign = ctrlText (findDisplay 1901 displayCtrl 1400); private _zeusCallsign = ctrlText (findDisplay 1901 displayCtrl 1461); private _factionCtrl = findDisplay 1901 displayCtrl 1904; private _faction = _factionCtrl lbData (lbCurSel _factionCtrl); private _nationCtrl = findDisplay 1901 displayCtrl 1909; private _nation = _nationCtrl lbData (lbCurSel _nationCtrl); private _camoCtrl = findDisplay 1901 displayCtrl 1902; private _camo = _camoCtrl lbData (lbCurSel _camoCtrl);  private _numberOfSections = sliderPosition (findDisplay 1901 displayCtrl 1900); private _createDefaults = cbChecked (findDisplay 1901 displayCtrl 1903); diag_log format['Callsign: %1, Zeus Callsign: %2, Faction: %3, Camo: %4, Number of Sections: %5, Create Defaults: %6', _callsign, _zeusCallsign, _faction, _camo, _numberOfSections, _createDefaults]; [_callsign, _zeusCallsign, _faction, _nation, _camo, _numberOfSections, _createDefaults] call bnb_es_core_fnc_edenCreateAssets;";
		};
		class bnb_es_cancelButton: RscButtonMenuCancel {
			x = 0.7;
			y = 0.54;
			w = 0.12;
			h = 0.04;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
	};
};
/*
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
			colorText[] = {1,1,1,1};
			text = "CS";
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
						colorText[] = {1,1,1,1};
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
			onButtonClick = "[] call bnb_es_core__fnc_edenCreateAssets;";
		};
		class JEF_cancelButton: RscButtonMenuCancel {
			x = 0.7;
			y = 0.54;
			w = 0.12;
			h = 0.04;
		};
	};
};
*/