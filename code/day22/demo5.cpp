#include <iostream>
#include <string>

using namespace std;

class Person;
class Building
{
    friend void Person::visit();
  public:
    string livingRoom;
  private:
    string bedRoom;

  public:
    Building():livingRoom("客厅"), bedRoom("卧室"){};
};

class Person
{
    Building *home = new Building;
  public:
    void visit()
    {
        cout << home->livingRoom << endl;
        cout << home->bedRoom << endl;
    }
};

int main()
{
    Person p;
    p.visit();
}
