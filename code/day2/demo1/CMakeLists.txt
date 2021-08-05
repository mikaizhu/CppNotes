# 指定最小的cmake版本, 用户需要将cmake升级到当前版本
cmake_minimum_required(VERSION 3.1)

# 指定项目名称
project(demo)

# 生成可执行文件，其中main为可执行文件的名字， main.cpp是需要编译的源文件
# 最后会生成一个main的可执行文件
add_executable(main main.cpp)
