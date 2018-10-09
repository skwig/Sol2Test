cmake_minimum_required(VERSION 3.8)
project(Sol2Test)

set(CMAKE_CXX_STANDARD 14)

find_package(Lua51 REQUIRED)

include_directories(${LUA_INCLUDE_DIR})

set(SOURCE_FILES main.cpp sol.hpp)
add_library(Sol2Test SHARED ${SOURCE_FILES})
target_link_libraries(Sol2Test ${LUA_LIBRARIES})
