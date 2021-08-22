#include <iostream>
using namespace std;

void Char()
{
    char name0 = 'a'; // 字符
    wchar_t name1 = L'a'; // 宽字符
    char16_t name2 = 'c'; // unicode字符
    char32_t name3 = 'd'; // unicode字符

    cout << name0 << endl;
    cout << name1 << endl;
    cout << name2 << endl;
    cout << name3 << endl;
}

void Int()
{
    int num0 = 10;
    unsigned int num1 = 10U;
    long num2 = 10L;
    unsigned long num3 = 10UL;
    int num4 = 012;
    int num5 = 0xA;

    cout << num0 << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << num5 << endl;
}

void Float()
{
    double num0 = 3.14;
    float num1 = 3.14f;
    long double num2 = 3.14L;

    cout << num0 << endl;
    cout << num1 << endl;
    cout << num2 << endl;
}

void multy()
{
    int num0 = 10;
    unsigned int num1 = 10U;
    double num2 = 10.;
    double num3 = 10e-0;

    cout << num0 << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
}

void Print()
{
    cout << 2 << "\115\012";
    cout << 2 << "\t\115\012";
}

int main()
{
    //Char();
    //Int();
    //Float();
    //multy();
    //Print();
}

