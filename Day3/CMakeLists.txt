cmake_minimum_required(VERSION 3.20)
project(AdvProg_tutorial_03)

set(CMAKE_CXX_STANDARD 20)
add_subdirectory(C:/Program Files/users_bin/googletest)
include_directories(C:/Program Files/users_bin/googletest/googletest/include googletest)

add_executable(AdvProg_tutorial_03 tutorial/Tutorial_03/matrix_operation-part2.cpp)
target_link_libraries(${PROJECT_NAME} gtest gtest_main)

