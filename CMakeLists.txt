cmake_minimum_required(VERSION 2.8)

project(test_prj)

file(GLOB SRC
    *.h
    *.cpp
    )

add_executable(${PROJECT_NAME} "main.cpp" ${SRC})

add_subdirectory(logger)
add_subdirectory(smth)

target_link_libraries(${PROJECT_NAME} PUBLIC logger)
