#include <iostream>

using namespace std;

class Person
{
  public:
    int a;
    int b;
  public:
    Person(int a = 0, int b = 0)
    {
        this->a = a;
        this->b = b;
    }
    /*
  public:
    Person operator+ (Person &p) // 定义函数返回的类型是Person
    {
        Person temp;
        temp.a = this->a + p.a;
        temp.b = this->b + p.b;
        return temp;
    }
    */
};

// 重载运算符实现Person p = p1 + p2
// 全局函数重载运算符
// 成员函数重载运算符
// 重载函数的重载

Person operator+ (Person &p1, Person &p2)
{
    Person temp;
    temp.a = p1.a + p2.a;
    temp.b = p1.b + p2.b;
    return temp;
}

int main()
{
    Person p1(1, 2);
    Person p2(1, 2);
    Person p = p1 + p2;
    cout << p.a << " " << p.b << endl;
}
