#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "ABCDABCD";
    int pos = s1.find("A"); // 从左往右边查找
    cout << "pos: " << pos << endl;

    pos = s1.rfind("A"); // 从右往前查找
    cout << "pos: " << pos << endl;

    s1.replace(pos, 1, "1111"); // 从0号位置开始计算字符，将1个字符替换成后面4个字符
    cout << s1 << endl;
}
