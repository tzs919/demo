## 一、功能说明
+ 演示cmake（编译构建）、ctest（功能测试）、gtest（单元测试）的使用
+ 演示断言的使用
+ 支持vscode下的程序调试
+ 注意编程规范：文件命名、头文件处理等

## 二、前提条件
1. 安装c/c++编译器、cmake、vscode
2. vscode插件：C/C++、C++ Intellisense、CMake、、CMake tools、CMake Tools Helper、CodeLLDB

## 三、clone项目的步骤及获取googletest
1. git clone git@github.com:tzs919/demo.git
2. git submodule init
3. git submodule update

## 三、功能测试（系统测试）步骤
1. `mkdir build`
2. `cd build`
3. `cmake ..`
4. `make`
5. `make test`
+ 同时支持debug

## 四、单元测试步骤
1. 去注释CMakeLists.txt文件中的
   >`# add_subdirectory(tests)`
2. `mkdir build`
3. `cd build`
4. `cmake ..`
5. `make`
6. 执行测试：`./tests/demo_test`

## 五、参考学习
+ [cmake教程](https://www.hahack.com/codes/cmake/)
+ [cmake教程源码](https://github.com/wzpan/cmake-demo)
+ [gtest的使用方法](https://blog.csdn.net/baijiwei/article/details/81265491)