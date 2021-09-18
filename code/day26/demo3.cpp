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
  public:
    // 重载++运算符(前置)
    Person& operator++()
    {
        ++this->a;
        ++this->b;
        return *this; // 返回对象本身，实现链式运算
    }
    // 后置
    Person operator++(int)
    {
        // 后置是先输出
        Person temp = *this; // *this就是对象本身，这里创建一个暂时对象
        this->a++;
        this->b++;
        return temp;
    }
};

ostream& operator<< (ostream &out, const Person &p)
{
    out << "a is: " << p.a << " b is: " << p.b;
    return out;
}

int main()
{
    int a = 0;
    /*
        cout << ++a << endl; // 1 1
        cout << a++ << endl; // 1 2
        cout << a << endl; // 2
    */
    Person p;
    //++(++p);
    cout << (p++) << endl;
    cout << p << endl;
}
