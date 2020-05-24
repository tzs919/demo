用于演示cmake（编译构建）、ctest（功能测试）、gtest（单元测试）的使用

注意编程规范：文件命名、头文件处理、断言等

一、功能测试（系统测试）步骤：

1、mkdir build

2、cd build

3、cmake ..

4、make

5、make test

同时支持debug

二、单元测试步骤：

1、去注释CMakeLists.txt文件中的：# add_subdirectory(tests)

2、mkdir build

3、cd build

4、cmake ..

4、make

5、执行测试：./tests/demo_test
