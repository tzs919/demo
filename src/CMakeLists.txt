set(headers ${CMAKE_SOURCE_DIR}/include)

# SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
# SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_library(demo demo.c)

# ADD_LIBRARY(libname [SHARED|STATIC][EXCLUDE_FROM_ALL]source1 source2 ... sourceN)

target_include_directories(demo PUBLIC "${headers}")

add_executable(demo_run main.c)

target_link_libraries(demo_run demo)

#以下用于系统测试（功能测试）

# 测试帮助信息是否可以正常提示
add_test (test_usage demo_run)
set_tests_properties (test_usage
  PROPERTIES PASS_REGULAR_EXPRESSION "Usage: .* x y")

add_test(demo_run1 demo_run 7 8)
set_tests_properties (demo_run1
  PROPERTIES PASS_REGULAR_EXPRESSION "15")


# 定义一个宏，用来简化测试工作
macro (do_test arg1 arg2 result)
  add_test (test_${arg1}_${arg2} demo_run ${arg1} ${arg2})
  set_tests_properties (test_${arg1}_${arg2}
    PROPERTIES PASS_REGULAR_EXPRESSION ${result})
endmacro (do_test)
 
# 利用 do_test 宏，测试一系列数据
do_test (5 2 "7")
do_test (10 5 "15")
do_test (2 10 "12")