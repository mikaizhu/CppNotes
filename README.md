# cpp教程推荐

- 【B站】https://space.bilibili.com/364152971/video?tid=0&page=3&keyword=&order=pubdate

# 环境搭配

## Linux

```
sudo apt install gcc, g++
```

## Mac

这里使用 terminal + vim 作为编写cpp的环境

要想在terminal中运行cpp代码，必须下载xcode，然后默认会安装gcc和g++编译器

## 运行逻辑

1. 首先编写cpp文件代码
2. 编译cpp文件`g++ HelloWorld.cpp`, 生成可执行文件`a.out` 
3. 运行可执行文件`./a.out` 

## CMake

make工具分成好多种，不同平台下如Windows，Linux的make语法是不一样的，为了解决跨
平台的问题，开发出了cMake工具.

cMake 的流程是：
1. 根据cMake语法，写成CMakeLists.txt文件
2. 输入cmake命令，自动生成Makefile文件
3. 输入make命令，将cpp文件进行编译，生成可执行文件
4. 运行可执行文件

[参考视频](bilibili.com/video/BV16V411k7eF?from=search&seid=16111676939071467556) 

# 01HelloWorld

创建文件：(cpp 文件主要都是以.cpp结尾)

```
vi HelloWorld.cpp
```

编写代码：

[day1](./code/day1/HelloWorld.cpp) 


编译代码：(cpp 文件必须要用g++编译器进行编译，不能使用gcc编译)

```
g++ HelloWorld.cpp
```

运行可执行文件：

```
./a.out
```

**有时候为了保证函数的简洁，我们会写很多cpp文件，其中主文件会引用这些cpp文件中的
函数。**

[main.cpp & log.cpp](./code/day1) 

最后我们需要同时将这些文件编译, 生成a.out文件

```
g++ main.cpp log.cpp
```

执行二进制文件或者称作可执行文件

```
./a.out
```

如果不想要输入的为a.out 可以使用下面命令

```
g++ main.cpp -o main
./main
```

# 02Cmake

- [Cmake书籍](https://github.com/xiaoweiChen/CMake-Cookbook/tree/master/content) 
- [Cmake视频教程](bilibili.com/video/BV16V411k7eF?p=2) 
- [Cmake常用语法](https://zhuanlan.zhihu.com/p/267803605) 

假如当前只有一个cpp文件，可以直接编译成可执行文件，但是当文件多起来的时候，就
需要CMkae进行编译了，这样会更有逻辑。

**Situation1**:(当前只有一个cpp文件，使用cmake进行编译cpp为可执行文件)(单目录单文
件)

```
vi CMakeLists.txt
```

[请参考CMakeLists.txt文件代码](./code/day2/demo1/CMakeLists.txt) 

编写完后，然后执行下面代码：
```
# cmake当前目录下的CMakeLists.txt, 必须加上./, 然后会生成makefile
cmake ./
# 进行编译，然后生成可执行文件
make
# 运行可执行文件
./main
```

**Situation2**:(单目录，多文件)(即当前目录下有很多cpp文件需要打包)

这里有两种方法，方法1:situation1中`add_executable(main main1.cpp)`是打包一个文件，在
后面加上很多cpp文件即可打包多个文件

方法2：[参考代码](./code/day2/demo2/CMakeLists.txt) 

# TODO

**Situation3**:(多目录多文件)

[参考视频](https://www.bilibili.com/video/BV16V411k7eF?p=4) 

**Situation4**:(多目录多文件标准工程)

[参考视频](https://www.bilibili.com/video/BV16V411k7eF?p=5) 
