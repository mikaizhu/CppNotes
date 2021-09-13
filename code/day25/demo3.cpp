#include <iostream>
#include <list>
#include <string>

using namespace std;

class Person
{
  public:
    int age;
    int height;
    string name;
  public:
    Person(string name, int age, int height)
    {
        this->name = name;
        this->age = age;
        this->height = height;
    }
};

void print(const list<Person> &p)
{
    for (list<Person>::const_iterator it = p.begin(); it != p.end(); it++)
    {
        cout << "name: " << it->name << " "
            << "age: " << it->age << " "
            << " height: " << it->height << " ";
        cout << endl;
    }
}



// 如果年龄相同，则按照身高来排列
bool mySort(Person &p1, Person &p2)
{
    if (p1.age == p2.age && p1.height < p2.height)
        return true;
    return p1.age < p2.age;
}


int main()
{
    Person p1("p1", 22, 163);
    Person p2("p2", 32, 160);
    Person p3("p3", 12, 170);
    Person p4("p4", 22, 161);
    Person p5("p5", 22, 162);

    list<Person> p;
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
    p.push_back(p5);

    cout << "排序前：" << endl;
    print(p);
    p.sort(mySort);
    cout << "排序后：" << endl;
    print(p);
        
}
