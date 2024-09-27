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



add_executable(membersSplitStorager src/objectModelAndThisPointer/membersSplitStorager/main.cpp)
add_executable(objectCharacter_thisPointer src/objectModelAndThisPointer/objectCharacter_thisPointer/main.cpp)
add_executable(emptyPointerInterMemberFunc src/objectModelAndThisPointer/emptyPointerInterMemberFunc/main.cpp)
add_executable(constMakeMemberFunc src/objectModelAndThisPointer/constMakeMemberFunc/main.cpp)
add_executable(globalFuncByFriend src/friend/globalFuncByFriend/main.cpp)
add_executable(friendClass src/friend/friendClass/main.cpp)
add_executable(memberFucByFriend src/friend/memberFucByFriend/main.cpp)

add_executable(add src/operatorOverLoading/add/main.cpp)
add_executable(leftMove src/operatorOverLoading/leftMove/main.cpp)