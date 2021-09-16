cmake_minimum_required(VERSION 3.17)
project(Lab2Paralel)

set(CMAKE_CXX_STANDARD 17)
add_executable(Lab2Paralel main.cpp FirstTask.hpp SecondTask.hpp)
find_package(OpenMP)
if(OpenMP_CXX_FOUND)
    target_link_libraries(Lab2Paralel PUBLIC OpenMP::OpenMP_CXX)
endif()