#include "iostream"

int main()
{
    int i, sum1 = 0;
    // 这里循环会读取数值，回车后，然后赋值给i
    // 当输入的不是数值，int类型, 或者control d，就会退出循环
    while (std::cin >> i)
    {
       sum1 += i ;
    }
    std::cout << "Sum is: " << sum1 << std::endl;
}
