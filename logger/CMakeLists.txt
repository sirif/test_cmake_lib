cmake_minimum_required(VERSION 2.8)

project(logger)

file(GLOB SRC
    *.h
    *.cpp)

add_library(${PROJECT_NAME} STATIC "logger.cpp" ${SRC})
