#include <iostream>
#include <string>

using namespace std;

class Person
{
    friend void getInfo(Person &p); // 在最前面声明友元函数，使用关键字friend声明
  private:
    int age;
  public:
    string name;
  public:
    Person(string name, int age):age(age), name(name){};
};


void getInfo(Person &p)
{
    cout << "name: " << p.name << endl;
    cout << "age: " << p.age << endl;
}

int main()
{
    Person p("miki", 22);
    getInfo(p);
}
