cmake_minimum_required(VERSION 3.23)
project(classObject)

set(CMAKE_CXX_STANDARD 14)

# 添加包含路径
include_directories(include)

add_executable(classObject src/main.cpp)
add_executable(ConstructorAndDestructor src/InitialiseCleanup/ConstructorAndDestructor/main.cpp)
add_executable(ConstructorCopyFunction src/InitialiseCleanup/ConstructorCopyFunction/main.cpp)
add_executable(ConstructorUseRules src/InitialiseCleanup/ConstructorUseRules/main.cpp)
add_executable(DeepCopyLightCopy src/InitialiseCleanup/DeepCopyLightCopy/main.cpp)
add_executable(InitialiseList src/InitialiseCleanup/InitialiseList/main.cpp)
add_executable(ClassObjectBecomeObjectNumber src/InitialiseCleanup/ClassObjectBecomeObjectNumber/main.cpp)
add_executable(staticNumber src/InitialiseCleanup/staticNumber/main.cpp)
