#include <iostream>
#include <string>
using namespace std;

void GetString(string name);

int main()
{
    // 使用普通的方法定义string

    const char* name = "rike and morty";
    // name[5] = "A"
    cout << "name is: " << name << endl;
    cout << "name is: " << name[3] << endl;

    char name1[] = {'r', 'i', 'k', 'e'};
    cout << "name1 is: " << name1 << endl;

    char name2[] = {'r', 'i', 'k', 'e', '\0'};
    cout << "name2 is: " << name2 << endl;

    char name3[] = {'r', 'i', 'k', 'e', 0};
    cout << "name3 is: " << name3 << endl;

    // 使用内置的string
    string name4 = "rike and morty";
    cout << "name4 is: " << name4 << endl;

    string name5 = string("rike") + "and morty"; // 两个字符串相加
    cout << "name5 is: " << name5 << endl;

    // 传字符串给函数
    GetString("rike and morty");
}

void GetString(string name)
{
    cout << name << endl;
}
