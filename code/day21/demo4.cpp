#include <iostream>
#include <string>

using namespace std;

class Person
{
  public:
    string nameA;
    static string nameB;
    static void func(string name)
    {
        cout << "静态函数的调用" << endl;
        //nameA = name;
        nameB = name;
    }
};

string Person::nameB = ""; // static 变量一定要在外面声明

int main()
{
    Person p1;
    p1.func("miki");
    cout << p1.nameB << endl;
    Person::func("miki");
}
