#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

class Person
{
  public:
    string name;
    int age;
  public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

void test1()
{
    Person p1("A", 21);
    Person p2("A", 22);
    Person p3("A", 23);
    Person p4("A", 24);
    Person p5("A", 25);

    vector<Person> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    for (vector<Person>::iterator it=v.begin(); it != v.end(); it++)
    {
        cout << it->name << " " << it->age << endl;
    }
}

void test2()
{
    Person p1("A", 21);
    Person p2("A", 22);
    Person p3("A", 23);
    Person p4("A", 24);
    Person p5("A", 25);

    vector<person*> v;
    v.push_back(&p1);
    v.push_back(&p2);
    v.push_back(&p3);
    v.push_back(&p4);
    v.push_back(&p5);

    for (vector<Person*>::iterator it=v.begin(); it != v.end(); it++)
    {
        cout << (*it)->name << " " << (*it)->age << endl;
    }
}

int main()
{
    //test1();
    test2();
}
