#include <iostream>
using namespace std;

enum Example1 : unsigned char
{
    A1 = 2, B1 = 4, C1 = 3 // 注意不能重复
};

enum Example2 : int
{
    A2, B2, C2 // 如果不设置的话, 默认a2是0， b2是1， c2 是2
};

enum Example3 : long
{
    A3, B3=2, C3 // A3还是0， B3是2， C3是3
};

int main()
{
    Example1 i1 = A1;
    cout << "i1 is " << i1 << endl;

    Example2 i2 = A2;
    cout << "i2 is " << i2 << endl;

    Example3 i3 = A3;
    cout << "i3 is " << i3 << endl;
}
