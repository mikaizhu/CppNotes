#include <iostream>

int value = 10;
extern int Value;
extern void test1();

int main()
{
    std::cout << "value: " << value << std::endl;
    std::cout << "Value: " << Value << std::endl;
}
