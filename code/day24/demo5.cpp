#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char* s0 = "hello world";
    string s1 = s0;

    string s2 = "hello world";

    string s3;
    s3 = 'a';

    string s4;
    //s4.assign("hello world", 5); // 将s2之前的字符串赋值
    s4.assign(s2, 1); // 将s2后面的字符串赋值给s4

    string s5;
    s5.assign(s2);

    string s6;
    s6.assign(10, 'a');

    //cout << s1 << endl;
    //cout << s2 << endl;
    //cout << s3 << endl;
    cout << s4 << endl;
    //cout << s5 << endl;
    //cout << s6 << endl;
}
