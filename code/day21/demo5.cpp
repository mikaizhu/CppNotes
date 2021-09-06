#include <iostream>
#include <string>

using namespace std;

class A
{

};

class B
{
    int a;
};

class C
{
    int a;
    static int b;
};

int C::b;

class D
{
    int a;
    static int b;
    void func1()
    {}
};

class E
{
    int a;
    static int b;
    void func1()
    {}
    static void func2()
    {}
};

int E::b;

int main()
{
    cout << "size of A: " << sizeof(A) << endl;
    cout << "size of B: " << sizeof(B) << endl;
    cout << "size of C: " << sizeof(C) << endl;
    cout << "size of D: " << sizeof(D) << endl;
    cout << "size of E: " << sizeof(E) << endl;
}
