#include <iostream>

using namespace std;

void print(int a, int b);

void print(int a, int b)
{
    cout << "调用普通函数" << endl;
    cout << a << ' ' << b << endl;
}

template <class T>
void print(T a, T b)
{
    cout << "调用模板函数" << endl;
    cout << a << ' ' << b << endl;
}

template <class T>
void print(T a, T b, T c) // 模板函数的重载
{
    cout << "调用模板函数" << endl;
    cout << a << ' ' << b << endl;
}

int main()
{
    int a = 0,  b = 1;
    char c = 'c', d = 'd';
    print(a, b); // 优先调用普通函数
    print(c, d); // 调用模板函数， 因为编译器会匹配最优的选择，这里不会转换成int
    print<char>(c, d); // 如果指定char，则会直接调用char
}
