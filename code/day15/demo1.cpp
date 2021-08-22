#include <iostream>
#include <string>
//#include <cctype>

using namespace std;
//using string;
//using 

void define()
{
    string s1 = "value";
    string s2; // 默认初始化为0字符串
    string s3("value"); // s3 为 value的副本
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
}

void operation()
{
    string s1 = "value 1 ";
    string s2 = "value 2";
    cout << "size of s1 is: " << s1.size() << endl;
    cout << "s1[" << 2 << "] is: " << s1[2] << endl;
    cout << "s1 + s2 is: " << s1 + s2 << endl;
    //cout << "s1[1] is num ?" << std::string.isdigit(s1[1]) << endl;
    //cout << "2 is num ?" << isdigit("2") << endl;

    //string s3;
    //s3 << s1;
    //cout << s3 << endl;
}

void compare()
{
    string s1, s2;
    cout << "Please input 2 string" << endl;
    for (int i = 2; i > 0; i--)
    {
        if (i == 2)
        {
            cout << "input the first string: ";
            cin >> s1;
        }
        else
        {
            cout << "input the second string: ";
            cin >> s2;
        }
    }
    if (s1.size() == s2.size())
    {
        cout << "tow strings are equal" << endl;
    }
    else
        cout << "the larger string is: " << ((s1.size() > s2.size()) ? s1 : s2) << endl;
}

void input()
{
    string s;
    cout << "please input something: ";
    while (getline(cin, s))
    {
        cout << s << endl;
        cout << "please input something: ";
    }
}

void concate()
{
    string s = "", s1;
    while (cin >> s1)
    {
        s += s1 + " ";
    }
    cout << "input string is: " << s << endl;
}

void replace()
{
    string s = "hello world";
    string *c = &s;
    cout << c << endl;
    for (char &c : s)
    {
        cout << c << endl;
    }
    cout << s << endl;
}


int main()
{
    //define();
    //operation();
    //input();
    //compare();
    //concate();
    replace();
}
