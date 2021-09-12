#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    vector<vector<int> > v;

    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    vector<int> v3 = {7, 8, 9};

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    for (vector<vector<int> >::iterator it = v.begin(); it != v.end(); it++)
    {
        for (vector<int>::iterator next_it = (*it).begin(); next_it != (*it).end(); next_it++)
        {
            cout << *next_it << " ";
        }
        cout << endl;
    }
}
