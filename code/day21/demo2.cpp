#include <iostream>
#include <string>

using namespace std;

class Person
{
  public:
    Person()
    {
        cout << "正在调用无参数构造函数" << endl;
    }
    Person(string name_, int height_)
    {
        name = name_;
        height = new int(height_); // 在堆上为这个数据创建一个空间，返回一个指针传给height
        cout << "正在调用有参数构造函数" << endl;
    }
    Person(const Person & p)
    {
        cout << "正在调用复制构造函数" << endl;
        height = new int(*p.height);
    }

    ~Person()
    {
        if (height != NULL)
        {
            cout << "正在调用析构函数" << endl;
            delete height; // 删除堆上的数据
            height = NULL;
        }
    }
    string name;
    int *height = NULL;
};

void test1()
{
    Person p1("miki", 160);
    cout << p1.name << " " "的身高为：" << *p1.height << endl;
    Person p2(p1);
    cout << p2.name << " " "的身高为：" << *p2.height << endl;
}

int main()
{
    test1(); // 执行这个代码会崩溃, 原因就在于复制构造函数是浅拷贝
}
