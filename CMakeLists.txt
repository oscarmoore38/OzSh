cmake_minimum_required(VERSION 3.14)

set(This OZSH)

project(${This} C CXX)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    src/utilClass/util.hpp
    src/shellClass/shell.hpp
)

set(Sources
    src/main.cpp
    src/utilClass/util.cpp
    src/shellClass/shell.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(IntegrationTests)