#include <iostream>
#include <string>

using namespace std;

class A
{
  public:
    A()
    {
        cout << "A构造函数的调用" << endl;
    }
};
class B
{
  public:
    A a;
    B()
    {
        cout << "B构造函数的调用" << endl;
    }
};

int main()
{
    B b;
}
