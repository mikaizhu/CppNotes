#include <iostream>
#include <string>

// 类模板成员函数的调用时机

using namespace std;
class Person1
{
  public:
    void showPerson1()
    {
        cout << "showPerson1" << endl;
    }
};

class Person2
{
  public:
    void showPerson2()
    {
        cout << "showPerson2" << endl;
    }
};

template <typename p>
class Person
{
  public:
    p p1;
    void showPerson()
    {
        p1.showPerson1(); // 只有外面指定类型为person1才能调用showperson1函数
        //p1.showPerson2(); // 只有外面指定类型为person2才能调用showperson2函数
    }
};

int main()
{
    Person<Person1> p;
    p.showPerson();
}
