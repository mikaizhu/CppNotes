#include <iostream>
using namespace std;

const int size = 3;
int* GetList();

int main()
{
    int* list = GetList();
    for (int i = 0; i < size ; i++)
    {
        cout << i << ": " << list[i] << endl;
    }
}

int* GetList()
{
    static int list[size] = {1, 2, 3};
    return list;
}
