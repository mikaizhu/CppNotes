#include <iostream>
#include <map>

using namespace std;

void print(map<int, int> &p)
{
    for(map<int, int>::iterator it=p.begin(); it != p.end(); it++)
        cout << it->first << " " << it->second << endl;
}

int main()
{
    map<int, int> m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(1, 20));
    print(m);
}
