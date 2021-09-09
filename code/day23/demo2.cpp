#include <iostream>
#include <string>
#include <vector>

using namespace std;

template <class T>
void swamp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// 实现选择排序，因为选择排序需要交换两个数据，所以还要在外面实现swamp模板
template <class T>
void sort(T list[], int size)
{
    //int size = sizeof(list) / sizeof(T);
    //int size = end(list) - begin(list);
    for(int i=0; i < size - 1; i++)
    {
        int max = i; // 找到最大值的下标
        for(int j=i+1; j < size; j++)
        {
            if (list[j] > list[max])
                max = j;
        }
        swamp(list[i], list[max]);
    }
}

template <class T>
void print(T list[], int size)
{
    //int size = sizeof(list) / sizeof(T);
    //int size = end(list) - begin(list);
    //int size = end - begin;
    for (int i=0; i<size; i++)
        cout << list[i] << " ";
    cout << endl;
}


int main()
{
    char list1[] = {'a', 'b', 'c', 'd'};
    int list2[] = {1, 2, 3, 4};
    int size1 = sizeof(list1) / sizeof(char);
    int size2 = sizeof(list2) / sizeof(int);
    sort<char>(list1, size1);
    print<char>(list1, size1);
    sort<int>(list2, size2);
    print<int>(list2, size2);
}
