cmake_minimum_required(VERSION 3.23)
project(classObject)

set(CMAKE_CXX_STANDARD 14)

# 添加包含路径
include_directories(include)

add_executable(classObject src/main.cpp)
add_executable(ConstructorAndDestructor src/objectInitialiseCleanup/ConstructorAndDestructor/main.cpp)
add_executable(ConstructorCopyFunction src/objectInitialiseCleanup/ConstructorCopyFunction/main.cpp)
add_executable(ConstructorUseRules src/objectInitialiseCleanup/ConstructorUseRules/main.cpp)
add_executable(DeepCopyLightCopy src/objectInitialiseCleanup/DeepCopyLightCopy/main.cpp)
add_executable(InitialiseList src/objectInitialiseCleanup/InitialiseList/main.cpp)
add_executable(ClassObjectBecomeObjectNumber src/objectInitialiseCleanup/ClassObjectBecomeObjectNumber/main.cpp)
add_executable(staticNumber src/objectInitialiseCleanup/staticNumber/main.cpp)
