/* ----------------------------------------------------------------------------
	Function: jef_core_fnc_edenCreateAssets

	Description:
	Creates mission slots, modules and markers.

	Parameters:
	0: _callsign - The platoon callsign that all sections will use <String>
	1: _zeusCallsign - The callsign that HQ will use <String>
	2: _camo - The camo the units will use <String>
	3: _numberOfSections - The number of sections to spawn <Number>
	4: _createDefaults - Whether to create a section to use as default loadout units <Bool>

	Returns:
	Nothing.

	Examples:
	["Odin", "Valhalla", "MTP", 3, false] call jef_core_fnc_edenCreateAssets;

	Author:
	Met
---------------------------------------------------------------------------- */
params [["_callsign", "Raider", [""]], ["_zeusCallsign", "Monarch", [""]], ["_faction", "UK", [""]], ["_nation", "UK", [""]], ["_camo", "Mul", [""]], ["_numberOfSections", 3, [0]], ["_createDefaults", false, [false]]];
if (_callsign == "") then {
	_callsign = "Raider";
};

if (_zeusCallsign == "") then {
	_zeusCallsign = "Monarch";
};

if (_camo == "") then {
	_camo = "Mul";
};

if (_faction == "") then {
	_faction = "UK";
};

if (_nation == "") then {
	_nation = "UK";
};
_Arsenal = format ["BNB_FA_Resupply_Arsenal_%1", _faction];
_factionClass = format["BNB_FA_%1_%2", _nation, _camo];	
_sectionClass = format["BNB_FA_%1_Section_%2", _nation, _camo];
_commandClass = format["BNB_FA_%1_Command_%2", _nation, _camo];
_defaultClass = format["BNB_FA_%1_Default_%2", _nation, _camo];
_zeusClass = format["BNB_FA_%1_Zeus_%2", _nation, _camo];



(format ['CS:%1, ZCS:%2, Fac:%3, Nat:%4, C:%5, Num:%6, Def:%7, Arsenal:%8', _callsign, _zeusCallsign, _faction, _nation, _camo, _numberOfSections, _createDefaults, _Arsenal]) call BIS_fnc_3DENNotification; 


_centralPos = screenToWorld [0.5, 0.5];
_camPos = [getPosATL get3DENCamera select 0, getPosATL get3DENCamera select 1, 0];
_spawnPos = _centralPos;
if (_centralPos distance _camPos > 500) then {
	_spawnPos = _camPos;
};

_entities =
[
	[
		["Marker", "mil_circle", _spawnPos vectorAdd [10, 0]],
		["markerName", "respawn"],
		["text", "respawn"]
	],	[
		["Marker", "BNB_FA_Flag_JEF", _spawnPos vectorAdd [10, 0]],
		["markerName", "JEFFlag"],
		["text", ""]
	],
	[
		["Logic", "HeadlessClient_F", _spawnPos vectorAdd [-2, 0]],
		["ControlMp", true],
		["name", "HC1"]
	],
	[
		["Logic", "HeadlessClient_F", _spawnPos vectorAdd [-2, -1]],
		["ControlMp", true],
		["name", "HC2"]
	],
	[
		["Logic", "HeadlessClient_F", _spawnPos vectorAdd [-2, -2]],
		["ControlMp", true],
		["name", "HC3"]
	],
		[
		["Object", _Arsenal, _spawnPos vectorAdd [-3, 6]],
		["allowDamage", false],
		["ArsenalObject", true]
	],
		[
		["Object", _Arsenal, _spawnPos vectorAdd [-5, 6]],
		["allowDamage", false],
		["ArsenalObject", true]
	],
	[
		["Logic", "ModuleCurator_F", _spawnPos vectorAdd [-3, 0]],
		["ModuleCurator_F_Owner", "zeusOne"],
		["ModuleCurator_F_Name", "Active Zeus"],
		["ModuleCurator_F_Addons", 3]
	],
	[
		["Logic", "ModuleCurator_F", _spawnPos vectorAdd [-3, -1]],
		["ModuleCurator_F_Owner", "zeusTwo"],
		["ModuleCurator_F_Name", "Assistant Zeus"],
		["ModuleCurator_F_Addons", 3]
	],
	[
		["Logic", "ModuleCurator_F", _spawnPos vectorAdd [-3, -2]],
		["ModuleCurator_F_Owner", "#adminLogged"],
		["ModuleCurator_F_Name", "Admin"],
		["ModuleCurator_F_Addons", 3]
	]
];

_sections =
[
	[
		[configfile >> "CfgGroups" >> "West" >> "BNB_FA_Group" >> _factionClass >> _commandClass, _spawnPos vectorAdd [0, 0]],
		"Command",
		["description", format ["1: 1IC@%1 1-Actual", _callsign ]]
	],
	[
		[configfile >> "CfgGroups" >> "West" >> "BNB_FA_Group" >> _factionClass >> _zeusClass, _spawnPos vectorAdd [-1, 0]],
		"Zeus",
		["description", format ["1: Zeus@%1", _zeusCallsign]]
	]
];




// Command and Zeus
{
	_configPath = _x select 0;
	_attributeOne = _x select 1;
	_attributeTwo = _x select 2;
	create3DENComposition _configPath;
	set3DENAttributes [[get3DENSelected "Group", "groupID", _attributeOne], [get3DENSelected "Object", "ControlMP", true]];
	_groupComp = get3DENSelected "Object";
	_group = _groupComp select 0;
	if ((_attributeOne) == "Zeus") then {
		leader _group set3DENAttribute ["name", "zeusOne"];
		_asZeus = _groupComp select 1;
		_asZeus set3DENAttribute ["description", "2: A.Zeus"];
		_asZeus set3DENAttribute ["name", "zeusTwo"];
	} else {
		{
			_unitDisplayName = [configfile >> "CfgVehicles" >> typeOf _x] call BIS_fnc_displayName;
			if ("IC" in _unitDisplayName && !isFormationLeader _x) then {
				_x set3DENAttribute ["description", "2: 2IC"];
			} else {
				if (_x getUnitTrait "Medic") then {
					_x set3DENAttribute ["description", "3: Medic"];
				} else {
					_x set3DENAttribute ["description", "4: Open"];
				};
			};
		} forEach units _group;
	};
	leader _group set3DENAttribute _attributeTwo;
	set3DENSelected [];
} forEach _sections;

{
	_entity = _x select 0;
	_attributeOne = _x select 1;
	_attributeTwo = _x select 2;
	_attributeThree = _x select 3;
	_current = create3DENEntity _entity, _current set3DENAttribute _attributeOne, _current set3DENAttribute _attributeTwo, _current set3DENAttribute _attributeThree;
	} forEach _entities;

_num = 1;
for "_i" from 1 to _numberOfSections do {
	create3DENComposition [configfile >> "CfgGroups" >> "West" >> "BNB_FA_Group" >> _factionClass >> _sectionClass, _spawnPos vectorAdd [_num, 0, 0]];
	set3DENAttributes [[get3DENSelected "Group", "groupID", format ["1-%1 Sec", _i]], [get3DENSelected "Object", "ControlMP", true]];
	_group = get3DENselected "Object" select 0;
	_ix = 3;
	{
		_unitDisplayName = [configfile >> "CfgVehicles" >> typeOf _x] call BIS_fnc_displayName;
		if ("IC" in _unitDisplayName && !isFormationLeader _x) then {
			_x set3DENAttribute ["description", "2: 2IC"];
		} else {
			if (_x getUnitTrait "Medic") then {
				_x set3DENAttribute ["description", "3: Medic"];
			} else {
				if (_ix <= 6) then {
					_x set3DENAttribute ["description", format ["%1: Open", _ix]];
				} else {
					_x set3DENAttribute ["description", format ["%1: Rifleman", _ix]];
				};
				_ix = _ix + 1;
			};
		};
	} forEach units _group;
	leader _group set3DENAttribute ["description", format ["1: 1IC@%1 1-%2", _callsign, _i]];
	set3DENSelected [];
	_num = _num + 2;
};




// default Loadouts
if (_createDefaults) then {
	create3DENComposition [configfile >> "CfgGroups" >> "West" >> "BNB_FA_Group" >> _factionClass >> _defaultClass, _spawnPos vectorAdd [_num + 2, 3, 0]];
	set3DENAttributes [[get3DENSelected "Group", "groupID", "Default Loadouts"], [get3DENSelected "Object", "BNB_ES_3den_Loadout", true]];
	_groupComp = get3DENSelected "Object";
	{
		_unitDisplayName = [configfile >> "CfgVehicles" >> typeOf _x] call BIS_fnc_displayName;
		_x set3DENAttribute ["BNB_ES_3den_LoadoutName", _unitDisplayName];
	} forEach _groupComp;
	set3DENSelected [];
};
