#define COMPONENT sys_sem70

#include "\idi\clients\acre\addons\main\script_mod.hpp"

//#define DEBUG_ENABLED_SYS_SEM70
#ifdef DEBUG_ENABLED_SYS_SEM70
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_ENABLED_SYS_SEM70
    #define DEBUG_SETTINGS DEBUG_SETTINGS_SYS_SEM70
#endif


#include "\idi\clients\acre\addons\main\script_macros.hpp"

#define GET_VAR(var1) acre_player getVariable QUOTE(GVAR(var1))
#define SET_VAR(var1,var2) acre_player setVariable [QUOTE(GVAR(var1)), var2]

#define GET_STATE(id)            ([GVAR(currentRadioId), "getState", #id] call acre_sys_data_fnc_dataEvent)
#define SET_STATE(id, val)        ([GVAR(currentRadioId), "setState", [#id, val]] call acre_sys_data_fnc_dataEvent)
#define SET_STATE_CRIT(id, val)    ([GVAR(currentRadioId), "setStateCritical", [#id, val]] call acre_sys_data_fnc_dataEvent)

#define MAIN_DISPLAY    (findDisplay 31532)

#include "\idi\clients\acre\addons\sys_components\script_acre_component_defines.hpp"
