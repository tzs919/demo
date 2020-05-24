cmake_minimum_required(VERSION 3.1)

# 设置C++标准为 C++ 17或11
set(CMAKE_CXX_STANDARD 11)

#用于调试
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -Wall -g -ggdb")

# 正式发布
# set(CMAKE_BUILD_TYPE "Release")
# set(CMAKE_CXX_FLAGS_RELEASE "-O3 -Wall -g")

project(DEMO VERSION 0.1.0)

# 可以使用make test
enable_testing()

add_subdirectory(src)

# add_subdirectory(tests)