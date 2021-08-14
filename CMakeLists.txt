cmake_minimum_required(VERSION 3.15)
project(teaching_wish)

set(CMAKE_CXX_STANDARD 20)

add_executable(teaching_wish main.cpp)

add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(
    TestCalculator
        TestCalculator.cpp
        Calculator.cpp
)
target_link_libraries(TestCalculator gtest gtest_main)
