class Cfg3DEN
{
	class Object
	{
		class AttributeCategories
		{
			class JEF_Essentials
			{
				displayName = "JEF Essentials";
				collapsed = 1;
				class Attributes
				{
					class BNB_ES_IsLoadout
					{
						displayName = "Default Loadout?";
						tooltip = "Use this unit as a default loadout for the mission";
						property = "BNB_ES_3den_Loadout";
						control = "CheckboxState";
						expression = "if (_value == true) then {_this setVariable ['bnb_es_isLoadout',true, true];}";
						defaultValue = "false";
						condition = "objectControllable";
					};
					class BNB_ES_LoadoutRole
					{
						displayName = "Name:";
						tooltip = "Name of the loadout in the Arsenal; Accepts any string, including nothing. Duplicates will overwrite.";
						property = "BNB_ES_3den_LoadoutName";
						control = "Edit";
						expression = "_this setVariable ['bnb_es_loadout_role',_value, true];";
						defaultValue = "''";
						typeName = "STRING";
						condition = "objectControllable";
					};
				};
			};
		};
	};
};
