#include <iostream>
#include <string>

using namespace std;

template <typename T>
void Swamp(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

void SwampInt(int a, int b)
{
;
}
void SwampFloat(float a, float b)
{
;
}

int main()
{
    int a = 2, b = 3;
    Swamp(a, b);
    Swamp<int>(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}
