#include "sol.hpp"

#define DllExport __declspec(dllexport)

extern "C"
{
    DllExport int call_lua(char* fileName, int a, int b) 
    {
        sol::state lua;
        lua.open_libraries(sol::lib::base);
        lua.script_file(fileName);
        return lua["plus"](a, b);
    }
}