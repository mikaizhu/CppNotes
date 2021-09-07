#include <iostream>
#include <string>

using namespace std;

class Person
{
  public:
    int age;

    void showAge1()
    {
        cout << age << endl;
    }

    void showAge2()
    {
        cout << "showAge2 is calling" << endl;
    }
};

int main()
{
    Person* p1=NULL;
    p1->showAge2();
    p1->showAge1();
}
