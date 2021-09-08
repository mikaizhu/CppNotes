#include <iostream>
#include <string>

using namespace std;

// 例子思路：
// 创建两个类对象，一个人类，一个房子类，人有个visit方法，可以参观房子
// 每个人都有房子，房子有公有属性客厅，和私有属性卧室
// 现在要让人可以访问私有属性卧室

class Building; // 先声明一个类, 不实现任何方法


class Person
{
  public:
    Person(string name, int age):name(name), age(age){}

  public:
    string name;
    int age;

  public:
    Building home;

  public:
    void visit(Building &home)
    {
        cout << "正在访问: " << home.livingRoom << endl;
        cout << "正在访问: " << home.bedRoom << endl;
    }
};

class Building
{
    friend class Person;
  public:
    Building():livingRoom("客厅"), bedRoom("卧室"){}

  public:
    string livingRoom;

  private:
    string bedRoom;

};

int main()
{
    Person p1("miki", 22);
    Person p2("zhu", 21);
    p1.visit(p2.home);
}
