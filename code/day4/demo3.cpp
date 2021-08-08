#include "iostream"

int main()
{
    int a, b, sum;
    // 接受输入, 注意返回为左边的对象, 所以可以连着使用
    std::cin >> a >> b;
    sum = a + b;
    std::cout << "The sum of " << a << " and " << b << " is: " << sum << std::endl;
}
