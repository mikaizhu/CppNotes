#include <iostream>
#include <string>
#include <vector>

using namespace std;


void test()
{
    int num = 2;
    cout << ~num << endl;
}


namespace version1
{
void FindOdd()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for (auto &i : vec)
    {
        if (i & 01)
            i *= 2;
    }
    for (auto &i : vec)
        cout << i << " ";
    cout << endl;
}
}

namespace version2
{
void FindOdd()
{
    cout << "version2" << endl;
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    for (auto &i : vec)
    {
        cout << (i & 01 ? i*=2:i) << " ";
    }
    cout << endl;
}
}

int main()
{
    //test();
    test();
}
