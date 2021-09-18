#include <iostream>
#include <vector>

using namespace std;

// 仿函数
// 一元谓词
class Find
{
  public:
    bool operator()(int num)
    {
        return num >= 5;
    }
};

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    vector<int>::iterator it = find_if(v.begin(), v.end(), Find()); // 使用匿名函数调用
    cout << *it << endl;
}
