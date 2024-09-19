cmake_minimum_required(VERSION 3.23)
project(classObject)

set(CMAKE_CXX_STANDARD 14)

# 添加包含路径
include_directories(include)

add_executable(classObject src/main.cpp)
add_executable(ConstructorAndDestructor src/InitializeCleanup/ConstructorAndDestructor/main.cpp)
add_executable(ConstructorCopyFunction src/InitializeCleanup/ConstructorCopyFunction/main.cpp)
