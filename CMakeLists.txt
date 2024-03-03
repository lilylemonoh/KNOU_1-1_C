cmake_minimum_required(VERSION 3.27)
project(CProgramming C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-fexec-charset=CP949")

add_executable(CProgramming main.c
)
