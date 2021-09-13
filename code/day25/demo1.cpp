#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print(vector<T> &v) // 使用引用方式就不会浪费空间
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test1()
{
    vector<int> v;
    for (int i=0; i < 10; i++)
        v.push_back(i);
    cout << "size of v: " << v.size() << endl;
    cout << "capacity of v: " << v.capacity() << endl;

    print<int>(v);
    vector<int> v1;
    for (int i=9; i >= 0; i--)
        v1.push_back(i);
    print<int>(v1);
    cout << "size of v1: " << v1.size() << endl;
    cout << "capacity of v1: " << v1.capacity() << endl;

    // 交换两个向量
    v.swap(v1);
    print<int>(v);
    print<int>(v1);

    //使用swap节省空间, 前面我们看到容量是16，长度是10，数据量大的时候，会预留很多空间
    // 为了节省这些空间

    vector<int>(v).swap(v);
    cout << "size of v: " << v.size() << endl;
    cout << "capacity of v: " << v.capacity() << endl;
}

int main()
{
    test1();
}
