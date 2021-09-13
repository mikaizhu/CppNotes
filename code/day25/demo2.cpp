#include <iostream>
#include <vector>

using namespace std;

void test()
{
    vector<int> v;
    int *p = NULL;
    int count = 0;
    // 如果知道数据大小，可以先预留空间，但是申请的空间无法访问
    v.reserve(10000);
    for (int i = 0; i < 10000; i++)
    {
        v.push_back(i);
        // 统计指针变换了多少次，因为每次内存不够，就会换新的地址
        if (p != &v[0])
        {
            p = &v[0];
            count++;
        }
    }
    cout << count << endl;
}

int main()
{
    test();
}
