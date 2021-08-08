#include "iostream"

int main()
{
    // 定义并初始化一个参数
    // for 循环 第一个为初始化i， 然后判断第二个条件是否满足，满足则执行下面程序，最后执行第三个条件
    int sum1 = 0;
    for (int i = 1; i <= 10; ++i)
    {
        sum1 += i;
    }
    std::cout << "Sum 1 to 10 is: " << sum1 << std::endl;

    int sum2 = 0, i = 1;
    while (i <= 10)
    {
        sum2 += i;
        ++i;
    }
    std::cout << "Sum 1 to 10 is: " << sum2 << std::endl;
}
