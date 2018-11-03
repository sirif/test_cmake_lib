cmake_minimum_required(VERSION 2.8)

project(smth)

file(GLOB SRC
    *.h
    *.cpp)

add_library(smth_lib STATIC "smth.cpp" ${SRC})

target_link_libraries(smth_lib PUBLIC logger)

add_executable(smth_exec main.cpp)

target_link_libraries(smth_exec PUBLIC smth_lib)
