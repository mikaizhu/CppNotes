#include "iostream"

int Multyply(int a, int b)
{
    return a * b;
}

void MultyplyAndLog(int a, int b)
{
    std::cout << Multyply(a, b) << std::endl;
}

int main()
{
    MultyplyAndLog(2, 3);
    MultyplyAndLog(10, 3);
    MultyplyAndLog(2, 30);
    std::cin.get();
}
