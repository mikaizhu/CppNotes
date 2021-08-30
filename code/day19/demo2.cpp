#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 引用

    int a = 10;
    int &b = a;

    cout << "a: " << (long)&a << endl;
    cout << "b: " << (long)&b << endl;

    b = 20;
    cout << "a: " << (long)&a << endl;
    cout << "b: " << (long)&b << endl;
}
