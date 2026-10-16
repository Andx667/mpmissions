# Functions

## GRAD_Loadout_fnc_factionSetLoadout
You can dynamically alias a faction name and optionally broadcast it over network (parameter 2, bool):

Param | Type   | Default Value | Description
------|--------|---------------|--------------------------------------------------------------------------------------------
0     | string | -             | Faction name. Get this with [faction](https://community.bistudio.com/wiki/faction) command.
1     | string | -             | Loadout classname.
2     | bool   | false         | Set to true for global effect (`publicVariable`).


**Example:**
```sqf
// initServer.sqf - Set BLU_F faction to use USMC loadout.
["BLU_F", "USMC", true] call GRAD_Loadout_fnc_factionSetLoadout;
```

```sqf
// description.ext
class Loadouts {
    class Faction {
        class USMC {
            class AllUnits {
                backpack = "";
            };
        };
    };
};
```

## GRAD_Loadout_fnc_factionGetLoadout
Get loadout classname set via `GRAD_Loadout_fnc_factionSetLoadout`.

Param | Type   | Default Value | Description
------|--------|---------------|--------------------------------------------------------------------------------------------
0     | string | -             | Faction name. Get this with [faction](https://community.bistudio.com/wiki/faction) command.

**Return Value**
String - Loadout classname.

**Example:**
```sqf
// get loadout from above example
private _bluLoadoutClassname = ["BLU_F"] call GRAD_Loadout_fnc_factionGetLoadout;
```

## GRAD_Loadout_fnc_doLoadoutForUnit
Call this with unit as first parameter to dynamically assign loadout during scenario.

Param | Type   | Default Value | Description
------|--------|---------------|------------------------
0     | object | -             | Unit to do loadout for.
1     | string | ""            | Optional unit classname to resolve the loadout as, instead of the unit's own type (e.g. `"B_medic_F"`). Name and role lookups still use the unit itself.
2     | string | ""            | Optional rank (e.g. `"SERGEANT"`) to resolve the loadout as, instead of the unit's own rank. Only affects the loadout lookup, not the unit's actual rank.

**Example:**
```sqf
[player] call GRAD_Loadout_fnc_doLoadoutForUnit;
// give the player the loadout of a medic
[player, "B_medic_F"] call GRAD_Loadout_fnc_doLoadoutForUnit;
```

## GRAD_Loadout_fnc_addLoadoutSwitchInteraction
Adds an ACE interaction to an object that lets anyone switch to the loadout of another unit class mid-mission. Needs `ace_interact_menu`. Call once per class for several options on one object. Must run on every client (e.g. in `initPlayerLocal.sqf`, or `init.sqf`).

Param | Type   | Default Value          | Description
------|--------|------------------------|------------------------------------------------------------------------------
0     | object | -                      | Object to attach the action to.
1     | string | -                      | Unit classname to resolve the loadout as.
2     | string | "Take loadout: ..."    | Action label. Defaults to the class' display name.
3     | code   | `{true}`               | ACE condition, parameters `[target, player, params]`.
4     | array  | `["ACE_MainActions"]`  | ACE action path.

**Example:**
```sqf
[crate, "B_medic_F"] call GRAD_Loadout_fnc_addLoadoutSwitchInteraction;
[crate, "B_Soldier_AT_F", "Take AT kit"] call GRAD_Loadout_fnc_addLoadoutSwitchInteraction;
```

## GRAD_Loadout_fnc_addLoadoutSwitchMenu
Like `addLoadoutSwitchInteraction`, but creates one parent action with a child action per class. If ranks are given, each class becomes a submenu with one action per rank. Must run on every client.

Param | Type   | Default Value       | Description
------|--------|---------------------|----------------------------------------------------------------------------------------------------
0     | object/array | -             | Object to attach the actions to, or an array of objects that all get the same menu.
1     | array  | `[]`                | Entries: unit classnames, or `[classname, [ranks]]` to set ranks for just that class. Empty: every class defined in `Loadouts >> Type`.
2     | string | "Change loadout"    | Label of the parent action.
3     | code   | `{true}`            | ACE condition of the parent action, parameters `[target, player, params]`.
4     | array  | `["ACE_MainActions"]` | ACE action path of the parent action.
5     | array  | `[]`                | Ranks offered for every class that does not set its own, e.g. `["PRIVATE", "SERGEANT"]`. Empty: no rank level.

**Example:**
```sqf
// Change loadout > Medic / AT Specialist / Rifleman
[crate, ["B_medic_F", "B_Soldier_AT_F", "B_Soldier_F"]] call GRAD_Loadout_fnc_addLoadoutSwitchMenu;

// Change loadout > Medic > Private / Sergeant, AT Specialist (direct)
[crate, [["B_medic_F", ["PRIVATE", "SERGEANT"]], "B_Soldier_AT_F"]] call GRAD_Loadout_fnc_addLoadoutSwitchMenu;

// same menu on several objects, every class from Loadouts >> Type
[[crate, truck]] call GRAD_Loadout_fnc_addLoadoutSwitchMenu;
```

If neither the entry nor parameter 5 gives ranks, the `Rank` classes defined for that class in the loadout config (including inherited ones) are used automatically. A class with ranks becomes a submenu, a class without applies directly.

The loadout is looked up exactly like for a unit of that class (`Type/<class>`, `Faction/.../Type/<defactionized class>`, ...). Class-independent entries such as `AllUnits`, plus `Rank`, `Name` and `Role` entries of the acting unit, still apply, and the latter override the class entries.

## GRAD_Loadout_fnc_addReviver
Use to dynamically adjust loadout values. This example adds a bit of randomization to Russian helmets and broadcasts the reviver over network (parameter 2, bool):

Param | Type   | Default Value | Description
------|--------|---------------|------------------------------------------------------------------------------------------------------
0     | code   | {}            | Code block that has to return an item classname. Parameters to this are `[previous classname, unit]`.
1     | string | ""            | item option name
2     | bool   | false         | Set to true for global effect (`publicVariable`).

**Example:**
```sqf
[
    {
        params ["_value"];
        if (_value == "rhs_6b27m_digi") then {
            _value = selectRandom ["rhs_6b27m_digi", "rhs_6b27m_digi_bala"];
        };
        _value
    },
    "headgear",
    true
] call GRAD_Loadout_fnc_addReviver;
```

## GRAD_Loadout_fnc_setRandomizationMode
Sets randomization mode of a unit, overriding the [config set value](configuration.md). Effect is global.

Param | Type   | Default Value | Description
------|--------|---------------|-------------------------------------------
0     | object | -             | The unit to set the randomization mode of.
1     | number | 0             | Randomization mode. 0 to disable, 1 to enable, 2 to enable for players only, 3 to enable for AI only.

**Example:**
```sqf
[player, 2] call GRAD_Loadout_fnc_setRandomizationMode;
```

## customGear Functions
There are a number of functions specifically for the `customGear` funcionality. See [customGear](customGear.md#functions) page for more information.
