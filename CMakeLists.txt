cmake_minimum_required(VERSION 3.10.0)
project(state-machine-stoplight VERSION 0.1.0 LANGUAGES C CXX)

add_executable(state-machine-stoplight main.cpp stoplight.cpp)

include(CTest)
enable_testing()

