#include <iostream>
#include <string>

using namespace std;

class Person
{
  public:
    Person()
    {
        cout << "普通构造函数正在调用" << endl;
    }

    Person(string name_)
    {
        cout << "构造函数正在调用..." << endl;
        name = name_;
    }

    Person(const Person &p)
    {
        name = p.name;
        cout << "复制构造函数正在调用..." << endl;
    }

    ~Person()
    {
        cout << "析构函数正在调用..." << endl;
    }
  private:
    string name;
};

void Func1(Person p)
{
;
}

Person func2()
{
    Person p1("miki");
    cout << (long)&p1 << endl;
    return p1;
}

int main()
{
    Person p;
    Person p1("miki");
    Person p2(p1); // 情况1: 使用复制函数创建一个新类, 并且不想重新赋值
    Func1(p1); // 情况2: 作为参数传入
    Person p = func2();
    cout << (long)&p << endl;
}
