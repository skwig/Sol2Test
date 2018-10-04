#include <iostream>
#include <regex>
#include "sol.hpp"
#include "sol_forward.hpp"

int main(int argc, char *argv[]) {
    sol::state lua;
    lua.open_libraries(sol::lib::base);

//    sol::load_result loadResult = lua.load_file("foo.lua");
//    loadResult();

    lua.script_file("foo.lua");

    sol::function plus = lua["plus"];
    std::function<int(int, int)> stdPlus = plus;

    int plusResult1 = stdPlus(1, 6);
    std::cout << plusResult1 << std::endl;

    int plusResult2 = lua["plus"](1, 2);
    std::cout << plusResult2 << std::endl;

    return 0;
}
