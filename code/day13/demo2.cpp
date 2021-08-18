#include <iostream>
using namespace std;

int getaverage1(int list[], int size); // 函数声明
int getaverage2(int list[], int size); // 函数声明
int getaverage3(int list[], int size); // 函数声明

const int size = 5;

int main()
{
    int list[size] = {2, 3, 4, 5, 7};
    cout << "input average is " << getaverage1(list, size) << endl;
    cout << "input average is " << getaverage2(list, size) << endl;
    cout << "input average is " << getaverage3(list, size) << endl;
}

int getaverage1(int list[], int size)
{
    int sum = 0;
    int agv;
    for (int i = 0; i < size; i++)
    {
        sum += list[i];
    }
    agv = sum / size;
    return agv;
}

int getaverage2(int list[size], int size)
{
    int sum = 0;
    int agv;
    for (int i = 0; i < size; i++)
    {
        sum += list[i];
    }
    agv = sum / size;
    return agv;
}

int getaverage3(int *list, int size)
{
    int sum = 0;
    int agv;
    for (int i = 0; i < size; i++)
    {
        sum += list[i];
    }
    agv = sum / size;
    return agv;
}
