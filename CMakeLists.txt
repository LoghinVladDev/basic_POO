cmake_minimum_required(VERSION 3.16)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(testRun src/main.cpp include/queue.h src/queue.cpp)