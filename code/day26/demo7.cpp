#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int a = 1;
    int b = a;
    cout << (long)&a << endl;
    cout << (long)&b << endl;
}
