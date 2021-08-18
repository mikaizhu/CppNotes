# 目录

<!--ts-->
* [目录](#目录)
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
   * [函数声明 变量声明](#函数声明-变量声明)
   * [头文件](#头文件)
   * [头文件中的#pragma once](#头文件中的pragma-once)
   * [预处理中"" 和 &lt;&gt; 的区别](#预处理中-和--的区别)
* [day7 控制流语句 continue return break](#day7-控制流语句-continue-return-break)
* [day8 指针 引用](#day8-指针-引用)
   * [指针](#指针)
   * [引用](#引用)
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
* [day14(TODO)](#day14todo)
   * [虚函数](#虚函数)
   * [纯虚函数](#纯虚函数)
   * [可见性](#可见性)
* [TODO](#todo)

<!-- Added by: zwl, at: 2021年 8月18日 星期三 20时33分11秒 CST -->

<!--te-->


[back to top](# 目录)
# cpp教程推荐

- 【B站】https://space.bilibili.com/364152971/video?tid=0&page=3&keyword=&order=pubdate
- 【菜鸟教程基本语法】https://www.runoob.com/cplusplus/cpp-tutorial.html


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


[back to top](# 目录)
# 环境搭配

## Linux

```
sudo apt install gcc, g++
```

## Mac



[back to top](# 目录)
# Day3 Link and Compile

[back to top](# 目录)
# day13
