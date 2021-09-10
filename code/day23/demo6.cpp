#include <iostream>
#include <string>
// 类模板做函数的参数

using namespace std;

template <class nameT, class ageT>
class Person
{
  public:
    nameT name;
    ageT age;
  public:
    Person(nameT name, ageT age)
    {
        this->name = name;
        this->age = age;
    }
};

// 指定参数传入
void showPerson1(Person<string, int> &p)
{
    cout << p.name << endl;
    cout << p.age << endl;
}

// 参数模板化
template <class T1, class T2>
void showPerson2(Person<T1, T2> &p)
{
    cout << p.name << endl;
    cout << p.age << endl;
}

template <class T>
void showPerson3(T &p)
{
    cout << p.name << endl;
    cout << p.age << endl;
}

int main()
{
    Person<string, int> p1("miki", 22);
    //showPerson1(p1);
    //showPerson2(p1);
    showPerson3(p1);
}
