# 目录

<!--ts-->
* [目录](#目录)
* [cpp推荐](#cpp推荐)
* [学习路线](#学习路线)
* [环境搭配](#环境搭配)
   * [Linux](#linux)
   * [Mac](#mac)
   * [运行逻辑](#运行逻辑)
   * [CMake](#cmake)
* [基础知识讲解](#基础知识讲解)
   * [计算机内存](#计算机内存)
   * [堆和栈的知识讲解(TODO)](#堆和栈的知识讲解todo)
* [day1 HelloWorld](#day1-helloworld)
* [day2 Cmake](#day2-cmake)
* [day3 Link and Compile](#day3-link-and-compile)
* [day4 控制流语句](#day4-控制流语句)
   * [while &amp; for 循环](#while--for-循环)
   * [if else 语句](#if-else-语句)
* [day5 变量和基本类型](#day5-变量和基本类型)
   * [命名空间](#命名空间)
   * [基本变量](#基本变量)
   * [字面值常量](#字面值常量)
   * [转义序列](#转义序列)
   * [打印数据类型](#打印数据类型)
* [day6 函数 和 头文件](#day6-函数-和-头文件)
   * [函数](#函数)
   * [函数声明 变量声明](#函数声明-变量声明)
   * [头文件](#头文件)
   * [头文件中的#pragma once](#头文件中的pragma-once)
   * [预处理中"" 和 &lt;&gt; 的区别](#预处理中-和--的区别)
* [day7 控制流语句 continue return break](#day7-控制流语句-continue-return-break)
* [day8 指针 引用](#day8-指针-引用)
   * [指针](#指针)
   * [引用](#引用)
   * [常量指针和指针常量](#常量指针和指针常量)
* [day9 类](#day9-类)
   * [类的定义](#类的定义)
   * [类的声明(包括前置声明)](#类的声明包括前置声明)
   * [class &amp; struct 的区别](#class--struct-的区别)
   * [用类创建一个基本日志功能](#用类创建一个基本日志功能)
* [day10 static extern](#day10-static-extern)
   * [全局变量中的static](#全局变量中的static)
   * [类中的static](#类中的static)
   * [局部静态 local static](#局部静态-local-static)
* [day 11](#day-11)
   * [enumeration 枚举类型](#enumeration-枚举类型)
   * [变量说明](#变量说明)
* [day12](#day12)
   * [构造函数 constructor](#构造函数-constructor)
   * [destructor 析构函数](#destructor-析构函数)
   * [构造函数的声明](#构造函数的声明)
   * [继承](#继承)
* [day13](#day13)
   * [数组](#数组)
      * [一维数组](#一维数组)
      * [多维度数组](#多维度数组)
      * [指向数组的指针](#指向数组的指针)
      * [传递数组给函数](#传递数组给函数)
      * [从函数返回数组](#从函数返回数组)
   * [字符串](#字符串)
* [day14 知识巩固](#day14-知识巩固)
* [day15](#day15)
   * [字符串容器(string补充)](#字符串容器string补充)
      * [字符串初始化](#字符串初始化)
      * [string赋值操作](#string赋值操作)
      * [字符串的输入流与输出流](#字符串的输入流与输出流)
      * [字符串拼接](#字符串拼接)
      * [用户输入字符串](#用户输入字符串)
      * [字符串的查找和替换](#字符串的查找和替换)
      * [获取字符串长度](#获取字符串长度)
      * [字符串大小比较](#字符串大小比较)
      * [字符串的拼接](#字符串的拼接)
      * [字符串遍历](#字符串遍历)
      * [字符串内容的存改](#字符串内容的存改)
      * [字符串的插入与删除](#字符串的插入与删除)
      * [字符串子串获取](#字符串子串获取)
   * [vector](#vector)
      * [使用](#使用)
      * [定义和初始化](#定义和初始化)
      * [向vector中添加元素](#向vector中添加元素)
      * [其他vector操作](#其他vector操作)
      * [迭代器(遍历)](#迭代器遍历)
      * [存放自定义类型数据](#存放自定义类型数据)
      * [容器的嵌套](#容器的嵌套)
      * [函数返回和读取一个张量](#函数返回和读取一个张量)
      * [向量的拷贝](#向量的拷贝)
   * [数组补充](#数组补充)
      * [数组中的拷贝](#数组中的拷贝)
      * [获得数组的长度(begin end)](#获得数组的长度begin-end)
* [day16 表达式](#day16-表达式)
   * [运算符](#运算符)
      * [常见运算符](#常见运算符)
      * [sizeof 运算符](#sizeof-运算符)
      * [typeid运算符](#typeid运算符)
      * [逗号运算符](#逗号运算符)
   * [类型转换](#类型转换)
   * [隐式转换：(看操作符是左结合律还是右结合律)](#隐式转换看操作符是左结合律还是右结合律)
   * [显式转换(强制类型转换)](#显式转换强制类型转换)
* [day17 语句](#day17-语句)
   * [空语句](#空语句)
   * [程序块](#程序块)
   * [悬垂else](#悬垂else)
   * [switch语句](#switch语句)
   * [try语句块和异常处理](#try语句块和异常处理)
* [day18](#day18)
   * [递归](#递归)
   * [结构体](#结构体)
      * [结构体定义和声明](#结构体定义和声明)
      * [结构体数组](#结构体数组)
      * [结构体指针](#结构体指针)
      * [结构体嵌套结构体](#结构体嵌套结构体)
      * [结构体为函数参数和返回值](#结构体为函数参数和返回值)
      * [结构体中的const](#结构体中的const)
* [day19](#day19)
   * [内存分区](#内存分区)
   * [引用的补充](#引用的补充)
      * [cpp中变量和python中变量与内存关系](#cpp中变量和python中变量与内存关系)
      * [引用做函数的参数](#引用做函数的参数)
      * [引用作函数的返回值](#引用作函数的返回值)
      * [引用的本质](#引用的本质)
      * [常量引用](#常量引用)
* [day20](#day20)
   * [函数的声明(补充)](#函数的声明补充)
   * [函数占位参数](#函数占位参数)
   * [函数重载](#函数重载)
   * [类和对象](#类和对象)
      * [访问权限](#访问权限)
      * [练习](#练习)
   * [构造函数与析构函数的补充(构造函数的几种写法)](#构造函数与析构函数的补充构造函数的几种写法)
* [day21](#day21)
   * [复制构造函数的调用时机](#复制构造函数的调用时机)
   * [构造函数的调用规则](#构造函数的调用规则)
   * [深拷贝与浅拷贝](#深拷贝与浅拷贝)
   * [初始化列表](#初始化列表)
   * [类对象的调用顺序](#类对象的调用顺序)
   * [静态成员函数(static)](#静态成员函数static)
   * [c++对象模型和this指针](#c对象模型和this指针)
* [day22](#day22)
   * [空指针访问成员函数](#空指针访问成员函数)
   * [const修饰成员函数](#const修饰成员函数)
   * [友元(friend)](#友元friend)
* [day 23](#day-23)
   * [cpp模板](#cpp模板)
   * [普通函数与模板的调用规则](#普通函数与模板的调用规则)
   * [模板的局限性(TODO)](#模板的局限性todo)
   * [类模板](#类模板)
   * [类模板中成员函数的调用时机](#类模板中成员函数的调用时机)
   * [类模板做函数参数](#类模板做函数参数)
* [day24](#day24)
   * [初识STL](#初识stl)
   * [vector容器](#vector容器)
* [TODO](#todo)

<!-- Added by: zwl, at: 2021年 9月12日 星期日 21时41分39秒 CST -->

<!--te-->

# cpp推荐

教程推荐

- 【B站】https://space.bilibili.com/364152971/video?tid=0&page=3&keyword=&order=pubdate
- 【菜鸟教程基本语法】https://www.runoob.com/cplusplus/cpp-tutorial.html

Github:

- [Cpp Primer 学习](https://github.com/applenob/Cpp_Primer_Practice) 
- [Cpp things](https://github.com/Light-City/CPlusPlusThings) 

书籍推荐：

- C++语言的设计和演化
- c++primer
- effective c++
- 电子书网站1: https://github.com/weaiken/ebook
- 电子书网站2: https://github.com/justjavac/free-programming-books-zh_CN
- 电子书网站3: https://github.com/itdevbooks/pdf


[【↥ back to top】](#目录)
# 学习路线

1. 语言本身学习

c++ 的重点主要是两个，指针和内存管理， 推荐书籍 c++ prime plus, 学习语言要快速
学完，不要拖太久.

2. 基础四大件的学习

四大件包括：1. 数据结构与算法(大话数据结构)，2. 计算机网络(TCP/IP详解) 3. 操作系统，4. 设计模式(大话设计模式)

3. 编程和实践

主要包括下面几个步骤：1. Linux的学习，包括脚本学习 2. 编程调试，包括gcc编译，
makefile(跟我一起写makefile)，gdb调试(debugging with gdb 中文版) 

4. linux 环境编程(unix 环境高级编程)


[【↥ back to top】](#目录)
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

**cpp 程序运行分为以下几个步骤** :

- 预处理：宏定义展开、头文件展开、条件编译，这里并不会检查语法
- 编译：检查语法，将预处理后文件编译生成汇编文件
- 汇编：将汇编文件生成目标文件（二进制文件）
- 链接：将目标文件链接为可执行程序

## CMake

make工具分成好多种，不同平台下如Windows，Linux的make语法是不一样的，为了解决跨
平台的问题，开发出了cMake工具.

cMake 的流程是：
1. 根据cMake语法，写成CMakeLists.txt文件
2. 输入cmake命令，自动生成Makefile文件
3. 输入make命令，将cpp文件进行编译，生成可执行文件
4. 运行可执行文件

[参考视频](bilibili.com/video/BV16V411k7eF?from=search&seid=16111676939071467556) 

[【↥ back to top】](#目录)
# 基础知识讲解

## 计算机内存

- [参考视频](https://www.youtube.com/watch?v=EmMI-1FH4XQ&t=193s) 

因为电脑如果直接使用cpu与硬盘进行数据通信，由于硬盘的读写相比于cpu速度很慢，所以需要通
过内存来进行读写。

- 计算机内存又叫做RAM(random access memory), 内存从硬盘中读取程序数据, 然后与cpu
进行交互.
- 内存一般用来存放二进制指令，与软件的数据, 断电就消失

- 内存中最小单位是比特(bit)每个bit只能存储0或1，8个bits组成一个字节(byte), 为
  了方便计算，内存会给每个字节分配一个地址，而不是每个比特一个地址，所以可以看
  成内存的最小单位是字节, 每个内存的地址称作内存地址

- 内存地址是用16进制表示，查看下面内存大小

```
# 假设内存地址从
0x00000000
0xFFFFFFFF

分析：

因为内存中最小的单位是字节，每个字节8比特，所以从0x00000000到0x0000000F, 经过
了16个字节，所以上面地址总字节大小为16^8字节，也就是2^32次方字节.
```

- 程序是如何表示内存的呢？

```
内存地址  字节
1000:10F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
1000:1100 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 
1000:1110 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 

真实情况中，内存中是以16个字节排成一排，比如从10F0到1100就是16个字节，从内存地
址开始往右，可以得到具体每个内存地址，如第一排就是从10F0到10FF一共16个字节

00表示1个字节，因为1个字节是8比特，所以第一个0可以表示4位二进制，2^4刚好是16.
所以一个字节可以存放2^8次方大小的数
```

- 内存大小除了使用byte，还可以使用KB，MB, GB ，其中1KB=1024bytes， 1MB=1024KB
  ， 1GB = 1024MB

## 堆和栈的知识讲解(TODO)




[【↥ back to top】](#目录)
# day1 HelloWorld

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


[【↥ back to top】](#目录)
# day2 Cmake

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


[【↥ back to top】](#目录)
# day3 Link and Compile

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


[【↥ back to top】](#目录)
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

补充：for循环中可以三个都是空，即里面的条件不写出来

```
for (; condition ; )
{
...
}
```

- [参考代码](./code/day4/demo6.cpp) 

补充, 范围for语句：(主要遍历容器或者序列, cpp11引入的)

```
for (declaration : expression) // expression 必须是一个序列， 数组， vector，
  or string类型的对象
  statement  // statement 可以是单独的一个语句，也可以是一个语句块
```
常用的写法：
```
vector<int> v = {0, 1, 2, 3}
for (auto &r : v)
{
    r *= 2; // 将v中的每个元素值翻倍
}
```

## if else 语句

if 语句通常有比较大的开销，程序运行的时候，通常先把源码放到内存中，分支告诉机
  器，要先从哪个内存地址开始执行，因此需要跳转，会占用比较多的内存。

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


[【↥ back to top】](#目录)
# day5 变量和基本类型

## 命名空间

- [参考1](https://blog.csdn.net/cherishinging/article/details/73810785) 
- [参考2](https://blog.csdn.net/qq_40416052/article/details/82528676?utm_medium=distribute.pc_relevant_t0.none-task-blog-2~default~BlogCommendFromMachineLearnPai2~default-1.control&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-2~default~BlogCommendFromMachineLearnPai2~default-1.control) 

总结：就是为了避免重复，当文件中想引用两个人写的代码，两份代码中有重复的函数名
或者变量名, 如果按下面的方式，那么程序就会报错

```
#include "PeopleA.h"
#include "PeopleB.h"

...
```

解决办法就是使用命名空间：在写代码的时候加入下面语句

```
namespace peopleA;
```

namespace是定义命名空间锁必须写的关键字，AA是自己制定的命名空间的名字。如果在程序中要使用a和b，必须加上命名空间名和作用域分辨符::，如AA::a，AA::b，这种用法称为命名空间限定。
命名空间的作用是建立一些互相分隔的作用域，把一些全局实体分隔开来，以免产生名字冲突。

调用命名空间：

```
using namespace std;
using std::cin;
```

命名空间例子：

```
namespace version1
{
void FindOdd()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for (auto &i : vec)
    {
        if (i & 01)
            i *= 2;
    }
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;
}
}

namespace version2
{
void FindOdd()
{
    cout << "version2" << endl;
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for (auto &i : vec)
    {
        cout << (i & 01 ? i*=2:i) << " ";
    }
    cout << endl;
}
}

int main()
{
    //test();
    version2::FindOdd();
}
```



## 基本变量

cpp中含有很多数据类型，如：字符型，整型，浮点数等。这些数据的唯一本质区别就在于，
所占的内存大小不一样.

- [变量类型大小](./code/day5/demo1.cpp) 

注意：计算机中，存储的最小单位是1字节bytes，1字节是8比特bits，8bits刚好是128，
可以存储下ASCII码.

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
## 字面值常量

整型字面值:

像32，3.14这样的数字，称作字面值常量，即 `变量=字面值常量`，其中32这种是int类
型的字面值常量，3.14是double类型的字面值常量。

整数的字面值常量，可以用

- 2进制，
- 8进制(024)
- 10进制(20)
- 16进制表示(0x16)

通过后缀，可以将字面值常量转换成long，unsigned, unsigned long类型

- 20L(long)
- 20U(unsigned)
- 20UL(unsigned long)

浮点数字面值：用科学计数法或者10进制表示

- 3.14f(3.14e0f)(3.14E0f)
- 0.(0e0)

布尔字面值：

- true false

非打印字符字面值：

- \n
- \t
- \r

字符字面值：

- 单引号 'a'

字符串字面值：

- "Hello world"

字符串拼接
```
std::cout << "Hello " 
"world" << std::endl;
```

多行字面值：

```
st\
d:cout << "hello world" << std::e\
ndl;
```

## 转义序列

参考：https://blog.csdn.net/zzuchengming/article/details/52745536

总结：字符串中，`\x` 后面加16进制的数字，后面数字都会用到，对应ascii码表， `\`
后加1-3位的8进制数值，第四个数字就不算了，对应ascii码表.

```
cout << "\x1234" << endl;
cout << "\1234" << endl;
```

## 打印数据类型

- 使用typeid(variable).name(), 不过这样打印的是类型的缩写

```
void GetType(char data)
{
    cout << "input data type is: " << typeid(data).name() << endl;
}


int main()
{
    float num = 0.;
    char name = 'A';
    GetType(name);
    cout << "input data type is: " << typeid(GetType).name() << endl;
}
```

[【↥ back to top】](#目录)
# day6 函数 和 头文件

## 函数

cpp中的函数定义，有下面几个步骤：

```
1. 定义函数的类型 int void等
2. 为函数设置参数
3. 编写函数的内容

```
- [参考代码](./code/day6/demo1.cpp) 

注意：cpp中不允许在函数内再定义函数(下面方式是不允许的)

```
void func()
{
    void func1()
    {}
}
```

## 函数声明 变量声明

不管这个函数有没有，在哪个位置，我们在开头先声明，请看下面的情况:

- situation1

```
int main()
{
    const int size = 5;
    int list[size] = {2, 3, 4, 5, 7};
    cout << "input average is " << GetAverage1(list, size) << endl;
}

int GetAverage1(int list[], int size)
{
    int sum = 0, agv;
    for (int i = 0; i < size; i++)
    {
        sum += list[i];
    }
    agv = sum / size;
    return agv;
}

```

- situation2, 不管该函数在哪个位置，都没有问题

```
int getaverage1(int list[], int size); // 函数声明

int main()
{
    const int size = 5;
    int list[size] = {2, 3, 4, 5, 7};
    cout << "input average is " << getaverage1(list, size) << endl;
}

int getaverage1(int list[], int size)
{
    int sum = 0, agv;
    for (int i = 0; i < size; i++)
    {
        sum += list[i];
    }
    agv = sum / size;
    return agv;
}
```

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



[【↥ back to top】](#目录)
# day7 控制流语句 continue return break

这几个语句和python中差不多，就是continue会跳过下面代码，进入下一个循环

return 是退出当前函数，后面代码都不会执行

break是退出当前循环，执行循环外的代码



[【↥ back to top】](#目录)
# day8 指针 引用

## 指针

指针通常用来进行内存管理，指针变量里面存放的是内存的地址，每个地址只是一串数字
而已。可以想象内存其实就是一条笔直的街道，这个街道两边有很多房间，每个房间都有
地址，我们往这个房间里面送东西进去和拿东西出来，也就是读写操作.

```
使用int* p; 来创建指针
或者使用 int *p 这两种写法没有区别

使用&p来访问变量的地址

使用int** p;来创建二级指针
```

[参考代码](./code/day8/demo1.cpp) 

```
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
```

这段代码的作用是修改p1内存中的数值

**指针变量占多大内存呢**？

> 如果是在32位的操作系统，那么所有类型的指针变量都是4个字节，如果是64位的操作
> 系统，所有类型指针变量占8个字节

**空指针** :

```
int *p = NULL;
```

> 空指针指向的内存编号为0，空指针是为了初始化不知道指向什么位置的指针，指针都
> 最好初始化。空指针都是不可以访问的，因为0-255内存地址，都是系统占用的，所以
> 不能修改里面的值

**野指针** : 野指针指，我们随意初始化指针位置，企图查看没有申请的内存地址里面
的内容

```
int *p = (int)0x1100;
cout << *p << endl;
```

上面句子在语法上是没问题，但是代码运行上会出错，因为我们没有申请这个地址，企图
查看没有申请的地址的内容.

## 引用

引用并不占用内存，引用只是指针的另一个名字

[参考代码](./code/day8/demo2.cpp) 

## 常量指针和指针常量

常量指针：只能读取内存的数据，但是不能修改内存的数据

```
int const *p;
const int *p;
```

指针常量：指针指向的位置不能变，但是内存的内容可以改变

```
int* const p;
```

**记忆** : 看const是修饰什么，如`const *p` const修饰的是常量，说明不能修改指针的值，但地址可以改变;`int* const p` const修饰的是指针，说明指针指向的地址不能变, 但内部的数据可以改变

[【↥ back to top】](#目录)
# day9 类

## 类的定义

类的作用是面向对象编程，有属性和方法两个主要点。假如现在要写一个游戏，我们需要
为玩家设定一些属性，和方法，比如行走，跑等。为了方便代码和维护，我们将这些统一
在一个类中.

cpp中创建一个类的方法为：

```
class Player // 定义一个类
{
  public: // public 是为了让main函数中能访问类对象中的属性
    int x, y;
    int speed;
}; // 这里一定要分号

int main()
{
    Player player; // 想int a; 一样实例话一个对象
    player.x = 2; // 给对象里的属性重新设置
    player.y = 3;
    player.speed = 4;
}
```

- 为了让main函数能访问到类中的属性，必须添加public, 否则属性是私有的

```
class Player
{
  public:
    int x, y;
    int speed;

    void move()
    {
        x += speed; // 这里的x不是局部变量，相当于python中的self.x, 所以这里可
        以改变实际的值
        y += speed;
    }
};

int main()
{
    Player player;
    player.x = 2;
    player.y = 3;
    player.speed = 2;
    player.move();
    std::cout << "x is " << player.x << '\n'
    << "y is " << player.y << std::endl;
}
```

类方法也可以采用引用

```
void move(Player& player1) // 这里必须传入实例对象进去, 这里采用了引用
{
    player1.x += player1.speed;
    player1.y += player1.speed;
}

int main()
{
    Player player;
    player.x = 2;
    player.y = 3;
    player.speed = 2;
    player.move();
    std::cout << "x is " << player.x << '\n'
    << "y is " << player.y << std::endl;

    move(player);
    std::cout << "x is " << player.x << '\n'
    << "y is " << player.y << std::endl;

}

```

如果不使用引用：

```
void move(Player player1) // 这里必须传入实例对象进去
{
    player1.x += player1.speed;
    player1.y += player1.speed;
}

```

则相当于创建了一个新的类对象，相当于局部的，没有在之前的上面修改, 如果不是在类
里面写方法, 要使用引用

## 类的声明(包括前置声明)

通常我们是在头文件中进行声明操作，类的声明方式如下, 假如现在有个类：

```
class Person
{
public:
  int age;
  string name;
public:
Person(int age=0, string name="miki")
{
  this->age = age;
  this->name = name;
}

void showInfo()
{
  cout << age << endl;
  cout << name << endl;
}
};
```

这个类中包括了构造函数初始化，以及属性和方法三种结构, 则声明如下：

```
class Person
{
  public:
    int age;
    string name;
  public:
    Person(int age=0, string name="miki");
    void showInfo();
  }
```

前置声明：当我们有两个类的时候，两个类需要互相调用的时候

通常写法如下：
```
class A
{

};

class B
{
  public:
  A a; // 如果想在B类中通过A类创建一个对象，那么class A必须先定义
};
```

前置声明只允许类创建一个声明或者指针，不能创建一个对象, 下面写法是错误的

```
class A;
class B
{
  public:
  A a; // 如果想在B类中通过A类创建一个对象，那么class A必须先定义
};

class A
{

};
```

正确写法应该如下：

```
class A;
class B
{
  public:
  A *a; 
};

class A
{

};

```

- [前置声明代码请参考demo6](./code/day22/demo6.cpp) 


## class & struct 的区别

两者唯一的区别就是：

```
struct Player1
{
  public:
    int x, y;
};

class Player2
{
  private:
    int x, y;
};

int main()
{
return 0;
}
```
- 当我们初始化class或者struct的时候，class默认是private的，而struct默认是
  public的, 这就是唯一的区别, 其他的和class是一样的

## 用类创建一个基本日志功能

- [参考代码](./code/day9/demo3.cpp) 

[【↥ back to top】](#目录)
# day10 static extern

static 有用在两个地方，一个是类结构体里面，一个是类的外面

## 全局变量中的static

如果不想在一个文件中调用另一个文件的变量时，使用static

假如现在有两个文件：

- demo1.cpp 文件只有下面一行

```
int value = 10;
```

- demo2.cpp 文件内容

```
int value = 10;

int main()
{
    std::cout << "value: " << value << std::endl;
}
```

```
g++ demo1.cpp demo2.cpp
```

如果对这两个文件进行编译，那么会出现错误，因为cpp中不允许有两个同样名字的全局
变量.

解决方法：(在外面加上static)

```
static int value = 10;
```

- static 允许该变量只作用与当前的文件内, 如果想在另一个文件内调用这个文件的全
  局变量，那么不需要static

- 如果想从一个文件中调用另一个文件中的变量或者函数

```
extern int Value;

int Value = 10;

```

同样，也可以对函数使用static

```
vi demo1.cpp
void test1()
{}

static void test2()
{}

vi demo2.cpp

extern int Value;
extern void test1();
```

## 类中的static

如果在类中对变量使用static, 那么如果实例化多个对象，这些对象如果对该static变量
修改，都会对其造成影响，因为这些变量使用的是同一内存.

[参考代码](./code/day10/demo3.cpp) 

```
struct Player
{
    static int x, y;
    void Print()
    {
        std::cout << "x is " << x << std::endl;
        std::cout << "y is " << y << std::endl;
    }
};

int Player::x;
int Player::y;
```

注意以下几点:

- 如果类对象中有static，那么这些变量就不是类中的变量了，可以看成全局变量
- 因此我们必须在外部重新定义，否则会报错，并说明这些变量的作用域是Player类中

因此这样写才是最标准的，这些变量严格上不是类的变量了

```
Player::x = 5;
Player::y = 7;
```

如果是类方法中的函数，就不需要先定义

```
static void Print()
{
  std::cout << "x is " << x << std::endl;
  std::cout << "y is " << y << std::endl;
}
Player::Print();
```

## 局部静态 local static

局部静态作用在函数中，当我们在函数中定义了一个static变量，那么这个变量就会一致
作用在这个函数中，内存是共享的.

[参考代码](./code/day10/demo4.cpp) 

```
void Function()
{
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main()
{
    Function();
    int i = 1; // 可以看到外部函数重新定义了也没有影响
    Function();
    Function();
    Function();
}
```



[【↥ back to top】](#目录)
# day 11 

## enumeration 枚举类型

当有些变量只有有限个时，为了方便管理，使用枚举类型

枚举类型语法：

```
enum name : int  // name 可以是任何，冒号后面指定数据类型，不能是浮点型
{
    A, B, C // 默认会赋值A为0， B为1
};

name variable_name = A or B or C // 相当于int var_name
```

**对之前的log日志进行修改**

[log日志代码改进](./code/day11/demo2.cpp) 

注意以下几点:

```
1. 使用枚举是为了方便管理变量
  public:
    enum Level : int
    {
        LevelWarning = 0, LevelInfo = 1, LevelError = 2
    };

2.  限制这个变量只能使用枚举中的
  private:
    Level LogLevel_m;

3. 限制输入的变量也只能是枚举

    void SetLevel(Level level)
    {
        LogLevel_m = level;
    }
```

## 变量说明

- 局部变量
- 全局变量

如果定义了一个变量时，局部变量和全局变量都会自动初始化. 不同类型的数据，全局变
量初始化是固定的，比如全局变量中，int都会初始化为0，局部变量的初始化是随机的.

[初始化参考代码](./code/day11/demo3.cpp) 


[【↥ back to top】](#目录)
# day12

## 构造函数 constructor

参考：https://www.runoob.com/cplusplus/cpp-constructor-destructor.html

就像python类中的init一样，我们需要类在实例化的同时，会自动执行一些函数，这个在
cpp中叫做构造函数.

构造方法如下：

- 构造函数出现在类中
- 构造函数的名字必须和类对象的名字一样

```
class Player
{
  public:
    float X, Y;

    Player ()
    {
        X = 0.0f;
        Y = 0.0f;
    }

    void Print()
    {
        cout << X << " " << Y << endl;
    }
};

```

上面这个构造函数是不带参数的，如果需要带参数，构造方法如下：

- [参考代码1](./code/day12/demo1.cpp)
- [参考代码2](./code/day12/demo2.cpp)

```
class Player
{
  public:
    float X, Y;

    Player (float x, float y)
    {
        X = x;
        Y = y;
    }

    void Print()
    {
        cout << X << " " << Y << endl;
    }
};
```

## destructor 析构函数

和构造函数相反，当类对象被销毁的时候， 这个函数会自动执行，就像python类中的
delete魔法方法一样.

注意：析构函数只能实现一个，类中不能写两个析构函数，并且析构函数不能带任何参数

```
    Player ()
    {
        X = 0.0f;
        Y = 0.0f;
        cout << "Creat constructer" << endl;
    }

    ~Player ()
    {
        cout << "delete constructer" << endl;
    }
```

构造方法就是在类名字前加一个`~`

```
void Function()
{
    Player player1;
    player1.Print();
}

int main()
{
    Function();
    cin.get();
}
```

- 观察上面函数，可以发现我们首先调用了Function函数, 因为function函数是在栈上的，当这个函数调用完后，内存会
  释放掉

- [参考代码](./code/day12/demo3.cpp) 

## 构造函数的声明

参考：https://www.runoob.com/cplusplus/cpp-constructor-destructor.html

案例：[code](./code/day20/demo4.cpp) 

## 继承 

继承是为了避免写重复的代码，当我们创建了一个新类，通常只是在父类的基础上添加一
些新的东西.

- [参考代码](./code/day12/demo4.cpp) 

- 继承的方法如下, 前面要加一个public

```
class Player : public Entity
{
  public:
    const char* Name;

    Player (char *name)
    {
        Name = name;
    }

    void PrintName()
    {
        cout << Name << endl;
    }
};
```


[【↥ back to top】](#目录)
# day13

## 数组

### 一维数组

定义一个数组, cpp中的数组和python中的数组不一样，cpp中的数组只能存放同一类型的
数据, python中的数组可以存放不同类型的数据

定义的方法如下:

```
int list[5]; // 一定要声明array的大小
int list[5] = {1, 2, 3, 4, 5};
int list[] = {1, 2, 3, 4, 5};
```

- 当我们定义了一个array的时候，这个array其实就是一个指针，如list
- 数组是一块连续的内存

```
    int* pt = list;
    cout << "the first element is " << *pt << endl;
    cout << "the second element is " << *(pt + 1) << endl;
```

### 多维度数组

- 多维数组有下面几种定义方式
- 多维数组的内存使用也是连续的

```
    // 二维数组

    int d_2list[2][2];

    int d_2list[2][2] = {
        {1, 2},
        {3, 4},
    };

    int d_2list[2][2] = {1, 2, 3, 4};
    
    // 高维度数组
    int d_3list[2][2][2];
```

### 指向数组的指针

- 当我们创建一个数组的时候，数组名就是一个指针，指向第一个元素的地址
- 我们可以使用指针来访问array的元素值

```
int list[3];

相当于

int* list = &list[0]

*(list + 1)
```

[参考代码](./code/day13/demo1.cpp) 

### 传递数组给函数

即函数的形式参数为数组, 传递方式有如下三种:

```
// 形式参数是一个未定义大小的数组
int getaverage1(int list[], int size)


// 形式参数是一个定义大小的数组
int getaverage2(int list[size], int size)

// 形式参数是一个指针
int getaverage3(int *list, int size)
```

- [具体请看代码](./code/day13/demo2.cpp) 

### 从函数返回数组

要注意以下几点：

- 注意点1: 函数类型必须为指针类型，即返回的数据为指针
- 注意点2: 接受函数返回的指针，必须要定义一个指针
- 注意点3: 这里必须使用static，因为是局部变量，当函数调用完后，内部的内存都会销毁，使用static可以保证不会销毁，如果不加static， 那么打印出来的随机的，不是1 2 3

[参考代码](./code/day13/demo3.cpp) 

```
const int size = 3;
int* GetList(); // 注意点1, 定义一个返回类型为指针的函数

int main()
{
    int* list = GetList(); // 注意点2, 必须定义一个指针，接受函数的返回值
    for (int i = 0; i < size ; i++)
    {
        cout << i << ": " << list[i] << endl;
    }
}

int* GetList()
{
    static int list[size] = {1, 2, 3}; // 注意点3: 这里必须使用static，因为是
    局部变量，当函数调用完后，内部的内存都会销毁，使用static可以保证不会销毁，
    如果不加static， 那么打印出来的随机的，不是1 2 3
    return list;
}

```

## 字符串

- [参考代码](./code/day13/demo4.cpp) 

字符串的定义：(有下面三种)

```
    const char* name = "rike and morty";

    char name2[] = {'r', 'i', 'k', 'e', '\0'};

    char name3[] = {'r', 'i', 'k', 'e', 0};
```

字符串的访问和修改：

```
    char* name = "rike and morty";
    name[5] = "A"
```

使用内置的string模块

```
#include <string>
using namespace std;

    string name4 = "rike and morty";
    cout << "name4 is: " << name4 << endl;

    string name5 = string("rike") + "and morty"; // 两个字符串相加
    cout << "name5 is: " << name5 << endl;
```

[【↥ back to top】](#目录)
# day14 知识巩固

- [参考代码](./code/day14/demo1.cpp) 
- [参考代码](./code/day14/demo2.cpp) 


[【↥ back to top】](#目录)
# day15

## 字符串容器(string补充)

字符串容器是一个类对象，里面帮我们封装了很多方法，可以直接作用在字符串上

### 字符串初始化

```
const char* str = "Hello world"; // c语言的字符串格式
string s0 = "Hello world"; // 直接初始化string字符串
string s1(str); // 通过c语言的字符串，来初始化string
string s2(s0); // 拷贝构造，通过另一个string来初始化一个string
string s3(10, 'a'); // int num, char c 来复制多个字符，拼接成一个字符串
```

### string赋值操作

赋值操作有两种方法：
- 等号直接赋值
- assign()方法赋值

```
string s1 = s0;

string s2 = "hello world";

string s3;
s3 = 'a';

string s4;
//s4.assign("hello world", 5); // 将s2之前的字符串赋值
s4.assign(s2, 1); // 将s2后面的字符串赋值给s4

string s5;
s5.assign(s2);

string s6;
s6.assign(10, 'a');
```

- [参考代码](./code/day24/demo5.cpp) 


### 字符串的输入流与输出流

- std::cin 输入流 从第一个非空白字符开始, 到下一个空白字符结束
- std::cout 输出流
- 如果要读取一行，使用`getline(cin, stringVar)`，如果想读取一个单词，以空格分隔，直接使用`cin`

### 字符串拼接

拼接主要有两种操作：
- 重载运算符 `+=` 
- append 操作

```
    string s1 = "I";

    s1 += " love ";

    cout << s1 << endl;
    
    string s2 = " you";
    s1 += s2;
    cout << s1 << endl;   

    s1.append(".");
    cout << s1 << endl;   
    
    string s3 = "hello world";
    s1.append(s3, 0, 5); // 将s3从位置0开始，往后5个字符拼接到后面
    cout << s1 << endl;
```

- 参考代码：[code](./code/day24/demo6.cpp) 

字符串字面值和string类型不一样，字符串字面值是不能直接拼接的，

```
string("Hello") + "world" // 其中一个必须是string类型
```

### 用户输入字符串

- getline(InputStream, s)

接受输入，直到用户输入换行停止

```
// getline从输入流中得到一行字符串，然后赋值给s，输入流就是会在终端显示，要求
用户输入

using namespace std;
string s;
cout << "please input something: ";
while (getline(cin, s)) // cin是返回输入流
{
    cout << s << endl;
    cout << "please input something: ";
}
```

### 字符串的查找和替换

字符串的查找：

- find()
- rfind()

字符串的替换：

- replace()

例子：

```
string s1 = "ABCDABCD";
int pos = s1.find("A"); // 从左往右边查找

pos = s1.rfind("A"); // 从右往前查找

s1.replace(pos, 1, "1111"); // 从0号位置开始计算字符，将1个字符替换成后面4个字符
```

### 获取字符串长度

比较字符串长度 s.size() 和字符串大小

字符串长度：

```
s1.size() >= s2.size();
```

### 字符串大小比较

字符串大小：从左到右，逐个字符比较，ascii码比较大的那个.

```
s1.compare(s2);
```

### 字符串的拼接

```
void concate()
{
    string s = "", s1;
    while (cin >> s1)
    {
        s += s1 + " ";
    }
    cout << "input string is: " << s << endl;
}
```

### 字符串遍历

在cpp11中，使用下面方式遍历字符串, `for (auto c : string)`  

```
string s = "hello world";
string *c = &s;
cout << c << endl;
cout << *c << endl;
for (auto c : s)
{
    cout << c << endl;
}
```

如果想改变字符串里面的内容：

```
for (auto &c : s)
{
    if (c == ' ')
        continue;
    else
        c = 'X';
}
cout << s << endl;
```

上面这种写法是范围for语句，不同于传统的for语句，是cpp11的特性.

### 字符串内容的存改

字符串中每个单元是可以修改与访问的.

访问：
- at
- `[]`

```
// 读
string s1 = "hello world";
cout << s1[0] << endl;
cout << s1.at(0) << endl;

// 改
s1[0] = 'x';
s1.at(0) = 'x';
```

### 字符串的插入与删除

- insert()
- erase()

```
string s1 = "hello "
s1.insert(1, "11") // h11ello 

s1.erase(1, 2) // 从位置1开始，删掉后面两个字符
```

### 字符串子串获取

- substr()

```
string s1 = "hello";
string sub = s1.substr(0, 1) // h 从0开始，往后数1个字符
```

## vector

### 使用

```
#include <vector> // vector 本身是一个容器，是一个类模板
unsing std::vector;
```

### 定义和初始化

```
vector<int> ivec;  // vector后面加尖括号，里面设置类型

vector<int> v1;
vector<int> v2 = v1;
vector<int> v3{a, b, c, d...}
vector<int> v4 = {a, b, c, d...}
```

### 向vector中添加元素

```
v.push_back(e) // 在尾部添加元素
```

### 其他vector操作

- `v.size()` 返回元素的个数
- `v.push_back(t)` 在数组末尾添加元素
- `v[n]` 
- `v1 == v2` 
- `v1 != v2` 
- `<, <=, >, >=` 

### 迭代器(遍历)

所有容器都可以使用迭代器的功能, 我们可以通过下标来访问容器里面的元素内容，也可
以使用迭代器来访问容器内容。

使用迭代器：有迭代器的类型同时拥有返回迭代器的成员(begin & end)，begin成员负责
返回指向第一个元素的迭代器，end返回尾元素的下一个位置的迭代器，叫尾后迭代器，
尾后迭代器没什么意义，仅仅是个标记而已。

迭代器运算符：
| 操作                             | 作用                                                             |
|----------------------------------|------------------------------------------------------------------|
| *iter                            | 返回迭代器iter所指元素的引用                                     |
| iter++                           | 令iter指示容器中的下一个元素                                     |
| iter--                           | 令iter指示容器中的上一个元素                                     |
| iter1 == iter2  & iter1 != iter2 | 判断两个迭代器是否相等，如果相等，则两个迭代器指示的是同一个元素 |

迭代器类型：

准确来说是迭代器返回的类型是什么？(迭代器的类型 iterator and const_iterator)

```
string name = "miki zhu";
auto it = name.begin();
cout << "input data type is: " << typeid(it).name() << endl;
```

还有一种不用auto的方法初始化迭代器：

- [参考代码](./code/day24/demo1.cpp) 


遍历迭代器内容：

```
string name = "miki zhu";
for (auto it = name.begin(); it != name.end(); ++it)
{
    cout << *it << endl; // 使用*it返回引用
}
```

迭代器解引用：我们知道string对象中，有自己的一些方法，或者类对象中有自己的一些
方法，我们可以通过解引用继续调用类对象中的方法, 写法如下：

```
*(it).empty()
```

c++ 中定义了箭头运算符(->)

```
*(it).empty(); and it->empty(); 两个写法一样
```
### 存放自定义类型数据

主要有两种情况:
- 存放类对象
- 存放指针
- [参考代码](./code/day24/demo2.cpp) 

```
1. 存放自定义类型
vector<Person> v;

2. 存放指针
vector<Person*> v;
```

### 容器的嵌套

用vector容器实现一个二维数组, 注意要c++ 11 以后才能初始化

```
vector<vector<int> > v;

vector<int> v1 = {1, 2, 3};
vector<int> v2 = {4, 5, 6};
vector<int> v3 = {7, 8, 9};

v.push_back(v1);
v.push_back(v2);
v.push_back(v3);
```

- [参考代码](./code/day24/demo3.cpp) 
- 运行代码`g++ -std=c++11 demo3.cpp` 


### 函数返回和读取一个张量

- 函数返回一个张量

```
vector<int> Return()
{
    vector<int> vec = {1, 2, 3};
    return vec;
}
```

- 函数读取一个张量

```
void InputVec(vector<int> vec)
{
    for (auto &ele : vec)
        cout << ele << endl;
}
```

### 向量的拷贝

```
vector<int> vec = Return();
vector<int> vec1(vec);
```

- [参考代码](./code/day15/demo3.cpp) 

## 数组补充

### 数组中的拷贝

```
int array1[3] = {1, 2, 3};
int array2[3];
for (int i = 0; i < 3; i++)
    array2[i] = array1[i];
```

### 获得数组的长度(begin end)

首先要include模块：(下面三个都有begin和end函数)

```
#include<string>
#include<vector>
#include<iterator>
```

使用下面方式获取数组长度:

```
int arr1[] = {1, 2, 3};
int arr2[] = {2, 3, 4};

len1 = end(arr1) - begin(arr1);
len2 = end(arr2) - begin(arr2)
```

不能使用下面方式获得：(函数传入的是指针，不是数组，所以不能对指针使用begin)

```
bool CompareArray(int* array1, int* array2)
{
    int lengthA = end(array1) - begin(array1);
    int lengthB = end(array2) - begin(array2);
```

正确代码如下：

```
bool CompareArray(int* p1, int* p2, int* p3, int* p4)
{
    // 先比较两个array的长度是不是一样，不一样就返回false
    //int lengthA = sizeof(array1) / sizeof(array1[0]);
    //int lengthB = sizeof(array2) / sizeof(array1[0]);
    //cout << lengthA << ' '<< lengthB << endl;
    int lengthA = p2 - p1;
    int lengthB = p4 - p3;
    cout << lengthA << ' '<< lengthB << endl;
    if (lengthA != lengthB)
        return false;
    for(int i = 0; i < lengthA; i++)
    {
        if (*(p1 + i) != *(p2 + i))
            return false;
    }
    return true;
}

int main()
{
    //const int *array;
    //Init0();
    int A[] = {1, 2, 3},  B[] = {2, 3, 4};
    cout << CompareArray(begin(A), end(A), begin(B), end(B));
}
```


[【↥ back to top】](#目录)
# day16 表达式

表达式指：由一个或多个运算对象(变量或字面值)组合起来，求值得到结果。如`1+1=2`.

左结合律与右结合律：左结合率表示先对左边进行求值，反之亦然

## 运算符

### 常见运算符

运算符总的可以归类为：一元运算符(& and *)，二元运算符(+, - , *, /)，多元运算符
(函数调用), 一些运算符既可以作为一元运算，也可以作为二元运算，具体要看运算符的
上下文。

左值和右值：cpp中的左值返回的是一个对象，右值返回的是对象的值. 如输入流返回的
还是输入流对象，所以是左值，`1+1` 返回的就是对象的值 .

优先级：括号可以无视优先级, 有括号先看括号，无括号看优先级，优先级相同从右到
左

如何理解从右往左？

```
sizeof*p 相当于sizeof(*p)
```

逻辑运算符: 

| 运算符 | 用法         |
|--------|--------------|
| !      | !expr        |
| >      | expr > expr  |
| ==     | expr == expr |
| &&     | expr && expr |
| ||     | expr || expr |

`&&, ||` 分别是逻辑与，逻辑或


递增递减运算符：假设i初值为1

- `j = ++i` j = 2， i = 2 先递增, 再赋值
- `j = i++` j = 1， i = 2 先赋值，再递增

成员访问运算符：

```
string s1 = "hello world", *p = &s1;
auto n = s1.size();
n = (*p).size(); // 和下面等价
n = p->size();
```

条件运算符：

```
cond ? expr1 : expr2; // 首先求cond的值，如果条件为真，则求expr1的值并返回，否
则返回expr2

就像python中的

val = 1 if expr1 else 2
```

- 条件运算符可以嵌套使用

```
FinalGrad = (grade > 90) ? "high pass" : (grad < 60) ? "fail" : "pass";
```

位运算符：

| 运算符 | 功能   | 用法           |
|--------|--------|----------------|
| ~      | 位求反 | ~expr          |
| <<     | 左移   | expr1 << expr2 |
| >>     |        | expr1 >> expr2 |
| &      | 位与   | expr1 & expr2  |
| ^      | 位异或 | expr1 ^ expr2  |
| ｜     | 位或   | expr1 ｜expr2  |

左移运算符就是将位向左移动，右边补0，右运算符同理. 每移动一位是扩大两倍。

重载运算符：`<<, >>` 自己重新定义运算符的含义.

### sizeof 运算符

利用sizeof 可以获得数组元素的个数

```
sizeof(ia) / sizeof(*ia)
```

实战：

```
// 源代码
void FindOdd()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for (auto &i : vec)
    {
        if (i & 01)
            i *= 2;
    }
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;
}

// 代码优化
void FindOdd()
{
    cout << "version2" << endl;
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for (auto &i : vec)
    {
        cout << (i & 01 ? i*=2:i) << " ";
    }
    cout << endl;
}
```
### typeid运算符

如果想查看数据的类型，可以使用typeid().name()来查看，例子如下：

```
cout << typeid(T1).name() << endl;
cout << typeid(T2).name() << endl;
```

### 逗号运算符

逗号运算符常用在for循环中，从左往右依次求值，左侧的值结果丢弃，真正结果是右侧
表达式的值。

```
vector<int> cnt = ivec.size();
for(int ix = 0; ix != ivec.size(); ++ix, --cnt)
  ivec[ix] = cnt;
```

for循环中，ix递增，cnt递减，每次循环两个变量都相应改变，只要ix满足条件，就把元
素设置成cnt当前的值

## 类型转换

假设有如下定义：

```
char cval;
int ival;
unsigned int ui;
float fval;
double dval;
```

## 隐式转换：(看操作符是左结合律还是右结合律)

```
cval = 'a' + 3; // 因为+号为左表达式，所以先会计算左边，因为int比char大，将'a' 转换成整型int，
然后与3相加，再转换成char类型

fval = ui -ival * 1.0; // double 比int精度更高，所以ival会从int转换成double，
ui也会转换成double， 最后转换结果为float
```

## 显式转换(强制类型转换)

- [参考1](https://blog.csdn.net/luolaihua2018/article/details/111996610)
- [参考2](https://blog.csdn.net/kai_zone/article/details/102932887?utm_medium=distribute.pc_relevant.none-task-blog-2~default~baidujs_title~default-0.base&spm=1001.2101.3001.4242) 

假设:

```
int i;
double d;
```

书写表达式`i *= d`，使其执行整数类型的乘法而非浮点类型的乘法。

分析：

```
i = i * d; // 本来的执行过程是隐式转换，先将i转换成double类型，与d相乘，然后转
换成int类型
```

转换：

```
i *= static_cast<int>(d);
```

使用强制类型转换改写下列的转换语句：

```
int i; double d; const string *ps; char *pc; void *pv;

(a) pv = (void*)ps;
(b) i = int(*pc);
(c) pv = &d;
(d) pc = (char*)pv;
```

```
(a) pv = static_cast<void*>(const_cast<string*>(ps));
(b) i = static_cast<int>(*pc);
(c) pv = static_cast<void*>(&d);
(d) pc = static_cast<char*>(pv);
```

[【↥ back to top】](#目录)
# day17 语句

## 空语句

- 就一个分号
- 如果在程序的某个地方，语法上需要一条语句但是逻辑上不需要，此时应该使用空语句。相当于python中的pass

```
for (int i = 0; i < 5; i++)
    ;
```

## 程序块

- 用花括号括起来的语句和声明的序列就是块。
- 如果在程序的某个地方，语法上需要一条语句，而逻辑上需要多条语句，此时应该使用块

```
while (val <= 10) {
	sum += val;
	++val;
}
```
## 悬垂else

指的是这个else匹配的是最近没有匹配的if

## switch语句

- [参考链接](https://www.runoob.com/cplusplus/cpp-switch.html) 

语法结构如下：(如果某个条件满足，则会继续执)

```
switch(expression){
    case constant-expression  :
       statement(s);
       break; // 可选的
    case constant-expression  :
       statement(s);
       break; // 可选的
  
    // 您可以有任意数量的 case 语句
    default : // 可选的
       statement(s);
}
```

- switch 语句中的 expression 必须是一个整型或枚举类型，或者是一个 class 类型，其中 class 有一个单一的转换函数将其转换为整型或枚举类型。

- 当被测试的变量等于 case 中的常量时，case 后跟的语句将被执行(注意不会检查case是否满足条件，不满足也会执行)，直到遇到 break 语句为止。

- 当遇到 break 语句时，switch 终止，控制流将跳转到 switch 语句后的下一行。

- 不是每一个 case 都需要包含 break。如果 case 语句不包含 break，控制流将会继续后续的case，直到遇到 break 为止。

- 一个 switch 语句可以有一个可选的 default case，出现在 switch 的结尾。default case 可用于在上面所有 case 都不为真时执行一个任务。default case 中的 break 语句不是必需的。

参考代码：
```
char grade = 'D';
 
switch(grade)
{
case 'A' :
   cout << "很棒！" << endl; 
   break;
case 'B' :
case 'C' :
   cout << "做得好" << endl;
   break;
case 'D' :
   cout << "您通过了" << endl;
   break;
case 'F' :
   cout << "最好再试一下" << endl;
   break;
default :
   cout << "无效的成绩" << endl;
}
cout << "您的成绩是 " << grade << endl;
```

## try语句块和异常处理

- 参考：https://www.runoob.com/cplusplus/cpp-exceptions-handling.html

异常处理包括两个部分：

- 捕获异常(try catch两个关键字)
- 抛出异常(throw关键字)

关键字说明：

- 捕获异常的方法会使用 try 和 catch 关键字。try 块中放置可能抛出异常的代码，try 块中的代码被称为保护代码。
- 在您想要处理问题的地方，通过异常处理程序捕获异常。catch 关键字用于捕获异常。
- throw: 当问题出现时，程序会抛出一个异常。这是通过使用 throw 关键字来完成的。


```
try
{
   // 保护代码
}catch( ExceptionName e1 )
{
   // catch 块
}catch( ExceptionName e2 )
{
   // catch 块
}catch( ExceptionName eN )
{
   // catch 块
}
```
说明：如果 try 块在不同的情境下会抛出不同的异常，这个时候可以尝试罗列多个 catch 语句，用于捕获不同类型的异常。

```
try
{
   // 保护代码
}catch( ExceptionName e )
{
  // 处理 ExceptionName 异常的代码
}
```

上面的代码会捕获一个类型为 ExceptionName 的异常。如果您想让 catch 块能够处理 try 块抛出的任何类型的异常，则必须在异常声明的括号内使用省略号 ...，如下所示：

```
try
{
   // 保护代码
}catch(...)
{
  // 能处理任何异常的代码
}
```

cpp中的异常处理逻辑是这样的:
1. try代码块中放置可能会出现问题的代码块
2. throw 在try代码块中抛出异常
3. catch捕获throw抛出的异常

```
int main()
{
  try{
    if (item1.isbn() != item2.isbn()) // try中处理可能会出现的异常，然后抛出
      throw runtime_error("Data must refer to same ISBN");
    } catch (runtime_error err) { // catch 捕获异常
        cout << err.what() << "Try again?" << endl;
      }
}
```

[【↥ back to top】](#目录)


[【↥ back to top】](#目录)
# day18

## 递归

- 写一个计算阶层的函数

```
int fact(int i)
{
    try{
        if (i < 0)
            throw runtime_error("input num must be positive number");
    } catch (runtime_error err) {
        cout << err.what() << endl;
        return 1;
    }

    return (i == 1) ? 1 : i * fact(i - 1);
}
```

## 结构体

### 结构体定义和声明

结构体是用户自定义的数据类型，可以存放不同的数据类型

**声明** :

```
struct Student {string name; int age; float grade};
```

**使用** :

```
Student s1 = {"miki", 21, 80}; // 定义1

// 定义2

s1.name = "miki";
s1.age = 21;
s1.grade = 80;
```

### 结构体数组

**定义** : 

```
    struct student
    {
        string name;
        int age;
        float score;
    };

    // 定义结构体数组
    student arr[3] = {
        {"miki1", 21, 60},
        {"miki2", 22, 70},
        {"miki3", 23, 80},
    };
```

**访问并修改** :

```
    // 修改结构体数组
    arr[0].name = "miki0";

    // 打印结构体数组
    for (int i = 0; i < 3; i++)
        cout << arr[i].name << arr[i].age << arr[i].score << endl;
```

### 结构体指针

即通过指针访问结构体

定义结构体指针：

```
    struct student
    {
        string name;
        int age;
        float score;
    };
    student s1;
    student *p = &s1; // 这里指针必须是student类型

```

使用结构体指针访问：

```
    cout << p->name << p->age << p->score << endl;
```

### 结构体嵌套结构体

```
    struct student
    {
        string name;
        int age;
        float score;
    };

    struct teacher
    {
        string name;
        int age;
        student s1; // student 结构体必须出现在teacher结构体的后面
    };
    teacher t1;
    t1.name = "miki";
    t1.age = 32;
    t1.s1.name = "miki2";
    t1.s1.age = 22;
    cout << t1.name << endl;
    cout << t1.age << endl;
    cout << t1.s1.name << endl;
    cout << t1.s1.age << endl;
```

### 结构体为函数参数和返回值

作为函数的参数有两种传入方式：

- 值传入(作为形参, 不会修改原先的值)
- 地址传入(会修改原先的值)(并且可以节省内存，因为只传地址，不会复制)

```
struct student
{
    string name;
    int age;
    float score;
};

void PrintStudent1 (student s)
{
    cout << s.name << " " << s.age << " " << s.score << endl;
    s.age = 20;
}
void PrintStudent2 (student *s)
{
    cout << s->name << " " << s->age << " " << s->score << endl;
    s->age = 20;
}

void Struct_function()
{
    student s1 = { "miki", 32, 76 };


    PrintStudent1(s1); // 方式1 值传入
    cout << s1.name << " " << s1.age << " " << s1.score << endl;
    PrintStudent2(&s1); // 方式2 地址传入
    cout << s1.name << " " << s1.age << " " << s1.score << endl;
}

int main()
{
    Struct_functon();
}
```

### 结构体中的const

- 假如const后就不能修改里面的值

``` 
void PrintStudent1 (const student s)
{
    cout << s.name << " " << s.age << " " << s.score << endl;
    s.age = 20;
}
void PrintStudent2 (const student *s)
{
    cout << s->name << " " << s->age << " " << s->score << endl;
    s->age = 20;
}
```

[【↥ back to top】](#目录)
# day19

## 内存分区

程序在运行的时候，都是要先加载到内存中，然后才能被运行的，所以这就涉及到内存的
分区。

程序在加载到内存之前，代码区和全局区（data和bss）的大小就是固定的，程序运行期间不能改变，然后，运行可执行程序，操作系统把物理硬盘程序load（加载）到内存，除了根据可执行程序的信息分出代码区（text）、数据区（data）和未初始化数据区（bss）之外，还额外增加了栈区和堆区。

内存因此在程序运行中，主要分成下面几个部分：

- 代码区
- 静态区
- 堆
- 栈

**代码区** : 存放程序的代码，代码只是可读的, 代码区的代码是共享的，即使打开了
多个程序，内存不会复制好几份这个程序的二进制代码在内存中，这些程序共用一个内存

**静态区(全局区)** : 静态区的变量，要在程序执行完后才会释放，cpp中存放在静态区的变量有
如下(想下哪些变量，只有在程序运行完后才会释放就可以)

- 全局变量
- 静态变量
- 常量(const修饰的全局变量， 字符串常量)

不在全局区中的有：

- 局部变量
- const修饰的局部变量

```
int glob_a = 10;
int glob_b = 10;
const int c_glob_a = 10;
const int c_glob_b = 10;
static int s_glob_a = 10;


int main()
{
    int local_a = 10;
    int local_b = 10;
    
    const int c_local_a = 10;
    const int c_local_b = 10;

    static int s_local_a = 10;

    cout << "glob_a: " << (long)&glob_a << endl;
    cout << "glob_b: " << (long)&glob_b << endl;
    cout << "c_glob_a: " << (long)&c_glob_a << endl;
    cout << "c_glob_b: " << (long)&c_glob_b << endl;
    cout << "string const: " << (long)&"hello world" << endl;

    cout << "local_a: " << (long)&local_a << endl;
    cout << "local_b: " << (long)&local_b << endl;
    cout << "c_local_a: " << (long)&c_local_a << endl;
    cout << "c_local_b: " << (long)&c_local_b << endl;

    cout << "s_local_a: " << (long)&s_local_a << endl;
    cout << "s_glob_a: " << (long)&s_glob_a << endl;
}

glob_a: 4534468800
glob_b: 4534468804
c_glob_a: 4534464348
c_glob_b: 4534464352
string const: 4534464267
local_a: 140732681266764
local_b: 140732681266760
c_local_a: 140732681266756
c_local_b: 140732681266752
s_local_a: 4534468808
s_glob_a: 4534468812
```

从上面可以看出：static定义的不管是局部还是全局，变量周期都是整个程序，const会
根据变量是局部还是全局，只不过是内部的值不能被修改而已

**栈** : 函数中的变量就是存放在栈区域的，当函数调用完后，栈地址中的数据就会释
放，所以不要在函数中返回局部变量的地址

**堆* : 堆区域的数据是我们来管理他们的生命周期，使用new关键字来创建堆数据

```
// new 关键字的基本语法

// 创建类

struct vector()
{float x, y, z;};

vector Vec; // 堆上创建向量

int *p = new int(10); // new关键字返回的是一个地址，所以要指针来接收这个地址
int *arr = new int[10]; // 使用new关键字创建一个数组
vector* Vec = new vector; // 堆上创建向量


delete p; // 释放一个整型数据
delete[] arr; // 释放一个堆上的整型数组
delete vector;
```

## 引用的补充

cpp中的引用就是给该内存地址取另一个别名

### cpp中变量和python中变量与内存关系

在cpp中，可以直接通过变量，修改内存中的地址，但是在python中，并不可以直接通过
变量修改地址.

```
    int a = 10;
    int &b = a;

    cout << "a: " << (long)&a << endl;
    cout << "b: " << (long)&b << endl;

    b = 20;
    cout << "a: " << (long)&a << endl;
    cout << "b: " << (long)&b << endl;
```

下面两个a变量的地址不一样.

```
a = 10
print(id(a))
a = 20
print(id(a))
```

### 引用做函数的参数

我们知道函数中的形参修改，并不会影响到实参的值，如果要影响的话，可以通过将实参
的地址传入到函数中。现在我们可以通过引用来修改.

```
void swap1(int a, int b)
{
  temp = a;
  a = b;
  b = temp;
}

void swap2(int &a, int &b)
{
  temp = a;
  a = b;
  b = temp;
}

int a = 10;
int b = 20;
swap2(a, b); // 引用修改， 就相对于普通的定义中多了引用
swap1(a, b);
```

### 引用作函数的返回值

不能将局部变量作为引用返回，因为内存会释放

```
int& test() // 定义函数，返回引用
{
    static int a;
    return a;
}

int& a = test(); // 接收引用

test() = 100; // 引用的函数，可以作为左值
```

### 引用的本质

引用本质上就是指针常量，编译器在遇到引用这行代码，就会自动转换成指针常量

```
int a = 10;
int& b = a;

// 相当于下面, const 修饰指针，说明地址不能改变，但值可以改变

int* const b = a;
```

### 常量引用

前面我们通过引用，可以修改实参的值，但有时候我们不想修改，为了避免误操作，使用
常量引用.

```
void Print(const int& a)
{
  a = 100;
  cout << a << endl;
}

int a = 10;
Print(a); // 外部a的值不会修改
```


[【↥ back to top】](#目录)
# day20

## 函数的声明(补充)

像下面函数的声明是不行的：(不能声明了函数后设置默认参数，然后又在定义中修默认
的参数)

```
int sum(int a = 10, int b = 20);

int sum(int a = 10, int b = 20)
{
    return a + b;
}
```

## 函数占位参数

- 在定义函数的时候，只要设置数据类型，就可以起到占位的作用

```
void func(int a, int)
{
;
}

int main()
{
func(10, 10);
}
```

## 函数重载

函数重载指的是，当程序中的函数满足一定条件，函数的名字是可以重复的。条件如下：

1. 同一作用域
2. 函数名称相同
3. 函数的参数类型不同，个数不同，顺序不同

```
void sum(int a = 20, int b = 10)
{
    cout << "int a = 10, int b = 20" << endl;
}

void sum(double a, int b)
{
    cout << "int a = 10, int b = 20" << endl;
}
/* 
void sum(int b = 10, int a = 20)
{
    cout << "int b = 10, int a = 20" << endl;
}
*/
void sum()
{
    cout <<  " " << endl;
}

void sum(int a)
{
    cout << "int a" << endl;
}

int main()
{
    //cout << sum(10, 10) << endl;
    sum(10, 10);
}
```

下面几种情况依旧会报错：

```
void sum(int a = 20, int b = 10)
{
    cout << "int a = 10, int b = 20" << endl;
}

void sum()
{
    cout <<  " " << endl;
}
// 调用的时候，带参数不会报错，不带参数会报错
sum(10, 10);
```

只是调换顺序依旧会报错：

```
void sum(int a = 20, int b = 10)
{
    cout << "int a = 10, int b = 20" << endl;
}


void sum(int b = 10, int a = 20)
{
    cout << "int b = 10, int a = 20" << endl;
}

```

## 类和对象

主要包括以下内容：封装 继承 多态


### 访问权限

- public: 类内可以访问，类外也可以访问
- protected: 类内可以访问，类外不可以访问，子类可以访问
- private: 类内可以访问，类外不可以访问，子类不可以访问

当我们设置类中的某些属性为私有时候，依旧可以自定义函数接口，将这些属性设置为以
下形式：

- 可读
- 可写
- 可读可写

```
class People{
  private:
    string name;
    int age = 32;
  protected:
    string password = "1234";
  public:
    // name 可读可写操作
    string getName(){
        return name;
    }
    void setName(string _name){
        name = _name;
    }

    // age 只可读操作
    int getAge(){
        return age;
    }

    // paw 只可写操作
    void setPaw(string paw){
        password = paw;
        cout << endl;
        cout << "set paw success." << endl;
    }

};
```

### 练习

- [(构建一个立方体类)参考代码](./code/day20/demo2.cpp) 

可以从中学习到的点有：

1. 成员方法判断两个立方体是不是一样。只要传入一个参数即可

```
    bool isSame(Cube &c){
        if (H == c.getH() && W == c.getW() && L == c.getL())
            return true;
        return false;
    }
```

**为了避免形式参数进行复制，通常使用引用作为函数的参数** 

2. 全局方法判断两个立方体是不是一样的

```
bool isSame(Cube &c1, Cube &c2){
    if (c1.getL() == c2.getL() && c1.getH() == c2.getH() && c1.getW() == c2.getW())
        return true;
    return false;
}
```

- [(构建一个圆类, 判断点和圆的关系)参考代码](./code/day20/demo3.cpp) 

代码中有两个类，一个是圆类，另一个是点类，在实际的项目中，我们不会将他们写在同
一个文件中，而是单独地分开来。

- 代码声明写在头文件中
- 代码实现写在源文件中

将demo3的代码进行修改，得到下面的格式.

- circle.h 文件中只进行声明circle类
- circle.cpp 文件中，是对h文件中的声明的实现
- point.h 文件中只进行声明point类
- point.cpp 中，是对h文件中的声明的实现
- demo4.cpp 是代码和合集，main函数的入口

demo4.cpp 内容如下，只要修改包括这两个声明文件即可:[code](./code/day20/demo4.cpp) 

```
#include "point.h"
#include "circle.h"

int main()
{
    Circle c1;
    c1.setCenter(0, 0);
    c1.setR(1);

    Point p(1, 0);

    c1.isInCircle(p);
}
```

先看point.h文件的内容:[code](./code/day20/point.h) , 注意以下几点

- 构造函数的声明，如果有初始化变量，则只在声明中实现初始化
- 构造函数必须放置在public中

```
#pragma once
#include <iostream>

class Point{
  private:
    float X, Y;
  public:
    Point (float x = 0, float y = 0);
    float getX();
    float getY();
};
```

再看point.cpp中的内容：[code](./code/day20/point.cpp) , 注意以下几点

- 构造函数的声明方法如下，不用再进行初始化了, 设置float x = 0
- 必须要添加作用域，注意是float Point::getX() 这个顺序

```
#include "point.h"

using namespace std;


Point::Point (float x, float y)
{
    X = x;
    Y = y;
}

float Point::getX()
{
    return X;
}

float Point::getY()
{
    return Y;
}
```

**如果有多个类, 则只要将这个类的声明包含进来即可使用，然后cpp会自动寻找link.** 

## 构造函数与析构函数的补充(构造函数的几种写法)

构造函数的几种类型:

```
1. 普通的构造函数

2. 带参数的构造函数

3. 拷贝构造函数

class People
{
  private:
    int a;

  public:
    People()
    {
        cout << "调用无参数构造函数" << endl;
    }

    People(int b)
    {
       a = b; 
       cout << "调用有参数的构造函数" << endl;
    }

    People(const People &b)
    {
        a = b.a; // b 是另一个类的引用
        cout << "调用复制构造函数" << endl;
    }
};

int main()
{
    People p1;
    People p2(2);
    People p3(p2);
}
```

当然，调用构造函数也有以下几种：

```
1. 括号法调用
    People p2(2);
    People p3(p2);

说明下为什么不能：People p1(); 加括号 这样cpp编译器会认为这是一个声明, 而不会
创建一个类。

2. 显式法
Pepole p1;
People p2 = People(2);
People p3 = People(p2);


3. 隐式法
People p2 = 2; // 相当于显式法
People p3 = p2; // 也会自动转换为显式法
```


[【↥ back to top】](#目录)
# day21

## 复制构造函数的调用时机

总结下就是：复制构造函数会创建一个新的类对象，这个类对象和原先的内容一样, 但是
这两个对象的地址完全不同.

为什么复制构造函数是使用`const People &b`这种写法我们以后再补充

```
People(const People &b)
{
    a = b.a; // b 是另一个类的引用
    cout << "调用复制构造函数" << endl;
}
```

下面是复制构造函数的几种调用情况：

```
1. 利用复制构造函数来创建一个新类

2. 函数形参复制的时候，调用的构造函数

3. 函数返回值也可以设置调用构造函数(linux 下编译器不会调用复制构造函数)
```

- [参考代码](./code/day21/demo1.cpp) 

## 构造函数的调用规则

首先，当我们创建一个类对象的时候，编译器会自动帮我们创建下面三个函数：(当然我
们也可以自己修改)

1. 无参数的构造函数
2. 无参数的析构函数
3. 复制构造函数

- 当我们自己手动实现了有参数的构造函数，就不能调用无参数的构造函数
- 当我们手动实现了复制构造函数，程序就不能自动调用有参数的和默认的构造函数

事例如下：

假如我们自己手动实现了无参数的构造函数和有参数的构造函数，在代码中都可以调用
```
Person()
{
    cout << "普通构造函数正在调用" << endl;
}

Person(string name_)
{
    cout << "构造函数正在调用..." << endl;
    name = name_;
}


Person p; // 无参数调用
Person p1("miki");
```

当我们把无参数的注释掉后，会发现不能通过`Person p`调用系统默认的无参数构造函数

同理，当我们把有参数和无参数的构造函数都注释掉后，只留下复制构造函数，会发现下
面两个代码都不能使用：

```
Person p; // 无参数调用
Person p1("miki");
```

## 深拷贝与浅拷贝

浅拷贝：只是简单地赋值操作

深拷贝：在堆区域申请新的空间，并进行拷贝

- [参考视频](https://www.bilibili.com/video/BV1et411b73Z?p=110) 

总的来说就是，我们需要利用复制构造函数，来自己实现深拷贝，系统默认使用的是浅拷
贝，深拷贝在堆上创建的新空间，需要利用析构函数来释放。

首先要查看什么时候会出现浅拷贝，浅拷贝会有什么危害, 查看代码：
[code](./code/day21/demo2.cpp) 

```
1. 首先创建一个类，类中有个堆空间上的变量。
2. 在类中实现析构函数，析构函数会释放堆的内存
3. 创建两个类，第一个类普通创建，第二个类是利用复制构造函数创建
4. 当析构函数被调用的时候，程序就会报错，原因是堆空间被释放了两次

Person p1("miki", 160);
cout << p1.name << " " "的身高为：" << *p1.height << endl;
Person p2(p1);
cout << p2.name << " " "的身高为：" << *p2.height << endl;
```
当函数被调用的时候，代码是栈，即先入后出，因此p2会先释放，然后再释放p1.

出现上面问题的原因是：如果不自己创建一个复制构造函数，那么复制的时候，是调用的
默认的复制构造函数

```
Person p2(p1); // 调用默认的复制构造函数

// 相当于使用下面代码，即浅拷贝, 问题主要出现在指针的拷贝，因为指针是记录地址
，拷贝后，p2height也记录的是同一个堆上的地址，即p1.height and p2.height 指向的
都是同一个堆地址，当要释放height指针的时候，一个地址被释放了两次, 导致出错
name = p1.name;
height = p1.height
```

正确的修改方法如下：手动实现新的复制构造函数, 在里面实现手动创建一个堆区域复制

```
Person(const Person & p)
{
cout << "正在调用复制构造函数" << endl;
height = new int(*p.height);
}
```
当实现了在堆上复制时，两个height指针指向的堆区域不再相同，因为堆先会将160数据
从一个地址复制进另一个地址, 而浅拷贝不会

## 初始化列表

正常情况下，当我们创建了一个类，给类中的属性赋值的方法有很多，通常为：

```
class Person
{
public:
  int A;
  string B;
  double C;

  Person(int a, string b, double c)
  {
    A = a;
    B = b;
    C = c;
  }
};
```

现在有另一种方法更为简单：

```
class Person
{
public:
  int A;
  string B;
  double C;

  Person(int a, string b, double c):A(a), B(b) C(c)
  {
    这里面写其他代码，使代码更简洁
  } // 这里可以加分号，不加也行
};
```
说明：初始化列表可以在后面加分号也可以不加


还有一种方法是在类的外部初始化：注意，这种方式要先在类中声明构造函数

```
class Person
{
  public:
  Person();
};


Person::Person()
{
    this->A = 1;
    this->B = "miki";
    this->C = 0.2;
}
```

## 类对象的调用顺序

假如现在有两个类A B，其中A是B的对象成员，那么是A的构造函数先调用，还是B的构造
函数先调用呢？

- [参考代码](./code/day21/demo3.cpp) 

```
class A
{
  public:
   A()
};
class B
{
  public:
    A a; // 在B类中调用A
    B()
};

int main()
{
    B b;
}
```

总结：B类中虽然有A类，但是当构造B类的时候，先会对A类进行构造, 然后再构造出B

## 静态成员函数(static)

- [参考代码](./code/demo4.cpp) 

静态成员函数只能访问静态成员变量，而不能访问其他的变量：

```
class Person
{
  public:
    string nameA;
    static string nameB;
  public:
    static void func(string name)
    {
        //nameA = name; 
        nameB = name; // 静态成员函数只能访问静态成员变量
    }
};
```

注意，调用类中成员方法有两种方式：

```
方式1:
Person::func("miki");

方式2:
p1.func("miki");
```

## c++对象模型和this指针

- 关于c++对象模型，结论如下：

类的成员变量和成员函数是分开存储的，只有非静态对象属于类对象上，其他的都不属于
类对象上.

当我们实例化多个对象的时候，只有成员变量是独立的，成员函数是共用的，所以我们无
法确定是哪个对象调用的类内部的函数.

主要是通过sizeof可以查看对象所占的内存大小，测试代码：[code](./code/day21/demo5.cpp) 

为了分清楚函数是哪个对象调用的，所以就有了this指针，如果实例化了p1，p2，p3，哪
个调用了这个函数，this指针就会指向p1，p2，p3

- this指针的用法, this指向的是这个对象的指针，`*this`就是这个对象的本体:

- this 指针可以不用我们定义，可以直接使用, 函数内部就含有这个

```
1. 方便区分变量, 假设有下面代码，其中类中有getAge变量，外部也有个age变量，那么
   函数内部和外部哪些age是一样的呢？

class Person
{
  public:
    int age;
    string name;
  public:
    void getAge(int age)
    {
        age = age; // 左边的age会被认为是形式参数，不是外部的age，所以会报错
    }
};

// 修改成下面
  public:
    void getAge(int age)
    {
        this->age = age; 
    }
};

2. 使用this编程可以实现链式编程的代码，就像python中的.move().move()

public:
  Person& move(int step)
  {
      move_step += step;
      //cout << "已经走了: " << move_step << endl;
      // *this 返回的是对象的本体，所以要用Person& move 定义返回类型
      return *this; // 相当于return self
  }
```

其实我们之前也见过这种类型的链式方法，cout and cin

这里有个问题，如果我将`&`符号换成`*`号, 那么结果会变成什么样子呢？

```
将代码：
    Person& move(int step)
    {
        move_step += step;
        return *this; // 相当于return self
    }
修改成：
    Person move(int step)
    {
        move_step += step;
        return *this; // 相当于return self
    }

当我调用：
    Person p1;
    p1.move(2).move(2);
    cout << p1.move_step << endl;
```

会输出什么结果呢？

> 结果会发现p1还是只行走了2步，步数并没有累加, 主要原因是，如果只使用Person定
> 义函数的话, 调用的是拷贝构造函数返回一个新对象p'，如果加引用，依旧是p'，只不
> 过p'还是p1的引用

参考之前的复制构造调用的三个情况：

```
1. 使用复制构造创建一个新的类

2. 作为函数传入参数的时候

3. 作为函数返回的参数的时候
```

`return *this;`  相当于作为函数返回的参数, 于是会调用复制构造函数，复制构造函
数会复制一个新的类，并且地址和原来的不同，如果加上引用，会发现两个地址是一样的

- [参考代码](./code/day21/demo6.cpp) 


[【↥ back to top】](#目录)
# day22

## 空指针访问成员函数

假设现在有个Person类，里面有个age属性, 如果现在创建一个Person类的空指针, 如何访问空指针的内部函数呢？

```
Person* p1=NULL;
p1->showAge2(); // 这个可以正常运行
p1->showAge1(); // 这里会报错
```

可以发现age1函数中，调用了age，实际上真正的代码是

```
cout << this->age << endl;
```

this 指向的是当前对象，我们用person创建了一个新的指针，但这个指针为空，this没
有指向任何东西，所以也为空，空指针没有任何属性，所以报错

## const修饰成员函数

这部分包括两个内容：

1. 常函数
2. 常对象

常函数：

```
class Person
{
  public:
    int ageA;
    mutable int ageB;

    void changeAge() const // 常函数，在后面加个const
    {
        this->ageB = 100;
    }
};
```

> 注意几点：
>
> - 常函数中，变量是不能修改的，比如我们想修改ageB的值，实际上前面是有个this指针
> - 如果非要在常函数中修改内部的值，则要在变量声明前面加个mutable

常对象：

```
const Person p2; // 前面加个const就是常对象
p2.changeAge2();
```

> 注意几点：
>
>- 如果是常对象，那么常对象只能调用常函数，不能调用普通的函数
>- 因为普通函数可以修改任意值，常函数不能修改属性，所以可能冲突，最好的办法就是
>  禁止常对象调用普通函数

## 友元(friend)

友元分为几种情况(友元就是帮助访问私有变量)
- 让全局函数做友元
- 让类做友元
- 成员函数做友元

1. 全局函数做友元

当我们需要全局函数，来访问类中的私有属性时，就需要使用关键字friend(友元)操作.

```
class Person
{
    friend void getInfo(Person &p); // 在最前面声明友元函数，使用关键字friend声明
  private:
    int age;
  public:
    string name;
  public:
    Person(string name, int age):age(age), name(name){};
};


void getInfo(Person &p)
{
    cout << "name: " << p.name << endl;
    cout << "age: " << p.age << endl;
}
```

- [参考代码](./code/day22/demo3.cpp) 

2. 类做友元

```
friend class Person; // 重要的就这一行代码
```

完整代码如下：

```
class Building
{
    friend class Person; // 重要的就这一行代码
  public:
    Building():livingRoom("客厅"), bedRoom("卧室"){}

  public:
    string livingRoom;

  private:
    string bedRoom;

};
```
- [参考代码](./code/day22/demo4.cpp) 

3. 成员函数做友元

场景：现在有两个类，A类有公有属性和私有属性，B有2个方法，现在需要其中一个方法
可以访问A中的私有属性，另一个方法不能访问。




[这里会引入一个知识点，前置声明, 参考前面的笔记](#类的声明(包括前置声明)) 

- [这样使用前置声明会报错](./code/day22/demo5.cpp) 

- [正确代码看demo6.cpp](./code/day22/demo6.cpp) 


关键有两点：
```
关键点1:

// person 类的实现, 这里person的构造函数，要初始化，使用new开辟一个指针
// Building是类，写法如下
class Person
{
  public:
    Person();
    void visit1(); // 让visit1可以访问building里面的私有内容
    void visit2(); // visit2不可以访问私有内容
  public:
    Building *home; // 这里只是声明了home指针，还应该初始化
};

Person::Person()
{
    home = new Building;
}


关键点2: 友元的声明, 注意要说明是Person类中的visit1函数

friend void Person::visit1();
```

[【↥ back to top】](#目录)
# day 23

## cpp模板

cpp中除了面向对象编程思想以外，还有一种叫泛型编程的思想，这个思想主要利用的就
是模板

模板主要包括：
- 类模板
- 函数模板

> 什么时候需要用到模板？
> 假设我现在要实现一个交换两个变量值的时候，如果交换int类型，那么我要定义为
> int，如果是float，我就要再写一份代码，定义变量为float，这两个函数只是类型不
> 同. 因此使用模板

1. 函数模板

函数模板的定义：(两个关键字template & typename, 其中typename可以替换成class，
两者是一样的)

```
template <typename T> // 声明模板，然后下面实现模板(一定要紧紧跟在后面), T相当于数据类型
void Swamp(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
```

模板的使用：
- [参考代码](./code/day23/demo1.cpp) 

```
1. 自动使用, c++会自己推断出a，b的数据类型

Swamp(a, b);

2. 定义类型使用

Swamp<int>(a, b); // 注意：最好不要使用自动推导类型
```

用模板实现一个排序算法，可以对int或者char类型的数组进行排序

- [参考代码](./code/day23/demo2.cpp) 

> 注意：代码函数中要输入size，不在函数内部传入list，然后再用sizeof计算list的长
> 度是因为，如果传入list，sizeof返回的就是这个指针的长度，而不是整个数组的长度

## 普通函数与模板的调用规则

总结就是：
- 如果普通函数与模板函数同名字，那么会先调用普通函数
- 如果想强制使用模板函数，可以使用指定类型<int>
- 如果不指定类型，编译器会择优选择最好的函数, 择优选择模板函数还是普通函数
- 模板函数也可以重载，只要参数数量不同，类型不同就行

- [参考代码](./code/day23/demo3.cpp) 

## 模板的局限性(TODO)

视频参考：https://www.bilibili.com/video/BV1et411b73Z?p=173


如果数据类型不同怎么处理？可以指定多个类型

```
template <class T1, class T2>
```

## 类模板

和函数模板一样，只不过模板后面紧跟着类，不过要注意以下几点：

- [参考代码](./code/day23/demo4.cpp) 

```
1. 定义类模板
template <class nameType, class ageType>
class Person
{};

2. 为模板指定多个类型
Person<string, int> p1("miki", 22);

3. 类模板可以指定默认的参数类型
template <class nameType, class ageType=int>
class Person
{};

调用：
Person<string> p1("miki", 22);
```

## 类模板中成员函数的调用时机

总结就是：类模板成员函数，只要还没有调用，编译是不会出错的，只有在调用的时候，
类型确定了，才会报错.

- [参考代码](./code/day23/demo5.cpp) 

## 类模板做函数参数

1. 指定参数传入, [参考代码](./code/day23/demo6.cpp) 

```
void showPerson(Person<string, int> &p) // 定义
{
    cout << p.name << endl;
    cout << p.age << endl;
}

int main()
{
    Person<string, int> p1("miki", 22); // 调用
    showPerson(p1);
}
```

2. 参数模板化

```
template <class T1, class T2>
void showPerson2(Person<T1, T2> &p) // 就是将方式1换成模板
{
    cout << p.name << endl;
    cout << p.age << endl;
}

int main()
{
    Person<string, int> p1("miki", 22);
    //showPerson1(p1);
    showPerson2(p1);
}
```

3. 将整个模板化

```
template <class T>
void showPerson3(T &p)
{
    cout << p.name << endl;
    cout << p.age << endl;
}

int main()
{
    Person<string, int> p1("miki", 22);
    showPerson3(p1);
}
```


[【↥ back to top】](#目录)
# day24

## 初识STL

STL属于模板，为了避免重复造轮子，并且统一了标准，主要分为以下几个部分：

1. 容器: 各种数据结构，vector list deque set map，用来存放数据
2. 算法: 各种常见的算法 sort find copy for_each
3. 迭代器: 连接容器与算法的胶合剂
4. 仿函数
5. 适配器
6. 空间配置器

总之，STL与数据结构与算法很常用

## vector容器


[【↥ back to top】](#目录)
# TODO

- [ ] 121-166内容先跳过, 不然不好刷力扣(TODO)
> 课程：https://www.bilibili.com/video/BV1et411b73Z?p=121

- [ ] 178-184内容先跳过
> https://www.bilibili.com/video/BV1et411b73Z?p=178&spm_id_from=pageDriver


- [ ] cpp中的link原理

**Situation3**:(多目录多文件)

[参考视频](https://www.bilibili.com/video/BV16V411k7eF?p=4) 

**Situation4**:(多目录多文件标准工程)

[参考视频](https://www.bilibili.com/video/BV16V411k7eF?p=5) 
