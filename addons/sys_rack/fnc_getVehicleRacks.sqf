/*
 * Author: ACRE2Team
 * Returns the rack IDs for a specific vehicle
 *
 * Arguments:
 * 0: Target Vehicle <OBJECT>
 *
 * Return Value:
 * RETURN VALUE <ARRAY>
 *
 * Example:
 * [cursorTarget] call acre_sys_rack_fnc_getVehicleRacks;
 *
 * Public: No
 */
#include "script_component.hpp"

params["_vehicle"];

private _racks = [];
{
    private _rackId = typeOf _x;
    if (_rackId isKindOf "ACRE_BaseRack") then {
        _racks pushBack _rackId;
    };
} ForEach (attachedObjects _vehicle);

_racks;