#include <iostream>
#include <set>

using namespace std;

pair<int, int> test()
{
    pair<int, int> p = make_pair(10, 20);
    return p;
}

int main()
{
    pair<int, int> p = test();
    cout << p.first << " " << p.second << endl;
}
