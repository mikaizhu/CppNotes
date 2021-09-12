#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

print(int val)
{
    cout << val << " ";
}

int main()
{
    vector<int> v; // <int> 就是模板的传参数方式
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // 使用迭代器的方式遍历
    vector<int>:: iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();

    // 遍历方式1
    while (itBegin != itEnd)
    {
        cout << *itBegin << " ";
        itBegin++;
    }
    cout << endl;

    // 方式2
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 方式3 使用stl自带的for_each算法
    for_each(v.begin(), v.end(), print)
}
