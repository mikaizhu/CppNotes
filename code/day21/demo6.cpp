#include <iostream>
#include <string>

using namespace std;

class Person
{
  public:
    int age;
    int move_step = 0;
    string name;
  public:
    void getAge(int age)
    {
        this->age = age;
    }
  public:
    Person move(int step)
    {
        move_step += step;
        //cout << "已经走了: " << move_step << endl;
        return *this; // 相当于return self
    }
};


int main()
{
    Person p1;
    Person p2 = p1.move(2);
    cout << (long)&p1 << endl;
    cout << (long)&p2 << endl; 
    //cout << p1.move_step << endl;
}
