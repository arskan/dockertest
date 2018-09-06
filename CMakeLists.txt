project(dockerfile_test)
cmake_minimum_required(VERSION 3.5)
add_definitions(-std=c++11)

enable_testing()

add_executable(patate
    patate.cpp
    )

add_test(patate
    patate
    )

add_executable(carotte
    catch_main.cpp
    carotte.cpp
    )

add_test(carotte
    carotte
    )

