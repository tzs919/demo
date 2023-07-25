cmake_minimum_required(VERSION 3.14)

# 设置C++标准为 C++ 17或11
set(CMAKE_CXX_STANDARD 11)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 用于调试
set(CMAKE_BUILD_TYPE "Debug")
# 用于发布
# set(CMAKE_BUILD_TYPE "Release")
# 或，运行时指定参数：cmake -DCMAKE_BUILD_TYPE=Debug/Release  path

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -Wall -g -ggdb")
# C使用：CMAKE_C_FLAGS_DEBUG

# set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall -g")
# CMAKE_C_FLAGS_RELEASE

project(DEMO VERSION 0.1.0)

# 使ctest可用，可以使用make test
enable_testing()

add_subdirectory(src)

# 用于单元测试
add_subdirectory(tests)