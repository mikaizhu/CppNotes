// 引用教程
#include <iostream>

void Increment(int variable)
{
    variable++;
}

void Increment1(int* value) // 这里变量必须为指针类型，存放的是地址
{
    //*(value)++;
    (*value)++; // *号获得地址里面的内容, 使得地址里面的内容加1
}

int main()
{
    int a = 3;
    // 不能int& ref; 引用必须引用实际值
    int& ref = a; // 这样就相当于引用
    std::cout << ref << std::endl;

    ref = 2;
    std::cout << a << std::endl; // 这里可以发现a的值也变成了2，说明ref就是a

    // 假设接下来我们要实现一个增加的函数, 即一个变量传入这个函数，然后传出来变量会加1

    Increment(a);
    // 这里发现t的值并没有加1, 这是因为局部变量和全局变量的关系
    // 是因为实际参数把自身的值传递给形式参数，所以并没对实际参数本身造成影响
    std::cout << "a is " << a << std::endl; 

    // 修改后，只要将实际参数的地址传入，修改地址里面的值即可
    Increment1(&a);
    std::cout << "new a is " << a << std::endl; 

    // 使用引用简化第二步操作
    int* new_ref = &a; // 不能int* ref; 必须要引用某个东西，不能为空
    Increment1(new_ref);
    std::cout << "new a is " << a << std::endl; 
}
