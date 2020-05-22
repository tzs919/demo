set(headers ${CMAKE_SOURCE_DIR}/include)

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_library(demo demo.c)

# ADD_LIBRARY(libname [SHARED|STATIC][EXCLUDE_FROM_ALL]source1 source2 ... sourceN)

target_include_directories(demo PUBLIC "${headers}")

add_executable(demo_run main.c)

target_link_libraries(demo_run demo)