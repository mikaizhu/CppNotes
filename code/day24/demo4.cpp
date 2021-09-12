#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char* str = "Hello world"; // c语言的字符串格式
    string s0 = "Hello world"; // 直接初始化string字符串
    string s1(str); // 通过c语言的字符串，来初始化string
    string s2(s0); // 拷贝构造，通过另一个string来初始化一个string
    string s3(10, 'a'); // int num, char c 来复制多个字符，拼接成一个字符串

    cout << "s0: " << s0 << endl;
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;

}

