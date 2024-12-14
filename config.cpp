#include "\vbs2\basic_defines.hpp"
#define __CurrentDir__ \vbs2\customer\plugins\behaviors_jiri_maly\

//Class necessary for VBS to load the new addon correctly
class CfgPatches
{
	class vbs2_vbs_plugins_behaviors_jiri_maly
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {
			vbs2_editor, 
			vbs2_people,
			vbs2_plugins_function_library,
			vbs2_vbs_plugins_standard_behaviors,
			vbs2_vbs_plugins_ai_core_public
		};
		modules[] =
		{
			vbs_core_content_module
		};
	};
};

// Adds btset to list of btsets which are loaded automatically
class CfgBehaviorTrees
{
	class behaviors_jiri_maly //this is an arbitrary className, it needs to be unique though
	{
		path = "\vbs2\customer\plugins\behaviors_jiri_maly\data\behaviors_jiri_maly\behaviors_jiri_maly.btset"; //This is the relative path to the BT-set file to load
		name = "behaviors_jiri_maly"; // This is the btset name duplicated in the configuration
	};
};
// Defines the new order as available from the Control AI - Military
class CfgAvailableBehaviors
{
	class behaviors_DPKR_occupy
	{
		icon = "\vbs2\customer\plugins\behaviors_jiri_maly\data\behaviors_DPKR_occupy.paa";
		allowRotate = true;


		displayname = "Succesive Advance";
		description = "Succesive Advance";				

		//displayCondition = "\core\addons\plugins\generic_behaviors_public\data\scripts\waypointDisplayCondition.sqf";

		orderName = "Succesive_Advance";
		prepareActionMessage = "vbs2\vbs_plugins\ai\standard_behaviors\data\scripts\PrepareBTParameters.sqf";
		
		class RootBehaviors
		{
		  group[] = {"standard_behaviors", "GroupRoot"};
		  entity[] = {"standard_behaviors", "EntityRoot"};
		  vehicle[] = {"standard_behaviors", "VehicleRoot"};
		};
		
		class Parameters
		{
			class orderParameters
			{
				displayName = "orderParameters";
				value = "";
				type = "table";
			};
			class reportCompletedToExternal
			{
				displayName = "reportCompletedToExternal";
				value = "false";
				type = "boolean";
			};
			class debugEnabled
			{
				displayName = "debugEnabled";
				value = "true";
				type = "boolean";
			};
		};
	};
};
