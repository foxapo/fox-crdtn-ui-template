class CfgPatches
{
    ///--------------------------------------------
    /// Easy peasy lemon squeezy
    ///--------------------------------------------
    class CRDTN_UI Template
    {
        units[] = {""};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {
            "DZ_Data","DZ_Scripts"
        };
        defines[] = {"CRDTN_UI_Template"};
    };
};

class CfgMods
{
    class CRDTN_UI Template
    {
        name = "";
        credits = "";
        author = "Freeman";
        type = "mod";
        dependencies[] = {"Game","World","Mission"};
        dir = "CRDTN_UI Template";
        class defs
        {
            class gameScriptModule
            {
                value = "";
                files[] = {"CRDTN_UI Template/Scripts/3_Game"};
            };
            class worldScriptModule
            {
                value = "";
                files[] = {"CRDTN_UI Template/Scripts/4_World"};
            };
            class missionScriptModule
            {
                value = "";
                files[] = {"CRDTN_UI Template/Scripts/5_Mission"};
            };
            class imageSets
            {
                files[] = {};
            };
        };
    };
};

class CfgVehicles {};

class CfgSlots {};

class CfgWeapons {};
