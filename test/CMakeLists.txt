cmake_minimum_required(VERSION 3.14)

set(This OZSHTests)

set(Sources
    test.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    OZSH
)

add_test(
    NAME ${This}
    COMMAND ${This}
)