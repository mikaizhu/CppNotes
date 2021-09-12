#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;


int main()
{
    string s1 = "I";

    s1 += " love ";

    cout << s1 << endl;
    
    string s2 = " you";
    s1 += s2;
    cout << s1 << endl;   

    s1.append(".");
    cout << s1 << endl;   
    
    string s3 = "hello world";
    s1.append(s3, 0, 5); // 将s3从位置0开始，往后5个字符拼接到后面
    cout << s1 << endl;
}
