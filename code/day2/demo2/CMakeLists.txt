cmake_minimum_required(VERSION 3.1)

project(demo2)

# 将当前目录下的所有cpp文件装在变量demo2中
aux_source_directory(./ demo2)

# 将demo2变量中的所有cpp文件进行打包，生成main的可执行文件
# 注意变量的引用和shell脚本中的方法一样
add_executable(main ${demo2})
