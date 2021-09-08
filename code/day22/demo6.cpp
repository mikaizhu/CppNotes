#include <iostream>
#include <string>

using namespace std;

class Building;
class Person
{
  public:
    Person();
    void visit1(); // 让visit1可以访问building里面的私有内容
    void visit2(); // visit2不可以访问私有内容
  public:
    Building *home;
};

class Building
{
    friend void Person::visit1();
  public:
    string livingroom;

  private:
    string bedroom;

  public:
    Building();
};

// 类外实现类的方法

// bulidng 类方法的实现
Building::Building():livingroom("客厅"), bedroom("卧室"){};

// person 类的实现
Person::Person()
{
    home = new Building;
}

void Person::visit1()
{
    cout << home->livingroom << endl;
    cout << home->bedroom << endl;
}

void Person::visit2()
{
    cout << home->livingroom << endl;
    //cout << home->bedroom << endl;
}

int main()
{
    Person p1;
    p1.visit2();
    p1.visit1();
}
