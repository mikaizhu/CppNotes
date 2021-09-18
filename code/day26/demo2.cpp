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
};

ostream& operator<< (ostream &out, Person &p)
{
    out << "a is: " << p.a << " b is: " << p.b;
    return out;
}

int main()
{
    Person p1;
    cout << p1 << endl;
}
