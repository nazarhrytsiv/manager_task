cmake_minimum_required(VERSION 3.6)
project(manager_tasks)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Entity/Task.cpp Entity/Task.h DTO/WorkWithFiles.cpp)
add_executable(manager_tasks ${SOURCE_FILES})