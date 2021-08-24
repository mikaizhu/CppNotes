#include<iostream>
#include<string>
#include<vector>
#include<iterator>

using namespace std;

// 数组部分

int *ElementIsIndex()
{
    const int size = 10;
    static int array[size]; // 因为是局部函数。所以内存会丢失，要使用static
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    return array;
}

void Init0()
{
    const int size = 5;
    int array[size] = {1, 2, 3, 4, 5};
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << endl;
        *(array + i) = 0;
    }
    for (auto &i : array)
        cout << i << ' ';

}

bool CompareArray(int* p1, int* p2, int* p3, int* p4)
{
    // 先比较两个array的长度是不是一样，不一样就返回false
    //int lengthA = sizeof(array1) / sizeof(array1[0]);
    //int lengthB = sizeof(array2) / sizeof(array1[0]);
    //cout << lengthA << ' '<< lengthB << endl;
    int lengthA = p2 - p1;
    int lengthB = p4 - p3;
    cout << lengthA << ' '<< lengthB << endl;
    if (lengthA != lengthB)
        return false;
    for(int i = 0; i < lengthA; i++)
    {
        if (*(p1 + i) != *(p2 + i))
            return false;
    }
    return true;
}

void CompareVec()
{

}

int main()
{
    //const int *array;
    //Init0();
    int A[] = {1, 2, 3},  B[] = {2, 3, 4};
    cout << CompareArray(begin(A), end(A), begin(B), end(B));
}
