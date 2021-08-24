# 目录

<!--ts-->
* [目录](#目录)
* [cpp教程推荐](#cpp教程推荐)
* [学习路线](#学习路线)
* [环境搭配](#环境搭配)
   * [Linux](#linux)
   * [Mac](#mac)
   * [运行逻辑](#运行逻辑)
   * [CMake](#cmake)
* [day1 HelloWorld](#day1-helloworld)
* [day2 Cmake](#day2-cmake)
* [day3 Link and Compile](#day3-link-and-compile)
* [day4 控制流语句](#day4-控制流语句)
   * [while &amp; for 循环](#while--for-循环)
   * [if else 语句](#if-else-语句)
* [day5 变量和基本类型](#day5-变量和基本类型)
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
   * [字符串补充](#字符串补充)
   * [vector](#vector)
      * [使用](#使用)
      * [定义和初始化](#定义和初始化)
      * [向vector中添加元素](#向vector中添加元素)
      * [其他vector操作](#其他vector操作)
      * [迭代器](#迭代器)
      * [函数返回和读取一个张量](#函数返回和读取一个张量)
      * [向量的拷贝](#向量的拷贝)
   * [数组补充](#数组补充)
      * [数组中的拷贝](#数组中的拷贝)
      * [获得数组的长度(begin end)](#获得数组的长度begin-end)
* [day15(TODO)](#day15todo)
   * [虚函数](#虚函数)
   * [纯虚函数](#纯虚函数)
   * [可见性](#可见性)
* [TODO](#todo)

<!-- Added by: zwl, at: 2021年 8月24日 星期二 15时30分05秒 CST -->

<!--te-->

# cpp教程推荐

- 【B站】https://space.bilibili.com/364152971/video?tid=0&page=3&keyword=&order=pubdate
- 【菜鸟教程基本语法】https://www.runoob.com/cplusplus/cpp-tutorial.html


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

- 观察上面函数，可以发现我们首先调用了Function函数，当这个函数调用完后，内存会
  释放掉

- [参考代码](./code/day12/demo3.cpp) 

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

## 字符串补充

1. 输入流和输出流：

- std::cin 输入流 从第一个非空白字符开始, 到下一个空白字符结束
- std::cout 输出流
- 如果要读取一行，使用`getline(cin, stringVar)`，如果想读取一个单词，以空格分隔，直接使用`cin`

2. 字符串拼接

字符串字面值和string类型不一样，字符串字面值是不能直接拼接的，

```
string("Hello") + "world" // 其中一个必须是string类型
```

3. getline(InputStream, s)

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

4. 比较字符串长度 s.size() 和字符串大小

字符串长度：

```
s1.size() >= s2.size();
```

字符串大小：从左到右，逐个字符比较，ascii码比较大的那个.

5. 字符串的拼接

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

6. 字符串遍历

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
- `v.push_back(t)` 
- `v[n]` 
- `v1 == v2` 
- `v1 != v2` 
- `<, <=, >, >=` 

### 迭代器

所有容器都可以使用迭代器的功能, 我们可以通过下标来访问容器里面的元素内容，也可
以使用迭代器来访问容器内容。

使用迭代器：有迭代器的类型同时拥有返回迭代器的成员(begin & end)，begin成员负责
返回指向第一个元素的迭代器，end返回尾元素的下一个位置的迭代器，叫尾后迭代器，
尾后迭代器没什么意义，仅仅是个标记而已。

迭代器运算符：

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
# day15(TODO)

## 虚函数

## 纯虚函数

## 可见性

[【↥ back to top】](#目录)
# TODO

- [ ] cpp中的link原理

**Situation3**:(多目录多文件)

[参考视频](https://www.bilibili.com/video/BV16V411k7eF?p=4) 

**Situation4**:(多目录多文件标准工程)

[参考视频](https://www.bilibili.com/video/BV16V411k7eF?p=5) 
