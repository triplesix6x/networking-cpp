cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(networking)
add_executable(test_n src/main.cpp)

target_include_directories(test_n PRIVATE vendor/asio/asio/include)
