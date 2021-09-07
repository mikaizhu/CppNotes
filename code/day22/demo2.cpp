#include <iostream>
#include <string>

using namespace std;

class Person
{
  public:
    int ageA;
    mutable int ageB;

    void changeAge() const // 常函数，在后面加个const
    {
        this->ageB = 100;
    }

    void changeAge2()
    {
        this->ageB = 100;
    }
};

int main()
{
    Person p1;
    p1.changeAge();
    const Person p2;
    p2.changeAge2();
}
