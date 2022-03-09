cmake_minimum_required(VERSION 3.21)
project(monday C)

set(CMAKE_C_STANDARD 99)

add_executable(monday main.c monday.h test_day_week.c)
