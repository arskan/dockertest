project('dockerfile test')
cmake_minimum_required(VERSION 3.5)
add_definitions(-std=c++11)

enable_testing()

add_executable(patate
    patate.cpp
    )


add_test(patate
    patate
    )

