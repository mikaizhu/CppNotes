#include <iostream>
#include <string>
using namespace std;

class People
{
  private:
    int a;

  public:
    People()
    {
        cout << "调用无参数构造函数" << endl;
    }

    People(int b)
    {
       a = b; 
       cout << "调用有参数的构造函数" << endl;
    }

    People(const People &b)
    {
        a = b.a; // b 是另一个类的引用
        cout << "调用复制构造函数" << endl;
    }
};

int main()
{
    People p1;
    People p2(2);
    People p3(p2);
}
