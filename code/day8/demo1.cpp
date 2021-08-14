#include <iostream>

int main()
{
    int a = 8;
    void* p; // 这里设置为void类型的指针, 不能使用void来存储int类型的数据
    p = &a; // 使用& + 变量，来访问这个变量的地址，并存储在p中
    std::cout << "the point of p varable is: " << p << std::endl;

    int* pt = &a; // 这里设置为int类型的指针，不然会报错
    *pt = 10; // 通过* + 指针来访问该地址存储的数据
    std::cout << "a is changed to " << a << std::endl;

    int** pp;
    pp = &pt;
    std::cout << "second pointer address is " << pp << std::endl;

    std::cout << "second pointer address is " << *pp << std::endl;

    std::cout << "second pointer is " << **pp << std::endl;
}
