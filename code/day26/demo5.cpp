#include <iostream>

using namespace std;

class MyAdd
{
  public:
    int operator()(int a, int b)
    {
        return a + b;
    }
};

void DoJob(MyAdd &add, int a, int b)
{
    cout << add(a, b) << endl;
}

int main()
{
    // 调用方式1, 先创建一个对象, 然后通过对象调用重载函数运算符
    MyAdd add;
    DoJob(add, 1, 2);
    //cout << add(1, 2) << endl;
    // 调用方式2，使用匿名函数调用
    //cout << MyAdd()(1, 2) << endl;
}
