cmake_minimum_required(VERSION 3.1)

project(lab2)

enable_testing()

find_package(GTest REQUIRED)

add_subdirectory(googletest)

include_directories(googletest/googletest/include)

add_executable(ModuloTest
    test.cpp    
)

target_link_libraries(ModuloTest gtest gtest_main)

gtest_add_tests(ModuloTest "" AUTO)

add_executable(lab2
    main.cpp
    modulo.cpp
)

set_property(TARGET lab2 PROPERTY CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")
