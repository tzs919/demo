
# SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_subdirectory(googletest EXCLUDE_FROM_ALL)

add_executable(demo_test test.cc main.cc)

target_link_libraries(demo_test demo gtest_main)

# 以下用于调用单元测试(gtest)
# add_test(NAME demo_test COMMAND demo_test)