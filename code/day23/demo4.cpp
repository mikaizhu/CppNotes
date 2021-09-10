#include <iostream>
#include <string>

using namespace std;

template <class nameType, class ageType>
class Person
{
  public:
    Person(nameType name,ageType age)
    {
        this->name = name;
        this->age = age;
    }
  public:
    nameType name;
    ageType age;
};

int main()
{
    Person<string, int> p1("miki", 22);
    cout << p1.name << endl;
    cout << p1.age << endl;
}
