/*
方法1
1. 参考：https://www.bilibili.com/video/BV1VJ411M7WR?p=5
2. 带'#'号的都是预处理操作，预处理在代码编译之前就执行完成了, 程序会先执行预处理文件
3. include 的作用就是寻找头文件，这个文件名字叫iostream。预处理操作会把这个文件的所有内容复制到当前文件中，方便我们调用
4. main函数为程序的入口，如果没有main函数则执行不了, 发现main函数是int类型的，
   因为main函数比较特殊，可以选择return 0表示执行成功，或者不用return，默认返
   回0
5. cout means console out，控制台输出，cin means 控制台输入
6. << 相当于.print(), 实际不是移位运算符，可以看成一个函数
7. std::endl相当于换行操作
8. std::cin.get() 相当于从控制台等待输入，默认是回车
*/
#include <iostream>
int main()
{
  /*相当于std::cout.print("hello world").print(std::endl);*/
  std::cout << "Hello World!" << std::endl;
  std::cin.get();
}


/*
方法2
# include <stdio.h>
int main()
{
  puts("Hello World!");
}
*/
