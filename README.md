<!--ts-->
* [cpp教程推荐](#cpp教程推荐)
* [环境搭配](#环境搭配)
   * [Linux](#linux)
   * [Mac](#mac)
   * [运行逻辑](#运行逻辑)
   * [CMake](#cmake)
* [Day1 HelloWorld](#day1-helloworld)
* [Day2 Cmake](#day2-cmake)
* [Day3 Link and Compile](#day3-link-and-compile)
* [day4 控制流语句](#day4-控制流语句)
   * [while &amp; for 循环](#while--for-循环)
   * [if else 语句](#if-else-语句)
* [day5 变量和基本类型](#day5-变量和基本类型)
* [day6 函数 和 头文件](#day6-函数-和-头文件)
   * [函数](#函数)
   * [头文件](#头文件)
   * [头文件中的#pragma once](#头文件中的pragma-once)
   * [预处理中"" 和 &lt;&gt; 的区别](#预处理中-和--的区别)
* [TODO](#todo)

<!-- Added by: zwl, at: 2021年 8月 9日 星期一 22时07分45秒 CST -->

<!--te-->
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

# Day1 HelloWorld

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

# Day2 Cmake

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

# Day3 Link and Compile

Compile: 编译的作用就是将cpp代码转换成计算机可执行的二进制文件。**注意, 文件名字不重
要，.cpp告诉编译器是该文件是cpp文件，当然你也可以告诉编译器是其他文件**, 编译
器先会处理文件中所有带"#"号的代码，表示预处理，include作用就是找到源文件，然后
将这个文件的所有内容复制到当前位置

```
vi test.h
}

vi main.cpp
#include "iostream"
int main()
{
    std::cout << "Hello world"
#include "test.h" //这里就会复制文件里的内容到这个地方
```

整个cpp文件到可执行文件，里面有以下步骤：

1. preprocess(g++ -E demo1.cpp -o demo1.i)文件以i结尾，就是将预处理中文件的内
   容复制到当前文件中，我们可以查看.i文件里面的内容
2. compile(g++ -Sc demo1.i) 生成编译的文件此时后缀为.s
3. link(g++ demo1.o -o main) 链接，生成可执行文件

其他预处理方式：

```
#if 0 //这里也可以是1
... // 如果是0，则内部的代码会忽略， 可以预处理 g++ -E后查看i文件的内容, 会发
现里面没有代码
#endif
```

# day4 控制流语句

## while & for 循环 

```
// while 格式

while ()
{
code
}

// for 格式

for (int var; var < 10; ++var)
{
code
}
```

- [参考代码1](./code/day4/demo1.cpp) 
- [参考代码2](./code/day4/demo2.cpp) 
- [参考代码3](./code/day4/demo3.cpp) 

## if else 语句

```
// if else 格式
if ()
{}
else
{}

// if else if else 格式

if ()
{}
else if ()
{}
else if ()
{}
else
{}
```

- [参考代码1](./code/day4/demo4.cpp) 
- [参考代码2](./code/day4/demo5.cpp) 

# day5 变量和基本类型

cpp中含有很多数据类型，如：字符型，整型，浮点数等。这些数据的唯一本质区别就在于，
所占的内存大小不一样.

- [变量类型大小](./code/day5/demo1.cpp) 

> 内存通常都是以字节 byte来进行计算, 1个字节为8比特bits, 计算机只能直接访问字
> 节，而不能访问bit，所以计算机中是按字节进行位置编码来访问。

- 注意：单引号用来存放字符， 双引号用来存放字符串

cpp中几种常见的数据类型：
```
char long int (long long) float double
每个数据类型都可分为有符号和无符号
unsigned

float a = 1.2f; // float要这样定义
double a = 1.2;

// char 类型只能存放到128以内的数值，打了就会报错，因为char为8bits
char char_a = 'A', char_b = 65; // char类型也可以赋值为数字， 只不过编译器认为这个变量就是字符，因此会把这个数值转换成字母，
int int_a = 'A', int_b = 65;
std::cout << "char_a is " << char_a << std::endl;
std::cout << "char_b is " << char_b << std::endl;
std::cout << "int_a is " << int_a << std::endl;
std::cout << "int_b is " << int_b << std::endl;
```

# day6 函数 和 头文件

## 函数

cpp中的函数定义，有下面几个步骤：

```
1. 定义函数的类型 int void等
2. 为函数设置参数
3. 编写函数的内容

```
- [参考代码](./code/day6/demo1.cpp) 

## 头文件

当我需要从一个文件中，调用另一个文件中的函数时，可以直接调用。当我有多个文件都
需要调用同一个同一个函数时，则将这个函数写入头文件中会比较方便。

从一个文件调用另一个文件的函数的方法：

```
vi demo2.py // 在demo2中写一个函数, 然后在demo3中调用

#include <iostream>

void Log(const char* message) // 如果直接定义char类型，则只能输入单个字符，这
样就能输入多个字符
{
    std::cout << message << std::endl;
}

vi demo3.py

void Log(const char* message); // 这里必须要定义，这样才能找到, 注意不能丢失分
号;

int main()
{
   Log("Hello world");
}
```

现在使用头文件来实现上面的方法

```
// vi test.h

void Log(const char* message);
void InitialLog();

// vi demo3.cpp

#include "test.h"

int main()
{
    InitialLog();
    Log("Hello world");
}

#include <iostream>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

// vi demo2.cpp

void InitialLog()
{
    std::cout << "InitialLog" << std::endl;
}

g++ demo3.cpp demo2.cpp // 注意demo2 & 3 都要编译
```

## 头文件中的#pragma once

为什么头文件需要pragma once呢？因为防止函数被重复定义，否则会报错，代码中，我
们在头文件中，如果重复定义函数，没有出现什么问题，当我们在头文件中添加结构体

```
struct Player{};

然后在main函数里面, 调用两次
#include "test.h"
#include "test.h"

然后则会出现错误
```

解决方法就是在每个头文件中添加`#pragma once`

或许我们不会傻乎乎地调用同一个头文件两次，但是谁也不能保证两个头文件中不会出现
重复定义。

## 预处理中`""` 和 `<>` 的区别

1. 使用尖括号时，编译器会从默认的路径中进行查找文件，当然我们也可以自己手动添
   加路径
2. 使用引号则出现在相对路径，如`../test.h`, `test.h`

# TODO

- [ ] cpp中的link原理

**Situation3**:(多目录多文件)

[参考视频](https://www.bilibili.com/video/BV16V411k7eF?p=4) 

**Situation4**:(多目录多文件标准工程)

[参考视频](https://www.bilibili.com/video/BV16V411k7eF?p=5) 
