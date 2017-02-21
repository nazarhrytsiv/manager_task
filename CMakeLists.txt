cmake_minimum_required(VERSION 3.6)
project(manager_tasks)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Entity/Task.cpp Entity/Task.h DTO/Write_from_file_task.cpp DTO/Write_in_file_task.cpp)
add_executable(manager_tasks ${SOURCE_FILES})