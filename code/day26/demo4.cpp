#include <iostream>

using namespace std;
class Person
{
  public:
    Person(int a)
    {
        this->*a = new int(a);
    }
    ~Person()
    {
        if (*a != NULL)
            delete a;
        a = NULL;
    }
  public:
    int *a;

};

int main()
{

}
