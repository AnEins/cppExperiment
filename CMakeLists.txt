cmake_minimum_required(VERSION 3.22)
project(Praktikum_Cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(Praktikum_Cpp main.c)


file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/Day4/*.cpp")
foreach (file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach ()