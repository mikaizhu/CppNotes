#include <iostream>
#include <set>
//#include <multiset>

using namespace std;

//template <typename T1, typename T2>
void print(set<int> &p)
{
    for (set<int>::iterator it = p.begin(); it != p.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main()
{
set<int> st;
st.insert(10);
st.insert(10);
st.insert(40);
st.insert(30);
st.insert(20);
print(st);
}
